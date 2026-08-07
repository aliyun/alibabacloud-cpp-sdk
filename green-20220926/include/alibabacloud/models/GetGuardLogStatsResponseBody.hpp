// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETGUARDLOGSTATSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETGUARDLOGSTATSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220926
{
namespace Models
{
  class GetGuardLogStatsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetGuardLogStatsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetGuardLogStatsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetGuardLogStatsResponseBody() = default ;
    GetGuardLogStatsResponseBody(const GetGuardLogStatsResponseBody &) = default ;
    GetGuardLogStatsResponseBody(GetGuardLogStatsResponseBody &&) = default ;
    GetGuardLogStatsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetGuardLogStatsResponseBody() = default ;
    GetGuardLogStatsResponseBody& operator=(const GetGuardLogStatsResponseBody &) = default ;
    GetGuardLogStatsResponseBody& operator=(GetGuardLogStatsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(DeliveryRegion, deliveryRegion_);
        DARABONBA_PTR_TO_JSON(Enable, enable_);
        DARABONBA_ANY_TO_JSON(LogAnalysisConfig, logAnalysisConfig_);
        DARABONBA_PTR_TO_JSON(LogStoreName, logStoreName_);
        DARABONBA_PTR_TO_JSON(PendingStorage, pendingStorage_);
        DARABONBA_PTR_TO_JSON(PreserveStorage, preserveStorage_);
        DARABONBA_PTR_TO_JSON(Project, project_);
        DARABONBA_PTR_TO_JSON(TotalStorage, totalStorage_);
        DARABONBA_PTR_TO_JSON(Ttl, ttl_);
        DARABONBA_PTR_TO_JSON(Type, type_);
        DARABONBA_PTR_TO_JSON(Uid, uid_);
        DARABONBA_PTR_TO_JSON(UsedStorage, usedStorage_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(DeliveryRegion, deliveryRegion_);
        DARABONBA_PTR_FROM_JSON(Enable, enable_);
        DARABONBA_ANY_FROM_JSON(LogAnalysisConfig, logAnalysisConfig_);
        DARABONBA_PTR_FROM_JSON(LogStoreName, logStoreName_);
        DARABONBA_PTR_FROM_JSON(PendingStorage, pendingStorage_);
        DARABONBA_PTR_FROM_JSON(PreserveStorage, preserveStorage_);
        DARABONBA_PTR_FROM_JSON(Project, project_);
        DARABONBA_PTR_FROM_JSON(TotalStorage, totalStorage_);
        DARABONBA_PTR_FROM_JSON(Ttl, ttl_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
        DARABONBA_PTR_FROM_JSON(Uid, uid_);
        DARABONBA_PTR_FROM_JSON(UsedStorage, usedStorage_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->deliveryRegion_ == nullptr
        && this->enable_ == nullptr && this->logAnalysisConfig_ == nullptr && this->logStoreName_ == nullptr && this->pendingStorage_ == nullptr && this->preserveStorage_ == nullptr
        && this->project_ == nullptr && this->totalStorage_ == nullptr && this->ttl_ == nullptr && this->type_ == nullptr && this->uid_ == nullptr
        && this->usedStorage_ == nullptr; };
      // deliveryRegion Field Functions 
      bool hasDeliveryRegion() const { return this->deliveryRegion_ != nullptr;};
      void deleteDeliveryRegion() { this->deliveryRegion_ = nullptr;};
      inline string getDeliveryRegion() const { DARABONBA_PTR_GET_DEFAULT(deliveryRegion_, "") };
      inline Data& setDeliveryRegion(string deliveryRegion) { DARABONBA_PTR_SET_VALUE(deliveryRegion_, deliveryRegion) };


      // enable Field Functions 
      bool hasEnable() const { return this->enable_ != nullptr;};
      void deleteEnable() { this->enable_ = nullptr;};
      inline bool getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
      inline Data& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


      // logAnalysisConfig Field Functions 
      bool hasLogAnalysisConfig() const { return this->logAnalysisConfig_ != nullptr;};
      void deleteLogAnalysisConfig() { this->logAnalysisConfig_ = nullptr;};
      inline       const Darabonba::Json & getLogAnalysisConfig() const { DARABONBA_GET(logAnalysisConfig_) };
      Darabonba::Json & getLogAnalysisConfig() { DARABONBA_GET(logAnalysisConfig_) };
      inline Data& setLogAnalysisConfig(const Darabonba::Json & logAnalysisConfig) { DARABONBA_SET_VALUE(logAnalysisConfig_, logAnalysisConfig) };
      inline Data& setLogAnalysisConfig(Darabonba::Json && logAnalysisConfig) { DARABONBA_SET_RVALUE(logAnalysisConfig_, logAnalysisConfig) };


      // logStoreName Field Functions 
      bool hasLogStoreName() const { return this->logStoreName_ != nullptr;};
      void deleteLogStoreName() { this->logStoreName_ = nullptr;};
      inline string getLogStoreName() const { DARABONBA_PTR_GET_DEFAULT(logStoreName_, "") };
      inline Data& setLogStoreName(string logStoreName) { DARABONBA_PTR_SET_VALUE(logStoreName_, logStoreName) };


      // pendingStorage Field Functions 
      bool hasPendingStorage() const { return this->pendingStorage_ != nullptr;};
      void deletePendingStorage() { this->pendingStorage_ = nullptr;};
      inline int64_t getPendingStorage() const { DARABONBA_PTR_GET_DEFAULT(pendingStorage_, 0L) };
      inline Data& setPendingStorage(int64_t pendingStorage) { DARABONBA_PTR_SET_VALUE(pendingStorage_, pendingStorage) };


      // preserveStorage Field Functions 
      bool hasPreserveStorage() const { return this->preserveStorage_ != nullptr;};
      void deletePreserveStorage() { this->preserveStorage_ = nullptr;};
      inline int64_t getPreserveStorage() const { DARABONBA_PTR_GET_DEFAULT(preserveStorage_, 0L) };
      inline Data& setPreserveStorage(int64_t preserveStorage) { DARABONBA_PTR_SET_VALUE(preserveStorage_, preserveStorage) };


      // project Field Functions 
      bool hasProject() const { return this->project_ != nullptr;};
      void deleteProject() { this->project_ = nullptr;};
      inline string getProject() const { DARABONBA_PTR_GET_DEFAULT(project_, "") };
      inline Data& setProject(string project) { DARABONBA_PTR_SET_VALUE(project_, project) };


      // totalStorage Field Functions 
      bool hasTotalStorage() const { return this->totalStorage_ != nullptr;};
      void deleteTotalStorage() { this->totalStorage_ = nullptr;};
      inline int64_t getTotalStorage() const { DARABONBA_PTR_GET_DEFAULT(totalStorage_, 0L) };
      inline Data& setTotalStorage(int64_t totalStorage) { DARABONBA_PTR_SET_VALUE(totalStorage_, totalStorage) };


      // ttl Field Functions 
      bool hasTtl() const { return this->ttl_ != nullptr;};
      void deleteTtl() { this->ttl_ = nullptr;};
      inline int64_t getTtl() const { DARABONBA_PTR_GET_DEFAULT(ttl_, 0L) };
      inline Data& setTtl(int64_t ttl) { DARABONBA_PTR_SET_VALUE(ttl_, ttl) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Data& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // uid Field Functions 
      bool hasUid() const { return this->uid_ != nullptr;};
      void deleteUid() { this->uid_ = nullptr;};
      inline string getUid() const { DARABONBA_PTR_GET_DEFAULT(uid_, "") };
      inline Data& setUid(string uid) { DARABONBA_PTR_SET_VALUE(uid_, uid) };


      // usedStorage Field Functions 
      bool hasUsedStorage() const { return this->usedStorage_ != nullptr;};
      void deleteUsedStorage() { this->usedStorage_ = nullptr;};
      inline int64_t getUsedStorage() const { DARABONBA_PTR_GET_DEFAULT(usedStorage_, 0L) };
      inline Data& setUsedStorage(int64_t usedStorage) { DARABONBA_PTR_SET_VALUE(usedStorage_, usedStorage) };


    protected:
      // The delivery region.
      shared_ptr<string> deliveryRegion_ {};
      // Indicates whether the feature is enabled. Valid values:
      // 
      // - **true**: Enabled.
      // - **false**: Disabled.
      shared_ptr<bool> enable_ {};
      // The log analysis configuration.
      Darabonba::Json logAnalysisConfig_ {};
      // The name of the Simple Log Service Logstore.
      shared_ptr<string> logStoreName_ {};
      // The remaining storage space. Unit: TB.
      shared_ptr<int64_t> pendingStorage_ {};
      // The reserved storage. Unit: bytes.
      shared_ptr<int64_t> preserveStorage_ {};
      // The project space.
      shared_ptr<string> project_ {};
      // The total storage space. Unit: TB.
      shared_ptr<int64_t> totalStorage_ {};
      // The number of days for which data is retained.
      shared_ptr<int64_t> ttl_ {};
      // The type.
      shared_ptr<string> type_ {};
      // UID。
      shared_ptr<string> uid_ {};
      // The used storage. Unit: bytes.
      shared_ptr<int64_t> usedStorage_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<GetGuardLogStatsResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<GetGuardLogStatsResponseBody::Data>) };
    inline vector<GetGuardLogStatsResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<GetGuardLogStatsResponseBody::Data>) };
    inline GetGuardLogStatsResponseBody& setData(const vector<GetGuardLogStatsResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetGuardLogStatsResponseBody& setData(vector<GetGuardLogStatsResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetGuardLogStatsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The data.
    shared_ptr<vector<GetGuardLogStatsResponseBody::Data>> data_ {};
    // The ID assigned by the backend to uniquely identify a request. You can use this ID to troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220926
#endif
