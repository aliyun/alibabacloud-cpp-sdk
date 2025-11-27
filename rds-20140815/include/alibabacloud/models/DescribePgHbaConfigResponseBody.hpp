// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPGHBACONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPGHBACONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribePGHbaConfigResponseBodyDefaultHbaItems.hpp>
#include <alibabacloud/models/DescribePGHbaConfigResponseBodyRunningHbaItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribePGHbaConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePGHbaConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(DefaultHbaItems, defaultHbaItems_);
      DARABONBA_PTR_TO_JSON(HbaModifyTime, hbaModifyTime_);
      DARABONBA_PTR_TO_JSON(LastModifyStatus, lastModifyStatus_);
      DARABONBA_PTR_TO_JSON(ModifyStatusReason, modifyStatusReason_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RunningHbaItems, runningHbaItems_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePGHbaConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(DefaultHbaItems, defaultHbaItems_);
      DARABONBA_PTR_FROM_JSON(HbaModifyTime, hbaModifyTime_);
      DARABONBA_PTR_FROM_JSON(LastModifyStatus, lastModifyStatus_);
      DARABONBA_PTR_FROM_JSON(ModifyStatusReason, modifyStatusReason_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RunningHbaItems, runningHbaItems_);
    };
    DescribePGHbaConfigResponseBody() = default ;
    DescribePGHbaConfigResponseBody(const DescribePGHbaConfigResponseBody &) = default ;
    DescribePGHbaConfigResponseBody(DescribePGHbaConfigResponseBody &&) = default ;
    DescribePGHbaConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePGHbaConfigResponseBody() = default ;
    DescribePGHbaConfigResponseBody& operator=(const DescribePGHbaConfigResponseBody &) = default ;
    DescribePGHbaConfigResponseBody& operator=(DescribePGHbaConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceId_ == nullptr
        && return this->defaultHbaItems_ == nullptr && return this->hbaModifyTime_ == nullptr && return this->lastModifyStatus_ == nullptr && return this->modifyStatusReason_ == nullptr && return this->requestId_ == nullptr
        && return this->runningHbaItems_ == nullptr; };
    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string DBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline DescribePGHbaConfigResponseBody& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // defaultHbaItems Field Functions 
    bool hasDefaultHbaItems() const { return this->defaultHbaItems_ != nullptr;};
    void deleteDefaultHbaItems() { this->defaultHbaItems_ = nullptr;};
    inline const DescribePGHbaConfigResponseBodyDefaultHbaItems & defaultHbaItems() const { DARABONBA_PTR_GET_CONST(defaultHbaItems_, DescribePGHbaConfigResponseBodyDefaultHbaItems) };
    inline DescribePGHbaConfigResponseBodyDefaultHbaItems defaultHbaItems() { DARABONBA_PTR_GET(defaultHbaItems_, DescribePGHbaConfigResponseBodyDefaultHbaItems) };
    inline DescribePGHbaConfigResponseBody& setDefaultHbaItems(const DescribePGHbaConfigResponseBodyDefaultHbaItems & defaultHbaItems) { DARABONBA_PTR_SET_VALUE(defaultHbaItems_, defaultHbaItems) };
    inline DescribePGHbaConfigResponseBody& setDefaultHbaItems(DescribePGHbaConfigResponseBodyDefaultHbaItems && defaultHbaItems) { DARABONBA_PTR_SET_RVALUE(defaultHbaItems_, defaultHbaItems) };


    // hbaModifyTime Field Functions 
    bool hasHbaModifyTime() const { return this->hbaModifyTime_ != nullptr;};
    void deleteHbaModifyTime() { this->hbaModifyTime_ = nullptr;};
    inline string hbaModifyTime() const { DARABONBA_PTR_GET_DEFAULT(hbaModifyTime_, "") };
    inline DescribePGHbaConfigResponseBody& setHbaModifyTime(string hbaModifyTime) { DARABONBA_PTR_SET_VALUE(hbaModifyTime_, hbaModifyTime) };


    // lastModifyStatus Field Functions 
    bool hasLastModifyStatus() const { return this->lastModifyStatus_ != nullptr;};
    void deleteLastModifyStatus() { this->lastModifyStatus_ = nullptr;};
    inline string lastModifyStatus() const { DARABONBA_PTR_GET_DEFAULT(lastModifyStatus_, "") };
    inline DescribePGHbaConfigResponseBody& setLastModifyStatus(string lastModifyStatus) { DARABONBA_PTR_SET_VALUE(lastModifyStatus_, lastModifyStatus) };


    // modifyStatusReason Field Functions 
    bool hasModifyStatusReason() const { return this->modifyStatusReason_ != nullptr;};
    void deleteModifyStatusReason() { this->modifyStatusReason_ = nullptr;};
    inline string modifyStatusReason() const { DARABONBA_PTR_GET_DEFAULT(modifyStatusReason_, "") };
    inline DescribePGHbaConfigResponseBody& setModifyStatusReason(string modifyStatusReason) { DARABONBA_PTR_SET_VALUE(modifyStatusReason_, modifyStatusReason) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePGHbaConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // runningHbaItems Field Functions 
    bool hasRunningHbaItems() const { return this->runningHbaItems_ != nullptr;};
    void deleteRunningHbaItems() { this->runningHbaItems_ = nullptr;};
    inline const DescribePGHbaConfigResponseBodyRunningHbaItems & runningHbaItems() const { DARABONBA_PTR_GET_CONST(runningHbaItems_, DescribePGHbaConfigResponseBodyRunningHbaItems) };
    inline DescribePGHbaConfigResponseBodyRunningHbaItems runningHbaItems() { DARABONBA_PTR_GET(runningHbaItems_, DescribePGHbaConfigResponseBodyRunningHbaItems) };
    inline DescribePGHbaConfigResponseBody& setRunningHbaItems(const DescribePGHbaConfigResponseBodyRunningHbaItems & runningHbaItems) { DARABONBA_PTR_SET_VALUE(runningHbaItems_, runningHbaItems) };
    inline DescribePGHbaConfigResponseBody& setRunningHbaItems(DescribePGHbaConfigResponseBodyRunningHbaItems && runningHbaItems) { DARABONBA_PTR_SET_RVALUE(runningHbaItems_, runningHbaItems) };


  protected:
    // The instance ID.
    std::shared_ptr<string> DBInstanceId_ = nullptr;
    // The default configuration items of the pg_hba.conf file.
    std::shared_ptr<DescribePGHbaConfigResponseBodyDefaultHbaItems> defaultHbaItems_ = nullptr;
    // The time when the previous modification was made to the pg_hba.conf file.
    std::shared_ptr<string> hbaModifyTime_ = nullptr;
    // The status of the previous modification to the pg_hba.conf file. Valid values:
    // 
    // *   **success**
    // *   **setting**
    // *   **failed**
    std::shared_ptr<string> lastModifyStatus_ = nullptr;
    // The reason why the previous modification was made to the pg_hba.conf file.
    std::shared_ptr<string> modifyStatusReason_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The current configuration items of the pg_hba.conf file.
    std::shared_ptr<DescribePGHbaConfigResponseBodyRunningHbaItems> runningHbaItems_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
