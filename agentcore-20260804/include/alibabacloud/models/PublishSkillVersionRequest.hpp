// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUBLISHSKILLVERSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PUBLISHSKILLVERSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentCore20260804
{
namespace Models
{
  class PublishSkillVersionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PublishSkillVersionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, PublishSkillVersionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    PublishSkillVersionRequest() = default ;
    PublishSkillVersionRequest(const PublishSkillVersionRequest &) = default ;
    PublishSkillVersionRequest(PublishSkillVersionRequest &&) = default ;
    PublishSkillVersionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PublishSkillVersionRequest() = default ;
    PublishSkillVersionRequest& operator=(const PublishSkillVersionRequest &) = default ;
    PublishSkillVersionRequest& operator=(PublishSkillVersionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Body : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Body& obj) { 
        DARABONBA_PTR_TO_JSON(updateLatestLabel, updateLatestLabel_);
      };
      friend void from_json(const Darabonba::Json& j, Body& obj) { 
        DARABONBA_PTR_FROM_JSON(updateLatestLabel, updateLatestLabel_);
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
      virtual bool empty() const override { return this->updateLatestLabel_ == nullptr; };
      // updateLatestLabel Field Functions 
      bool hasUpdateLatestLabel() const { return this->updateLatestLabel_ != nullptr;};
      void deleteUpdateLatestLabel() { this->updateLatestLabel_ = nullptr;};
      inline bool getUpdateLatestLabel() const { DARABONBA_PTR_GET_DEFAULT(updateLatestLabel_, false) };
      inline Body& setUpdateLatestLabel(bool updateLatestLabel) { DARABONBA_PTR_SET_VALUE(updateLatestLabel_, updateLatestLabel) };


    protected:
      // Specifies whether to update the latest label.
      shared_ptr<bool> updateLatestLabel_ {};
    };

    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const PublishSkillVersionRequest::Body & getBody() const { DARABONBA_PTR_GET_CONST(body_, PublishSkillVersionRequest::Body) };
    inline PublishSkillVersionRequest::Body getBody() { DARABONBA_PTR_GET(body_, PublishSkillVersionRequest::Body) };
    inline PublishSkillVersionRequest& setBody(const PublishSkillVersionRequest::Body & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline PublishSkillVersionRequest& setBody(PublishSkillVersionRequest::Body && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    // The request body.
    shared_ptr<PublishSkillVersionRequest::Body> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentCore20260804
#endif
