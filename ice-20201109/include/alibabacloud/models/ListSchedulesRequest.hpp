// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSCHEDULESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSCHEDULESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListSchedulesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSchedulesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ChannelName, channelName_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(WindowDurationSeconds, windowDurationSeconds_);
    };
    friend void from_json(const Darabonba::Json& j, ListSchedulesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ChannelName, channelName_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(WindowDurationSeconds, windowDurationSeconds_);
    };
    ListSchedulesRequest() = default ;
    ListSchedulesRequest(const ListSchedulesRequest &) = default ;
    ListSchedulesRequest(ListSchedulesRequest &&) = default ;
    ListSchedulesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSchedulesRequest() = default ;
    ListSchedulesRequest& operator=(const ListSchedulesRequest &) = default ;
    ListSchedulesRequest& operator=(ListSchedulesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->channelName_ == nullptr
        && this->pageNo_ == nullptr && this->pageSize_ == nullptr && this->windowDurationSeconds_ == nullptr; };
    // channelName Field Functions 
    bool hasChannelName() const { return this->channelName_ != nullptr;};
    void deleteChannelName() { this->channelName_ = nullptr;};
    inline string getChannelName() const { DARABONBA_PTR_GET_DEFAULT(channelName_, "") };
    inline ListSchedulesRequest& setChannelName(string channelName) { DARABONBA_PTR_SET_VALUE(channelName_, channelName) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int32_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
    inline ListSchedulesRequest& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListSchedulesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // windowDurationSeconds Field Functions 
    bool hasWindowDurationSeconds() const { return this->windowDurationSeconds_ != nullptr;};
    void deleteWindowDurationSeconds() { this->windowDurationSeconds_ = nullptr;};
    inline int64_t getWindowDurationSeconds() const { DARABONBA_PTR_GET_DEFAULT(windowDurationSeconds_, 0L) };
    inline ListSchedulesRequest& setWindowDurationSeconds(int64_t windowDurationSeconds) { DARABONBA_PTR_SET_VALUE(windowDurationSeconds_, windowDurationSeconds) };


  protected:
    // The name of the channel.
    // 
    // This parameter is required.
    shared_ptr<string> channelName_ {};
    // The page number. Default value: 1.
    shared_ptr<int32_t> pageNo_ {};
    // The number of entries per page. Default value: 10.
    shared_ptr<int32_t> pageSize_ {};
    // The time window of the program schedule.
    // 
    // This parameter is required.
    shared_ptr<int64_t> windowDurationSeconds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
