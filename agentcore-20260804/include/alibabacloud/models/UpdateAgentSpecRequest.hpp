// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEAGENTSPECREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEAGENTSPECREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentCore20260804
{
namespace Models
{
  class UpdateAgentSpecRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAgentSpecRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAgentSpecRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    UpdateAgentSpecRequest() = default ;
    UpdateAgentSpecRequest(const UpdateAgentSpecRequest &) = default ;
    UpdateAgentSpecRequest(UpdateAgentSpecRequest &&) = default ;
    UpdateAgentSpecRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAgentSpecRequest() = default ;
    UpdateAgentSpecRequest& operator=(const UpdateAgentSpecRequest &) = default ;
    UpdateAgentSpecRequest& operator=(UpdateAgentSpecRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Body : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Body& obj) { 
        DARABONBA_PTR_TO_JSON(bizTags, bizTags_);
        DARABONBA_PTR_TO_JSON(labels, labels_);
        DARABONBA_PTR_TO_JSON(scope, scope_);
      };
      friend void from_json(const Darabonba::Json& j, Body& obj) { 
        DARABONBA_PTR_FROM_JSON(bizTags, bizTags_);
        DARABONBA_PTR_FROM_JSON(labels, labels_);
        DARABONBA_PTR_FROM_JSON(scope, scope_);
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
      virtual bool empty() const override { return this->bizTags_ == nullptr
        && this->labels_ == nullptr && this->scope_ == nullptr; };
      // bizTags Field Functions 
      bool hasBizTags() const { return this->bizTags_ != nullptr;};
      void deleteBizTags() { this->bizTags_ = nullptr;};
      inline string getBizTags() const { DARABONBA_PTR_GET_DEFAULT(bizTags_, "") };
      inline Body& setBizTags(string bizTags) { DARABONBA_PTR_SET_VALUE(bizTags_, bizTags) };


      // labels Field Functions 
      bool hasLabels() const { return this->labels_ != nullptr;};
      void deleteLabels() { this->labels_ = nullptr;};
      inline string getLabels() const { DARABONBA_PTR_GET_DEFAULT(labels_, "") };
      inline Body& setLabels(string labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };


      // scope Field Functions 
      bool hasScope() const { return this->scope_ != nullptr;};
      void deleteScope() { this->scope_ = nullptr;};
      inline string getScope() const { DARABONBA_PTR_GET_DEFAULT(scope_, "") };
      inline Body& setScope(string scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };


    protected:
      // The business tags as a JSON-formatted string.
      shared_ptr<string> bizTags_ {};
      // The label mapping as a JSON-formatted string.
      shared_ptr<string> labels_ {};
      // The visibility scope. Valid values:
      // - PUBLIC
      // - PRIVATE
      shared_ptr<string> scope_ {};
    };

    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const UpdateAgentSpecRequest::Body & getBody() const { DARABONBA_PTR_GET_CONST(body_, UpdateAgentSpecRequest::Body) };
    inline UpdateAgentSpecRequest::Body getBody() { DARABONBA_PTR_GET(body_, UpdateAgentSpecRequest::Body) };
    inline UpdateAgentSpecRequest& setBody(const UpdateAgentSpecRequest::Body & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline UpdateAgentSpecRequest& setBody(UpdateAgentSpecRequest::Body && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    // The request body.
    shared_ptr<UpdateAgentSpecRequest::Body> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentCore20260804
#endif
