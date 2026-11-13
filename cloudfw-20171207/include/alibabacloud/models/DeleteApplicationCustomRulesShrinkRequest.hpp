// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEAPPLICATIONCUSTOMRULESSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEAPPLICATIONCUSTOMRULESSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DeleteApplicationCustomRulesShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteApplicationCustomRulesShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationCustomRuleIds, applicationCustomRuleIdsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteApplicationCustomRulesShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationCustomRuleIds, applicationCustomRuleIdsShrink_);
    };
    DeleteApplicationCustomRulesShrinkRequest() = default ;
    DeleteApplicationCustomRulesShrinkRequest(const DeleteApplicationCustomRulesShrinkRequest &) = default ;
    DeleteApplicationCustomRulesShrinkRequest(DeleteApplicationCustomRulesShrinkRequest &&) = default ;
    DeleteApplicationCustomRulesShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteApplicationCustomRulesShrinkRequest() = default ;
    DeleteApplicationCustomRulesShrinkRequest& operator=(const DeleteApplicationCustomRulesShrinkRequest &) = default ;
    DeleteApplicationCustomRulesShrinkRequest& operator=(DeleteApplicationCustomRulesShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationCustomRuleIdsShrink_ == nullptr; };
    // applicationCustomRuleIdsShrink Field Functions 
    bool hasApplicationCustomRuleIdsShrink() const { return this->applicationCustomRuleIdsShrink_ != nullptr;};
    void deleteApplicationCustomRuleIdsShrink() { this->applicationCustomRuleIdsShrink_ = nullptr;};
    inline string getApplicationCustomRuleIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(applicationCustomRuleIdsShrink_, "") };
    inline DeleteApplicationCustomRulesShrinkRequest& setApplicationCustomRuleIdsShrink(string applicationCustomRuleIdsShrink) { DARABONBA_PTR_SET_VALUE(applicationCustomRuleIdsShrink_, applicationCustomRuleIdsShrink) };


  protected:
    // This parameter is required.
    shared_ptr<string> applicationCustomRuleIdsShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
