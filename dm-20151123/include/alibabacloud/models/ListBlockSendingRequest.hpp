// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTBLOCKSENDINGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTBLOCKSENDINGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dm20151123
{
namespace Models
{
  class ListBlockSendingRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListBlockSendingRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BeginTime, beginTime_);
      DARABONBA_PTR_TO_JSON(BlockEmail, blockEmail_);
      DARABONBA_PTR_TO_JSON(BlockType, blockType_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(SenderEmail, senderEmail_);
    };
    friend void from_json(const Darabonba::Json& j, ListBlockSendingRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BeginTime, beginTime_);
      DARABONBA_PTR_FROM_JSON(BlockEmail, blockEmail_);
      DARABONBA_PTR_FROM_JSON(BlockType, blockType_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(SenderEmail, senderEmail_);
    };
    ListBlockSendingRequest() = default ;
    ListBlockSendingRequest(const ListBlockSendingRequest &) = default ;
    ListBlockSendingRequest(ListBlockSendingRequest &&) = default ;
    ListBlockSendingRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListBlockSendingRequest() = default ;
    ListBlockSendingRequest& operator=(const ListBlockSendingRequest &) = default ;
    ListBlockSendingRequest& operator=(ListBlockSendingRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->beginTime_ == nullptr
        && return this->blockEmail_ == nullptr && return this->blockType_ == nullptr && return this->endTime_ == nullptr && return this->maxResults_ == nullptr && return this->nextToken_ == nullptr
        && return this->senderEmail_ == nullptr; };
    // beginTime Field Functions 
    bool hasBeginTime() const { return this->beginTime_ != nullptr;};
    void deleteBeginTime() { this->beginTime_ = nullptr;};
    inline int32_t beginTime() const { DARABONBA_PTR_GET_DEFAULT(beginTime_, 0) };
    inline ListBlockSendingRequest& setBeginTime(int32_t beginTime) { DARABONBA_PTR_SET_VALUE(beginTime_, beginTime) };


    // blockEmail Field Functions 
    bool hasBlockEmail() const { return this->blockEmail_ != nullptr;};
    void deleteBlockEmail() { this->blockEmail_ = nullptr;};
    inline string blockEmail() const { DARABONBA_PTR_GET_DEFAULT(blockEmail_, "") };
    inline ListBlockSendingRequest& setBlockEmail(string blockEmail) { DARABONBA_PTR_SET_VALUE(blockEmail_, blockEmail) };


    // blockType Field Functions 
    bool hasBlockType() const { return this->blockType_ != nullptr;};
    void deleteBlockType() { this->blockType_ = nullptr;};
    inline string blockType() const { DARABONBA_PTR_GET_DEFAULT(blockType_, "") };
    inline ListBlockSendingRequest& setBlockType(string blockType) { DARABONBA_PTR_SET_VALUE(blockType_, blockType) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int32_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0) };
    inline ListBlockSendingRequest& setEndTime(int32_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListBlockSendingRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListBlockSendingRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // senderEmail Field Functions 
    bool hasSenderEmail() const { return this->senderEmail_ != nullptr;};
    void deleteSenderEmail() { this->senderEmail_ = nullptr;};
    inline string senderEmail() const { DARABONBA_PTR_GET_DEFAULT(senderEmail_, "") };
    inline ListBlockSendingRequest& setSenderEmail(string senderEmail) { DARABONBA_PTR_SET_VALUE(senderEmail_, senderEmail) };


  protected:
    std::shared_ptr<int32_t> beginTime_ = nullptr;
    std::shared_ptr<string> blockEmail_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> blockType_ = nullptr;
    std::shared_ptr<int32_t> endTime_ = nullptr;
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    std::shared_ptr<string> nextToken_ = nullptr;
    std::shared_ptr<string> senderEmail_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dm20151123
#endif
