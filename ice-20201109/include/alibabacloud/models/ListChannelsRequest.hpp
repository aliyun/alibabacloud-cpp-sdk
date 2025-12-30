// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCHANNELSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCHANNELSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListChannelsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListChannelsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ChannelName, channelName_);
      DARABONBA_PTR_TO_JSON(ChannelTier, channelTier_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PlaybackMode, playbackMode_);
      DARABONBA_PTR_TO_JSON(SortBy, sortBy_);
      DARABONBA_PTR_TO_JSON(SortByModifiedTime, sortByModifiedTime_);
      DARABONBA_PTR_TO_JSON(State, state_);
    };
    friend void from_json(const Darabonba::Json& j, ListChannelsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ChannelName, channelName_);
      DARABONBA_PTR_FROM_JSON(ChannelTier, channelTier_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PlaybackMode, playbackMode_);
      DARABONBA_PTR_FROM_JSON(SortBy, sortBy_);
      DARABONBA_PTR_FROM_JSON(SortByModifiedTime, sortByModifiedTime_);
      DARABONBA_PTR_FROM_JSON(State, state_);
    };
    ListChannelsRequest() = default ;
    ListChannelsRequest(const ListChannelsRequest &) = default ;
    ListChannelsRequest(ListChannelsRequest &&) = default ;
    ListChannelsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListChannelsRequest() = default ;
    ListChannelsRequest& operator=(const ListChannelsRequest &) = default ;
    ListChannelsRequest& operator=(ListChannelsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->channelName_ == nullptr
        && this->channelTier_ == nullptr && this->pageNo_ == nullptr && this->pageSize_ == nullptr && this->playbackMode_ == nullptr && this->sortBy_ == nullptr
        && this->sortByModifiedTime_ == nullptr && this->state_ == nullptr; };
    // channelName Field Functions 
    bool hasChannelName() const { return this->channelName_ != nullptr;};
    void deleteChannelName() { this->channelName_ = nullptr;};
    inline string getChannelName() const { DARABONBA_PTR_GET_DEFAULT(channelName_, "") };
    inline ListChannelsRequest& setChannelName(string channelName) { DARABONBA_PTR_SET_VALUE(channelName_, channelName) };


    // channelTier Field Functions 
    bool hasChannelTier() const { return this->channelTier_ != nullptr;};
    void deleteChannelTier() { this->channelTier_ = nullptr;};
    inline string getChannelTier() const { DARABONBA_PTR_GET_DEFAULT(channelTier_, "") };
    inline ListChannelsRequest& setChannelTier(string channelTier) { DARABONBA_PTR_SET_VALUE(channelTier_, channelTier) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int32_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
    inline ListChannelsRequest& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListChannelsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // playbackMode Field Functions 
    bool hasPlaybackMode() const { return this->playbackMode_ != nullptr;};
    void deletePlaybackMode() { this->playbackMode_ = nullptr;};
    inline string getPlaybackMode() const { DARABONBA_PTR_GET_DEFAULT(playbackMode_, "") };
    inline ListChannelsRequest& setPlaybackMode(string playbackMode) { DARABONBA_PTR_SET_VALUE(playbackMode_, playbackMode) };


    // sortBy Field Functions 
    bool hasSortBy() const { return this->sortBy_ != nullptr;};
    void deleteSortBy() { this->sortBy_ = nullptr;};
    inline string getSortBy() const { DARABONBA_PTR_GET_DEFAULT(sortBy_, "") };
    inline ListChannelsRequest& setSortBy(string sortBy) { DARABONBA_PTR_SET_VALUE(sortBy_, sortBy) };


    // sortByModifiedTime Field Functions 
    bool hasSortByModifiedTime() const { return this->sortByModifiedTime_ != nullptr;};
    void deleteSortByModifiedTime() { this->sortByModifiedTime_ = nullptr;};
    inline string getSortByModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(sortByModifiedTime_, "") };
    inline ListChannelsRequest& setSortByModifiedTime(string sortByModifiedTime) { DARABONBA_PTR_SET_VALUE(sortByModifiedTime_, sortByModifiedTime) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline int32_t getState() const { DARABONBA_PTR_GET_DEFAULT(state_, 0) };
    inline ListChannelsRequest& setState(int32_t state) { DARABONBA_PTR_SET_VALUE(state_, state) };


  protected:
    // The name of the channel.
    shared_ptr<string> channelName_ {};
    // The tier of the channel. Valid values: basic and standard.
    shared_ptr<string> channelTier_ {};
    // The page number. Default value: 1.
    shared_ptr<int32_t> pageNo_ {};
    // The number of entries per page. Valid values: 1 to 100. Default value: 10.
    shared_ptr<int32_t> pageSize_ {};
    // The playback mode. Valid values: loop and linear.
    shared_ptr<string> playbackMode_ {};
    // The sorting order by creation time. Valid values: asc and desc.
    shared_ptr<string> sortBy_ {};
    // The sorting order by modification time. Valid values: asc and desc.
    shared_ptr<string> sortByModifiedTime_ {};
    // The channel status. A value of 0 specifies stopped. A value of 1 specifies started.
    shared_ptr<int32_t> state_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
