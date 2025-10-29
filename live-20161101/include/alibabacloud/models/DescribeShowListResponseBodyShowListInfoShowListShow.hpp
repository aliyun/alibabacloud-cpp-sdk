// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESHOWLISTRESPONSEBODYSHOWLISTINFOSHOWLISTSHOW_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESHOWLISTRESPONSEBODYSHOWLISTINFOSHOWLISTSHOW_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeShowListResponseBodyShowListInfoShowListShowResourceInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeShowListResponseBodyShowListInfoShowListShow : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeShowListResponseBodyShowListInfoShowListShow& obj) { 
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(RepeatTimes, repeatTimes_);
      DARABONBA_PTR_TO_JSON(ResourceInfo, resourceInfo_);
      DARABONBA_PTR_TO_JSON(ShowId, showId_);
      DARABONBA_PTR_TO_JSON(ShowName, showName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeShowListResponseBodyShowListInfoShowListShow& obj) { 
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(RepeatTimes, repeatTimes_);
      DARABONBA_PTR_FROM_JSON(ResourceInfo, resourceInfo_);
      DARABONBA_PTR_FROM_JSON(ShowId, showId_);
      DARABONBA_PTR_FROM_JSON(ShowName, showName_);
    };
    DescribeShowListResponseBodyShowListInfoShowListShow() = default ;
    DescribeShowListResponseBodyShowListInfoShowListShow(const DescribeShowListResponseBodyShowListInfoShowListShow &) = default ;
    DescribeShowListResponseBodyShowListInfoShowListShow(DescribeShowListResponseBodyShowListInfoShowListShow &&) = default ;
    DescribeShowListResponseBodyShowListInfoShowListShow(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeShowListResponseBodyShowListInfoShowListShow() = default ;
    DescribeShowListResponseBodyShowListInfoShowListShow& operator=(const DescribeShowListResponseBodyShowListInfoShowListShow &) = default ;
    DescribeShowListResponseBodyShowListInfoShowListShow& operator=(DescribeShowListResponseBodyShowListInfoShowListShow &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->duration_ == nullptr
        && return this->repeatTimes_ == nullptr && return this->resourceInfo_ == nullptr && return this->showId_ == nullptr && return this->showName_ == nullptr; };
    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline int64_t duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0L) };
    inline DescribeShowListResponseBodyShowListInfoShowListShow& setDuration(int64_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // repeatTimes Field Functions 
    bool hasRepeatTimes() const { return this->repeatTimes_ != nullptr;};
    void deleteRepeatTimes() { this->repeatTimes_ = nullptr;};
    inline int32_t repeatTimes() const { DARABONBA_PTR_GET_DEFAULT(repeatTimes_, 0) };
    inline DescribeShowListResponseBodyShowListInfoShowListShow& setRepeatTimes(int32_t repeatTimes) { DARABONBA_PTR_SET_VALUE(repeatTimes_, repeatTimes) };


    // resourceInfo Field Functions 
    bool hasResourceInfo() const { return this->resourceInfo_ != nullptr;};
    void deleteResourceInfo() { this->resourceInfo_ = nullptr;};
    inline const Models::DescribeShowListResponseBodyShowListInfoShowListShowResourceInfo & resourceInfo() const { DARABONBA_PTR_GET_CONST(resourceInfo_, Models::DescribeShowListResponseBodyShowListInfoShowListShowResourceInfo) };
    inline Models::DescribeShowListResponseBodyShowListInfoShowListShowResourceInfo resourceInfo() { DARABONBA_PTR_GET(resourceInfo_, Models::DescribeShowListResponseBodyShowListInfoShowListShowResourceInfo) };
    inline DescribeShowListResponseBodyShowListInfoShowListShow& setResourceInfo(const Models::DescribeShowListResponseBodyShowListInfoShowListShowResourceInfo & resourceInfo) { DARABONBA_PTR_SET_VALUE(resourceInfo_, resourceInfo) };
    inline DescribeShowListResponseBodyShowListInfoShowListShow& setResourceInfo(Models::DescribeShowListResponseBodyShowListInfoShowListShowResourceInfo && resourceInfo) { DARABONBA_PTR_SET_RVALUE(resourceInfo_, resourceInfo) };


    // showId Field Functions 
    bool hasShowId() const { return this->showId_ != nullptr;};
    void deleteShowId() { this->showId_ = nullptr;};
    inline string showId() const { DARABONBA_PTR_GET_DEFAULT(showId_, "") };
    inline DescribeShowListResponseBodyShowListInfoShowListShow& setShowId(string showId) { DARABONBA_PTR_SET_VALUE(showId_, showId) };


    // showName Field Functions 
    bool hasShowName() const { return this->showName_ != nullptr;};
    void deleteShowName() { this->showName_ = nullptr;};
    inline string showName() const { DARABONBA_PTR_GET_DEFAULT(showName_, "") };
    inline DescribeShowListResponseBodyShowListInfoShowListShow& setShowName(string showName) { DARABONBA_PTR_SET_VALUE(showName_, showName) };


  protected:
    // The duration of the episode. Unit: seconds.
    std::shared_ptr<int64_t> duration_ = nullptr;
    // The number of times the episode repeats after the first playback is complete.
    // 
    // For example, if you set the value to 0, the episode is to be played once. If you set the value to 1, the episode is to be played twice.
    std::shared_ptr<int32_t> repeatTimes_ = nullptr;
    // The resource information.
    std::shared_ptr<Models::DescribeShowListResponseBodyShowListInfoShowListShowResourceInfo> resourceInfo_ = nullptr;
    // The ID of the episode.
    std::shared_ptr<string> showId_ = nullptr;
    // The name of the episode.
    std::shared_ptr<string> showName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
