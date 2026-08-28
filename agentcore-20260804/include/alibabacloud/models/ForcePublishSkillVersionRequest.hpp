// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FORCEPUBLISHSKILLVERSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_FORCEPUBLISHSKILLVERSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentCore20260804
{
namespace Models
{
  class ForcePublishSkillVersionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ForcePublishSkillVersionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, ForcePublishSkillVersionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    ForcePublishSkillVersionRequest() = default ;
    ForcePublishSkillVersionRequest(const ForcePublishSkillVersionRequest &) = default ;
    ForcePublishSkillVersionRequest(ForcePublishSkillVersionRequest &&) = default ;
    ForcePublishSkillVersionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ForcePublishSkillVersionRequest() = default ;
    ForcePublishSkillVersionRequest& operator=(const ForcePublishSkillVersionRequest &) = default ;
    ForcePublishSkillVersionRequest& operator=(ForcePublishSkillVersionRequest &&) = default ;
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
    inline const ForcePublishSkillVersionRequest::Body & getBody() const { DARABONBA_PTR_GET_CONST(body_, ForcePublishSkillVersionRequest::Body) };
    inline ForcePublishSkillVersionRequest::Body getBody() { DARABONBA_PTR_GET(body_, ForcePublishSkillVersionRequest::Body) };
    inline ForcePublishSkillVersionRequest& setBody(const ForcePublishSkillVersionRequest::Body & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline ForcePublishSkillVersionRequest& setBody(ForcePublishSkillVersionRequest::Body && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    // The request body.
    shared_ptr<ForcePublishSkillVersionRequest::Body> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentCore20260804
#endif
