// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEKNOWLEDGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEKNOWLEDGEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace UmengFinplus20220913
{
namespace Models
{
  class CreateKnowLedgeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateKnowLedgeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, CreateKnowLedgeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    CreateKnowLedgeRequest() = default ;
    CreateKnowLedgeRequest(const CreateKnowLedgeRequest &) = default ;
    CreateKnowLedgeRequest(CreateKnowLedgeRequest &&) = default ;
    CreateKnowLedgeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateKnowLedgeRequest() = default ;
    CreateKnowLedgeRequest& operator=(const CreateKnowLedgeRequest &) = default ;
    CreateKnowLedgeRequest& operator=(CreateKnowLedgeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Body : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Body& obj) { 
        DARABONBA_PTR_TO_JSON(appId, appId_);
        DARABONBA_PTR_TO_JSON(internalKnowledgeId, internalKnowledgeId_);
        DARABONBA_PTR_TO_JSON(knowledgeName, knowledgeName_);
      };
      friend void from_json(const Darabonba::Json& j, Body& obj) { 
        DARABONBA_PTR_FROM_JSON(appId, appId_);
        DARABONBA_PTR_FROM_JSON(internalKnowledgeId, internalKnowledgeId_);
        DARABONBA_PTR_FROM_JSON(knowledgeName, knowledgeName_);
      };
      Body() = default ;
      Body(const Body &) = default ;
      Body(Body &&) = default ;
      Body(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Body() = default ;
      Body& operator=(const Body &) = default ;
      Body& operator=(Body &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->appId_ == nullptr
        && this->internalKnowledgeId_ == nullptr && this->knowledgeName_ == nullptr; };
      // appId Field Functions 
      bool hasAppId() const { return this->appId_ != nullptr;};
      void deleteAppId() { this->appId_ = nullptr;};
      inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
      inline Body& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


      // internalKnowledgeId Field Functions 
      bool hasInternalKnowledgeId() const { return this->internalKnowledgeId_ != nullptr;};
      void deleteInternalKnowledgeId() { this->internalKnowledgeId_ = nullptr;};
      inline string getInternalKnowledgeId() const { DARABONBA_PTR_GET_DEFAULT(internalKnowledgeId_, "") };
      inline Body& setInternalKnowledgeId(string internalKnowledgeId) { DARABONBA_PTR_SET_VALUE(internalKnowledgeId_, internalKnowledgeId) };


      // knowledgeName Field Functions 
      bool hasKnowledgeName() const { return this->knowledgeName_ != nullptr;};
      void deleteKnowledgeName() { this->knowledgeName_ = nullptr;};
      inline string getKnowledgeName() const { DARABONBA_PTR_GET_DEFAULT(knowledgeName_, "") };
      inline Body& setKnowledgeName(string knowledgeName) { DARABONBA_PTR_SET_VALUE(knowledgeName_, knowledgeName) };


    protected:
      shared_ptr<string> appId_ {};
      shared_ptr<string> internalKnowledgeId_ {};
      shared_ptr<string> knowledgeName_ {};
    };

    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const CreateKnowLedgeRequest::Body & getBody() const { DARABONBA_PTR_GET_CONST(body_, CreateKnowLedgeRequest::Body) };
    inline CreateKnowLedgeRequest::Body getBody() { DARABONBA_PTR_GET(body_, CreateKnowLedgeRequest::Body) };
    inline CreateKnowLedgeRequest& setBody(const CreateKnowLedgeRequest::Body & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline CreateKnowLedgeRequest& setBody(CreateKnowLedgeRequest::Body && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<CreateKnowLedgeRequest::Body> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace UmengFinplus20220913
#endif
