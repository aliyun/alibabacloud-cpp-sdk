// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECHANNELTOPPUBUSERLISTRESPONSEBODYTOPPUBUSERDETAILLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECHANNELTOPPUBUSERLISTRESPONSEBODYTOPPUBUSERDETAILLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeChannelTopPubUserListResponseBodyTopPubUserDetailListOnlinePeriods.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class DescribeChannelTopPubUserListResponseBodyTopPubUserDetailList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeChannelTopPubUserListResponseBodyTopPubUserDetailList& obj) { 
      DARABONBA_PTR_TO_JSON(CreatedTs, createdTs_);
      DARABONBA_PTR_TO_JSON(DestroyedTs, destroyedTs_);
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(Location, location_);
      DARABONBA_PTR_TO_JSON(OnlineDuration, onlineDuration_);
      DARABONBA_PTR_TO_JSON(OnlinePeriods, onlinePeriods_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeChannelTopPubUserListResponseBodyTopPubUserDetailList& obj) { 
      DARABONBA_PTR_FROM_JSON(CreatedTs, createdTs_);
      DARABONBA_PTR_FROM_JSON(DestroyedTs, destroyedTs_);
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(Location, location_);
      DARABONBA_PTR_FROM_JSON(OnlineDuration, onlineDuration_);
      DARABONBA_PTR_FROM_JSON(OnlinePeriods, onlinePeriods_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    DescribeChannelTopPubUserListResponseBodyTopPubUserDetailList() = default ;
    DescribeChannelTopPubUserListResponseBodyTopPubUserDetailList(const DescribeChannelTopPubUserListResponseBodyTopPubUserDetailList &) = default ;
    DescribeChannelTopPubUserListResponseBodyTopPubUserDetailList(DescribeChannelTopPubUserListResponseBodyTopPubUserDetailList &&) = default ;
    DescribeChannelTopPubUserListResponseBodyTopPubUserDetailList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeChannelTopPubUserListResponseBodyTopPubUserDetailList() = default ;
    DescribeChannelTopPubUserListResponseBodyTopPubUserDetailList& operator=(const DescribeChannelTopPubUserListResponseBodyTopPubUserDetailList &) = default ;
    DescribeChannelTopPubUserListResponseBodyTopPubUserDetailList& operator=(DescribeChannelTopPubUserListResponseBodyTopPubUserDetailList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createdTs_ != nullptr
        && this->destroyedTs_ != nullptr && this->duration_ != nullptr && this->location_ != nullptr && this->onlineDuration_ != nullptr && this->onlinePeriods_ != nullptr
        && this->userId_ != nullptr; };
    // createdTs Field Functions 
    bool hasCreatedTs() const { return this->createdTs_ != nullptr;};
    void deleteCreatedTs() { this->createdTs_ = nullptr;};
    inline int64_t createdTs() const { DARABONBA_PTR_GET_DEFAULT(createdTs_, 0L) };
    inline DescribeChannelTopPubUserListResponseBodyTopPubUserDetailList& setCreatedTs(int64_t createdTs) { DARABONBA_PTR_SET_VALUE(createdTs_, createdTs) };


    // destroyedTs Field Functions 
    bool hasDestroyedTs() const { return this->destroyedTs_ != nullptr;};
    void deleteDestroyedTs() { this->destroyedTs_ = nullptr;};
    inline int64_t destroyedTs() const { DARABONBA_PTR_GET_DEFAULT(destroyedTs_, 0L) };
    inline DescribeChannelTopPubUserListResponseBodyTopPubUserDetailList& setDestroyedTs(int64_t destroyedTs) { DARABONBA_PTR_SET_VALUE(destroyedTs_, destroyedTs) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline int64_t duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0L) };
    inline DescribeChannelTopPubUserListResponseBodyTopPubUserDetailList& setDuration(int64_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // location Field Functions 
    bool hasLocation() const { return this->location_ != nullptr;};
    void deleteLocation() { this->location_ = nullptr;};
    inline string location() const { DARABONBA_PTR_GET_DEFAULT(location_, "") };
    inline DescribeChannelTopPubUserListResponseBodyTopPubUserDetailList& setLocation(string location) { DARABONBA_PTR_SET_VALUE(location_, location) };


    // onlineDuration Field Functions 
    bool hasOnlineDuration() const { return this->onlineDuration_ != nullptr;};
    void deleteOnlineDuration() { this->onlineDuration_ = nullptr;};
    inline int64_t onlineDuration() const { DARABONBA_PTR_GET_DEFAULT(onlineDuration_, 0L) };
    inline DescribeChannelTopPubUserListResponseBodyTopPubUserDetailList& setOnlineDuration(int64_t onlineDuration) { DARABONBA_PTR_SET_VALUE(onlineDuration_, onlineDuration) };


    // onlinePeriods Field Functions 
    bool hasOnlinePeriods() const { return this->onlinePeriods_ != nullptr;};
    void deleteOnlinePeriods() { this->onlinePeriods_ = nullptr;};
    inline const vector<Models::DescribeChannelTopPubUserListResponseBodyTopPubUserDetailListOnlinePeriods> & onlinePeriods() const { DARABONBA_PTR_GET_CONST(onlinePeriods_, vector<Models::DescribeChannelTopPubUserListResponseBodyTopPubUserDetailListOnlinePeriods>) };
    inline vector<Models::DescribeChannelTopPubUserListResponseBodyTopPubUserDetailListOnlinePeriods> onlinePeriods() { DARABONBA_PTR_GET(onlinePeriods_, vector<Models::DescribeChannelTopPubUserListResponseBodyTopPubUserDetailListOnlinePeriods>) };
    inline DescribeChannelTopPubUserListResponseBodyTopPubUserDetailList& setOnlinePeriods(const vector<Models::DescribeChannelTopPubUserListResponseBodyTopPubUserDetailListOnlinePeriods> & onlinePeriods) { DARABONBA_PTR_SET_VALUE(onlinePeriods_, onlinePeriods) };
    inline DescribeChannelTopPubUserListResponseBodyTopPubUserDetailList& setOnlinePeriods(vector<Models::DescribeChannelTopPubUserListResponseBodyTopPubUserDetailListOnlinePeriods> && onlinePeriods) { DARABONBA_PTR_SET_RVALUE(onlinePeriods_, onlinePeriods) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline DescribeChannelTopPubUserListResponseBodyTopPubUserDetailList& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    std::shared_ptr<int64_t> createdTs_ = nullptr;
    std::shared_ptr<int64_t> destroyedTs_ = nullptr;
    std::shared_ptr<int64_t> duration_ = nullptr;
    std::shared_ptr<string> location_ = nullptr;
    std::shared_ptr<int64_t> onlineDuration_ = nullptr;
    std::shared_ptr<vector<Models::DescribeChannelTopPubUserListResponseBodyTopPubUserDetailListOnlinePeriods>> onlinePeriods_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
