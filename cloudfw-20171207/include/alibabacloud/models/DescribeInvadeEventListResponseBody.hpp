// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINVADEEVENTLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINVADEEVENTLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeInvadeEventListResponseBodyEventList.hpp>
#include <alibabacloud/models/DescribeInvadeEventListResponseBodyPageInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeInvadeEventListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInvadeEventListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(EventList, eventList_);
      DARABONBA_PTR_TO_JSON(HighLevelPercent, highLevelPercent_);
      DARABONBA_PTR_TO_JSON(LowLevelPercent, lowLevelPercent_);
      DARABONBA_PTR_TO_JSON(MiddleLevelPercent, middleLevelPercent_);
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInvadeEventListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(EventList, eventList_);
      DARABONBA_PTR_FROM_JSON(HighLevelPercent, highLevelPercent_);
      DARABONBA_PTR_FROM_JSON(LowLevelPercent, lowLevelPercent_);
      DARABONBA_PTR_FROM_JSON(MiddleLevelPercent, middleLevelPercent_);
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeInvadeEventListResponseBody() = default ;
    DescribeInvadeEventListResponseBody(const DescribeInvadeEventListResponseBody &) = default ;
    DescribeInvadeEventListResponseBody(DescribeInvadeEventListResponseBody &&) = default ;
    DescribeInvadeEventListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInvadeEventListResponseBody() = default ;
    DescribeInvadeEventListResponseBody& operator=(const DescribeInvadeEventListResponseBody &) = default ;
    DescribeInvadeEventListResponseBody& operator=(DescribeInvadeEventListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->eventList_ == nullptr
        && return this->highLevelPercent_ == nullptr && return this->lowLevelPercent_ == nullptr && return this->middleLevelPercent_ == nullptr && return this->pageInfo_ == nullptr && return this->requestId_ == nullptr; };
    // eventList Field Functions 
    bool hasEventList() const { return this->eventList_ != nullptr;};
    void deleteEventList() { this->eventList_ = nullptr;};
    inline const vector<DescribeInvadeEventListResponseBodyEventList> & eventList() const { DARABONBA_PTR_GET_CONST(eventList_, vector<DescribeInvadeEventListResponseBodyEventList>) };
    inline vector<DescribeInvadeEventListResponseBodyEventList> eventList() { DARABONBA_PTR_GET(eventList_, vector<DescribeInvadeEventListResponseBodyEventList>) };
    inline DescribeInvadeEventListResponseBody& setEventList(const vector<DescribeInvadeEventListResponseBodyEventList> & eventList) { DARABONBA_PTR_SET_VALUE(eventList_, eventList) };
    inline DescribeInvadeEventListResponseBody& setEventList(vector<DescribeInvadeEventListResponseBodyEventList> && eventList) { DARABONBA_PTR_SET_RVALUE(eventList_, eventList) };


    // highLevelPercent Field Functions 
    bool hasHighLevelPercent() const { return this->highLevelPercent_ != nullptr;};
    void deleteHighLevelPercent() { this->highLevelPercent_ = nullptr;};
    inline int32_t highLevelPercent() const { DARABONBA_PTR_GET_DEFAULT(highLevelPercent_, 0) };
    inline DescribeInvadeEventListResponseBody& setHighLevelPercent(int32_t highLevelPercent) { DARABONBA_PTR_SET_VALUE(highLevelPercent_, highLevelPercent) };


    // lowLevelPercent Field Functions 
    bool hasLowLevelPercent() const { return this->lowLevelPercent_ != nullptr;};
    void deleteLowLevelPercent() { this->lowLevelPercent_ = nullptr;};
    inline int32_t lowLevelPercent() const { DARABONBA_PTR_GET_DEFAULT(lowLevelPercent_, 0) };
    inline DescribeInvadeEventListResponseBody& setLowLevelPercent(int32_t lowLevelPercent) { DARABONBA_PTR_SET_VALUE(lowLevelPercent_, lowLevelPercent) };


    // middleLevelPercent Field Functions 
    bool hasMiddleLevelPercent() const { return this->middleLevelPercent_ != nullptr;};
    void deleteMiddleLevelPercent() { this->middleLevelPercent_ = nullptr;};
    inline int32_t middleLevelPercent() const { DARABONBA_PTR_GET_DEFAULT(middleLevelPercent_, 0) };
    inline DescribeInvadeEventListResponseBody& setMiddleLevelPercent(int32_t middleLevelPercent) { DARABONBA_PTR_SET_VALUE(middleLevelPercent_, middleLevelPercent) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const DescribeInvadeEventListResponseBodyPageInfo & pageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, DescribeInvadeEventListResponseBodyPageInfo) };
    inline DescribeInvadeEventListResponseBodyPageInfo pageInfo() { DARABONBA_PTR_GET(pageInfo_, DescribeInvadeEventListResponseBodyPageInfo) };
    inline DescribeInvadeEventListResponseBody& setPageInfo(const DescribeInvadeEventListResponseBodyPageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline DescribeInvadeEventListResponseBody& setPageInfo(DescribeInvadeEventListResponseBodyPageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeInvadeEventListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // An array that consists of breach awareness events.
    std::shared_ptr<vector<DescribeInvadeEventListResponseBodyEventList>> eventList_ = nullptr;
    // The percentage of high-risk events.
    std::shared_ptr<int32_t> highLevelPercent_ = nullptr;
    // The percentage of low-risk events.
    std::shared_ptr<int32_t> lowLevelPercent_ = nullptr;
    // The percentage of medium-risk events.
    std::shared_ptr<int32_t> middleLevelPercent_ = nullptr;
    // The pagination information.
    std::shared_ptr<DescribeInvadeEventListResponseBodyPageInfo> pageInfo_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
