// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESHOWLISTRESPONSEBODYSHOWLISTINFO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESHOWLISTRESPONSEBODYSHOWLISTINFO_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeShowListResponseBodyShowListInfoShowList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeShowListResponseBodyShowListInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeShowListResponseBodyShowListInfo& obj) { 
      DARABONBA_PTR_TO_JSON(Background, background_);
      DARABONBA_PTR_TO_JSON(CurrentShowId, currentShowId_);
      DARABONBA_PTR_TO_JSON(HighPriorityShowId, highPriorityShowId_);
      DARABONBA_PTR_TO_JSON(HighPriorityShowStartTime, highPriorityShowStartTime_);
      DARABONBA_PTR_TO_JSON(ShowList, showList_);
      DARABONBA_PTR_TO_JSON(ShowListRepeatTimes, showListRepeatTimes_);
      DARABONBA_PTR_TO_JSON(TotalShowListRepeatTimes, totalShowListRepeatTimes_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeShowListResponseBodyShowListInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(Background, background_);
      DARABONBA_PTR_FROM_JSON(CurrentShowId, currentShowId_);
      DARABONBA_PTR_FROM_JSON(HighPriorityShowId, highPriorityShowId_);
      DARABONBA_PTR_FROM_JSON(HighPriorityShowStartTime, highPriorityShowStartTime_);
      DARABONBA_PTR_FROM_JSON(ShowList, showList_);
      DARABONBA_PTR_FROM_JSON(ShowListRepeatTimes, showListRepeatTimes_);
      DARABONBA_PTR_FROM_JSON(TotalShowListRepeatTimes, totalShowListRepeatTimes_);
    };
    DescribeShowListResponseBodyShowListInfo() = default ;
    DescribeShowListResponseBodyShowListInfo(const DescribeShowListResponseBodyShowListInfo &) = default ;
    DescribeShowListResponseBodyShowListInfo(DescribeShowListResponseBodyShowListInfo &&) = default ;
    DescribeShowListResponseBodyShowListInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeShowListResponseBodyShowListInfo() = default ;
    DescribeShowListResponseBodyShowListInfo& operator=(const DescribeShowListResponseBodyShowListInfo &) = default ;
    DescribeShowListResponseBodyShowListInfo& operator=(DescribeShowListResponseBodyShowListInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->background_ != nullptr
        && this->currentShowId_ != nullptr && this->highPriorityShowId_ != nullptr && this->highPriorityShowStartTime_ != nullptr && this->showList_ != nullptr && this->showListRepeatTimes_ != nullptr
        && this->totalShowListRepeatTimes_ != nullptr; };
    // background Field Functions 
    bool hasBackground() const { return this->background_ != nullptr;};
    void deleteBackground() { this->background_ = nullptr;};
    inline string background() const { DARABONBA_PTR_GET_DEFAULT(background_, "") };
    inline DescribeShowListResponseBodyShowListInfo& setBackground(string background) { DARABONBA_PTR_SET_VALUE(background_, background) };


    // currentShowId Field Functions 
    bool hasCurrentShowId() const { return this->currentShowId_ != nullptr;};
    void deleteCurrentShowId() { this->currentShowId_ = nullptr;};
    inline string currentShowId() const { DARABONBA_PTR_GET_DEFAULT(currentShowId_, "") };
    inline DescribeShowListResponseBodyShowListInfo& setCurrentShowId(string currentShowId) { DARABONBA_PTR_SET_VALUE(currentShowId_, currentShowId) };


    // highPriorityShowId Field Functions 
    bool hasHighPriorityShowId() const { return this->highPriorityShowId_ != nullptr;};
    void deleteHighPriorityShowId() { this->highPriorityShowId_ = nullptr;};
    inline string highPriorityShowId() const { DARABONBA_PTR_GET_DEFAULT(highPriorityShowId_, "") };
    inline DescribeShowListResponseBodyShowListInfo& setHighPriorityShowId(string highPriorityShowId) { DARABONBA_PTR_SET_VALUE(highPriorityShowId_, highPriorityShowId) };


    // highPriorityShowStartTime Field Functions 
    bool hasHighPriorityShowStartTime() const { return this->highPriorityShowStartTime_ != nullptr;};
    void deleteHighPriorityShowStartTime() { this->highPriorityShowStartTime_ = nullptr;};
    inline string highPriorityShowStartTime() const { DARABONBA_PTR_GET_DEFAULT(highPriorityShowStartTime_, "") };
    inline DescribeShowListResponseBodyShowListInfo& setHighPriorityShowStartTime(string highPriorityShowStartTime) { DARABONBA_PTR_SET_VALUE(highPriorityShowStartTime_, highPriorityShowStartTime) };


    // showList Field Functions 
    bool hasShowList() const { return this->showList_ != nullptr;};
    void deleteShowList() { this->showList_ = nullptr;};
    inline const Models::DescribeShowListResponseBodyShowListInfoShowList & showList() const { DARABONBA_PTR_GET_CONST(showList_, Models::DescribeShowListResponseBodyShowListInfoShowList) };
    inline Models::DescribeShowListResponseBodyShowListInfoShowList showList() { DARABONBA_PTR_GET(showList_, Models::DescribeShowListResponseBodyShowListInfoShowList) };
    inline DescribeShowListResponseBodyShowListInfo& setShowList(const Models::DescribeShowListResponseBodyShowListInfoShowList & showList) { DARABONBA_PTR_SET_VALUE(showList_, showList) };
    inline DescribeShowListResponseBodyShowListInfo& setShowList(Models::DescribeShowListResponseBodyShowListInfoShowList && showList) { DARABONBA_PTR_SET_RVALUE(showList_, showList) };


    // showListRepeatTimes Field Functions 
    bool hasShowListRepeatTimes() const { return this->showListRepeatTimes_ != nullptr;};
    void deleteShowListRepeatTimes() { this->showListRepeatTimes_ = nullptr;};
    inline int32_t showListRepeatTimes() const { DARABONBA_PTR_GET_DEFAULT(showListRepeatTimes_, 0) };
    inline DescribeShowListResponseBodyShowListInfo& setShowListRepeatTimes(int32_t showListRepeatTimes) { DARABONBA_PTR_SET_VALUE(showListRepeatTimes_, showListRepeatTimes) };


    // totalShowListRepeatTimes Field Functions 
    bool hasTotalShowListRepeatTimes() const { return this->totalShowListRepeatTimes_ != nullptr;};
    void deleteTotalShowListRepeatTimes() { this->totalShowListRepeatTimes_ = nullptr;};
    inline int32_t totalShowListRepeatTimes() const { DARABONBA_PTR_GET_DEFAULT(totalShowListRepeatTimes_, 0) };
    inline DescribeShowListResponseBodyShowListInfo& setTotalShowListRepeatTimes(int32_t totalShowListRepeatTimes) { DARABONBA_PTR_SET_VALUE(totalShowListRepeatTimes_, totalShowListRepeatTimes) };


  protected:
    // The background of the episode list.
    std::shared_ptr<string> background_ = nullptr;
    // The ID of the episode that is playing.
    std::shared_ptr<string> currentShowId_ = nullptr;
    // The episode of the highest priority.
    // 
    // > You can configure this parameter only before the episode list starts playing.
    std::shared_ptr<string> highPriorityShowId_ = nullptr;
    // The time at which the episode of the highest priority is played. Format: yyyy-MM-dd\\"T\\"HH:mm:ss.
    // 
    // > You can configure this parameter only before the episode list starts playing. After you configure this parameter, when the specified point in time is reached, any episode that is playing stops and the episode of the highest priority in the episode list starts to play.
    std::shared_ptr<string> highPriorityShowStartTime_ = nullptr;
    // The episodes in the episode list.
    std::shared_ptr<Models::DescribeShowListResponseBodyShowListInfoShowList> showList_ = nullptr;
    // The number of additional times the episode list is played by default. The value is 0.
    std::shared_ptr<int32_t> showListRepeatTimes_ = nullptr;
    // The number of additional times the episode list is played.
    std::shared_ptr<int32_t> totalShowListRepeatTimes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
