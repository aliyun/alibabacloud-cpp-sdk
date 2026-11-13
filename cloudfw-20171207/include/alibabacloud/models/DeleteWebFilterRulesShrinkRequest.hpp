// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEWEBFILTERRULESSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEWEBFILTERRULESSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DeleteWebFilterRulesShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteWebFilterRulesShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(WebFilterRuleIds, webFilterRuleIdsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteWebFilterRulesShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(WebFilterRuleIds, webFilterRuleIdsShrink_);
    };
    DeleteWebFilterRulesShrinkRequest() = default ;
    DeleteWebFilterRulesShrinkRequest(const DeleteWebFilterRulesShrinkRequest &) = default ;
    DeleteWebFilterRulesShrinkRequest(DeleteWebFilterRulesShrinkRequest &&) = default ;
    DeleteWebFilterRulesShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteWebFilterRulesShrinkRequest() = default ;
    DeleteWebFilterRulesShrinkRequest& operator=(const DeleteWebFilterRulesShrinkRequest &) = default ;
    DeleteWebFilterRulesShrinkRequest& operator=(DeleteWebFilterRulesShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->webFilterRuleIdsShrink_ == nullptr; };
    // webFilterRuleIdsShrink Field Functions 
    bool hasWebFilterRuleIdsShrink() const { return this->webFilterRuleIdsShrink_ != nullptr;};
    void deleteWebFilterRuleIdsShrink() { this->webFilterRuleIdsShrink_ = nullptr;};
    inline string getWebFilterRuleIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(webFilterRuleIdsShrink_, "") };
    inline DeleteWebFilterRulesShrinkRequest& setWebFilterRuleIdsShrink(string webFilterRuleIdsShrink) { DARABONBA_PTR_SET_VALUE(webFilterRuleIdsShrink_, webFilterRuleIdsShrink) };


  protected:
    // The IDs of the web filtering rules to delete. You can specify up to 100 IDs in a single request. The IDs cannot be empty and must be unique.
    // 
    // This parameter is required.
    shared_ptr<string> webFilterRuleIdsShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
