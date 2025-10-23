// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SINGLESENDMAILSHRINKREQUESTATTACHMENTS_HPP_
#define ALIBABACLOUD_MODELS_SINGLESENDMAILSHRINKREQUESTATTACHMENTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dm20151123
{
namespace Models
{
  class SingleSendMailShrinkRequestAttachments : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SingleSendMailShrinkRequestAttachments& obj) { 
      DARABONBA_PTR_TO_JSON(AttachmentName, attachmentName_);
      DARABONBA_PTR_TO_JSON(AttachmentUrl, attachmentUrl_);
    };
    friend void from_json(const Darabonba::Json& j, SingleSendMailShrinkRequestAttachments& obj) { 
      DARABONBA_PTR_FROM_JSON(AttachmentName, attachmentName_);
      DARABONBA_PTR_FROM_JSON(AttachmentUrl, attachmentUrl_);
    };
    SingleSendMailShrinkRequestAttachments() = default ;
    SingleSendMailShrinkRequestAttachments(const SingleSendMailShrinkRequestAttachments &) = default ;
    SingleSendMailShrinkRequestAttachments(SingleSendMailShrinkRequestAttachments &&) = default ;
    SingleSendMailShrinkRequestAttachments(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SingleSendMailShrinkRequestAttachments() = default ;
    SingleSendMailShrinkRequestAttachments& operator=(const SingleSendMailShrinkRequestAttachments &) = default ;
    SingleSendMailShrinkRequestAttachments& operator=(SingleSendMailShrinkRequestAttachments &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->attachmentName_ == nullptr
        && return this->attachmentUrl_ == nullptr; };
    // attachmentName Field Functions 
    bool hasAttachmentName() const { return this->attachmentName_ != nullptr;};
    void deleteAttachmentName() { this->attachmentName_ = nullptr;};
    inline string attachmentName() const { DARABONBA_PTR_GET_DEFAULT(attachmentName_, "") };
    inline SingleSendMailShrinkRequestAttachments& setAttachmentName(string attachmentName) { DARABONBA_PTR_SET_VALUE(attachmentName_, attachmentName) };


    // attachmentUrl Field Functions 
    bool hasAttachmentUrl() const { return this->attachmentUrl_ != nullptr;};
    void deleteAttachmentUrl() { this->attachmentUrl_ = nullptr;};
    inline string attachmentUrl() const { DARABONBA_PTR_GET_DEFAULT(attachmentUrl_, "") };
    inline SingleSendMailShrinkRequestAttachments& setAttachmentUrl(string attachmentUrl) { DARABONBA_PTR_SET_VALUE(attachmentUrl_, attachmentUrl) };


  protected:
    std::shared_ptr<string> attachmentName_ = nullptr;
    std::shared_ptr<string> attachmentUrl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dm20151123
#endif
