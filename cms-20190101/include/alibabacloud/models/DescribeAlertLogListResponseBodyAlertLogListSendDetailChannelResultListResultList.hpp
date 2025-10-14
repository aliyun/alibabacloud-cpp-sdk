// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEALERTLOGLISTRESPONSEBODYALERTLOGLISTSENDDETAILCHANNELRESULTLISTRESULTLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEALERTLOGLISTRESPONSEBODYALERTLOGLISTSENDDETAILCHANNELRESULTLISTRESULTLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeAlertLogListResponseBodyAlertLogListSendDetailChannelResultListResultList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAlertLogListResponseBodyAlertLogListSendDetailChannelResultListResultList& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Detail, detail_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(notifyTargetList, notifyTargetList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAlertLogListResponseBodyAlertLogListSendDetailChannelResultListResultList& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Detail, detail_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(notifyTargetList, notifyTargetList_);
    };
    DescribeAlertLogListResponseBodyAlertLogListSendDetailChannelResultListResultList() = default ;
    DescribeAlertLogListResponseBodyAlertLogListSendDetailChannelResultListResultList(const DescribeAlertLogListResponseBodyAlertLogListSendDetailChannelResultListResultList &) = default ;
    DescribeAlertLogListResponseBodyAlertLogListSendDetailChannelResultListResultList(DescribeAlertLogListResponseBodyAlertLogListSendDetailChannelResultListResultList &&) = default ;
    DescribeAlertLogListResponseBodyAlertLogListSendDetailChannelResultListResultList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAlertLogListResponseBodyAlertLogListSendDetailChannelResultListResultList() = default ;
    DescribeAlertLogListResponseBodyAlertLogListSendDetailChannelResultListResultList& operator=(const DescribeAlertLogListResponseBodyAlertLogListSendDetailChannelResultListResultList &) = default ;
    DescribeAlertLogListResponseBodyAlertLogListSendDetailChannelResultListResultList& operator=(DescribeAlertLogListResponseBodyAlertLogListSendDetailChannelResultListResultList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->detail_ == nullptr && return this->requestId_ == nullptr && return this->success_ == nullptr && return this->notifyTargetList_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeAlertLogListResponseBodyAlertLogListSendDetailChannelResultListResultList& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // detail Field Functions 
    bool hasDetail() const { return this->detail_ != nullptr;};
    void deleteDetail() { this->detail_ = nullptr;};
    inline string detail() const { DARABONBA_PTR_GET_DEFAULT(detail_, "") };
    inline DescribeAlertLogListResponseBodyAlertLogListSendDetailChannelResultListResultList& setDetail(string detail) { DARABONBA_PTR_SET_VALUE(detail_, detail) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAlertLogListResponseBodyAlertLogListSendDetailChannelResultListResultList& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeAlertLogListResponseBodyAlertLogListSendDetailChannelResultListResultList& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // notifyTargetList Field Functions 
    bool hasNotifyTargetList() const { return this->notifyTargetList_ != nullptr;};
    void deleteNotifyTargetList() { this->notifyTargetList_ = nullptr;};
    inline const vector<string> & notifyTargetList() const { DARABONBA_PTR_GET_CONST(notifyTargetList_, vector<string>) };
    inline vector<string> notifyTargetList() { DARABONBA_PTR_GET(notifyTargetList_, vector<string>) };
    inline DescribeAlertLogListResponseBodyAlertLogListSendDetailChannelResultListResultList& setNotifyTargetList(const vector<string> & notifyTargetList) { DARABONBA_PTR_SET_VALUE(notifyTargetList_, notifyTargetList) };
    inline DescribeAlertLogListResponseBodyAlertLogListSendDetailChannelResultListResultList& setNotifyTargetList(vector<string> && notifyTargetList) { DARABONBA_PTR_SET_RVALUE(notifyTargetList_, notifyTargetList) };


  protected:
    // The HTTP status code.
    // 
    // *   If the value of the `Channel` parameter is `WEBHOOK`, the status code is 200 or 500.
    // *   If the value of the `Channel` parameter is `MAIL`, `SMS`, `SLS`, `ONCALL`, `FC`, or `MNS`, this parameter is empty or not returned.
    std::shared_ptr<string> code_ = nullptr;
    // The details of the returned results.
    std::shared_ptr<string> detail_ = nullptr;
    // The request ID returned when CloudMonitor calls another cloud service.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request was successful. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> success_ = nullptr;
    std::shared_ptr<vector<string>> notifyTargetList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
