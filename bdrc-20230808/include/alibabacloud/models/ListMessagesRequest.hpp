// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMESSAGESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTMESSAGESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BDRC20230808
{
namespace Models
{
  class ListMessagesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMessagesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(MessageLevel, messageLevel_);
      DARABONBA_PTR_TO_JSON(MessageTimeEarlierThan, messageTimeEarlierThan_);
      DARABONBA_PTR_TO_JSON(MessageTimeLaterThan, messageTimeLaterThan_);
      DARABONBA_PTR_TO_JSON(MessageType, messageType_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
    };
    friend void from_json(const Darabonba::Json& j, ListMessagesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(MessageLevel, messageLevel_);
      DARABONBA_PTR_FROM_JSON(MessageTimeEarlierThan, messageTimeEarlierThan_);
      DARABONBA_PTR_FROM_JSON(MessageTimeLaterThan, messageTimeLaterThan_);
      DARABONBA_PTR_FROM_JSON(MessageType, messageType_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
    };
    ListMessagesRequest() = default ;
    ListMessagesRequest(const ListMessagesRequest &) = default ;
    ListMessagesRequest(ListMessagesRequest &&) = default ;
    ListMessagesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMessagesRequest() = default ;
    ListMessagesRequest& operator=(const ListMessagesRequest &) = default ;
    ListMessagesRequest& operator=(ListMessagesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->messageLevel_ == nullptr && this->messageTimeEarlierThan_ == nullptr && this->messageTimeLaterThan_ == nullptr && this->messageType_ == nullptr && this->nextToken_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListMessagesRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // messageLevel Field Functions 
    bool hasMessageLevel() const { return this->messageLevel_ != nullptr;};
    void deleteMessageLevel() { this->messageLevel_ = nullptr;};
    inline string getMessageLevel() const { DARABONBA_PTR_GET_DEFAULT(messageLevel_, "") };
    inline ListMessagesRequest& setMessageLevel(string messageLevel) { DARABONBA_PTR_SET_VALUE(messageLevel_, messageLevel) };


    // messageTimeEarlierThan Field Functions 
    bool hasMessageTimeEarlierThan() const { return this->messageTimeEarlierThan_ != nullptr;};
    void deleteMessageTimeEarlierThan() { this->messageTimeEarlierThan_ = nullptr;};
    inline int64_t getMessageTimeEarlierThan() const { DARABONBA_PTR_GET_DEFAULT(messageTimeEarlierThan_, 0L) };
    inline ListMessagesRequest& setMessageTimeEarlierThan(int64_t messageTimeEarlierThan) { DARABONBA_PTR_SET_VALUE(messageTimeEarlierThan_, messageTimeEarlierThan) };


    // messageTimeLaterThan Field Functions 
    bool hasMessageTimeLaterThan() const { return this->messageTimeLaterThan_ != nullptr;};
    void deleteMessageTimeLaterThan() { this->messageTimeLaterThan_ = nullptr;};
    inline int64_t getMessageTimeLaterThan() const { DARABONBA_PTR_GET_DEFAULT(messageTimeLaterThan_, 0L) };
    inline ListMessagesRequest& setMessageTimeLaterThan(int64_t messageTimeLaterThan) { DARABONBA_PTR_SET_VALUE(messageTimeLaterThan_, messageTimeLaterThan) };


    // messageType Field Functions 
    bool hasMessageType() const { return this->messageType_ != nullptr;};
    void deleteMessageType() { this->messageType_ = nullptr;};
    inline string getMessageType() const { DARABONBA_PTR_GET_DEFAULT(messageType_, "") };
    inline ListMessagesRequest& setMessageType(string messageType) { DARABONBA_PTR_SET_VALUE(messageType_, messageType) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListMessagesRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


  protected:
    // The maximum number of records to return in this request.
    shared_ptr<int32_t> maxResults_ {};
    // Message level.
    shared_ptr<string> messageLevel_ {};
    // Messages with time earlier than this value.
    shared_ptr<int64_t> messageTimeEarlierThan_ {};
    // Messages with time later than this value.
    shared_ptr<int64_t> messageTimeLaterThan_ {};
    // Message type.
    shared_ptr<string> messageType_ {};
    // The pagination token. If more entries are to be returned on the next page, a pagination token is returned.
    // 
    // > If this parameter returns data, it indicates that there are more pages. You can use the returned NextToken as a request parameter to obtain the next page of data until it returns Null, indicating that all data has been obtained.
    shared_ptr<string> nextToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BDRC20230808
#endif
