// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REWRITECHANNELTITLEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REWRITECHANNELTITLEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class RewriteChannelTitleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RewriteChannelTitleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DraftId, draftId_);
      DARABONBA_PTR_TO_JSON(UserRequirement, userRequirement_);
    };
    friend void from_json(const Darabonba::Json& j, RewriteChannelTitleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DraftId, draftId_);
      DARABONBA_PTR_FROM_JSON(UserRequirement, userRequirement_);
    };
    RewriteChannelTitleRequest() = default ;
    RewriteChannelTitleRequest(const RewriteChannelTitleRequest &) = default ;
    RewriteChannelTitleRequest(RewriteChannelTitleRequest &&) = default ;
    RewriteChannelTitleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RewriteChannelTitleRequest() = default ;
    RewriteChannelTitleRequest& operator=(const RewriteChannelTitleRequest &) = default ;
    RewriteChannelTitleRequest& operator=(RewriteChannelTitleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->draftId_ == nullptr
        && this->userRequirement_ == nullptr; };
    // draftId Field Functions 
    bool hasDraftId() const { return this->draftId_ != nullptr;};
    void deleteDraftId() { this->draftId_ = nullptr;};
    inline string getDraftId() const { DARABONBA_PTR_GET_DEFAULT(draftId_, "") };
    inline RewriteChannelTitleRequest& setDraftId(string draftId) { DARABONBA_PTR_SET_VALUE(draftId_, draftId) };


    // userRequirement Field Functions 
    bool hasUserRequirement() const { return this->userRequirement_ != nullptr;};
    void deleteUserRequirement() { this->userRequirement_ = nullptr;};
    inline string getUserRequirement() const { DARABONBA_PTR_GET_DEFAULT(userRequirement_, "") };
    inline RewriteChannelTitleRequest& setUserRequirement(string userRequirement) { DARABONBA_PTR_SET_VALUE(userRequirement_, userRequirement) };


  protected:
    // The channel draft ID.
    // 
    // This parameter is required.
    shared_ptr<string> draftId_ {};
    // The user personalization requirement in free text format. This parameter is optional.
    shared_ptr<string> userRequirement_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
