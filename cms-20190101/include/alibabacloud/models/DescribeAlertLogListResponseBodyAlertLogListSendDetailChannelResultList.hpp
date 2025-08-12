// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEALERTLOGLISTRESPONSEBODYALERTLOGLISTSENDDETAILCHANNELRESULTLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEALERTLOGLISTRESPONSEBODYALERTLOGLISTSENDDETAILCHANNELRESULTLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeAlertLogListResponseBodyAlertLogListSendDetailChannelResultListResultList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeAlertLogListResponseBodyAlertLogListSendDetailChannelResultList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAlertLogListResponseBodyAlertLogListSendDetailChannelResultList& obj) { 
      DARABONBA_PTR_TO_JSON(Channel, channel_);
      DARABONBA_PTR_TO_JSON(ResultList, resultList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAlertLogListResponseBodyAlertLogListSendDetailChannelResultList& obj) { 
      DARABONBA_PTR_FROM_JSON(Channel, channel_);
      DARABONBA_PTR_FROM_JSON(ResultList, resultList_);
    };
    DescribeAlertLogListResponseBodyAlertLogListSendDetailChannelResultList() = default ;
    DescribeAlertLogListResponseBodyAlertLogListSendDetailChannelResultList(const DescribeAlertLogListResponseBodyAlertLogListSendDetailChannelResultList &) = default ;
    DescribeAlertLogListResponseBodyAlertLogListSendDetailChannelResultList(DescribeAlertLogListResponseBodyAlertLogListSendDetailChannelResultList &&) = default ;
    DescribeAlertLogListResponseBodyAlertLogListSendDetailChannelResultList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAlertLogListResponseBodyAlertLogListSendDetailChannelResultList() = default ;
    DescribeAlertLogListResponseBodyAlertLogListSendDetailChannelResultList& operator=(const DescribeAlertLogListResponseBodyAlertLogListSendDetailChannelResultList &) = default ;
    DescribeAlertLogListResponseBodyAlertLogListSendDetailChannelResultList& operator=(DescribeAlertLogListResponseBodyAlertLogListSendDetailChannelResultList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->channel_ != nullptr
        && this->resultList_ != nullptr; };
    // channel Field Functions 
    bool hasChannel() const { return this->channel_ != nullptr;};
    void deleteChannel() { this->channel_ = nullptr;};
    inline string channel() const { DARABONBA_PTR_GET_DEFAULT(channel_, "") };
    inline DescribeAlertLogListResponseBodyAlertLogListSendDetailChannelResultList& setChannel(string channel) { DARABONBA_PTR_SET_VALUE(channel_, channel) };


    // resultList Field Functions 
    bool hasResultList() const { return this->resultList_ != nullptr;};
    void deleteResultList() { this->resultList_ = nullptr;};
    inline const vector<Models::DescribeAlertLogListResponseBodyAlertLogListSendDetailChannelResultListResultList> & resultList() const { DARABONBA_PTR_GET_CONST(resultList_, vector<Models::DescribeAlertLogListResponseBodyAlertLogListSendDetailChannelResultListResultList>) };
    inline vector<Models::DescribeAlertLogListResponseBodyAlertLogListSendDetailChannelResultListResultList> resultList() { DARABONBA_PTR_GET(resultList_, vector<Models::DescribeAlertLogListResponseBodyAlertLogListSendDetailChannelResultListResultList>) };
    inline DescribeAlertLogListResponseBodyAlertLogListSendDetailChannelResultList& setResultList(const vector<Models::DescribeAlertLogListResponseBodyAlertLogListSendDetailChannelResultListResultList> & resultList) { DARABONBA_PTR_SET_VALUE(resultList_, resultList) };
    inline DescribeAlertLogListResponseBodyAlertLogListSendDetailChannelResultList& setResultList(vector<Models::DescribeAlertLogListResponseBodyAlertLogListSendDetailChannelResultListResultList> && resultList) { DARABONBA_PTR_SET_RVALUE(resultList_, resultList) };


  protected:
    // The method that is used to send alert notifications. Valid values:
    // 
    // *   MAIL: email
    // *   SMS: text message
    // *   WEBHOOK: alert callback
    // *   SLS: Simple Log Service
    // *   ONCALL: phone call
    // *   FC: Function Compute
    // *   MNS: Message Service queue
    std::shared_ptr<string> channel_ = nullptr;
    // The sending results of alert notifications.
    std::shared_ptr<vector<Models::DescribeAlertLogListResponseBodyAlertLogListSendDetailChannelResultListResultList>> resultList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
