// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATERULESATTRIBUTEREQUESTRULESRULEACTIONSFIXEDRESPONSECONFIG_HPP_
#define ALIBABACLOUD_MODELS_UPDATERULESATTRIBUTEREQUESTRULESRULEACTIONSFIXEDRESPONSECONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alb20200616
{
namespace Models
{
  class UpdateRulesAttributeRequestRulesRuleActionsFixedResponseConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateRulesAttributeRequestRulesRuleActionsFixedResponseConfig& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(ContentType, contentType_);
      DARABONBA_PTR_TO_JSON(HttpCode, httpCode_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateRulesAttributeRequestRulesRuleActionsFixedResponseConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(ContentType, contentType_);
      DARABONBA_PTR_FROM_JSON(HttpCode, httpCode_);
    };
    UpdateRulesAttributeRequestRulesRuleActionsFixedResponseConfig() = default ;
    UpdateRulesAttributeRequestRulesRuleActionsFixedResponseConfig(const UpdateRulesAttributeRequestRulesRuleActionsFixedResponseConfig &) = default ;
    UpdateRulesAttributeRequestRulesRuleActionsFixedResponseConfig(UpdateRulesAttributeRequestRulesRuleActionsFixedResponseConfig &&) = default ;
    UpdateRulesAttributeRequestRulesRuleActionsFixedResponseConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateRulesAttributeRequestRulesRuleActionsFixedResponseConfig() = default ;
    UpdateRulesAttributeRequestRulesRuleActionsFixedResponseConfig& operator=(const UpdateRulesAttributeRequestRulesRuleActionsFixedResponseConfig &) = default ;
    UpdateRulesAttributeRequestRulesRuleActionsFixedResponseConfig& operator=(UpdateRulesAttributeRequestRulesRuleActionsFixedResponseConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->content_ != nullptr
        && this->contentType_ != nullptr && this->httpCode_ != nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline UpdateRulesAttributeRequestRulesRuleActionsFixedResponseConfig& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // contentType Field Functions 
    bool hasContentType() const { return this->contentType_ != nullptr;};
    void deleteContentType() { this->contentType_ = nullptr;};
    inline string contentType() const { DARABONBA_PTR_GET_DEFAULT(contentType_, "") };
    inline UpdateRulesAttributeRequestRulesRuleActionsFixedResponseConfig& setContentType(string contentType) { DARABONBA_PTR_SET_VALUE(contentType_, contentType) };


    // httpCode Field Functions 
    bool hasHttpCode() const { return this->httpCode_ != nullptr;};
    void deleteHttpCode() { this->httpCode_ = nullptr;};
    inline string httpCode() const { DARABONBA_PTR_GET_DEFAULT(httpCode_, "") };
    inline UpdateRulesAttributeRequestRulesRuleActionsFixedResponseConfig& setHttpCode(string httpCode) { DARABONBA_PTR_SET_VALUE(httpCode_, httpCode) };


  protected:
    std::shared_ptr<string> content_ = nullptr;
    std::shared_ptr<string> contentType_ = nullptr;
    std::shared_ptr<string> httpCode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
