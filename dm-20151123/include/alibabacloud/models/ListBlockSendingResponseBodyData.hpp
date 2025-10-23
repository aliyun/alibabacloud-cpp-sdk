// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTBLOCKSENDINGRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTBLOCKSENDINGRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dm20151123
{
namespace Models
{
  class ListBlockSendingResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListBlockSendingResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(BlockEmail, blockEmail_);
      DARABONBA_PTR_TO_JSON(BlockTime, blockTime_);
      DARABONBA_PTR_TO_JSON(Reason, reason_);
      DARABONBA_PTR_TO_JSON(SendTime, sendTime_);
      DARABONBA_PTR_TO_JSON(SenderEmail, senderEmail_);
    };
    friend void from_json(const Darabonba::Json& j, ListBlockSendingResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(BlockEmail, blockEmail_);
      DARABONBA_PTR_FROM_JSON(BlockTime, blockTime_);
      DARABONBA_PTR_FROM_JSON(Reason, reason_);
      DARABONBA_PTR_FROM_JSON(SendTime, sendTime_);
      DARABONBA_PTR_FROM_JSON(SenderEmail, senderEmail_);
    };
    ListBlockSendingResponseBodyData() = default ;
    ListBlockSendingResponseBodyData(const ListBlockSendingResponseBodyData &) = default ;
    ListBlockSendingResponseBodyData(ListBlockSendingResponseBodyData &&) = default ;
    ListBlockSendingResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListBlockSendingResponseBodyData() = default ;
    ListBlockSendingResponseBodyData& operator=(const ListBlockSendingResponseBodyData &) = default ;
    ListBlockSendingResponseBodyData& operator=(ListBlockSendingResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->blockEmail_ == nullptr
        && return this->blockTime_ == nullptr && return this->reason_ == nullptr && return this->sendTime_ == nullptr && return this->senderEmail_ == nullptr; };
    // blockEmail Field Functions 
    bool hasBlockEmail() const { return this->blockEmail_ != nullptr;};
    void deleteBlockEmail() { this->blockEmail_ = nullptr;};
    inline string blockEmail() const { DARABONBA_PTR_GET_DEFAULT(blockEmail_, "") };
    inline ListBlockSendingResponseBodyData& setBlockEmail(string blockEmail) { DARABONBA_PTR_SET_VALUE(blockEmail_, blockEmail) };


    // blockTime Field Functions 
    bool hasBlockTime() const { return this->blockTime_ != nullptr;};
    void deleteBlockTime() { this->blockTime_ = nullptr;};
    inline int32_t blockTime() const { DARABONBA_PTR_GET_DEFAULT(blockTime_, 0) };
    inline ListBlockSendingResponseBodyData& setBlockTime(int32_t blockTime) { DARABONBA_PTR_SET_VALUE(blockTime_, blockTime) };


    // reason Field Functions 
    bool hasReason() const { return this->reason_ != nullptr;};
    void deleteReason() { this->reason_ = nullptr;};
    inline int32_t reason() const { DARABONBA_PTR_GET_DEFAULT(reason_, 0) };
    inline ListBlockSendingResponseBodyData& setReason(int32_t reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


    // sendTime Field Functions 
    bool hasSendTime() const { return this->sendTime_ != nullptr;};
    void deleteSendTime() { this->sendTime_ = nullptr;};
    inline int32_t sendTime() const { DARABONBA_PTR_GET_DEFAULT(sendTime_, 0) };
    inline ListBlockSendingResponseBodyData& setSendTime(int32_t sendTime) { DARABONBA_PTR_SET_VALUE(sendTime_, sendTime) };


    // senderEmail Field Functions 
    bool hasSenderEmail() const { return this->senderEmail_ != nullptr;};
    void deleteSenderEmail() { this->senderEmail_ = nullptr;};
    inline string senderEmail() const { DARABONBA_PTR_GET_DEFAULT(senderEmail_, "") };
    inline ListBlockSendingResponseBodyData& setSenderEmail(string senderEmail) { DARABONBA_PTR_SET_VALUE(senderEmail_, senderEmail) };


  protected:
    std::shared_ptr<string> blockEmail_ = nullptr;
    std::shared_ptr<int32_t> blockTime_ = nullptr;
    std::shared_ptr<int32_t> reason_ = nullptr;
    std::shared_ptr<int32_t> sendTime_ = nullptr;
    std::shared_ptr<string> senderEmail_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dm20151123
#endif
