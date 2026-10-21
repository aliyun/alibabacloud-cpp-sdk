// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCOPILOTMESSAGESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCOPILOTMESSAGESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20241212
{
namespace Models
{
  class ListCopilotMessagesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCopilotMessagesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Ascending, ascending_);
      DARABONBA_PTR_TO_JSON(ConversationId, conversationId_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(TraceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, ListCopilotMessagesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Ascending, ascending_);
      DARABONBA_PTR_FROM_JSON(ConversationId, conversationId_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(TraceId, traceId_);
    };
    ListCopilotMessagesRequest() = default ;
    ListCopilotMessagesRequest(const ListCopilotMessagesRequest &) = default ;
    ListCopilotMessagesRequest(ListCopilotMessagesRequest &&) = default ;
    ListCopilotMessagesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCopilotMessagesRequest() = default ;
    ListCopilotMessagesRequest& operator=(const ListCopilotMessagesRequest &) = default ;
    ListCopilotMessagesRequest& operator=(ListCopilotMessagesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ascending_ == nullptr
        && this->conversationId_ == nullptr && this->lang_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->regionId_ == nullptr
        && this->traceId_ == nullptr; };
    // ascending Field Functions 
    bool hasAscending() const { return this->ascending_ != nullptr;};
    void deleteAscending() { this->ascending_ = nullptr;};
    inline bool getAscending() const { DARABONBA_PTR_GET_DEFAULT(ascending_, false) };
    inline ListCopilotMessagesRequest& setAscending(bool ascending) { DARABONBA_PTR_SET_VALUE(ascending_, ascending) };


    // conversationId Field Functions 
    bool hasConversationId() const { return this->conversationId_ != nullptr;};
    void deleteConversationId() { this->conversationId_ = nullptr;};
    inline string getConversationId() const { DARABONBA_PTR_GET_DEFAULT(conversationId_, "") };
    inline ListCopilotMessagesRequest& setConversationId(string conversationId) { DARABONBA_PTR_SET_VALUE(conversationId_, conversationId) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline ListCopilotMessagesRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListCopilotMessagesRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListCopilotMessagesRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListCopilotMessagesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline ListCopilotMessagesRequest& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    // Used together with the SortingField parameter. A value of **true** specifies ascending order, and a value of **false** specifies descending order.
    shared_ptr<bool> ascending_ {};
    // The conversation ID.
    // 
    // This parameter is required.
    shared_ptr<string> conversationId_ {};
    // The language of the returned messages. Valid values:
    // - **zh** (default): Chinese.
    // - **en**: English.
    shared_ptr<string> lang_ {};
    // The maximum number of results to return when you use the NextToken-based pagination method. Valid values: 1 to 100. Default value: 50.
    shared_ptr<int32_t> maxResults_ {};
    // The token that marks the position from which you want to start the query. Leave this parameter empty to query from the beginning.
    shared_ptr<string> nextToken_ {};
    // The region where the Cloud Threat Detection and Response (CTDR) data management center resides. Specify the management center based on the region where your assets reside. Valid values:
    // - cn-hangzhou: Your assets reside in the Chinese mainland or Hong Kong (China).
    // - ap-southeast-1: Your assets reside in regions outside China.
    shared_ptr<string> regionId_ {};
    // The trace ID, which is used to query specific call information.
    shared_ptr<string> traceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20241212
#endif
