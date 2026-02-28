// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAUDIOFILERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAUDIOFILERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class GetAudioFileResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAudioFileResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAudioFileResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetAudioFileResponseBody() = default ;
    GetAudioFileResponseBody(const GetAudioFileResponseBody &) = default ;
    GetAudioFileResponseBody(GetAudioFileResponseBody &&) = default ;
    GetAudioFileResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAudioFileResponseBody() = default ;
    GetAudioFileResponseBody& operator=(const GetAudioFileResponseBody &) = default ;
    GetAudioFileResponseBody& operator=(GetAudioFileResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AudioFileName, audioFileName_);
        DARABONBA_PTR_TO_JSON(AudioResourceId, audioResourceId_);
        DARABONBA_PTR_TO_JSON(CreatedTime, createdTime_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(OssFileKey, ossFileKey_);
        DARABONBA_PTR_TO_JSON(UpdatedTime, updatedTime_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AudioFileName, audioFileName_);
        DARABONBA_PTR_FROM_JSON(AudioResourceId, audioResourceId_);
        DARABONBA_PTR_FROM_JSON(CreatedTime, createdTime_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(OssFileKey, ossFileKey_);
        DARABONBA_PTR_FROM_JSON(UpdatedTime, updatedTime_);
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
      virtual bool empty() const override { return this->audioFileName_ == nullptr
        && this->audioResourceId_ == nullptr && this->createdTime_ == nullptr && this->instanceId_ == nullptr && this->name_ == nullptr && this->ossFileKey_ == nullptr
        && this->updatedTime_ == nullptr; };
      // audioFileName Field Functions 
      bool hasAudioFileName() const { return this->audioFileName_ != nullptr;};
      void deleteAudioFileName() { this->audioFileName_ = nullptr;};
      inline string getAudioFileName() const { DARABONBA_PTR_GET_DEFAULT(audioFileName_, "") };
      inline Data& setAudioFileName(string audioFileName) { DARABONBA_PTR_SET_VALUE(audioFileName_, audioFileName) };


      // audioResourceId Field Functions 
      bool hasAudioResourceId() const { return this->audioResourceId_ != nullptr;};
      void deleteAudioResourceId() { this->audioResourceId_ = nullptr;};
      inline string getAudioResourceId() const { DARABONBA_PTR_GET_DEFAULT(audioResourceId_, "") };
      inline Data& setAudioResourceId(string audioResourceId) { DARABONBA_PTR_SET_VALUE(audioResourceId_, audioResourceId) };


      // createdTime Field Functions 
      bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
      void deleteCreatedTime() { this->createdTime_ = nullptr;};
      inline string getCreatedTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, "") };
      inline Data& setCreatedTime(string createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Data& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Data& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // ossFileKey Field Functions 
      bool hasOssFileKey() const { return this->ossFileKey_ != nullptr;};
      void deleteOssFileKey() { this->ossFileKey_ = nullptr;};
      inline string getOssFileKey() const { DARABONBA_PTR_GET_DEFAULT(ossFileKey_, "") };
      inline Data& setOssFileKey(string ossFileKey) { DARABONBA_PTR_SET_VALUE(ossFileKey_, ossFileKey) };


      // updatedTime Field Functions 
      bool hasUpdatedTime() const { return this->updatedTime_ != nullptr;};
      void deleteUpdatedTime() { this->updatedTime_ = nullptr;};
      inline string getUpdatedTime() const { DARABONBA_PTR_GET_DEFAULT(updatedTime_, "") };
      inline Data& setUpdatedTime(string updatedTime) { DARABONBA_PTR_SET_VALUE(updatedTime_, updatedTime) };


    protected:
      shared_ptr<string> audioFileName_ {};
      shared_ptr<string> audioResourceId_ {};
      shared_ptr<string> createdTime_ {};
      shared_ptr<string> instanceId_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> ossFileKey_ {};
      shared_ptr<string> updatedTime_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetAudioFileResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetAudioFileResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetAudioFileResponseBody::Data) };
    inline GetAudioFileResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetAudioFileResponseBody::Data) };
    inline GetAudioFileResponseBody& setData(const GetAudioFileResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetAudioFileResponseBody& setData(GetAudioFileResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetAudioFileResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetAudioFileResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAudioFileResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<GetAudioFileResponseBody::Data> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
