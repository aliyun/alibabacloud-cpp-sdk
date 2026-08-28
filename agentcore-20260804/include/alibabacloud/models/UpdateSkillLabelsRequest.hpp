// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESKILLLABELSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATESKILLLABELSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentCore20260804
{
namespace Models
{
  class UpdateSkillLabelsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateSkillLabelsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateSkillLabelsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    UpdateSkillLabelsRequest() = default ;
    UpdateSkillLabelsRequest(const UpdateSkillLabelsRequest &) = default ;
    UpdateSkillLabelsRequest(UpdateSkillLabelsRequest &&) = default ;
    UpdateSkillLabelsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateSkillLabelsRequest() = default ;
    UpdateSkillLabelsRequest& operator=(const UpdateSkillLabelsRequest &) = default ;
    UpdateSkillLabelsRequest& operator=(UpdateSkillLabelsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Body : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Body& obj) { 
        DARABONBA_PTR_TO_JSON(labels, labels_);
      };
      friend void from_json(const Darabonba::Json& j, Body& obj) { 
        DARABONBA_PTR_FROM_JSON(labels, labels_);
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
      virtual bool empty() const override { return this->labels_ == nullptr; };
      // labels Field Functions 
      bool hasLabels() const { return this->labels_ != nullptr;};
      void deleteLabels() { this->labels_ = nullptr;};
      inline string getLabels() const { DARABONBA_PTR_GET_DEFAULT(labels_, "") };
      inline Body& setLabels(string labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };


    protected:
      // The version label mapping JSON string.
      // 
      // This parameter is required.
      shared_ptr<string> labels_ {};
    };

    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const UpdateSkillLabelsRequest::Body & getBody() const { DARABONBA_PTR_GET_CONST(body_, UpdateSkillLabelsRequest::Body) };
    inline UpdateSkillLabelsRequest::Body getBody() { DARABONBA_PTR_GET(body_, UpdateSkillLabelsRequest::Body) };
    inline UpdateSkillLabelsRequest& setBody(const UpdateSkillLabelsRequest::Body & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline UpdateSkillLabelsRequest& setBody(UpdateSkillLabelsRequest::Body && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    // The request body.
    shared_ptr<UpdateSkillLabelsRequest::Body> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentCore20260804
#endif
