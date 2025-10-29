// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPOLARFSATTRIBUTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPOLARFSATTRIBUTEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribePolarFsAttributeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePolarFsAttributeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(PolarFsInstanceId, polarFsInstanceId_);
      DARABONBA_PTR_TO_JSON(QueryFuseMountInfo, queryFuseMountInfo_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePolarFsAttributeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(PolarFsInstanceId, polarFsInstanceId_);
      DARABONBA_PTR_FROM_JSON(QueryFuseMountInfo, queryFuseMountInfo_);
    };
    DescribePolarFsAttributeRequest() = default ;
    DescribePolarFsAttributeRequest(const DescribePolarFsAttributeRequest &) = default ;
    DescribePolarFsAttributeRequest(DescribePolarFsAttributeRequest &&) = default ;
    DescribePolarFsAttributeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePolarFsAttributeRequest() = default ;
    DescribePolarFsAttributeRequest& operator=(const DescribePolarFsAttributeRequest &) = default ;
    DescribePolarFsAttributeRequest& operator=(DescribePolarFsAttributeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBClusterId_ == nullptr
        && return this->polarFsInstanceId_ == nullptr && return this->queryFuseMountInfo_ == nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline DescribePolarFsAttributeRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // polarFsInstanceId Field Functions 
    bool hasPolarFsInstanceId() const { return this->polarFsInstanceId_ != nullptr;};
    void deletePolarFsInstanceId() { this->polarFsInstanceId_ = nullptr;};
    inline string polarFsInstanceId() const { DARABONBA_PTR_GET_DEFAULT(polarFsInstanceId_, "") };
    inline DescribePolarFsAttributeRequest& setPolarFsInstanceId(string polarFsInstanceId) { DARABONBA_PTR_SET_VALUE(polarFsInstanceId_, polarFsInstanceId) };


    // queryFuseMountInfo Field Functions 
    bool hasQueryFuseMountInfo() const { return this->queryFuseMountInfo_ != nullptr;};
    void deleteQueryFuseMountInfo() { this->queryFuseMountInfo_ = nullptr;};
    inline bool queryFuseMountInfo() const { DARABONBA_PTR_GET_DEFAULT(queryFuseMountInfo_, false) };
    inline DescribePolarFsAttributeRequest& setQueryFuseMountInfo(bool queryFuseMountInfo) { DARABONBA_PTR_SET_VALUE(queryFuseMountInfo_, queryFuseMountInfo) };


  protected:
    std::shared_ptr<string> DBClusterId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> polarFsInstanceId_ = nullptr;
    std::shared_ptr<bool> queryFuseMountInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
