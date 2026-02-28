// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERTCCHANNELLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERTCCHANNELLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class DescribeRtcChannelListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRtcChannelListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ChannelList, channelList_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCnt, totalCnt_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRtcChannelListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ChannelList, channelList_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCnt, totalCnt_);
    };
    DescribeRtcChannelListResponseBody() = default ;
    DescribeRtcChannelListResponseBody(const DescribeRtcChannelListResponseBody &) = default ;
    DescribeRtcChannelListResponseBody(DescribeRtcChannelListResponseBody &&) = default ;
    DescribeRtcChannelListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRtcChannelListResponseBody() = default ;
    DescribeRtcChannelListResponseBody& operator=(const DescribeRtcChannelListResponseBody &) = default ;
    DescribeRtcChannelListResponseBody& operator=(DescribeRtcChannelListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ChannelList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ChannelList& obj) { 
        DARABONBA_PTR_TO_JSON(ChannelList, channelList_);
      };
      friend void from_json(const Darabonba::Json& j, ChannelList& obj) { 
        DARABONBA_PTR_FROM_JSON(ChannelList, channelList_);
      };
      ChannelList() = default ;
      ChannelList(const ChannelList &) = default ;
      ChannelList(ChannelList &&) = default ;
      ChannelList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ChannelList() = default ;
      ChannelList& operator=(const ChannelList &) = default ;
      ChannelList& operator=(ChannelList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ChannelListItem : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ChannelListItem& obj) { 
          DARABONBA_PTR_TO_JSON(CallArea, callArea_);
          DARABONBA_PTR_TO_JSON(ChannelId, channelId_);
          DARABONBA_PTR_TO_JSON(EndTime, endTime_);
          DARABONBA_PTR_TO_JSON(StartTime, startTime_);
          DARABONBA_PTR_TO_JSON(TotalUserCnt, totalUserCnt_);
        };
        friend void from_json(const Darabonba::Json& j, ChannelListItem& obj) { 
          DARABONBA_PTR_FROM_JSON(CallArea, callArea_);
          DARABONBA_PTR_FROM_JSON(ChannelId, channelId_);
          DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
          DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
          DARABONBA_PTR_FROM_JSON(TotalUserCnt, totalUserCnt_);
        };
        ChannelListItem() = default ;
        ChannelListItem(const ChannelListItem &) = default ;
        ChannelListItem(ChannelListItem &&) = default ;
        ChannelListItem(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ChannelListItem() = default ;
        ChannelListItem& operator=(const ChannelListItem &) = default ;
        ChannelListItem& operator=(ChannelListItem &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class CallArea : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const CallArea& obj) { 
            DARABONBA_PTR_TO_JSON(CallArea, callArea_);
          };
          friend void from_json(const Darabonba::Json& j, CallArea& obj) { 
            DARABONBA_PTR_FROM_JSON(CallArea, callArea_);
          };
          CallArea() = default ;
          CallArea(const CallArea &) = default ;
          CallArea(CallArea &&) = default ;
          CallArea(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~CallArea() = default ;
          CallArea& operator=(const CallArea &) = default ;
          CallArea& operator=(CallArea &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->callArea_ == nullptr; };
          // callArea Field Functions 
          bool hasCallArea() const { return this->callArea_ != nullptr;};
          void deleteCallArea() { this->callArea_ = nullptr;};
          inline const vector<string> & getCallArea() const { DARABONBA_PTR_GET_CONST(callArea_, vector<string>) };
          inline vector<string> getCallArea() { DARABONBA_PTR_GET(callArea_, vector<string>) };
          inline CallArea& setCallArea(const vector<string> & callArea) { DARABONBA_PTR_SET_VALUE(callArea_, callArea) };
          inline CallArea& setCallArea(vector<string> && callArea) { DARABONBA_PTR_SET_RVALUE(callArea_, callArea) };


        protected:
          shared_ptr<vector<string>> callArea_ {};
        };

        virtual bool empty() const override { return this->callArea_ == nullptr
        && this->channelId_ == nullptr && this->endTime_ == nullptr && this->startTime_ == nullptr && this->totalUserCnt_ == nullptr; };
        // callArea Field Functions 
        bool hasCallArea() const { return this->callArea_ != nullptr;};
        void deleteCallArea() { this->callArea_ = nullptr;};
        inline const ChannelListItem::CallArea & getCallArea() const { DARABONBA_PTR_GET_CONST(callArea_, ChannelListItem::CallArea) };
        inline ChannelListItem::CallArea getCallArea() { DARABONBA_PTR_GET(callArea_, ChannelListItem::CallArea) };
        inline ChannelListItem& setCallArea(const ChannelListItem::CallArea & callArea) { DARABONBA_PTR_SET_VALUE(callArea_, callArea) };
        inline ChannelListItem& setCallArea(ChannelListItem::CallArea && callArea) { DARABONBA_PTR_SET_RVALUE(callArea_, callArea) };


        // channelId Field Functions 
        bool hasChannelId() const { return this->channelId_ != nullptr;};
        void deleteChannelId() { this->channelId_ = nullptr;};
        inline string getChannelId() const { DARABONBA_PTR_GET_DEFAULT(channelId_, "") };
        inline ChannelListItem& setChannelId(string channelId) { DARABONBA_PTR_SET_VALUE(channelId_, channelId) };


        // endTime Field Functions 
        bool hasEndTime() const { return this->endTime_ != nullptr;};
        void deleteEndTime() { this->endTime_ = nullptr;};
        inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
        inline ChannelListItem& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


        // startTime Field Functions 
        bool hasStartTime() const { return this->startTime_ != nullptr;};
        void deleteStartTime() { this->startTime_ = nullptr;};
        inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
        inline ChannelListItem& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


        // totalUserCnt Field Functions 
        bool hasTotalUserCnt() const { return this->totalUserCnt_ != nullptr;};
        void deleteTotalUserCnt() { this->totalUserCnt_ = nullptr;};
        inline int64_t getTotalUserCnt() const { DARABONBA_PTR_GET_DEFAULT(totalUserCnt_, 0L) };
        inline ChannelListItem& setTotalUserCnt(int64_t totalUserCnt) { DARABONBA_PTR_SET_VALUE(totalUserCnt_, totalUserCnt) };


      protected:
        shared_ptr<ChannelListItem::CallArea> callArea_ {};
        shared_ptr<string> channelId_ {};
        shared_ptr<string> endTime_ {};
        shared_ptr<string> startTime_ {};
        shared_ptr<int64_t> totalUserCnt_ {};
      };

      virtual bool empty() const override { return this->channelList_ == nullptr; };
      // channelList Field Functions 
      bool hasChannelList() const { return this->channelList_ != nullptr;};
      void deleteChannelList() { this->channelList_ = nullptr;};
      inline const vector<ChannelList::ChannelListItem> & getChannelList() const { DARABONBA_PTR_GET_CONST(channelList_, vector<ChannelList::ChannelListItem>) };
      inline vector<ChannelList::ChannelListItem> getChannelList() { DARABONBA_PTR_GET(channelList_, vector<ChannelList::ChannelListItem>) };
      inline ChannelList& setChannelList(const vector<ChannelList::ChannelListItem> & channelList) { DARABONBA_PTR_SET_VALUE(channelList_, channelList) };
      inline ChannelList& setChannelList(vector<ChannelList::ChannelListItem> && channelList) { DARABONBA_PTR_SET_RVALUE(channelList_, channelList) };


    protected:
      shared_ptr<vector<ChannelList::ChannelListItem>> channelList_ {};
    };

    virtual bool empty() const override { return this->channelList_ == nullptr
        && this->pageNo_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCnt_ == nullptr; };
    // channelList Field Functions 
    bool hasChannelList() const { return this->channelList_ != nullptr;};
    void deleteChannelList() { this->channelList_ = nullptr;};
    inline const DescribeRtcChannelListResponseBody::ChannelList & getChannelList() const { DARABONBA_PTR_GET_CONST(channelList_, DescribeRtcChannelListResponseBody::ChannelList) };
    inline DescribeRtcChannelListResponseBody::ChannelList getChannelList() { DARABONBA_PTR_GET(channelList_, DescribeRtcChannelListResponseBody::ChannelList) };
    inline DescribeRtcChannelListResponseBody& setChannelList(const DescribeRtcChannelListResponseBody::ChannelList & channelList) { DARABONBA_PTR_SET_VALUE(channelList_, channelList) };
    inline DescribeRtcChannelListResponseBody& setChannelList(DescribeRtcChannelListResponseBody::ChannelList && channelList) { DARABONBA_PTR_SET_RVALUE(channelList_, channelList) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int64_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0L) };
    inline DescribeRtcChannelListResponseBody& setPageNo(int64_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline DescribeRtcChannelListResponseBody& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRtcChannelListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCnt Field Functions 
    bool hasTotalCnt() const { return this->totalCnt_ != nullptr;};
    void deleteTotalCnt() { this->totalCnt_ = nullptr;};
    inline int64_t getTotalCnt() const { DARABONBA_PTR_GET_DEFAULT(totalCnt_, 0L) };
    inline DescribeRtcChannelListResponseBody& setTotalCnt(int64_t totalCnt) { DARABONBA_PTR_SET_VALUE(totalCnt_, totalCnt) };


  protected:
    shared_ptr<DescribeRtcChannelListResponseBody::ChannelList> channelList_ {};
    shared_ptr<int64_t> pageNo_ {};
    shared_ptr<int64_t> pageSize_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int64_t> totalCnt_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
