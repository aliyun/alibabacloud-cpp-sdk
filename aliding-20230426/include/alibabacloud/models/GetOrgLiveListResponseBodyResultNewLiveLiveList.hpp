// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETORGLIVELISTRESPONSEBODYRESULTNEWLIVELIVELIST_HPP_
#define ALIBABACLOUD_MODELS_GETORGLIVELISTRESPONSEBODYRESULTNEWLIVELIVELIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetOrgLiveListResponseBodyResultNewLiveLiveList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOrgLiveListResponseBodyResultNewLiveLiveList& obj) { 
      DARABONBA_PTR_TO_JSON(AnchorNickname, anchorNickname_);
      DARABONBA_PTR_TO_JSON(AnchorUnionId, anchorUnionId_);
      DARABONBA_PTR_TO_JSON(AnchorUnionIdInAlibaba, anchorUnionIdInAlibaba_);
      DARABONBA_PTR_TO_JSON(AnchorUserId, anchorUserId_);
      DARABONBA_PTR_TO_JSON(LiveEndTime, liveEndTime_);
      DARABONBA_PTR_TO_JSON(LiveStartTime, liveStartTime_);
      DARABONBA_PTR_TO_JSON(LiveUuid, liveUuid_);
      DARABONBA_PTR_TO_JSON(ShareOpenConversationIds, shareOpenConversationIds_);
      DARABONBA_PTR_TO_JSON(Title, title_);
    };
    friend void from_json(const Darabonba::Json& j, GetOrgLiveListResponseBodyResultNewLiveLiveList& obj) { 
      DARABONBA_PTR_FROM_JSON(AnchorNickname, anchorNickname_);
      DARABONBA_PTR_FROM_JSON(AnchorUnionId, anchorUnionId_);
      DARABONBA_PTR_FROM_JSON(AnchorUnionIdInAlibaba, anchorUnionIdInAlibaba_);
      DARABONBA_PTR_FROM_JSON(AnchorUserId, anchorUserId_);
      DARABONBA_PTR_FROM_JSON(LiveEndTime, liveEndTime_);
      DARABONBA_PTR_FROM_JSON(LiveStartTime, liveStartTime_);
      DARABONBA_PTR_FROM_JSON(LiveUuid, liveUuid_);
      DARABONBA_PTR_FROM_JSON(ShareOpenConversationIds, shareOpenConversationIds_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
    };
    GetOrgLiveListResponseBodyResultNewLiveLiveList() = default ;
    GetOrgLiveListResponseBodyResultNewLiveLiveList(const GetOrgLiveListResponseBodyResultNewLiveLiveList &) = default ;
    GetOrgLiveListResponseBodyResultNewLiveLiveList(GetOrgLiveListResponseBodyResultNewLiveLiveList &&) = default ;
    GetOrgLiveListResponseBodyResultNewLiveLiveList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOrgLiveListResponseBodyResultNewLiveLiveList() = default ;
    GetOrgLiveListResponseBodyResultNewLiveLiveList& operator=(const GetOrgLiveListResponseBodyResultNewLiveLiveList &) = default ;
    GetOrgLiveListResponseBodyResultNewLiveLiveList& operator=(GetOrgLiveListResponseBodyResultNewLiveLiveList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->anchorNickname_ != nullptr
        && this->anchorUnionId_ != nullptr && this->anchorUnionIdInAlibaba_ != nullptr && this->anchorUserId_ != nullptr && this->liveEndTime_ != nullptr && this->liveStartTime_ != nullptr
        && this->liveUuid_ != nullptr && this->shareOpenConversationIds_ != nullptr && this->title_ != nullptr; };
    // anchorNickname Field Functions 
    bool hasAnchorNickname() const { return this->anchorNickname_ != nullptr;};
    void deleteAnchorNickname() { this->anchorNickname_ = nullptr;};
    inline string anchorNickname() const { DARABONBA_PTR_GET_DEFAULT(anchorNickname_, "") };
    inline GetOrgLiveListResponseBodyResultNewLiveLiveList& setAnchorNickname(string anchorNickname) { DARABONBA_PTR_SET_VALUE(anchorNickname_, anchorNickname) };


    // anchorUnionId Field Functions 
    bool hasAnchorUnionId() const { return this->anchorUnionId_ != nullptr;};
    void deleteAnchorUnionId() { this->anchorUnionId_ = nullptr;};
    inline string anchorUnionId() const { DARABONBA_PTR_GET_DEFAULT(anchorUnionId_, "") };
    inline GetOrgLiveListResponseBodyResultNewLiveLiveList& setAnchorUnionId(string anchorUnionId) { DARABONBA_PTR_SET_VALUE(anchorUnionId_, anchorUnionId) };


    // anchorUnionIdInAlibaba Field Functions 
    bool hasAnchorUnionIdInAlibaba() const { return this->anchorUnionIdInAlibaba_ != nullptr;};
    void deleteAnchorUnionIdInAlibaba() { this->anchorUnionIdInAlibaba_ = nullptr;};
    inline string anchorUnionIdInAlibaba() const { DARABONBA_PTR_GET_DEFAULT(anchorUnionIdInAlibaba_, "") };
    inline GetOrgLiveListResponseBodyResultNewLiveLiveList& setAnchorUnionIdInAlibaba(string anchorUnionIdInAlibaba) { DARABONBA_PTR_SET_VALUE(anchorUnionIdInAlibaba_, anchorUnionIdInAlibaba) };


    // anchorUserId Field Functions 
    bool hasAnchorUserId() const { return this->anchorUserId_ != nullptr;};
    void deleteAnchorUserId() { this->anchorUserId_ = nullptr;};
    inline string anchorUserId() const { DARABONBA_PTR_GET_DEFAULT(anchorUserId_, "") };
    inline GetOrgLiveListResponseBodyResultNewLiveLiveList& setAnchorUserId(string anchorUserId) { DARABONBA_PTR_SET_VALUE(anchorUserId_, anchorUserId) };


    // liveEndTime Field Functions 
    bool hasLiveEndTime() const { return this->liveEndTime_ != nullptr;};
    void deleteLiveEndTime() { this->liveEndTime_ = nullptr;};
    inline int64_t liveEndTime() const { DARABONBA_PTR_GET_DEFAULT(liveEndTime_, 0L) };
    inline GetOrgLiveListResponseBodyResultNewLiveLiveList& setLiveEndTime(int64_t liveEndTime) { DARABONBA_PTR_SET_VALUE(liveEndTime_, liveEndTime) };


    // liveStartTime Field Functions 
    bool hasLiveStartTime() const { return this->liveStartTime_ != nullptr;};
    void deleteLiveStartTime() { this->liveStartTime_ = nullptr;};
    inline int64_t liveStartTime() const { DARABONBA_PTR_GET_DEFAULT(liveStartTime_, 0L) };
    inline GetOrgLiveListResponseBodyResultNewLiveLiveList& setLiveStartTime(int64_t liveStartTime) { DARABONBA_PTR_SET_VALUE(liveStartTime_, liveStartTime) };


    // liveUuid Field Functions 
    bool hasLiveUuid() const { return this->liveUuid_ != nullptr;};
    void deleteLiveUuid() { this->liveUuid_ = nullptr;};
    inline string liveUuid() const { DARABONBA_PTR_GET_DEFAULT(liveUuid_, "") };
    inline GetOrgLiveListResponseBodyResultNewLiveLiveList& setLiveUuid(string liveUuid) { DARABONBA_PTR_SET_VALUE(liveUuid_, liveUuid) };


    // shareOpenConversationIds Field Functions 
    bool hasShareOpenConversationIds() const { return this->shareOpenConversationIds_ != nullptr;};
    void deleteShareOpenConversationIds() { this->shareOpenConversationIds_ = nullptr;};
    inline const vector<string> & shareOpenConversationIds() const { DARABONBA_PTR_GET_CONST(shareOpenConversationIds_, vector<string>) };
    inline vector<string> shareOpenConversationIds() { DARABONBA_PTR_GET(shareOpenConversationIds_, vector<string>) };
    inline GetOrgLiveListResponseBodyResultNewLiveLiveList& setShareOpenConversationIds(const vector<string> & shareOpenConversationIds) { DARABONBA_PTR_SET_VALUE(shareOpenConversationIds_, shareOpenConversationIds) };
    inline GetOrgLiveListResponseBodyResultNewLiveLiveList& setShareOpenConversationIds(vector<string> && shareOpenConversationIds) { DARABONBA_PTR_SET_RVALUE(shareOpenConversationIds_, shareOpenConversationIds) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline GetOrgLiveListResponseBodyResultNewLiveLiveList& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    std::shared_ptr<string> anchorNickname_ = nullptr;
    std::shared_ptr<string> anchorUnionId_ = nullptr;
    std::shared_ptr<string> anchorUnionIdInAlibaba_ = nullptr;
    std::shared_ptr<string> anchorUserId_ = nullptr;
    std::shared_ptr<int64_t> liveEndTime_ = nullptr;
    std::shared_ptr<int64_t> liveStartTime_ = nullptr;
    std::shared_ptr<string> liveUuid_ = nullptr;
    std::shared_ptr<vector<string>> shareOpenConversationIds_ = nullptr;
    std::shared_ptr<string> title_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
