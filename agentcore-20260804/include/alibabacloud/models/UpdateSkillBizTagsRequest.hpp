// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESKILLBIZTAGSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATESKILLBIZTAGSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentCore20260804
{
namespace Models
{
  class UpdateSkillBizTagsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateSkillBizTagsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateSkillBizTagsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    UpdateSkillBizTagsRequest() = default ;
    UpdateSkillBizTagsRequest(const UpdateSkillBizTagsRequest &) = default ;
    UpdateSkillBizTagsRequest(UpdateSkillBizTagsRequest &&) = default ;
    UpdateSkillBizTagsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateSkillBizTagsRequest() = default ;
    UpdateSkillBizTagsRequest& operator=(const UpdateSkillBizTagsRequest &) = default ;
    UpdateSkillBizTagsRequest& operator=(UpdateSkillBizTagsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Body : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Body& obj) { 
        DARABONBA_PTR_TO_JSON(bizTags, bizTags_);
      };
      friend void from_json(const Darabonba::Json& j, Body& obj) { 
        DARABONBA_PTR_FROM_JSON(bizTags, bizTags_);
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
      virtual bool empty() const override { return this->bizTags_ == nullptr; };
      // bizTags Field Functions 
      bool hasBizTags() const { return this->bizTags_ != nullptr;};
      void deleteBizTags() { this->bizTags_ = nullptr;};
      inline string getBizTags() const { DARABONBA_PTR_GET_DEFAULT(bizTags_, "") };
      inline Body& setBizTags(string bizTags) { DARABONBA_PTR_SET_VALUE(bizTags_, bizTags) };


    protected:
      // The business tags as a JSON array string.
      // 
      // This parameter is required.
      shared_ptr<string> bizTags_ {};
    };

    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const UpdateSkillBizTagsRequest::Body & getBody() const { DARABONBA_PTR_GET_CONST(body_, UpdateSkillBizTagsRequest::Body) };
    inline UpdateSkillBizTagsRequest::Body getBody() { DARABONBA_PTR_GET(body_, UpdateSkillBizTagsRequest::Body) };
    inline UpdateSkillBizTagsRequest& setBody(const UpdateSkillBizTagsRequest::Body & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline UpdateSkillBizTagsRequest& setBody(UpdateSkillBizTagsRequest::Body && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    // The request body.
    shared_ptr<UpdateSkillBizTagsRequest::Body> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentCore20260804
#endif
