// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RETRYCHANNELPUBLISHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RETRYCHANNELPUBLISHREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class RetryChannelPublishRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RetryChannelPublishRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DraftId, draftId_);
    };
    friend void from_json(const Darabonba::Json& j, RetryChannelPublishRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DraftId, draftId_);
    };
    RetryChannelPublishRequest() = default ;
    RetryChannelPublishRequest(const RetryChannelPublishRequest &) = default ;
    RetryChannelPublishRequest(RetryChannelPublishRequest &&) = default ;
    RetryChannelPublishRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RetryChannelPublishRequest() = default ;
    RetryChannelPublishRequest& operator=(const RetryChannelPublishRequest &) = default ;
    RetryChannelPublishRequest& operator=(RetryChannelPublishRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->draftId_ == nullptr; };
    // draftId Field Functions 
    bool hasDraftId() const { return this->draftId_ != nullptr;};
    void deleteDraftId() { this->draftId_ = nullptr;};
    inline string getDraftId() const { DARABONBA_PTR_GET_DEFAULT(draftId_, "") };
    inline RetryChannelPublishRequest& setDraftId(string draftId) { DARABONBA_PTR_SET_VALUE(draftId_, draftId) };


  protected:
    // The channel draft ID.
    // 
    // This parameter is required.
    shared_ptr<string> draftId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
