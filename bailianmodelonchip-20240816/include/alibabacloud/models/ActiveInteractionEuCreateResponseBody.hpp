// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ACTIVEINTERACTIONEUCREATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ACTIVEINTERACTIONEUCREATERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BailianModelOnChip20240816
{
namespace Models
{
  class ActiveInteractionEuCreateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ActiveInteractionEuCreateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ActiveInteractionEuCreateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    ActiveInteractionEuCreateResponseBody() = default ;
    ActiveInteractionEuCreateResponseBody(const ActiveInteractionEuCreateResponseBody &) = default ;
    ActiveInteractionEuCreateResponseBody(ActiveInteractionEuCreateResponseBody &&) = default ;
    ActiveInteractionEuCreateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ActiveInteractionEuCreateResponseBody() = default ;
    ActiveInteractionEuCreateResponseBody& operator=(const ActiveInteractionEuCreateResponseBody &) = default ;
    ActiveInteractionEuCreateResponseBody& operator=(ActiveInteractionEuCreateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(gesture, gesture_);
        DARABONBA_PTR_TO_JSON(person, person_);
        DARABONBA_PTR_TO_JSON(scene, scene_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(gesture, gesture_);
        DARABONBA_PTR_FROM_JSON(person, person_);
        DARABONBA_PTR_FROM_JSON(scene, scene_);
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
      virtual bool empty() const override { return this->gesture_ == nullptr
        && this->person_ == nullptr && this->scene_ == nullptr; };
      // gesture Field Functions 
      bool hasGesture() const { return this->gesture_ != nullptr;};
      void deleteGesture() { this->gesture_ = nullptr;};
      inline string getGesture() const { DARABONBA_PTR_GET_DEFAULT(gesture_, "") };
      inline Data& setGesture(string gesture) { DARABONBA_PTR_SET_VALUE(gesture_, gesture) };


      // person Field Functions 
      bool hasPerson() const { return this->person_ != nullptr;};
      void deletePerson() { this->person_ = nullptr;};
      inline string getPerson() const { DARABONBA_PTR_GET_DEFAULT(person_, "") };
      inline Data& setPerson(string person) { DARABONBA_PTR_SET_VALUE(person_, person) };


      // scene Field Functions 
      bool hasScene() const { return this->scene_ != nullptr;};
      void deleteScene() { this->scene_ = nullptr;};
      inline string getScene() const { DARABONBA_PTR_GET_DEFAULT(scene_, "") };
      inline Data& setScene(string scene) { DARABONBA_PTR_SET_VALUE(scene_, scene) };


    protected:
      shared_ptr<string> gesture_ {};
      shared_ptr<string> person_ {};
      shared_ptr<string> scene_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ActiveInteractionEuCreateResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ActiveInteractionEuCreateResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ActiveInteractionEuCreateResponseBody::Data) };
    inline ActiveInteractionEuCreateResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ActiveInteractionEuCreateResponseBody::Data) };
    inline ActiveInteractionEuCreateResponseBody& setData(const ActiveInteractionEuCreateResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ActiveInteractionEuCreateResponseBody& setData(ActiveInteractionEuCreateResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ActiveInteractionEuCreateResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ActiveInteractionEuCreateResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ActiveInteractionEuCreateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ActiveInteractionEuCreateResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<ActiveInteractionEuCreateResponseBody::Data> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BailianModelOnChip20240816
#endif
