// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESCREENALARMEVENTLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESCREENALARMEVENTLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeScreenAlarmEventListResponseBodyPageInfo.hpp>
#include <vector>
#include <alibabacloud/models/DescribeScreenAlarmEventListResponseBodySuspEvents.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20210114
{
namespace Models
{
  class DescribeScreenAlarmEventListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeScreenAlarmEventListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SuspEvents, suspEvents_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeScreenAlarmEventListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SuspEvents, suspEvents_);
    };
    DescribeScreenAlarmEventListResponseBody() = default ;
    DescribeScreenAlarmEventListResponseBody(const DescribeScreenAlarmEventListResponseBody &) = default ;
    DescribeScreenAlarmEventListResponseBody(DescribeScreenAlarmEventListResponseBody &&) = default ;
    DescribeScreenAlarmEventListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeScreenAlarmEventListResponseBody() = default ;
    DescribeScreenAlarmEventListResponseBody& operator=(const DescribeScreenAlarmEventListResponseBody &) = default ;
    DescribeScreenAlarmEventListResponseBody& operator=(DescribeScreenAlarmEventListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pageInfo_ == nullptr
        && return this->requestId_ == nullptr && return this->suspEvents_ == nullptr; };
    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const DescribeScreenAlarmEventListResponseBodyPageInfo & pageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, DescribeScreenAlarmEventListResponseBodyPageInfo) };
    inline DescribeScreenAlarmEventListResponseBodyPageInfo pageInfo() { DARABONBA_PTR_GET(pageInfo_, DescribeScreenAlarmEventListResponseBodyPageInfo) };
    inline DescribeScreenAlarmEventListResponseBody& setPageInfo(const DescribeScreenAlarmEventListResponseBodyPageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline DescribeScreenAlarmEventListResponseBody& setPageInfo(DescribeScreenAlarmEventListResponseBodyPageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeScreenAlarmEventListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // suspEvents Field Functions 
    bool hasSuspEvents() const { return this->suspEvents_ != nullptr;};
    void deleteSuspEvents() { this->suspEvents_ = nullptr;};
    inline const vector<DescribeScreenAlarmEventListResponseBodySuspEvents> & suspEvents() const { DARABONBA_PTR_GET_CONST(suspEvents_, vector<DescribeScreenAlarmEventListResponseBodySuspEvents>) };
    inline vector<DescribeScreenAlarmEventListResponseBodySuspEvents> suspEvents() { DARABONBA_PTR_GET(suspEvents_, vector<DescribeScreenAlarmEventListResponseBodySuspEvents>) };
    inline DescribeScreenAlarmEventListResponseBody& setSuspEvents(const vector<DescribeScreenAlarmEventListResponseBodySuspEvents> & suspEvents) { DARABONBA_PTR_SET_VALUE(suspEvents_, suspEvents) };
    inline DescribeScreenAlarmEventListResponseBody& setSuspEvents(vector<DescribeScreenAlarmEventListResponseBodySuspEvents> && suspEvents) { DARABONBA_PTR_SET_RVALUE(suspEvents_, suspEvents) };


  protected:
    std::shared_ptr<DescribeScreenAlarmEventListResponseBodyPageInfo> pageInfo_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<vector<DescribeScreenAlarmEventListResponseBodySuspEvents>> suspEvents_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20210114
#endif
