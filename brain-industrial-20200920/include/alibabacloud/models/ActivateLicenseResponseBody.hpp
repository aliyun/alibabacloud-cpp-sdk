// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ACTIVATELICENSERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ACTIVATELICENSERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BrainIndustrial20200920
{
namespace Models
{
  class ActivateLicenseResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ActivateLicenseResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ActivateLicenseResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ActivateLicenseResponseBody() = default ;
    ActivateLicenseResponseBody(const ActivateLicenseResponseBody &) = default ;
    ActivateLicenseResponseBody(ActivateLicenseResponseBody &&) = default ;
    ActivateLicenseResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ActivateLicenseResponseBody() = default ;
    ActivateLicenseResponseBody& operator=(const ActivateLicenseResponseBody &) = default ;
    ActivateLicenseResponseBody& operator=(ActivateLicenseResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ActivateRecord, activateRecord_);
        DARABONBA_PTR_TO_JSON(ActivateTime, activateTime_);
        DARABONBA_PTR_TO_JSON(AllDuration, allDuration_);
        DARABONBA_PTR_TO_JSON(ApplicableSpecs, applicableSpecs_);
        DARABONBA_PTR_TO_JSON(BuyTime, buyTime_);
        DARABONBA_PTR_TO_JSON(CpuLimit, cpuLimit_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(Duration, duration_);
        DARABONBA_PTR_TO_JSON(EffectTime, effectTime_);
        DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
        DARABONBA_PTR_TO_JSON(Fingerprint, fingerprint_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(LicenseCode, licenseCode_);
        DARABONBA_PTR_TO_JSON(LicenseSpecName, licenseSpecName_);
        DARABONBA_PTR_TO_JSON(MemoryLimit, memoryLimit_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(UnActivateAllDuration, unActivateAllDuration_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ActivateRecord, activateRecord_);
        DARABONBA_PTR_FROM_JSON(ActivateTime, activateTime_);
        DARABONBA_PTR_FROM_JSON(AllDuration, allDuration_);
        DARABONBA_PTR_FROM_JSON(ApplicableSpecs, applicableSpecs_);
        DARABONBA_PTR_FROM_JSON(BuyTime, buyTime_);
        DARABONBA_PTR_FROM_JSON(CpuLimit, cpuLimit_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(Duration, duration_);
        DARABONBA_PTR_FROM_JSON(EffectTime, effectTime_);
        DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
        DARABONBA_PTR_FROM_JSON(Fingerprint, fingerprint_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(LicenseCode, licenseCode_);
        DARABONBA_PTR_FROM_JSON(LicenseSpecName, licenseSpecName_);
        DARABONBA_PTR_FROM_JSON(MemoryLimit, memoryLimit_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(UnActivateAllDuration, unActivateAllDuration_);
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
      class ActivateRecord : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ActivateRecord& obj) { 
          DARABONBA_PTR_TO_JSON(ActivateTime, activateTime_);
          DARABONBA_PTR_TO_JSON(BuyTime, buyTime_);
          DARABONBA_PTR_TO_JSON(Duration, duration_);
          DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
          DARABONBA_PTR_TO_JSON(LicenseCode, licenseCode_);
          DARABONBA_PTR_TO_JSON(OrderId, orderId_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, ActivateRecord& obj) { 
          DARABONBA_PTR_FROM_JSON(ActivateTime, activateTime_);
          DARABONBA_PTR_FROM_JSON(BuyTime, buyTime_);
          DARABONBA_PTR_FROM_JSON(Duration, duration_);
          DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
          DARABONBA_PTR_FROM_JSON(LicenseCode, licenseCode_);
          DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        ActivateRecord() = default ;
        ActivateRecord(const ActivateRecord &) = default ;
        ActivateRecord(ActivateRecord &&) = default ;
        ActivateRecord(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ActivateRecord() = default ;
        ActivateRecord& operator=(const ActivateRecord &) = default ;
        ActivateRecord& operator=(ActivateRecord &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->activateTime_ == nullptr
        && this->buyTime_ == nullptr && this->duration_ == nullptr && this->expireTime_ == nullptr && this->licenseCode_ == nullptr && this->orderId_ == nullptr
        && this->status_ == nullptr; };
        // activateTime Field Functions 
        bool hasActivateTime() const { return this->activateTime_ != nullptr;};
        void deleteActivateTime() { this->activateTime_ = nullptr;};
        inline string getActivateTime() const { DARABONBA_PTR_GET_DEFAULT(activateTime_, "") };
        inline ActivateRecord& setActivateTime(string activateTime) { DARABONBA_PTR_SET_VALUE(activateTime_, activateTime) };


        // buyTime Field Functions 
        bool hasBuyTime() const { return this->buyTime_ != nullptr;};
        void deleteBuyTime() { this->buyTime_ = nullptr;};
        inline string getBuyTime() const { DARABONBA_PTR_GET_DEFAULT(buyTime_, "") };
        inline ActivateRecord& setBuyTime(string buyTime) { DARABONBA_PTR_SET_VALUE(buyTime_, buyTime) };


        // duration Field Functions 
        bool hasDuration() const { return this->duration_ != nullptr;};
        void deleteDuration() { this->duration_ = nullptr;};
        inline string getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, "") };
        inline ActivateRecord& setDuration(string duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


        // expireTime Field Functions 
        bool hasExpireTime() const { return this->expireTime_ != nullptr;};
        void deleteExpireTime() { this->expireTime_ = nullptr;};
        inline string getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
        inline ActivateRecord& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


        // licenseCode Field Functions 
        bool hasLicenseCode() const { return this->licenseCode_ != nullptr;};
        void deleteLicenseCode() { this->licenseCode_ = nullptr;};
        inline string getLicenseCode() const { DARABONBA_PTR_GET_DEFAULT(licenseCode_, "") };
        inline ActivateRecord& setLicenseCode(string licenseCode) { DARABONBA_PTR_SET_VALUE(licenseCode_, licenseCode) };


        // orderId Field Functions 
        bool hasOrderId() const { return this->orderId_ != nullptr;};
        void deleteOrderId() { this->orderId_ = nullptr;};
        inline string getOrderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
        inline ActivateRecord& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline ActivateRecord& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        shared_ptr<string> activateTime_ {};
        shared_ptr<string> buyTime_ {};
        shared_ptr<string> duration_ {};
        shared_ptr<string> expireTime_ {};
        shared_ptr<string> licenseCode_ {};
        shared_ptr<string> orderId_ {};
        shared_ptr<string> status_ {};
      };

      virtual bool empty() const override { return this->activateRecord_ == nullptr
        && this->activateTime_ == nullptr && this->allDuration_ == nullptr && this->applicableSpecs_ == nullptr && this->buyTime_ == nullptr && this->cpuLimit_ == nullptr
        && this->description_ == nullptr && this->duration_ == nullptr && this->effectTime_ == nullptr && this->expireTime_ == nullptr && this->fingerprint_ == nullptr
        && this->id_ == nullptr && this->instanceId_ == nullptr && this->licenseCode_ == nullptr && this->licenseSpecName_ == nullptr && this->memoryLimit_ == nullptr
        && this->status_ == nullptr && this->unActivateAllDuration_ == nullptr; };
      // activateRecord Field Functions 
      bool hasActivateRecord() const { return this->activateRecord_ != nullptr;};
      void deleteActivateRecord() { this->activateRecord_ = nullptr;};
      inline const vector<Data::ActivateRecord> & getActivateRecord() const { DARABONBA_PTR_GET_CONST(activateRecord_, vector<Data::ActivateRecord>) };
      inline vector<Data::ActivateRecord> getActivateRecord() { DARABONBA_PTR_GET(activateRecord_, vector<Data::ActivateRecord>) };
      inline Data& setActivateRecord(const vector<Data::ActivateRecord> & activateRecord) { DARABONBA_PTR_SET_VALUE(activateRecord_, activateRecord) };
      inline Data& setActivateRecord(vector<Data::ActivateRecord> && activateRecord) { DARABONBA_PTR_SET_RVALUE(activateRecord_, activateRecord) };


      // activateTime Field Functions 
      bool hasActivateTime() const { return this->activateTime_ != nullptr;};
      void deleteActivateTime() { this->activateTime_ = nullptr;};
      inline string getActivateTime() const { DARABONBA_PTR_GET_DEFAULT(activateTime_, "") };
      inline Data& setActivateTime(string activateTime) { DARABONBA_PTR_SET_VALUE(activateTime_, activateTime) };


      // allDuration Field Functions 
      bool hasAllDuration() const { return this->allDuration_ != nullptr;};
      void deleteAllDuration() { this->allDuration_ = nullptr;};
      inline string getAllDuration() const { DARABONBA_PTR_GET_DEFAULT(allDuration_, "") };
      inline Data& setAllDuration(string allDuration) { DARABONBA_PTR_SET_VALUE(allDuration_, allDuration) };


      // applicableSpecs Field Functions 
      bool hasApplicableSpecs() const { return this->applicableSpecs_ != nullptr;};
      void deleteApplicableSpecs() { this->applicableSpecs_ = nullptr;};
      inline string getApplicableSpecs() const { DARABONBA_PTR_GET_DEFAULT(applicableSpecs_, "") };
      inline Data& setApplicableSpecs(string applicableSpecs) { DARABONBA_PTR_SET_VALUE(applicableSpecs_, applicableSpecs) };


      // buyTime Field Functions 
      bool hasBuyTime() const { return this->buyTime_ != nullptr;};
      void deleteBuyTime() { this->buyTime_ = nullptr;};
      inline string getBuyTime() const { DARABONBA_PTR_GET_DEFAULT(buyTime_, "") };
      inline Data& setBuyTime(string buyTime) { DARABONBA_PTR_SET_VALUE(buyTime_, buyTime) };


      // cpuLimit Field Functions 
      bool hasCpuLimit() const { return this->cpuLimit_ != nullptr;};
      void deleteCpuLimit() { this->cpuLimit_ = nullptr;};
      inline int32_t getCpuLimit() const { DARABONBA_PTR_GET_DEFAULT(cpuLimit_, 0) };
      inline Data& setCpuLimit(int32_t cpuLimit) { DARABONBA_PTR_SET_VALUE(cpuLimit_, cpuLimit) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Data& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // duration Field Functions 
      bool hasDuration() const { return this->duration_ != nullptr;};
      void deleteDuration() { this->duration_ = nullptr;};
      inline string getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, "") };
      inline Data& setDuration(string duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


      // effectTime Field Functions 
      bool hasEffectTime() const { return this->effectTime_ != nullptr;};
      void deleteEffectTime() { this->effectTime_ = nullptr;};
      inline string getEffectTime() const { DARABONBA_PTR_GET_DEFAULT(effectTime_, "") };
      inline Data& setEffectTime(string effectTime) { DARABONBA_PTR_SET_VALUE(effectTime_, effectTime) };


      // expireTime Field Functions 
      bool hasExpireTime() const { return this->expireTime_ != nullptr;};
      void deleteExpireTime() { this->expireTime_ = nullptr;};
      inline string getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
      inline Data& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


      // fingerprint Field Functions 
      bool hasFingerprint() const { return this->fingerprint_ != nullptr;};
      void deleteFingerprint() { this->fingerprint_ = nullptr;};
      inline string getFingerprint() const { DARABONBA_PTR_GET_DEFAULT(fingerprint_, "") };
      inline Data& setFingerprint(string fingerprint) { DARABONBA_PTR_SET_VALUE(fingerprint_, fingerprint) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline Data& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Data& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // licenseCode Field Functions 
      bool hasLicenseCode() const { return this->licenseCode_ != nullptr;};
      void deleteLicenseCode() { this->licenseCode_ = nullptr;};
      inline string getLicenseCode() const { DARABONBA_PTR_GET_DEFAULT(licenseCode_, "") };
      inline Data& setLicenseCode(string licenseCode) { DARABONBA_PTR_SET_VALUE(licenseCode_, licenseCode) };


      // licenseSpecName Field Functions 
      bool hasLicenseSpecName() const { return this->licenseSpecName_ != nullptr;};
      void deleteLicenseSpecName() { this->licenseSpecName_ = nullptr;};
      inline string getLicenseSpecName() const { DARABONBA_PTR_GET_DEFAULT(licenseSpecName_, "") };
      inline Data& setLicenseSpecName(string licenseSpecName) { DARABONBA_PTR_SET_VALUE(licenseSpecName_, licenseSpecName) };


      // memoryLimit Field Functions 
      bool hasMemoryLimit() const { return this->memoryLimit_ != nullptr;};
      void deleteMemoryLimit() { this->memoryLimit_ = nullptr;};
      inline int32_t getMemoryLimit() const { DARABONBA_PTR_GET_DEFAULT(memoryLimit_, 0) };
      inline Data& setMemoryLimit(int32_t memoryLimit) { DARABONBA_PTR_SET_VALUE(memoryLimit_, memoryLimit) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // unActivateAllDuration Field Functions 
      bool hasUnActivateAllDuration() const { return this->unActivateAllDuration_ != nullptr;};
      void deleteUnActivateAllDuration() { this->unActivateAllDuration_ = nullptr;};
      inline string getUnActivateAllDuration() const { DARABONBA_PTR_GET_DEFAULT(unActivateAllDuration_, "") };
      inline Data& setUnActivateAllDuration(string unActivateAllDuration) { DARABONBA_PTR_SET_VALUE(unActivateAllDuration_, unActivateAllDuration) };


    protected:
      shared_ptr<vector<Data::ActivateRecord>> activateRecord_ {};
      shared_ptr<string> activateTime_ {};
      shared_ptr<string> allDuration_ {};
      shared_ptr<string> applicableSpecs_ {};
      shared_ptr<string> buyTime_ {};
      shared_ptr<int32_t> cpuLimit_ {};
      shared_ptr<string> description_ {};
      shared_ptr<string> duration_ {};
      shared_ptr<string> effectTime_ {};
      shared_ptr<string> expireTime_ {};
      shared_ptr<string> fingerprint_ {};
      // Id
      shared_ptr<string> id_ {};
      shared_ptr<string> instanceId_ {};
      shared_ptr<string> licenseCode_ {};
      shared_ptr<string> licenseSpecName_ {};
      shared_ptr<int32_t> memoryLimit_ {};
      shared_ptr<string> status_ {};
      shared_ptr<string> unActivateAllDuration_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr
        && this->success_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline ActivateLicenseResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ActivateLicenseResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ActivateLicenseResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ActivateLicenseResponseBody::Data) };
    inline ActivateLicenseResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ActivateLicenseResponseBody::Data) };
    inline ActivateLicenseResponseBody& setData(const ActivateLicenseResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ActivateLicenseResponseBody& setData(ActivateLicenseResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ActivateLicenseResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ActivateLicenseResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ActivateLicenseResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline ActivateLicenseResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> accessDeniedDetail_ {};
    shared_ptr<string> code_ {};
    shared_ptr<ActivateLicenseResponseBody::Data> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<string> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BrainIndustrial20200920
#endif
