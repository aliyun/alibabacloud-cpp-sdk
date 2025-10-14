// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETORGLIVELISTRESPONSEBODYRESULTUPDATELIVELIVELIST_HPP_
#define ALIBABACLOUD_MODELS_GETORGLIVELISTRESPONSEBODYRESULTUPDATELIVELIVELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetOrgLiveListResponseBodyResultUpdateLiveLiveList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOrgLiveListResponseBodyResultUpdateLiveLiveList& obj) { 
      DARABONBA_PTR_TO_JSON(AnchorNickname, anchorNickname_);
      DARABONBA_PTR_TO_JSON(AnchorUnionId, anchorUnionId_);
      DARABONBA_PTR_TO_JSON(AnchorUnionIdInAlibaba, anchorUnionIdInAlibaba_);
      DARABONBA_PTR_TO_JSON(AnchorUserId, anchorUserId_);
      DARABONBA_PTR_TO_JSON(LiveEndTime, liveEndTime_);
      DARABONBA_PTR_TO_JSON(LiveStartTime, liveStartTime_);
      DARABONBA_PTR_TO_JSON(LiveUuid, liveUuid_);
      DARABONBA_PTR_TO_JSON(Title, title_);
    };
    friend void from_json(const Darabonba::Json& j, GetOrgLiveListResponseBodyResultUpdateLiveLiveList& obj) { 
      DARABONBA_PTR_FROM_JSON(AnchorNickname, anchorNickname_);
      DARABONBA_PTR_FROM_JSON(AnchorUnionId, anchorUnionId_);
      DARABONBA_PTR_FROM_JSON(AnchorUnionIdInAlibaba, anchorUnionIdInAlibaba_);
      DARABONBA_PTR_FROM_JSON(AnchorUserId, anchorUserId_);
      DARABONBA_PTR_FROM_JSON(LiveEndTime, liveEndTime_);
      DARABONBA_PTR_FROM_JSON(LiveStartTime, liveStartTime_);
      DARABONBA_PTR_FROM_JSON(LiveUuid, liveUuid_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
    };
    GetOrgLiveListResponseBodyResultUpdateLiveLiveList() = default ;
    GetOrgLiveListResponseBodyResultUpdateLiveLiveList(const GetOrgLiveListResponseBodyResultUpdateLiveLiveList &) = default ;
    GetOrgLiveListResponseBodyResultUpdateLiveLiveList(GetOrgLiveListResponseBodyResultUpdateLiveLiveList &&) = default ;
    GetOrgLiveListResponseBodyResultUpdateLiveLiveList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOrgLiveListResponseBodyResultUpdateLiveLiveList() = default ;
    GetOrgLiveListResponseBodyResultUpdateLiveLiveList& operator=(const GetOrgLiveListResponseBodyResultUpdateLiveLiveList &) = default ;
    GetOrgLiveListResponseBodyResultUpdateLiveLiveList& operator=(GetOrgLiveListResponseBodyResultUpdateLiveLiveList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->anchorNickname_ == nullptr
        && return this->anchorUnionId_ == nullptr && return this->anchorUnionIdInAlibaba_ == nullptr && return this->anchorUserId_ == nullptr && return this->liveEndTime_ == nullptr && return this->liveStartTime_ == nullptr
        && return this->liveUuid_ == nullptr && return this->title_ == nullptr; };
    // anchorNickname Field Functions 
    bool hasAnchorNickname() const { return this->anchorNickname_ != nullptr;};
    void deleteAnchorNickname() { this->anchorNickname_ = nullptr;};
    inline string anchorNickname() const { DARABONBA_PTR_GET_DEFAULT(anchorNickname_, "") };
    inline GetOrgLiveListResponseBodyResultUpdateLiveLiveList& setAnchorNickname(string anchorNickname) { DARABONBA_PTR_SET_VALUE(anchorNickname_, anchorNickname) };


    // anchorUnionId Field Functions 
    bool hasAnchorUnionId() const { return this->anchorUnionId_ != nullptr;};
    void deleteAnchorUnionId() { this->anchorUnionId_ = nullptr;};
    inline string anchorUnionId() const { DARABONBA_PTR_GET_DEFAULT(anchorUnionId_, "") };
    inline GetOrgLiveListResponseBodyResultUpdateLiveLiveList& setAnchorUnionId(string anchorUnionId) { DARABONBA_PTR_SET_VALUE(anchorUnionId_, anchorUnionId) };


    // anchorUnionIdInAlibaba Field Functions 
    bool hasAnchorUnionIdInAlibaba() const { return this->anchorUnionIdInAlibaba_ != nullptr;};
    void deleteAnchorUnionIdInAlibaba() { this->anchorUnionIdInAlibaba_ = nullptr;};
    inline string anchorUnionIdInAlibaba() const { DARABONBA_PTR_GET_DEFAULT(anchorUnionIdInAlibaba_, "") };
    inline GetOrgLiveListResponseBodyResultUpdateLiveLiveList& setAnchorUnionIdInAlibaba(string anchorUnionIdInAlibaba) { DARABONBA_PTR_SET_VALUE(anchorUnionIdInAlibaba_, anchorUnionIdInAlibaba) };


    // anchorUserId Field Functions 
    bool hasAnchorUserId() const { return this->anchorUserId_ != nullptr;};
    void deleteAnchorUserId() { this->anchorUserId_ = nullptr;};
    inline string anchorUserId() const { DARABONBA_PTR_GET_DEFAULT(anchorUserId_, "") };
    inline GetOrgLiveListResponseBodyResultUpdateLiveLiveList& setAnchorUserId(string anchorUserId) { DARABONBA_PTR_SET_VALUE(anchorUserId_, anchorUserId) };


    // liveEndTime Field Functions 
    bool hasLiveEndTime() const { return this->liveEndTime_ != nullptr;};
    void deleteLiveEndTime() { this->liveEndTime_ = nullptr;};
    inline int64_t liveEndTime() const { DARABONBA_PTR_GET_DEFAULT(liveEndTime_, 0L) };
    inline GetOrgLiveListResponseBodyResultUpdateLiveLiveList& setLiveEndTime(int64_t liveEndTime) { DARABONBA_PTR_SET_VALUE(liveEndTime_, liveEndTime) };


    // liveStartTime Field Functions 
    bool hasLiveStartTime() const { return this->liveStartTime_ != nullptr;};
    void deleteLiveStartTime() { this->liveStartTime_ = nullptr;};
    inline int64_t liveStartTime() const { DARABONBA_PTR_GET_DEFAULT(liveStartTime_, 0L) };
    inline GetOrgLiveListResponseBodyResultUpdateLiveLiveList& setLiveStartTime(int64_t liveStartTime) { DARABONBA_PTR_SET_VALUE(liveStartTime_, liveStartTime) };


    // liveUuid Field Functions 
    bool hasLiveUuid() const { return this->liveUuid_ != nullptr;};
    void deleteLiveUuid() { this->liveUuid_ = nullptr;};
    inline string liveUuid() const { DARABONBA_PTR_GET_DEFAULT(liveUuid_, "") };
    inline GetOrgLiveListResponseBodyResultUpdateLiveLiveList& setLiveUuid(string liveUuid) { DARABONBA_PTR_SET_VALUE(liveUuid_, liveUuid) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline GetOrgLiveListResponseBodyResultUpdateLiveLiveList& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    std::shared_ptr<string> anchorNickname_ = nullptr;
    std::shared_ptr<string> anchorUnionId_ = nullptr;
    std::shared_ptr<string> anchorUnionIdInAlibaba_ = nullptr;
    std::shared_ptr<string> anchorUserId_ = nullptr;
    std::shared_ptr<int64_t> liveEndTime_ = nullptr;
    std::shared_ptr<int64_t> liveStartTime_ = nullptr;
    std::shared_ptr<string> liveUuid_ = nullptr;
    std::shared_ptr<string> title_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
