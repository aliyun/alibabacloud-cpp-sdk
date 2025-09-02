// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DSGDESENSPLANADDORUPDATESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DSGDESENSPLANADDORUPDATESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class DsgDesensPlanAddOrUpdateShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DsgDesensPlanAddOrUpdateShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DesensRules, desensRulesShrink_);
    };
    friend void from_json(const Darabonba::Json& j, DsgDesensPlanAddOrUpdateShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DesensRules, desensRulesShrink_);
    };
    DsgDesensPlanAddOrUpdateShrinkRequest() = default ;
    DsgDesensPlanAddOrUpdateShrinkRequest(const DsgDesensPlanAddOrUpdateShrinkRequest &) = default ;
    DsgDesensPlanAddOrUpdateShrinkRequest(DsgDesensPlanAddOrUpdateShrinkRequest &&) = default ;
    DsgDesensPlanAddOrUpdateShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DsgDesensPlanAddOrUpdateShrinkRequest() = default ;
    DsgDesensPlanAddOrUpdateShrinkRequest& operator=(const DsgDesensPlanAddOrUpdateShrinkRequest &) = default ;
    DsgDesensPlanAddOrUpdateShrinkRequest& operator=(DsgDesensPlanAddOrUpdateShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->desensRulesShrink_ != nullptr; };
    // desensRulesShrink Field Functions 
    bool hasDesensRulesShrink() const { return this->desensRulesShrink_ != nullptr;};
    void deleteDesensRulesShrink() { this->desensRulesShrink_ = nullptr;};
    inline string desensRulesShrink() const { DARABONBA_PTR_GET_DEFAULT(desensRulesShrink_, "") };
    inline DsgDesensPlanAddOrUpdateShrinkRequest& setDesensRulesShrink(string desensRulesShrink) { DARABONBA_PTR_SET_VALUE(desensRulesShrink_, desensRulesShrink) };


  protected:
    // A collection of data masking rules that you want to add or modify.
    // 
    // This parameter is required.
    std::shared_ptr<string> desensRulesShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
