// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESMARTSHORTURLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATESMARTSHORTURLRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dysmsapi20170525
{
namespace Models
{
  class CreateSmartShortUrlResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSmartShortUrlResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Model, model_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSmartShortUrlResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Model, model_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateSmartShortUrlResponseBody() = default ;
    CreateSmartShortUrlResponseBody(const CreateSmartShortUrlResponseBody &) = default ;
    CreateSmartShortUrlResponseBody(CreateSmartShortUrlResponseBody &&) = default ;
    CreateSmartShortUrlResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSmartShortUrlResponseBody() = default ;
    CreateSmartShortUrlResponseBody& operator=(const CreateSmartShortUrlResponseBody &) = default ;
    CreateSmartShortUrlResponseBody& operator=(CreateSmartShortUrlResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Model : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Model& obj) { 
        DARABONBA_PTR_TO_JSON(Domain, domain_);
        DARABONBA_PTR_TO_JSON(Expiration, expiration_);
        DARABONBA_PTR_TO_JSON(PhoneNumber, phoneNumber_);
        DARABONBA_PTR_TO_JSON(ShortName, shortName_);
        DARABONBA_PTR_TO_JSON(ShortUrl, shortUrl_);
      };
      friend void from_json(const Darabonba::Json& j, Model& obj) { 
        DARABONBA_PTR_FROM_JSON(Domain, domain_);
        DARABONBA_PTR_FROM_JSON(Expiration, expiration_);
        DARABONBA_PTR_FROM_JSON(PhoneNumber, phoneNumber_);
        DARABONBA_PTR_FROM_JSON(ShortName, shortName_);
        DARABONBA_PTR_FROM_JSON(ShortUrl, shortUrl_);
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
      virtual bool empty() const override { return this->domain_ == nullptr
        && this->expiration_ == nullptr && this->phoneNumber_ == nullptr && this->shortName_ == nullptr && this->shortUrl_ == nullptr; };
      // domain Field Functions 
      bool hasDomain() const { return this->domain_ != nullptr;};
      void deleteDomain() { this->domain_ = nullptr;};
      inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
      inline Model& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


      // expiration Field Functions 
      bool hasExpiration() const { return this->expiration_ != nullptr;};
      void deleteExpiration() { this->expiration_ = nullptr;};
      inline int64_t getExpiration() const { DARABONBA_PTR_GET_DEFAULT(expiration_, 0L) };
      inline Model& setExpiration(int64_t expiration) { DARABONBA_PTR_SET_VALUE(expiration_, expiration) };


      // phoneNumber Field Functions 
      bool hasPhoneNumber() const { return this->phoneNumber_ != nullptr;};
      void deletePhoneNumber() { this->phoneNumber_ = nullptr;};
      inline string getPhoneNumber() const { DARABONBA_PTR_GET_DEFAULT(phoneNumber_, "") };
      inline Model& setPhoneNumber(string phoneNumber) { DARABONBA_PTR_SET_VALUE(phoneNumber_, phoneNumber) };


      // shortName Field Functions 
      bool hasShortName() const { return this->shortName_ != nullptr;};
      void deleteShortName() { this->shortName_ = nullptr;};
      inline string getShortName() const { DARABONBA_PTR_GET_DEFAULT(shortName_, "") };
      inline Model& setShortName(string shortName) { DARABONBA_PTR_SET_VALUE(shortName_, shortName) };


      // shortUrl Field Functions 
      bool hasShortUrl() const { return this->shortUrl_ != nullptr;};
      void deleteShortUrl() { this->shortUrl_ = nullptr;};
      inline string getShortUrl() const { DARABONBA_PTR_GET_DEFAULT(shortUrl_, "") };
      inline Model& setShortUrl(string shortUrl) { DARABONBA_PTR_SET_VALUE(shortUrl_, shortUrl) };


    protected:
      shared_ptr<string> domain_ {};
      shared_ptr<int64_t> expiration_ {};
      shared_ptr<string> phoneNumber_ {};
      shared_ptr<string> shortName_ {};
      shared_ptr<string> shortUrl_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->model_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CreateSmartShortUrlResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CreateSmartShortUrlResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // model Field Functions 
    bool hasModel() const { return this->model_ != nullptr;};
    void deleteModel() { this->model_ = nullptr;};
    inline const vector<CreateSmartShortUrlResponseBody::Model> & getModel() const { DARABONBA_PTR_GET_CONST(model_, vector<CreateSmartShortUrlResponseBody::Model>) };
    inline vector<CreateSmartShortUrlResponseBody::Model> getModel() { DARABONBA_PTR_GET(model_, vector<CreateSmartShortUrlResponseBody::Model>) };
    inline CreateSmartShortUrlResponseBody& setModel(const vector<CreateSmartShortUrlResponseBody::Model> & model) { DARABONBA_PTR_SET_VALUE(model_, model) };
    inline CreateSmartShortUrlResponseBody& setModel(vector<CreateSmartShortUrlResponseBody::Model> && model) { DARABONBA_PTR_SET_RVALUE(model_, model) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateSmartShortUrlResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<string> message_ {};
    shared_ptr<vector<CreateSmartShortUrlResponseBody::Model>> model_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dysmsapi20170525
#endif
