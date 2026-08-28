// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRANSLATECHANNELDRAFTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_TRANSLATECHANNELDRAFTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class TranslateChannelDraftRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TranslateChannelDraftRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DraftId, draftId_);
    };
    friend void from_json(const Darabonba::Json& j, TranslateChannelDraftRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DraftId, draftId_);
    };
    TranslateChannelDraftRequest() = default ;
    TranslateChannelDraftRequest(const TranslateChannelDraftRequest &) = default ;
    TranslateChannelDraftRequest(TranslateChannelDraftRequest &&) = default ;
    TranslateChannelDraftRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TranslateChannelDraftRequest() = default ;
    TranslateChannelDraftRequest& operator=(const TranslateChannelDraftRequest &) = default ;
    TranslateChannelDraftRequest& operator=(TranslateChannelDraftRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->draftId_ == nullptr; };
    // draftId Field Functions 
    bool hasDraftId() const { return this->draftId_ != nullptr;};
    void deleteDraftId() { this->draftId_ = nullptr;};
    inline string getDraftId() const { DARABONBA_PTR_GET_DEFAULT(draftId_, "") };
    inline TranslateChannelDraftRequest& setDraftId(string draftId) { DARABONBA_PTR_SET_VALUE(draftId_, draftId) };


  protected:
    // The ID of the channel draft.
    // 
    // This parameter is required.
    shared_ptr<string> draftId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
