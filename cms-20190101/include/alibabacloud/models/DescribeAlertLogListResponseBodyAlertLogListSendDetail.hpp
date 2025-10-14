// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEALERTLOGLISTRESPONSEBODYALERTLOGLISTSENDDETAIL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEALERTLOGLISTRESPONSEBODYALERTLOGLISTSENDDETAIL_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeAlertLogListResponseBodyAlertLogListSendDetailChannelResultList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeAlertLogListResponseBodyAlertLogListSendDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAlertLogListResponseBodyAlertLogListSendDetail& obj) { 
      DARABONBA_PTR_TO_JSON(ChannelResultList, channelResultList_);
      DARABONBA_PTR_TO_JSON(ResultCode, resultCode_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAlertLogListResponseBodyAlertLogListSendDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(ChannelResultList, channelResultList_);
      DARABONBA_PTR_FROM_JSON(ResultCode, resultCode_);
    };
    DescribeAlertLogListResponseBodyAlertLogListSendDetail() = default ;
    DescribeAlertLogListResponseBodyAlertLogListSendDetail(const DescribeAlertLogListResponseBodyAlertLogListSendDetail &) = default ;
    DescribeAlertLogListResponseBodyAlertLogListSendDetail(DescribeAlertLogListResponseBodyAlertLogListSendDetail &&) = default ;
    DescribeAlertLogListResponseBodyAlertLogListSendDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAlertLogListResponseBodyAlertLogListSendDetail() = default ;
    DescribeAlertLogListResponseBodyAlertLogListSendDetail& operator=(const DescribeAlertLogListResponseBodyAlertLogListSendDetail &) = default ;
    DescribeAlertLogListResponseBodyAlertLogListSendDetail& operator=(DescribeAlertLogListResponseBodyAlertLogListSendDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->channelResultList_ == nullptr
        && return this->resultCode_ == nullptr; };
    // channelResultList Field Functions 
    bool hasChannelResultList() const { return this->channelResultList_ != nullptr;};
    void deleteChannelResultList() { this->channelResultList_ = nullptr;};
    inline const vector<Models::DescribeAlertLogListResponseBodyAlertLogListSendDetailChannelResultList> & channelResultList() const { DARABONBA_PTR_GET_CONST(channelResultList_, vector<Models::DescribeAlertLogListResponseBodyAlertLogListSendDetailChannelResultList>) };
    inline vector<Models::DescribeAlertLogListResponseBodyAlertLogListSendDetailChannelResultList> channelResultList() { DARABONBA_PTR_GET(channelResultList_, vector<Models::DescribeAlertLogListResponseBodyAlertLogListSendDetailChannelResultList>) };
    inline DescribeAlertLogListResponseBodyAlertLogListSendDetail& setChannelResultList(const vector<Models::DescribeAlertLogListResponseBodyAlertLogListSendDetailChannelResultList> & channelResultList) { DARABONBA_PTR_SET_VALUE(channelResultList_, channelResultList) };
    inline DescribeAlertLogListResponseBodyAlertLogListSendDetail& setChannelResultList(vector<Models::DescribeAlertLogListResponseBodyAlertLogListSendDetailChannelResultList> && channelResultList) { DARABONBA_PTR_SET_RVALUE(channelResultList_, channelResultList) };


    // resultCode Field Functions 
    bool hasResultCode() const { return this->resultCode_ != nullptr;};
    void deleteResultCode() { this->resultCode_ = nullptr;};
    inline string resultCode() const { DARABONBA_PTR_GET_DEFAULT(resultCode_, "") };
    inline DescribeAlertLogListResponseBodyAlertLogListSendDetail& setResultCode(string resultCode) { DARABONBA_PTR_SET_VALUE(resultCode_, resultCode) };


  protected:
    // The list of sending results that are categorized by notification method.
    std::shared_ptr<vector<Models::DescribeAlertLogListResponseBodyAlertLogListSendDetailChannelResultList>> channelResultList_ = nullptr;
    // Indicates whether the alert notifications are sent.
    // 
    // *   If the alert notifications are sent, the value "success" is returned.
    // *   If the configuration is invalid, no alert notification is sent and an error code is returned.
    std::shared_ptr<string> resultCode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
