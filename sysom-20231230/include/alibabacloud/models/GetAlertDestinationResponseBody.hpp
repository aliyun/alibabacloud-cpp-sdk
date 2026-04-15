// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETALERTDESTINATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETALERTDESTINATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SysOM20231230
{
namespace Models
{
  class GetAlertDestinationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAlertDestinationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAlertDestinationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetAlertDestinationResponseBody() = default ;
    GetAlertDestinationResponseBody(const GetAlertDestinationResponseBody &) = default ;
    GetAlertDestinationResponseBody(GetAlertDestinationResponseBody &&) = default ;
    GetAlertDestinationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAlertDestinationResponseBody() = default ;
    GetAlertDestinationResponseBody& operator=(const GetAlertDestinationResponseBody &) = default ;
    GetAlertDestinationResponseBody& operator=(GetAlertDestinationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(createdAt, createdAt_);
        DARABONBA_PTR_TO_JSON(id, id_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_ANY_TO_JSON(params, params_);
        DARABONBA_PTR_TO_JSON(source, source_);
        DARABONBA_PTR_TO_JSON(target, target_);
        DARABONBA_PTR_TO_JSON(uid, uid_);
        DARABONBA_PTR_TO_JSON(updatedAt, updatedAt_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(createdAt, createdAt_);
        DARABONBA_PTR_FROM_JSON(id, id_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_ANY_FROM_JSON(params, params_);
        DARABONBA_PTR_FROM_JSON(source, source_);
        DARABONBA_PTR_FROM_JSON(target, target_);
        DARABONBA_PTR_FROM_JSON(uid, uid_);
        DARABONBA_PTR_FROM_JSON(updatedAt, updatedAt_);
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
      virtual bool empty() const override { return this->createdAt_ == nullptr
        && this->id_ == nullptr && this->name_ == nullptr && this->params_ == nullptr && this->source_ == nullptr && this->target_ == nullptr
        && this->uid_ == nullptr && this->updatedAt_ == nullptr; };
      // createdAt Field Functions 
      bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
      void deleteCreatedAt() { this->createdAt_ = nullptr;};
      inline string getCreatedAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
      inline Data& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int32_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0) };
      inline Data& setId(int32_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Data& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // params Field Functions 
      bool hasParams() const { return this->params_ != nullptr;};
      void deleteParams() { this->params_ = nullptr;};
      inline       const Darabonba::Json & getParams() const { DARABONBA_GET(params_) };
      Darabonba::Json & getParams() { DARABONBA_GET(params_) };
      inline Data& setParams(const Darabonba::Json & params) { DARABONBA_SET_VALUE(params_, params) };
      inline Data& setParams(Darabonba::Json && params) { DARABONBA_SET_RVALUE(params_, params) };


      // source Field Functions 
      bool hasSource() const { return this->source_ != nullptr;};
      void deleteSource() { this->source_ = nullptr;};
      inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
      inline Data& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


      // target Field Functions 
      bool hasTarget() const { return this->target_ != nullptr;};
      void deleteTarget() { this->target_ = nullptr;};
      inline string getTarget() const { DARABONBA_PTR_GET_DEFAULT(target_, "") };
      inline Data& setTarget(string target) { DARABONBA_PTR_SET_VALUE(target_, target) };


      // uid Field Functions 
      bool hasUid() const { return this->uid_ != nullptr;};
      void deleteUid() { this->uid_ = nullptr;};
      inline string getUid() const { DARABONBA_PTR_GET_DEFAULT(uid_, "") };
      inline Data& setUid(string uid) { DARABONBA_PTR_SET_VALUE(uid_, uid) };


      // updatedAt Field Functions 
      bool hasUpdatedAt() const { return this->updatedAt_ != nullptr;};
      void deleteUpdatedAt() { this->updatedAt_ = nullptr;};
      inline string getUpdatedAt() const { DARABONBA_PTR_GET_DEFAULT(updatedAt_, "") };
      inline Data& setUpdatedAt(string updatedAt) { DARABONBA_PTR_SET_VALUE(updatedAt_, updatedAt) };


    protected:
      shared_ptr<string> createdAt_ {};
      shared_ptr<int32_t> id_ {};
      shared_ptr<string> name_ {};
      Darabonba::Json params_ {};
      shared_ptr<string> source_ {};
      shared_ptr<string> target_ {};
      shared_ptr<string> uid_ {};
      shared_ptr<string> updatedAt_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetAlertDestinationResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetAlertDestinationResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetAlertDestinationResponseBody::Data) };
    inline GetAlertDestinationResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetAlertDestinationResponseBody::Data) };
    inline GetAlertDestinationResponseBody& setData(const GetAlertDestinationResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetAlertDestinationResponseBody& setData(GetAlertDestinationResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetAlertDestinationResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAlertDestinationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<GetAlertDestinationResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SysOM20231230
#endif
