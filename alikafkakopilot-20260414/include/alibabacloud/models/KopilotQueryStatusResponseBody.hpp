// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_KOPILOTQUERYSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_KOPILOTQUERYSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AlikafkaKopilot20260414
{
namespace Models
{
  class KopilotQueryStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const KopilotQueryStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, KopilotQueryStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    KopilotQueryStatusResponseBody() = default ;
    KopilotQueryStatusResponseBody(const KopilotQueryStatusResponseBody &) = default ;
    KopilotQueryStatusResponseBody(KopilotQueryStatusResponseBody &&) = default ;
    KopilotQueryStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~KopilotQueryStatusResponseBody() = default ;
    KopilotQueryStatusResponseBody& operator=(const KopilotQueryStatusResponseBody &) = default ;
    KopilotQueryStatusResponseBody& operator=(KopilotQueryStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ActivateTime, activateTime_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(LifeStatus, lifeStatus_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(Uid, uid_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ActivateTime, activateTime_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(LifeStatus, lifeStatus_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(Uid, uid_);
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
      virtual bool empty() const override { return this->activateTime_ == nullptr
        && this->instanceId_ == nullptr && this->lifeStatus_ == nullptr && this->regionId_ == nullptr && this->uid_ == nullptr; };
      // activateTime Field Functions 
      bool hasActivateTime() const { return this->activateTime_ != nullptr;};
      void deleteActivateTime() { this->activateTime_ = nullptr;};
      inline int64_t getActivateTime() const { DARABONBA_PTR_GET_DEFAULT(activateTime_, 0L) };
      inline Data& setActivateTime(int64_t activateTime) { DARABONBA_PTR_SET_VALUE(activateTime_, activateTime) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Data& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // lifeStatus Field Functions 
      bool hasLifeStatus() const { return this->lifeStatus_ != nullptr;};
      void deleteLifeStatus() { this->lifeStatus_ = nullptr;};
      inline string getLifeStatus() const { DARABONBA_PTR_GET_DEFAULT(lifeStatus_, "") };
      inline Data& setLifeStatus(string lifeStatus) { DARABONBA_PTR_SET_VALUE(lifeStatus_, lifeStatus) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline Data& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // uid Field Functions 
      bool hasUid() const { return this->uid_ != nullptr;};
      void deleteUid() { this->uid_ = nullptr;};
      inline string getUid() const { DARABONBA_PTR_GET_DEFAULT(uid_, "") };
      inline Data& setUid(string uid) { DARABONBA_PTR_SET_VALUE(uid_, uid) };


    protected:
      shared_ptr<int64_t> activateTime_ {};
      shared_ptr<string> instanceId_ {};
      shared_ptr<string> lifeStatus_ {};
      shared_ptr<string> regionId_ {};
      shared_ptr<string> uid_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int64_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0L) };
    inline KopilotQueryStatusResponseBody& setCode(int64_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const KopilotQueryStatusResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, KopilotQueryStatusResponseBody::Data) };
    inline KopilotQueryStatusResponseBody::Data getData() { DARABONBA_PTR_GET(data_, KopilotQueryStatusResponseBody::Data) };
    inline KopilotQueryStatusResponseBody& setData(const KopilotQueryStatusResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline KopilotQueryStatusResponseBody& setData(KopilotQueryStatusResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline KopilotQueryStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline KopilotQueryStatusResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<int64_t> code_ {};
    shared_ptr<KopilotQueryStatusResponseBody::Data> data_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AlikafkaKopilot20260414
#endif
