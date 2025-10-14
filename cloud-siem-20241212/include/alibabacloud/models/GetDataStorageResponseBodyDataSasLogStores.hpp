// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATASTORAGERESPONSEBODYDATASASLOGSTORES_HPP_
#define ALIBABACLOUD_MODELS_GETDATASTORAGERESPONSEBODYDATASASLOGSTORES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20241212
{
namespace Models
{
  class GetDataStorageResponseBodyDataSasLogStores : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataStorageResponseBodyDataSasLogStores& obj) { 
      DARABONBA_PTR_TO_JSON(LogCode, logCode_);
      DARABONBA_PTR_TO_JSON(LogDeliveryGroup, logDeliveryGroup_);
      DARABONBA_PTR_TO_JSON(LogDeliveryPermission, logDeliveryPermission_);
      DARABONBA_PTR_TO_JSON(LogDeliveryStatus, logDeliveryStatus_);
      DARABONBA_PTR_TO_JSON(LogDeliveryUpdateTime, logDeliveryUpdateTime_);
      DARABONBA_PTR_TO_JSON(LogName, logName_);
      DARABONBA_PTR_TO_JSON(LogSearchConditions, logSearchConditions_);
      DARABONBA_PTR_TO_JSON(LogStoreExisted, logStoreExisted_);
      DARABONBA_PTR_TO_JSON(LogStoreName, logStoreName_);
      DARABONBA_PTR_TO_JSON(LogStoreTtl, logStoreTtl_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataStorageResponseBodyDataSasLogStores& obj) { 
      DARABONBA_PTR_FROM_JSON(LogCode, logCode_);
      DARABONBA_PTR_FROM_JSON(LogDeliveryGroup, logDeliveryGroup_);
      DARABONBA_PTR_FROM_JSON(LogDeliveryPermission, logDeliveryPermission_);
      DARABONBA_PTR_FROM_JSON(LogDeliveryStatus, logDeliveryStatus_);
      DARABONBA_PTR_FROM_JSON(LogDeliveryUpdateTime, logDeliveryUpdateTime_);
      DARABONBA_PTR_FROM_JSON(LogName, logName_);
      DARABONBA_PTR_FROM_JSON(LogSearchConditions, logSearchConditions_);
      DARABONBA_PTR_FROM_JSON(LogStoreExisted, logStoreExisted_);
      DARABONBA_PTR_FROM_JSON(LogStoreName, logStoreName_);
      DARABONBA_PTR_FROM_JSON(LogStoreTtl, logStoreTtl_);
    };
    GetDataStorageResponseBodyDataSasLogStores() = default ;
    GetDataStorageResponseBodyDataSasLogStores(const GetDataStorageResponseBodyDataSasLogStores &) = default ;
    GetDataStorageResponseBodyDataSasLogStores(GetDataStorageResponseBodyDataSasLogStores &&) = default ;
    GetDataStorageResponseBodyDataSasLogStores(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataStorageResponseBodyDataSasLogStores() = default ;
    GetDataStorageResponseBodyDataSasLogStores& operator=(const GetDataStorageResponseBodyDataSasLogStores &) = default ;
    GetDataStorageResponseBodyDataSasLogStores& operator=(GetDataStorageResponseBodyDataSasLogStores &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->logCode_ == nullptr
        && return this->logDeliveryGroup_ == nullptr && return this->logDeliveryPermission_ == nullptr && return this->logDeliveryStatus_ == nullptr && return this->logDeliveryUpdateTime_ == nullptr && return this->logName_ == nullptr
        && return this->logSearchConditions_ == nullptr && return this->logStoreExisted_ == nullptr && return this->logStoreName_ == nullptr && return this->logStoreTtl_ == nullptr; };
    // logCode Field Functions 
    bool hasLogCode() const { return this->logCode_ != nullptr;};
    void deleteLogCode() { this->logCode_ = nullptr;};
    inline string logCode() const { DARABONBA_PTR_GET_DEFAULT(logCode_, "") };
    inline GetDataStorageResponseBodyDataSasLogStores& setLogCode(string logCode) { DARABONBA_PTR_SET_VALUE(logCode_, logCode) };


    // logDeliveryGroup Field Functions 
    bool hasLogDeliveryGroup() const { return this->logDeliveryGroup_ != nullptr;};
    void deleteLogDeliveryGroup() { this->logDeliveryGroup_ = nullptr;};
    inline string logDeliveryGroup() const { DARABONBA_PTR_GET_DEFAULT(logDeliveryGroup_, "") };
    inline GetDataStorageResponseBodyDataSasLogStores& setLogDeliveryGroup(string logDeliveryGroup) { DARABONBA_PTR_SET_VALUE(logDeliveryGroup_, logDeliveryGroup) };


    // logDeliveryPermission Field Functions 
    bool hasLogDeliveryPermission() const { return this->logDeliveryPermission_ != nullptr;};
    void deleteLogDeliveryPermission() { this->logDeliveryPermission_ = nullptr;};
    inline string logDeliveryPermission() const { DARABONBA_PTR_GET_DEFAULT(logDeliveryPermission_, "") };
    inline GetDataStorageResponseBodyDataSasLogStores& setLogDeliveryPermission(string logDeliveryPermission) { DARABONBA_PTR_SET_VALUE(logDeliveryPermission_, logDeliveryPermission) };


    // logDeliveryStatus Field Functions 
    bool hasLogDeliveryStatus() const { return this->logDeliveryStatus_ != nullptr;};
    void deleteLogDeliveryStatus() { this->logDeliveryStatus_ = nullptr;};
    inline string logDeliveryStatus() const { DARABONBA_PTR_GET_DEFAULT(logDeliveryStatus_, "") };
    inline GetDataStorageResponseBodyDataSasLogStores& setLogDeliveryStatus(string logDeliveryStatus) { DARABONBA_PTR_SET_VALUE(logDeliveryStatus_, logDeliveryStatus) };


    // logDeliveryUpdateTime Field Functions 
    bool hasLogDeliveryUpdateTime() const { return this->logDeliveryUpdateTime_ != nullptr;};
    void deleteLogDeliveryUpdateTime() { this->logDeliveryUpdateTime_ = nullptr;};
    inline string logDeliveryUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(logDeliveryUpdateTime_, "") };
    inline GetDataStorageResponseBodyDataSasLogStores& setLogDeliveryUpdateTime(string logDeliveryUpdateTime) { DARABONBA_PTR_SET_VALUE(logDeliveryUpdateTime_, logDeliveryUpdateTime) };


    // logName Field Functions 
    bool hasLogName() const { return this->logName_ != nullptr;};
    void deleteLogName() { this->logName_ = nullptr;};
    inline string logName() const { DARABONBA_PTR_GET_DEFAULT(logName_, "") };
    inline GetDataStorageResponseBodyDataSasLogStores& setLogName(string logName) { DARABONBA_PTR_SET_VALUE(logName_, logName) };


    // logSearchConditions Field Functions 
    bool hasLogSearchConditions() const { return this->logSearchConditions_ != nullptr;};
    void deleteLogSearchConditions() { this->logSearchConditions_ = nullptr;};
    inline string logSearchConditions() const { DARABONBA_PTR_GET_DEFAULT(logSearchConditions_, "") };
    inline GetDataStorageResponseBodyDataSasLogStores& setLogSearchConditions(string logSearchConditions) { DARABONBA_PTR_SET_VALUE(logSearchConditions_, logSearchConditions) };


    // logStoreExisted Field Functions 
    bool hasLogStoreExisted() const { return this->logStoreExisted_ != nullptr;};
    void deleteLogStoreExisted() { this->logStoreExisted_ = nullptr;};
    inline bool logStoreExisted() const { DARABONBA_PTR_GET_DEFAULT(logStoreExisted_, false) };
    inline GetDataStorageResponseBodyDataSasLogStores& setLogStoreExisted(bool logStoreExisted) { DARABONBA_PTR_SET_VALUE(logStoreExisted_, logStoreExisted) };


    // logStoreName Field Functions 
    bool hasLogStoreName() const { return this->logStoreName_ != nullptr;};
    void deleteLogStoreName() { this->logStoreName_ = nullptr;};
    inline string logStoreName() const { DARABONBA_PTR_GET_DEFAULT(logStoreName_, "") };
    inline GetDataStorageResponseBodyDataSasLogStores& setLogStoreName(string logStoreName) { DARABONBA_PTR_SET_VALUE(logStoreName_, logStoreName) };


    // logStoreTtl Field Functions 
    bool hasLogStoreTtl() const { return this->logStoreTtl_ != nullptr;};
    void deleteLogStoreTtl() { this->logStoreTtl_ = nullptr;};
    inline int32_t logStoreTtl() const { DARABONBA_PTR_GET_DEFAULT(logStoreTtl_, 0) };
    inline GetDataStorageResponseBodyDataSasLogStores& setLogStoreTtl(int32_t logStoreTtl) { DARABONBA_PTR_SET_VALUE(logStoreTtl_, logStoreTtl) };


  protected:
    std::shared_ptr<string> logCode_ = nullptr;
    std::shared_ptr<string> logDeliveryGroup_ = nullptr;
    std::shared_ptr<string> logDeliveryPermission_ = nullptr;
    std::shared_ptr<string> logDeliveryStatus_ = nullptr;
    std::shared_ptr<string> logDeliveryUpdateTime_ = nullptr;
    std::shared_ptr<string> logName_ = nullptr;
    std::shared_ptr<string> logSearchConditions_ = nullptr;
    std::shared_ptr<bool> logStoreExisted_ = nullptr;
    std::shared_ptr<string> logStoreName_ = nullptr;
    std::shared_ptr<int32_t> logStoreTtl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20241212
#endif
