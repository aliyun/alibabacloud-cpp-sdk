// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EVALUATELOCALEXTENDDISKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_EVALUATELOCALEXTENDDISKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class EvaluateLocalExtendDiskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EvaluateLocalExtendDiskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Available, available_);
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(DBInstanceTransType, DBInstanceTransType_);
      DARABONBA_PTR_TO_JSON(LocalUpgradeDiskLimit, localUpgradeDiskLimit_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, EvaluateLocalExtendDiskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Available, available_);
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(DBInstanceTransType, DBInstanceTransType_);
      DARABONBA_PTR_FROM_JSON(LocalUpgradeDiskLimit, localUpgradeDiskLimit_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    EvaluateLocalExtendDiskResponseBody() = default ;
    EvaluateLocalExtendDiskResponseBody(const EvaluateLocalExtendDiskResponseBody &) = default ;
    EvaluateLocalExtendDiskResponseBody(EvaluateLocalExtendDiskResponseBody &&) = default ;
    EvaluateLocalExtendDiskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EvaluateLocalExtendDiskResponseBody() = default ;
    EvaluateLocalExtendDiskResponseBody& operator=(const EvaluateLocalExtendDiskResponseBody &) = default ;
    EvaluateLocalExtendDiskResponseBody& operator=(EvaluateLocalExtendDiskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->available_ == nullptr
        && return this->DBInstanceId_ == nullptr && return this->DBInstanceTransType_ == nullptr && return this->localUpgradeDiskLimit_ == nullptr && return this->requestId_ == nullptr; };
    // available Field Functions 
    bool hasAvailable() const { return this->available_ != nullptr;};
    void deleteAvailable() { this->available_ = nullptr;};
    inline string available() const { DARABONBA_PTR_GET_DEFAULT(available_, "") };
    inline EvaluateLocalExtendDiskResponseBody& setAvailable(string available) { DARABONBA_PTR_SET_VALUE(available_, available) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string DBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline EvaluateLocalExtendDiskResponseBody& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // DBInstanceTransType Field Functions 
    bool hasDBInstanceTransType() const { return this->DBInstanceTransType_ != nullptr;};
    void deleteDBInstanceTransType() { this->DBInstanceTransType_ = nullptr;};
    inline string DBInstanceTransType() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceTransType_, "") };
    inline EvaluateLocalExtendDiskResponseBody& setDBInstanceTransType(string DBInstanceTransType) { DARABONBA_PTR_SET_VALUE(DBInstanceTransType_, DBInstanceTransType) };


    // localUpgradeDiskLimit Field Functions 
    bool hasLocalUpgradeDiskLimit() const { return this->localUpgradeDiskLimit_ != nullptr;};
    void deleteLocalUpgradeDiskLimit() { this->localUpgradeDiskLimit_ = nullptr;};
    inline int64_t localUpgradeDiskLimit() const { DARABONBA_PTR_GET_DEFAULT(localUpgradeDiskLimit_, 0L) };
    inline EvaluateLocalExtendDiskResponseBody& setLocalUpgradeDiskLimit(int64_t localUpgradeDiskLimit) { DARABONBA_PTR_SET_VALUE(localUpgradeDiskLimit_, localUpgradeDiskLimit) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline EvaluateLocalExtendDiskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Indicates whether the instance is available. Valid values: true and false.
    std::shared_ptr<string> available_ = nullptr;
    // The instance ID.
    std::shared_ptr<string> DBInstanceId_ = nullptr;
    // The data transfer type supported by the instance.
    std::shared_ptr<string> DBInstanceTransType_ = nullptr;
    // The maximum value of the local disk. Unit: GB.
    std::shared_ptr<int64_t> localUpgradeDiskLimit_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
