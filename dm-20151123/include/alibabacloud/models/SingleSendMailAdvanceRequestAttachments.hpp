// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SINGLESENDMAILADVANCEREQUESTATTACHMENTS_HPP_
#define ALIBABACLOUD_MODELS_SINGLESENDMAILADVANCEREQUESTATTACHMENTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dm20151123
{
namespace Models
{
  class SingleSendMailAdvanceRequestAttachments : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SingleSendMailAdvanceRequestAttachments& obj) { 
      DARABONBA_PTR_TO_JSON(AttachmentName, attachmentName_);
      DARABONBA_TO_JSON(AttachmentUrl, attachmentUrlObject_);
    };
    friend void from_json(const Darabonba::Json& j, SingleSendMailAdvanceRequestAttachments& obj) { 
      DARABONBA_PTR_FROM_JSON(AttachmentName, attachmentName_);
      DARABONBA_FROM_JSON(AttachmentUrl, attachmentUrlObject_);
    };
    SingleSendMailAdvanceRequestAttachments() = default ;
    SingleSendMailAdvanceRequestAttachments(const SingleSendMailAdvanceRequestAttachments &) = default ;
    SingleSendMailAdvanceRequestAttachments(SingleSendMailAdvanceRequestAttachments &&) = default ;
    SingleSendMailAdvanceRequestAttachments(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SingleSendMailAdvanceRequestAttachments() = default ;
    SingleSendMailAdvanceRequestAttachments& operator=(const SingleSendMailAdvanceRequestAttachments &) = default ;
    SingleSendMailAdvanceRequestAttachments& operator=(SingleSendMailAdvanceRequestAttachments &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->attachmentName_ != nullptr
        && this->attachmentUrlObject_ != nullptr; };
    // attachmentName Field Functions 
    bool hasAttachmentName() const { return this->attachmentName_ != nullptr;};
    void deleteAttachmentName() { this->attachmentName_ = nullptr;};
    inline string attachmentName() const { DARABONBA_PTR_GET_DEFAULT(attachmentName_, "") };
    inline SingleSendMailAdvanceRequestAttachments& setAttachmentName(string attachmentName) { DARABONBA_PTR_SET_VALUE(attachmentName_, attachmentName) };


    // attachmentUrlObject Field Functions 
    bool hasAttachmentUrlObject() const { return this->attachmentUrlObject_ != nullptr;};
    void deleteAttachmentUrlObject() { this->attachmentUrlObject_ = nullptr;};
    inline shared_ptr<Darabonba::IStream> attachmentUrlObject() const { DARABONBA_GET(attachmentUrlObject_) };
    inline SingleSendMailAdvanceRequestAttachments& setAttachmentUrlObject(shared_ptr<Darabonba::IStream> attachmentUrlObject) { DARABONBA_SET_VALUE(attachmentUrlObject_, attachmentUrlObject) };


  protected:
    std::shared_ptr<string> attachmentName_ = nullptr;
    shared_ptr<Darabonba::IStream> attachmentUrlObject_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dm20151123
#endif
