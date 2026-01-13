// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYVECTORCONFIGURATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYVECTORCONFIGURATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class ModifyVectorConfigurationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyVectorConfigurationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(VectorConfigurationStatus, vectorConfigurationStatus_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyVectorConfigurationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(VectorConfigurationStatus, vectorConfigurationStatus_);
    };
    ModifyVectorConfigurationRequest() = default ;
    ModifyVectorConfigurationRequest(const ModifyVectorConfigurationRequest &) = default ;
    ModifyVectorConfigurationRequest(ModifyVectorConfigurationRequest &&) = default ;
    ModifyVectorConfigurationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyVectorConfigurationRequest() = default ;
    ModifyVectorConfigurationRequest& operator=(const ModifyVectorConfigurationRequest &) = default ;
    ModifyVectorConfigurationRequest& operator=(ModifyVectorConfigurationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceId_ == nullptr
        && this->ownerId_ == nullptr && this->vectorConfigurationStatus_ == nullptr; };
    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline ModifyVectorConfigurationRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyVectorConfigurationRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // vectorConfigurationStatus Field Functions 
    bool hasVectorConfigurationStatus() const { return this->vectorConfigurationStatus_ != nullptr;};
    void deleteVectorConfigurationStatus() { this->vectorConfigurationStatus_ = nullptr;};
    inline string getVectorConfigurationStatus() const { DARABONBA_PTR_GET_DEFAULT(vectorConfigurationStatus_, "") };
    inline ModifyVectorConfigurationRequest& setVectorConfigurationStatus(string vectorConfigurationStatus) { DARABONBA_PTR_SET_VALUE(vectorConfigurationStatus_, vectorConfigurationStatus) };


  protected:
    // The instance ID.
    // 
    // >  You can call the [DescribeDBInstances](https://help.aliyun.com/document_detail/86911.html) operation to query the IDs of all AnalyticDB for PostgreSQL instances in a region.
    shared_ptr<string> DBInstanceId_ {};
    shared_ptr<int64_t> ownerId_ {};
    // Specifies whether to enable vector engine optimization. Valid values:
    // 
    // *   **enabled**
    // *   **disabled**
    // 
    // > *   We recommend that you **do not enable** vector engine optimization in mainstream analysis and real-time data warehousing scenarios.
    // > *   We recommend that you **enable** vector engine optimization in AI Generated Content (AIGC) and vector retrieval scenarios that require the vector analysis engine.
    shared_ptr<string> vectorConfigurationStatus_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
