// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UAIDCOLLECTIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UAIDCOLLECTIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dytnsapi20200217
{
namespace Models
{
  class UAIDCollectionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UAIDCollectionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Model, model_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, UAIDCollectionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Model, model_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    UAIDCollectionResponseBody() = default ;
    UAIDCollectionResponseBody(const UAIDCollectionResponseBody &) = default ;
    UAIDCollectionResponseBody(UAIDCollectionResponseBody &&) = default ;
    UAIDCollectionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UAIDCollectionResponseBody() = default ;
    UAIDCollectionResponseBody& operator=(const UAIDCollectionResponseBody &) = default ;
    UAIDCollectionResponseBody& operator=(UAIDCollectionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Model : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Model& obj) { 
        DARABONBA_PTR_TO_JSON(Uaid, uaid_);
      };
      friend void from_json(const Darabonba::Json& j, Model& obj) { 
        DARABONBA_PTR_FROM_JSON(Uaid, uaid_);
      };
      Model() = default ;
      Model(const Model &) = default ;
      Model(Model &&) = default ;
      Model(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Model() = default ;
      Model& operator=(const Model &) = default ;
      Model& operator=(Model &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->uaid_ == nullptr; };
      // uaid Field Functions 
      bool hasUaid() const { return this->uaid_ != nullptr;};
      void deleteUaid() { this->uaid_ = nullptr;};
      inline string getUaid() const { DARABONBA_PTR_GET_DEFAULT(uaid_, "") };
      inline Model& setUaid(string uaid) { DARABONBA_PTR_SET_VALUE(uaid_, uaid) };


    protected:
      shared_ptr<string> uaid_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->message_ == nullptr && this->model_ == nullptr && this->requestId_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline UAIDCollectionResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline UAIDCollectionResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline UAIDCollectionResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // model Field Functions 
    bool hasModel() const { return this->model_ != nullptr;};
    void deleteModel() { this->model_ = nullptr;};
    inline const UAIDCollectionResponseBody::Model & getModel() const { DARABONBA_PTR_GET_CONST(model_, UAIDCollectionResponseBody::Model) };
    inline UAIDCollectionResponseBody::Model getModel() { DARABONBA_PTR_GET(model_, UAIDCollectionResponseBody::Model) };
    inline UAIDCollectionResponseBody& setModel(const UAIDCollectionResponseBody::Model & model) { DARABONBA_PTR_SET_VALUE(model_, model) };
    inline UAIDCollectionResponseBody& setModel(UAIDCollectionResponseBody::Model && model) { DARABONBA_PTR_SET_RVALUE(model_, model) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UAIDCollectionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> accessDeniedDetail_ {};
    shared_ptr<string> code_ {};
    shared_ptr<string> message_ {};
    shared_ptr<UAIDCollectionResponseBody::Model> model_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dytnsapi20200217
#endif
