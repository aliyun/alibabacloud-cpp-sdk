// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UNBLOCKSENDINGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UNBLOCKSENDINGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dm20151123
{
namespace Models
{
  class UnblockSendingRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UnblockSendingRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BlockEmail, blockEmail_);
      DARABONBA_PTR_TO_JSON(BlockType, blockType_);
      DARABONBA_PTR_TO_JSON(SenderEmail, senderEmail_);
    };
    friend void from_json(const Darabonba::Json& j, UnblockSendingRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BlockEmail, blockEmail_);
      DARABONBA_PTR_FROM_JSON(BlockType, blockType_);
      DARABONBA_PTR_FROM_JSON(SenderEmail, senderEmail_);
    };
    UnblockSendingRequest() = default ;
    UnblockSendingRequest(const UnblockSendingRequest &) = default ;
    UnblockSendingRequest(UnblockSendingRequest &&) = default ;
    UnblockSendingRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UnblockSendingRequest() = default ;
    UnblockSendingRequest& operator=(const UnblockSendingRequest &) = default ;
    UnblockSendingRequest& operator=(UnblockSendingRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->blockEmail_ == nullptr
        && this->blockType_ == nullptr && this->senderEmail_ == nullptr; };
    // blockEmail Field Functions 
    bool hasBlockEmail() const { return this->blockEmail_ != nullptr;};
    void deleteBlockEmail() { this->blockEmail_ = nullptr;};
    inline string getBlockEmail() const { DARABONBA_PTR_GET_DEFAULT(blockEmail_, "") };
    inline UnblockSendingRequest& setBlockEmail(string blockEmail) { DARABONBA_PTR_SET_VALUE(blockEmail_, blockEmail) };


    // blockType Field Functions 
    bool hasBlockType() const { return this->blockType_ != nullptr;};
    void deleteBlockType() { this->blockType_ = nullptr;};
    inline string getBlockType() const { DARABONBA_PTR_GET_DEFAULT(blockType_, "") };
    inline UnblockSendingRequest& setBlockType(string blockType) { DARABONBA_PTR_SET_VALUE(blockType_, blockType) };


    // senderEmail Field Functions 
    bool hasSenderEmail() const { return this->senderEmail_ != nullptr;};
    void deleteSenderEmail() { this->senderEmail_ = nullptr;};
    inline string getSenderEmail() const { DARABONBA_PTR_GET_DEFAULT(senderEmail_, "") };
    inline UnblockSendingRequest& setSenderEmail(string senderEmail) { DARABONBA_PTR_SET_VALUE(senderEmail_, senderEmail) };


  protected:
    // Blacklisted recipient\\"s email address
    // 
    // This parameter is required.
    shared_ptr<string> blockEmail_ {};
    // Blacklist type
    // - UNSUB: Unsubscribe
    // - REPORT: Report
    // 
    // This parameter is required.
    shared_ptr<string> blockType_ {};
    // Sender\\"s email address
    // 
    // This parameter is required.
    shared_ptr<string> senderEmail_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dm20151123
#endif
