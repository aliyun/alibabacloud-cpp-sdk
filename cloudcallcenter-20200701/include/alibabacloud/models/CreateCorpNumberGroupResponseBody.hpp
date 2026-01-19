// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECORPNUMBERGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATECORPNUMBERGROUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudCallCenter20200701
{
namespace Models
{
  class CreateCorpNumberGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCorpNumberGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCorpNumberGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateCorpNumberGroupResponseBody() = default ;
    CreateCorpNumberGroupResponseBody(const CreateCorpNumberGroupResponseBody &) = default ;
    CreateCorpNumberGroupResponseBody(CreateCorpNumberGroupResponseBody &&) = default ;
    CreateCorpNumberGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCorpNumberGroupResponseBody() = default ;
    CreateCorpNumberGroupResponseBody& operator=(const CreateCorpNumberGroupResponseBody &) = default ;
    CreateCorpNumberGroupResponseBody& operator=(CreateCorpNumberGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AliyunUid, aliyunUid_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(NumberCount, numberCount_);
        DARABONBA_PTR_TO_JSON(NumberGroupId, numberGroupId_);
        DARABONBA_PTR_TO_JSON(NumberGroupName, numberGroupName_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AliyunUid, aliyunUid_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(NumberCount, numberCount_);
        DARABONBA_PTR_FROM_JSON(NumberGroupId, numberGroupId_);
        DARABONBA_PTR_FROM_JSON(NumberGroupName, numberGroupName_);
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
      virtual bool empty() const override { return this->aliyunUid_ == nullptr
        && this->description_ == nullptr && this->numberCount_ == nullptr && this->numberGroupId_ == nullptr && this->numberGroupName_ == nullptr; };
      // aliyunUid Field Functions 
      bool hasAliyunUid() const { return this->aliyunUid_ != nullptr;};
      void deleteAliyunUid() { this->aliyunUid_ = nullptr;};
      inline string getAliyunUid() const { DARABONBA_PTR_GET_DEFAULT(aliyunUid_, "") };
      inline Data& setAliyunUid(string aliyunUid) { DARABONBA_PTR_SET_VALUE(aliyunUid_, aliyunUid) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Data& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // numberCount Field Functions 
      bool hasNumberCount() const { return this->numberCount_ != nullptr;};
      void deleteNumberCount() { this->numberCount_ = nullptr;};
      inline string getNumberCount() const { DARABONBA_PTR_GET_DEFAULT(numberCount_, "") };
      inline Data& setNumberCount(string numberCount) { DARABONBA_PTR_SET_VALUE(numberCount_, numberCount) };


      // numberGroupId Field Functions 
      bool hasNumberGroupId() const { return this->numberGroupId_ != nullptr;};
      void deleteNumberGroupId() { this->numberGroupId_ = nullptr;};
      inline string getNumberGroupId() const { DARABONBA_PTR_GET_DEFAULT(numberGroupId_, "") };
      inline Data& setNumberGroupId(string numberGroupId) { DARABONBA_PTR_SET_VALUE(numberGroupId_, numberGroupId) };


      // numberGroupName Field Functions 
      bool hasNumberGroupName() const { return this->numberGroupName_ != nullptr;};
      void deleteNumberGroupName() { this->numberGroupName_ = nullptr;};
      inline string getNumberGroupName() const { DARABONBA_PTR_GET_DEFAULT(numberGroupName_, "") };
      inline Data& setNumberGroupName(string numberGroupName) { DARABONBA_PTR_SET_VALUE(numberGroupName_, numberGroupName) };


    protected:
      shared_ptr<string> aliyunUid_ {};
      shared_ptr<string> description_ {};
      shared_ptr<string> numberCount_ {};
      shared_ptr<string> numberGroupId_ {};
      shared_ptr<string> numberGroupName_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CreateCorpNumberGroupResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const CreateCorpNumberGroupResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, CreateCorpNumberGroupResponseBody::Data) };
    inline CreateCorpNumberGroupResponseBody::Data getData() { DARABONBA_PTR_GET(data_, CreateCorpNumberGroupResponseBody::Data) };
    inline CreateCorpNumberGroupResponseBody& setData(const CreateCorpNumberGroupResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline CreateCorpNumberGroupResponseBody& setData(CreateCorpNumberGroupResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline CreateCorpNumberGroupResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CreateCorpNumberGroupResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateCorpNumberGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<CreateCorpNumberGroupResponseBody::Data> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudCallCenter20200701
#endif
