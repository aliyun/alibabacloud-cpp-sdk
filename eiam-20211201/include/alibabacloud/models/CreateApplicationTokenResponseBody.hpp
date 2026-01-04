// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPPLICATIONTOKENRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPPLICATIONTOKENRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class CreateApplicationTokenResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateApplicationTokenResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationTokens, applicationTokens_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateApplicationTokenResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationTokens, applicationTokens_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateApplicationTokenResponseBody() = default ;
    CreateApplicationTokenResponseBody(const CreateApplicationTokenResponseBody &) = default ;
    CreateApplicationTokenResponseBody(CreateApplicationTokenResponseBody &&) = default ;
    CreateApplicationTokenResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateApplicationTokenResponseBody() = default ;
    CreateApplicationTokenResponseBody& operator=(const CreateApplicationTokenResponseBody &) = default ;
    CreateApplicationTokenResponseBody& operator=(CreateApplicationTokenResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ApplicationTokens : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ApplicationTokens& obj) { 
        DARABONBA_PTR_TO_JSON(ApplicationToken, applicationToken_);
        DARABONBA_PTR_TO_JSON(ApplicationTokenId, applicationTokenId_);
        DARABONBA_PTR_TO_JSON(ApplicationTokenType, applicationTokenType_);
      };
      friend void from_json(const Darabonba::Json& j, ApplicationTokens& obj) { 
        DARABONBA_PTR_FROM_JSON(ApplicationToken, applicationToken_);
        DARABONBA_PTR_FROM_JSON(ApplicationTokenId, applicationTokenId_);
        DARABONBA_PTR_FROM_JSON(ApplicationTokenType, applicationTokenType_);
      };
      ApplicationTokens() = default ;
      ApplicationTokens(const ApplicationTokens &) = default ;
      ApplicationTokens(ApplicationTokens &&) = default ;
      ApplicationTokens(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ApplicationTokens() = default ;
      ApplicationTokens& operator=(const ApplicationTokens &) = default ;
      ApplicationTokens& operator=(ApplicationTokens &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->applicationToken_ == nullptr
        && this->applicationTokenId_ == nullptr && this->applicationTokenType_ == nullptr; };
      // applicationToken Field Functions 
      bool hasApplicationToken() const { return this->applicationToken_ != nullptr;};
      void deleteApplicationToken() { this->applicationToken_ = nullptr;};
      inline string getApplicationToken() const { DARABONBA_PTR_GET_DEFAULT(applicationToken_, "") };
      inline ApplicationTokens& setApplicationToken(string applicationToken) { DARABONBA_PTR_SET_VALUE(applicationToken_, applicationToken) };


      // applicationTokenId Field Functions 
      bool hasApplicationTokenId() const { return this->applicationTokenId_ != nullptr;};
      void deleteApplicationTokenId() { this->applicationTokenId_ = nullptr;};
      inline string getApplicationTokenId() const { DARABONBA_PTR_GET_DEFAULT(applicationTokenId_, "") };
      inline ApplicationTokens& setApplicationTokenId(string applicationTokenId) { DARABONBA_PTR_SET_VALUE(applicationTokenId_, applicationTokenId) };


      // applicationTokenType Field Functions 
      bool hasApplicationTokenType() const { return this->applicationTokenType_ != nullptr;};
      void deleteApplicationTokenType() { this->applicationTokenType_ = nullptr;};
      inline string getApplicationTokenType() const { DARABONBA_PTR_GET_DEFAULT(applicationTokenType_, "") };
      inline ApplicationTokens& setApplicationTokenType(string applicationTokenType) { DARABONBA_PTR_SET_VALUE(applicationTokenType_, applicationTokenType) };


    protected:
      // 应用token
      shared_ptr<string> applicationToken_ {};
      // 应用token ID
      shared_ptr<string> applicationTokenId_ {};
      // 应用token类型
      shared_ptr<string> applicationTokenType_ {};
    };

    virtual bool empty() const override { return this->applicationTokens_ == nullptr
        && this->requestId_ == nullptr; };
    // applicationTokens Field Functions 
    bool hasApplicationTokens() const { return this->applicationTokens_ != nullptr;};
    void deleteApplicationTokens() { this->applicationTokens_ = nullptr;};
    inline const CreateApplicationTokenResponseBody::ApplicationTokens & getApplicationTokens() const { DARABONBA_PTR_GET_CONST(applicationTokens_, CreateApplicationTokenResponseBody::ApplicationTokens) };
    inline CreateApplicationTokenResponseBody::ApplicationTokens getApplicationTokens() { DARABONBA_PTR_GET(applicationTokens_, CreateApplicationTokenResponseBody::ApplicationTokens) };
    inline CreateApplicationTokenResponseBody& setApplicationTokens(const CreateApplicationTokenResponseBody::ApplicationTokens & applicationTokens) { DARABONBA_PTR_SET_VALUE(applicationTokens_, applicationTokens) };
    inline CreateApplicationTokenResponseBody& setApplicationTokens(CreateApplicationTokenResponseBody::ApplicationTokens && applicationTokens) { DARABONBA_PTR_SET_RVALUE(applicationTokens_, applicationTokens) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateApplicationTokenResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<CreateApplicationTokenResponseBody::ApplicationTokens> applicationTokens_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
