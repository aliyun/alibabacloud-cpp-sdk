// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEMESSAGEGROUPBANDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEMESSAGEGROUPBANDRESPONSEBODY_HPP_
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
  class DescribeLiveMessageGroupBandResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveMessageGroupBandResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BannedUserList, bannedUserList_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(IsbannedAll, isbannedAll_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(UnbannedUserList, unbannedUserList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveMessageGroupBandResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BannedUserList, bannedUserList_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(IsbannedAll, isbannedAll_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(UnbannedUserList, unbannedUserList_);
    };
    DescribeLiveMessageGroupBandResponseBody() = default ;
    DescribeLiveMessageGroupBandResponseBody(const DescribeLiveMessageGroupBandResponseBody &) = default ;
    DescribeLiveMessageGroupBandResponseBody(DescribeLiveMessageGroupBandResponseBody &&) = default ;
    DescribeLiveMessageGroupBandResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveMessageGroupBandResponseBody() = default ;
    DescribeLiveMessageGroupBandResponseBody& operator=(const DescribeLiveMessageGroupBandResponseBody &) = default ;
    DescribeLiveMessageGroupBandResponseBody& operator=(DescribeLiveMessageGroupBandResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bannedUserList_ != nullptr
        && this->groupId_ != nullptr && this->isbannedAll_ != nullptr && this->requestId_ != nullptr && this->unbannedUserList_ != nullptr; };
    // bannedUserList Field Functions 
    bool hasBannedUserList() const { return this->bannedUserList_ != nullptr;};
    void deleteBannedUserList() { this->bannedUserList_ = nullptr;};
    inline const vector<string> & bannedUserList() const { DARABONBA_PTR_GET_CONST(bannedUserList_, vector<string>) };
    inline vector<string> bannedUserList() { DARABONBA_PTR_GET(bannedUserList_, vector<string>) };
    inline DescribeLiveMessageGroupBandResponseBody& setBannedUserList(const vector<string> & bannedUserList) { DARABONBA_PTR_SET_VALUE(bannedUserList_, bannedUserList) };
    inline DescribeLiveMessageGroupBandResponseBody& setBannedUserList(vector<string> && bannedUserList) { DARABONBA_PTR_SET_RVALUE(bannedUserList_, bannedUserList) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline DescribeLiveMessageGroupBandResponseBody& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // isbannedAll Field Functions 
    bool hasIsbannedAll() const { return this->isbannedAll_ != nullptr;};
    void deleteIsbannedAll() { this->isbannedAll_ = nullptr;};
    inline bool isbannedAll() const { DARABONBA_PTR_GET_DEFAULT(isbannedAll_, false) };
    inline DescribeLiveMessageGroupBandResponseBody& setIsbannedAll(bool isbannedAll) { DARABONBA_PTR_SET_VALUE(isbannedAll_, isbannedAll) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLiveMessageGroupBandResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // unbannedUserList Field Functions 
    bool hasUnbannedUserList() const { return this->unbannedUserList_ != nullptr;};
    void deleteUnbannedUserList() { this->unbannedUserList_ = nullptr;};
    inline const vector<string> & unbannedUserList() const { DARABONBA_PTR_GET_CONST(unbannedUserList_, vector<string>) };
    inline vector<string> unbannedUserList() { DARABONBA_PTR_GET(unbannedUserList_, vector<string>) };
    inline DescribeLiveMessageGroupBandResponseBody& setUnbannedUserList(const vector<string> & unbannedUserList) { DARABONBA_PTR_SET_VALUE(unbannedUserList_, unbannedUserList) };
    inline DescribeLiveMessageGroupBandResponseBody& setUnbannedUserList(vector<string> && unbannedUserList) { DARABONBA_PTR_SET_RVALUE(unbannedUserList_, unbannedUserList) };


  protected:
    // The list of users that were muted separately, but not by muting the entire group.
    std::shared_ptr<vector<string>> bannedUserList_ = nullptr;
    // The group ID.
    std::shared_ptr<string> groupId_ = nullptr;
    // Indicates whether all users in the interactive messaging group are muted.
    std::shared_ptr<bool> isbannedAll_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The list of users who were not muted when the entire group was muted.
    std::shared_ptr<vector<string>> unbannedUserList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
