// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESHOWLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESHOWLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeShowListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeShowListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ShowList, showList_);
      DARABONBA_PTR_TO_JSON(ShowListInfo, showListInfo_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeShowListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ShowList, showList_);
      DARABONBA_PTR_FROM_JSON(ShowListInfo, showListInfo_);
    };
    DescribeShowListResponseBody() = default ;
    DescribeShowListResponseBody(const DescribeShowListResponseBody &) = default ;
    DescribeShowListResponseBody(DescribeShowListResponseBody &&) = default ;
    DescribeShowListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeShowListResponseBody() = default ;
    DescribeShowListResponseBody& operator=(const DescribeShowListResponseBody &) = default ;
    DescribeShowListResponseBody& operator=(DescribeShowListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ShowListInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ShowListInfo& obj) { 
        DARABONBA_PTR_TO_JSON(Background, background_);
        DARABONBA_PTR_TO_JSON(CurrentShowId, currentShowId_);
        DARABONBA_PTR_TO_JSON(HighPriorityShowId, highPriorityShowId_);
        DARABONBA_PTR_TO_JSON(HighPriorityShowStartTime, highPriorityShowStartTime_);
        DARABONBA_PTR_TO_JSON(ShowList, showList_);
        DARABONBA_PTR_TO_JSON(ShowListRepeatTimes, showListRepeatTimes_);
        DARABONBA_PTR_TO_JSON(TotalShowListRepeatTimes, totalShowListRepeatTimes_);
      };
      friend void from_json(const Darabonba::Json& j, ShowListInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(Background, background_);
        DARABONBA_PTR_FROM_JSON(CurrentShowId, currentShowId_);
        DARABONBA_PTR_FROM_JSON(HighPriorityShowId, highPriorityShowId_);
        DARABONBA_PTR_FROM_JSON(HighPriorityShowStartTime, highPriorityShowStartTime_);
        DARABONBA_PTR_FROM_JSON(ShowList, showList_);
        DARABONBA_PTR_FROM_JSON(ShowListRepeatTimes, showListRepeatTimes_);
        DARABONBA_PTR_FROM_JSON(TotalShowListRepeatTimes, totalShowListRepeatTimes_);
      };
      ShowListInfo() = default ;
      ShowListInfo(const ShowListInfo &) = default ;
      ShowListInfo(ShowListInfo &&) = default ;
      ShowListInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ShowListInfo() = default ;
      ShowListInfo& operator=(const ShowListInfo &) = default ;
      ShowListInfo& operator=(ShowListInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ShowList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ShowList& obj) { 
          DARABONBA_PTR_TO_JSON(Show, show_);
        };
        friend void from_json(const Darabonba::Json& j, ShowList& obj) { 
          DARABONBA_PTR_FROM_JSON(Show, show_);
        };
        ShowList() = default ;
        ShowList(const ShowList &) = default ;
        ShowList(ShowList &&) = default ;
        ShowList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ShowList() = default ;
        ShowList& operator=(const ShowList &) = default ;
        ShowList& operator=(ShowList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Show : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Show& obj) { 
            DARABONBA_PTR_TO_JSON(Duration, duration_);
            DARABONBA_PTR_TO_JSON(RepeatTimes, repeatTimes_);
            DARABONBA_PTR_TO_JSON(ResourceInfo, resourceInfo_);
            DARABONBA_PTR_TO_JSON(ShowId, showId_);
            DARABONBA_PTR_TO_JSON(ShowName, showName_);
          };
          friend void from_json(const Darabonba::Json& j, Show& obj) { 
            DARABONBA_PTR_FROM_JSON(Duration, duration_);
            DARABONBA_PTR_FROM_JSON(RepeatTimes, repeatTimes_);
            DARABONBA_PTR_FROM_JSON(ResourceInfo, resourceInfo_);
            DARABONBA_PTR_FROM_JSON(ShowId, showId_);
            DARABONBA_PTR_FROM_JSON(ShowName, showName_);
          };
          Show() = default ;
          Show(const Show &) = default ;
          Show(Show &&) = default ;
          Show(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Show() = default ;
          Show& operator=(const Show &) = default ;
          Show& operator=(Show &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class ResourceInfo : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const ResourceInfo& obj) { 
              DARABONBA_PTR_TO_JSON(LiveInputType, liveInputType_);
              DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
              DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
              DARABONBA_PTR_TO_JSON(ResourceUrl, resourceUrl_);
            };
            friend void from_json(const Darabonba::Json& j, ResourceInfo& obj) { 
              DARABONBA_PTR_FROM_JSON(LiveInputType, liveInputType_);
              DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
              DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
              DARABONBA_PTR_FROM_JSON(ResourceUrl, resourceUrl_);
            };
            ResourceInfo() = default ;
            ResourceInfo(const ResourceInfo &) = default ;
            ResourceInfo(ResourceInfo &&) = default ;
            ResourceInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~ResourceInfo() = default ;
            ResourceInfo& operator=(const ResourceInfo &) = default ;
            ResourceInfo& operator=(ResourceInfo &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->liveInputType_ == nullptr
        && this->resourceId_ == nullptr && this->resourceType_ == nullptr && this->resourceUrl_ == nullptr; };
            // liveInputType Field Functions 
            bool hasLiveInputType() const { return this->liveInputType_ != nullptr;};
            void deleteLiveInputType() { this->liveInputType_ = nullptr;};
            inline int32_t getLiveInputType() const { DARABONBA_PTR_GET_DEFAULT(liveInputType_, 0) };
            inline ResourceInfo& setLiveInputType(int32_t liveInputType) { DARABONBA_PTR_SET_VALUE(liveInputType_, liveInputType) };


            // resourceId Field Functions 
            bool hasResourceId() const { return this->resourceId_ != nullptr;};
            void deleteResourceId() { this->resourceId_ = nullptr;};
            inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
            inline ResourceInfo& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


            // resourceType Field Functions 
            bool hasResourceType() const { return this->resourceType_ != nullptr;};
            void deleteResourceType() { this->resourceType_ = nullptr;};
            inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
            inline ResourceInfo& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


            // resourceUrl Field Functions 
            bool hasResourceUrl() const { return this->resourceUrl_ != nullptr;};
            void deleteResourceUrl() { this->resourceUrl_ = nullptr;};
            inline string getResourceUrl() const { DARABONBA_PTR_GET_DEFAULT(resourceUrl_, "") };
            inline ResourceInfo& setResourceUrl(string resourceUrl) { DARABONBA_PTR_SET_VALUE(resourceUrl_, resourceUrl) };


          protected:
            // The custom type label.
            shared_ptr<int32_t> liveInputType_ {};
            // The ID of the video-on-demand (VOD) file.
            shared_ptr<string> resourceId_ {};
            // The type of the resource.
            shared_ptr<string> resourceType_ {};
            // The URL of the resource.
            shared_ptr<string> resourceUrl_ {};
          };

          virtual bool empty() const override { return this->duration_ == nullptr
        && this->repeatTimes_ == nullptr && this->resourceInfo_ == nullptr && this->showId_ == nullptr && this->showName_ == nullptr; };
          // duration Field Functions 
          bool hasDuration() const { return this->duration_ != nullptr;};
          void deleteDuration() { this->duration_ = nullptr;};
          inline int64_t getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0L) };
          inline Show& setDuration(int64_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


          // repeatTimes Field Functions 
          bool hasRepeatTimes() const { return this->repeatTimes_ != nullptr;};
          void deleteRepeatTimes() { this->repeatTimes_ = nullptr;};
          inline int32_t getRepeatTimes() const { DARABONBA_PTR_GET_DEFAULT(repeatTimes_, 0) };
          inline Show& setRepeatTimes(int32_t repeatTimes) { DARABONBA_PTR_SET_VALUE(repeatTimes_, repeatTimes) };


          // resourceInfo Field Functions 
          bool hasResourceInfo() const { return this->resourceInfo_ != nullptr;};
          void deleteResourceInfo() { this->resourceInfo_ = nullptr;};
          inline const Show::ResourceInfo & getResourceInfo() const { DARABONBA_PTR_GET_CONST(resourceInfo_, Show::ResourceInfo) };
          inline Show::ResourceInfo getResourceInfo() { DARABONBA_PTR_GET(resourceInfo_, Show::ResourceInfo) };
          inline Show& setResourceInfo(const Show::ResourceInfo & resourceInfo) { DARABONBA_PTR_SET_VALUE(resourceInfo_, resourceInfo) };
          inline Show& setResourceInfo(Show::ResourceInfo && resourceInfo) { DARABONBA_PTR_SET_RVALUE(resourceInfo_, resourceInfo) };


          // showId Field Functions 
          bool hasShowId() const { return this->showId_ != nullptr;};
          void deleteShowId() { this->showId_ = nullptr;};
          inline string getShowId() const { DARABONBA_PTR_GET_DEFAULT(showId_, "") };
          inline Show& setShowId(string showId) { DARABONBA_PTR_SET_VALUE(showId_, showId) };


          // showName Field Functions 
          bool hasShowName() const { return this->showName_ != nullptr;};
          void deleteShowName() { this->showName_ = nullptr;};
          inline string getShowName() const { DARABONBA_PTR_GET_DEFAULT(showName_, "") };
          inline Show& setShowName(string showName) { DARABONBA_PTR_SET_VALUE(showName_, showName) };


        protected:
          // The duration of the episode. Unit: seconds.
          shared_ptr<int64_t> duration_ {};
          // The number of times the episode repeats after the first playback is complete.
          // 
          // For example, if you set the value to 0, the episode is to be played once. If you set the value to 1, the episode is to be played twice.
          shared_ptr<int32_t> repeatTimes_ {};
          // The resource information.
          shared_ptr<Show::ResourceInfo> resourceInfo_ {};
          // The ID of the episode.
          shared_ptr<string> showId_ {};
          // The name of the episode.
          shared_ptr<string> showName_ {};
        };

        virtual bool empty() const override { return this->show_ == nullptr; };
        // show Field Functions 
        bool hasShow() const { return this->show_ != nullptr;};
        void deleteShow() { this->show_ = nullptr;};
        inline const vector<ShowList::Show> & getShow() const { DARABONBA_PTR_GET_CONST(show_, vector<ShowList::Show>) };
        inline vector<ShowList::Show> getShow() { DARABONBA_PTR_GET(show_, vector<ShowList::Show>) };
        inline ShowList& setShow(const vector<ShowList::Show> & show) { DARABONBA_PTR_SET_VALUE(show_, show) };
        inline ShowList& setShow(vector<ShowList::Show> && show) { DARABONBA_PTR_SET_RVALUE(show_, show) };


      protected:
        shared_ptr<vector<ShowList::Show>> show_ {};
      };

      virtual bool empty() const override { return this->background_ == nullptr
        && this->currentShowId_ == nullptr && this->highPriorityShowId_ == nullptr && this->highPriorityShowStartTime_ == nullptr && this->showList_ == nullptr && this->showListRepeatTimes_ == nullptr
        && this->totalShowListRepeatTimes_ == nullptr; };
      // background Field Functions 
      bool hasBackground() const { return this->background_ != nullptr;};
      void deleteBackground() { this->background_ = nullptr;};
      inline string getBackground() const { DARABONBA_PTR_GET_DEFAULT(background_, "") };
      inline ShowListInfo& setBackground(string background) { DARABONBA_PTR_SET_VALUE(background_, background) };


      // currentShowId Field Functions 
      bool hasCurrentShowId() const { return this->currentShowId_ != nullptr;};
      void deleteCurrentShowId() { this->currentShowId_ = nullptr;};
      inline string getCurrentShowId() const { DARABONBA_PTR_GET_DEFAULT(currentShowId_, "") };
      inline ShowListInfo& setCurrentShowId(string currentShowId) { DARABONBA_PTR_SET_VALUE(currentShowId_, currentShowId) };


      // highPriorityShowId Field Functions 
      bool hasHighPriorityShowId() const { return this->highPriorityShowId_ != nullptr;};
      void deleteHighPriorityShowId() { this->highPriorityShowId_ = nullptr;};
      inline string getHighPriorityShowId() const { DARABONBA_PTR_GET_DEFAULT(highPriorityShowId_, "") };
      inline ShowListInfo& setHighPriorityShowId(string highPriorityShowId) { DARABONBA_PTR_SET_VALUE(highPriorityShowId_, highPriorityShowId) };


      // highPriorityShowStartTime Field Functions 
      bool hasHighPriorityShowStartTime() const { return this->highPriorityShowStartTime_ != nullptr;};
      void deleteHighPriorityShowStartTime() { this->highPriorityShowStartTime_ = nullptr;};
      inline string getHighPriorityShowStartTime() const { DARABONBA_PTR_GET_DEFAULT(highPriorityShowStartTime_, "") };
      inline ShowListInfo& setHighPriorityShowStartTime(string highPriorityShowStartTime) { DARABONBA_PTR_SET_VALUE(highPriorityShowStartTime_, highPriorityShowStartTime) };


      // showList Field Functions 
      bool hasShowList() const { return this->showList_ != nullptr;};
      void deleteShowList() { this->showList_ = nullptr;};
      inline const ShowListInfo::ShowList & getShowList() const { DARABONBA_PTR_GET_CONST(showList_, ShowListInfo::ShowList) };
      inline ShowListInfo::ShowList getShowList() { DARABONBA_PTR_GET(showList_, ShowListInfo::ShowList) };
      inline ShowListInfo& setShowList(const ShowListInfo::ShowList & showList) { DARABONBA_PTR_SET_VALUE(showList_, showList) };
      inline ShowListInfo& setShowList(ShowListInfo::ShowList && showList) { DARABONBA_PTR_SET_RVALUE(showList_, showList) };


      // showListRepeatTimes Field Functions 
      bool hasShowListRepeatTimes() const { return this->showListRepeatTimes_ != nullptr;};
      void deleteShowListRepeatTimes() { this->showListRepeatTimes_ = nullptr;};
      inline int32_t getShowListRepeatTimes() const { DARABONBA_PTR_GET_DEFAULT(showListRepeatTimes_, 0) };
      inline ShowListInfo& setShowListRepeatTimes(int32_t showListRepeatTimes) { DARABONBA_PTR_SET_VALUE(showListRepeatTimes_, showListRepeatTimes) };


      // totalShowListRepeatTimes Field Functions 
      bool hasTotalShowListRepeatTimes() const { return this->totalShowListRepeatTimes_ != nullptr;};
      void deleteTotalShowListRepeatTimes() { this->totalShowListRepeatTimes_ = nullptr;};
      inline int32_t getTotalShowListRepeatTimes() const { DARABONBA_PTR_GET_DEFAULT(totalShowListRepeatTimes_, 0) };
      inline ShowListInfo& setTotalShowListRepeatTimes(int32_t totalShowListRepeatTimes) { DARABONBA_PTR_SET_VALUE(totalShowListRepeatTimes_, totalShowListRepeatTimes) };


    protected:
      // The background of the episode list.
      shared_ptr<string> background_ {};
      // The ID of the episode that is playing.
      shared_ptr<string> currentShowId_ {};
      // The episode of the highest priority.
      // 
      // > You can configure this parameter only before the episode list starts playing.
      shared_ptr<string> highPriorityShowId_ {};
      // The time at which the episode of the highest priority is played. Format: yyyy-MM-dd\\"T\\"HH:mm:ss.
      // 
      // > You can configure this parameter only before the episode list starts playing. After you configure this parameter, when the specified point in time is reached, any episode that is playing stops and the episode of the highest priority in the episode list starts to play.
      shared_ptr<string> highPriorityShowStartTime_ {};
      // The episodes in the episode list.
      shared_ptr<ShowListInfo::ShowList> showList_ {};
      // The number of additional times the episode list is played by default. The value is 0.
      shared_ptr<int32_t> showListRepeatTimes_ {};
      // The number of additional times the episode list is played.
      shared_ptr<int32_t> totalShowListRepeatTimes_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->showList_ == nullptr && this->showListInfo_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeShowListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // showList Field Functions 
    bool hasShowList() const { return this->showList_ != nullptr;};
    void deleteShowList() { this->showList_ = nullptr;};
    inline string getShowList() const { DARABONBA_PTR_GET_DEFAULT(showList_, "") };
    inline DescribeShowListResponseBody& setShowList(string showList) { DARABONBA_PTR_SET_VALUE(showList_, showList) };


    // showListInfo Field Functions 
    bool hasShowListInfo() const { return this->showListInfo_ != nullptr;};
    void deleteShowListInfo() { this->showListInfo_ = nullptr;};
    inline const DescribeShowListResponseBody::ShowListInfo & getShowListInfo() const { DARABONBA_PTR_GET_CONST(showListInfo_, DescribeShowListResponseBody::ShowListInfo) };
    inline DescribeShowListResponseBody::ShowListInfo getShowListInfo() { DARABONBA_PTR_GET(showListInfo_, DescribeShowListResponseBody::ShowListInfo) };
    inline DescribeShowListResponseBody& setShowListInfo(const DescribeShowListResponseBody::ShowListInfo & showListInfo) { DARABONBA_PTR_SET_VALUE(showListInfo_, showListInfo) };
    inline DescribeShowListResponseBody& setShowListInfo(DescribeShowListResponseBody::ShowListInfo && showListInfo) { DARABONBA_PTR_SET_RVALUE(showListInfo_, showListInfo) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // ****Details of the episode list.
    // 
    // Show indicates the information about a specific episode. For more information, see the **Show** parameter.
    shared_ptr<string> showList_ {};
    // The information about the episode list.
    shared_ptr<DescribeShowListResponseBody::ShowListInfo> showListInfo_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
