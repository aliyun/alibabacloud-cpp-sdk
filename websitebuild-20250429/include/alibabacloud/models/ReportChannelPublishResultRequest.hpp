// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REPORTCHANNELPUBLISHRESULTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REPORTCHANNELPUBLISHRESULTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class ReportChannelPublishResultRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ReportChannelPublishResultRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DraftId, draftId_);
      DARABONBA_PTR_TO_JSON(ExternalId, externalId_);
      DARABONBA_PTR_TO_JSON(ExternalUrl, externalUrl_);
      DARABONBA_PTR_TO_JSON(FailReason, failReason_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ReportChannelPublishResultRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DraftId, draftId_);
      DARABONBA_PTR_FROM_JSON(ExternalId, externalId_);
      DARABONBA_PTR_FROM_JSON(ExternalUrl, externalUrl_);
      DARABONBA_PTR_FROM_JSON(FailReason, failReason_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ReportChannelPublishResultRequest() = default ;
    ReportChannelPublishResultRequest(const ReportChannelPublishResultRequest &) = default ;
    ReportChannelPublishResultRequest(ReportChannelPublishResultRequest &&) = default ;
    ReportChannelPublishResultRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ReportChannelPublishResultRequest() = default ;
    ReportChannelPublishResultRequest& operator=(const ReportChannelPublishResultRequest &) = default ;
    ReportChannelPublishResultRequest& operator=(ReportChannelPublishResultRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->draftId_ == nullptr
        && this->externalId_ == nullptr && this->externalUrl_ == nullptr && this->failReason_ == nullptr && this->success_ == nullptr; };
    // draftId Field Functions 
    bool hasDraftId() const { return this->draftId_ != nullptr;};
    void deleteDraftId() { this->draftId_ = nullptr;};
    inline string getDraftId() const { DARABONBA_PTR_GET_DEFAULT(draftId_, "") };
    inline ReportChannelPublishResultRequest& setDraftId(string draftId) { DARABONBA_PTR_SET_VALUE(draftId_, draftId) };


    // externalId Field Functions 
    bool hasExternalId() const { return this->externalId_ != nullptr;};
    void deleteExternalId() { this->externalId_ = nullptr;};
    inline string getExternalId() const { DARABONBA_PTR_GET_DEFAULT(externalId_, "") };
    inline ReportChannelPublishResultRequest& setExternalId(string externalId) { DARABONBA_PTR_SET_VALUE(externalId_, externalId) };


    // externalUrl Field Functions 
    bool hasExternalUrl() const { return this->externalUrl_ != nullptr;};
    void deleteExternalUrl() { this->externalUrl_ = nullptr;};
    inline string getExternalUrl() const { DARABONBA_PTR_GET_DEFAULT(externalUrl_, "") };
    inline ReportChannelPublishResultRequest& setExternalUrl(string externalUrl) { DARABONBA_PTR_SET_VALUE(externalUrl_, externalUrl) };


    // failReason Field Functions 
    bool hasFailReason() const { return this->failReason_ != nullptr;};
    void deleteFailReason() { this->failReason_ = nullptr;};
    inline string getFailReason() const { DARABONBA_PTR_GET_DEFAULT(failReason_, "") };
    inline ReportChannelPublishResultRequest& setFailReason(string failReason) { DARABONBA_PTR_SET_VALUE(failReason_, failReason) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ReportChannelPublishResultRequest& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The channel draft ID.
    // 
    // This parameter is required.
    shared_ptr<string> draftId_ {};
    // The ID returned by the platform. Specify this parameter when the publish operation is successful.
    shared_ptr<string> externalId_ {};
    // The redirect URL of the platform.
    shared_ptr<string> externalUrl_ {};
    // The failure reason. Specify this parameter when the publish operation fails.
    shared_ptr<string> failReason_ {};
    // Specifies whether the publish operation is successful (true/false).
    // 
    // This parameter is required.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
