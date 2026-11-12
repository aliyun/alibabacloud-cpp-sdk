// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMYAGENTICNOTIFICATIONCHANNELCONFIGSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTMYAGENTICNOTIFICATIONCHANNELCONFIGSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class ListMyAgenticNotificationChannelConfigsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMyAgenticNotificationChannelConfigsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Channel, channel_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
    };
    friend void from_json(const Darabonba::Json& j, ListMyAgenticNotificationChannelConfigsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Channel, channel_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
    };
    ListMyAgenticNotificationChannelConfigsRequest() = default ;
    ListMyAgenticNotificationChannelConfigsRequest(const ListMyAgenticNotificationChannelConfigsRequest &) = default ;
    ListMyAgenticNotificationChannelConfigsRequest(ListMyAgenticNotificationChannelConfigsRequest &&) = default ;
    ListMyAgenticNotificationChannelConfigsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMyAgenticNotificationChannelConfigsRequest() = default ;
    ListMyAgenticNotificationChannelConfigsRequest& operator=(const ListMyAgenticNotificationChannelConfigsRequest &) = default ;
    ListMyAgenticNotificationChannelConfigsRequest& operator=(ListMyAgenticNotificationChannelConfigsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->channel_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr; };
    // channel Field Functions 
    bool hasChannel() const { return this->channel_ != nullptr;};
    void deleteChannel() { this->channel_ = nullptr;};
    inline string getChannel() const { DARABONBA_PTR_GET_DEFAULT(channel_, "") };
    inline ListMyAgenticNotificationChannelConfigsRequest& setChannel(string channel) { DARABONBA_PTR_SET_VALUE(channel_, channel) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListMyAgenticNotificationChannelConfigsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListMyAgenticNotificationChannelConfigsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


  protected:
    // The notification channel type used to filter results. If you do not specify this parameter, all personal notification channels are returned. Currently, only FEISHU (Lark) is supported. Specifying other values results in a parameter error.
    shared_ptr<string> channel_ {};
    // The maximum number of records to return per page. Valid values: 1 to 100. Default value: 20.
    shared_ptr<int32_t> maxResults_ {};
    // The paging token for the paged query. Do not specify this parameter for the first query. To query the next page, specify the NextToken value returned in the previous response.
    shared_ptr<string> nextToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
