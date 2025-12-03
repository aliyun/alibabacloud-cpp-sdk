// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTORGANIZATIONMEMBERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTORGANIZATIONMEMBERSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class ListOrganizationMembersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListOrganizationMembersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(containsExternInfo, containsExternInfo_);
      DARABONBA_PTR_TO_JSON(externUid, externUid_);
      DARABONBA_PTR_TO_JSON(joinTimeFrom, joinTimeFrom_);
      DARABONBA_PTR_TO_JSON(joinTimeTo, joinTimeTo_);
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(organizationMemberName, organizationMemberName_);
      DARABONBA_PTR_TO_JSON(provider, provider_);
      DARABONBA_PTR_TO_JSON(state, state_);
    };
    friend void from_json(const Darabonba::Json& j, ListOrganizationMembersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(containsExternInfo, containsExternInfo_);
      DARABONBA_PTR_FROM_JSON(externUid, externUid_);
      DARABONBA_PTR_FROM_JSON(joinTimeFrom, joinTimeFrom_);
      DARABONBA_PTR_FROM_JSON(joinTimeTo, joinTimeTo_);
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(organizationMemberName, organizationMemberName_);
      DARABONBA_PTR_FROM_JSON(provider, provider_);
      DARABONBA_PTR_FROM_JSON(state, state_);
    };
    ListOrganizationMembersRequest() = default ;
    ListOrganizationMembersRequest(const ListOrganizationMembersRequest &) = default ;
    ListOrganizationMembersRequest(ListOrganizationMembersRequest &&) = default ;
    ListOrganizationMembersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListOrganizationMembersRequest() = default ;
    ListOrganizationMembersRequest& operator=(const ListOrganizationMembersRequest &) = default ;
    ListOrganizationMembersRequest& operator=(ListOrganizationMembersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->containsExternInfo_ == nullptr
        && return this->externUid_ == nullptr && return this->joinTimeFrom_ == nullptr && return this->joinTimeTo_ == nullptr && return this->maxResults_ == nullptr && return this->nextToken_ == nullptr
        && return this->organizationMemberName_ == nullptr && return this->provider_ == nullptr && return this->state_ == nullptr; };
    // containsExternInfo Field Functions 
    bool hasContainsExternInfo() const { return this->containsExternInfo_ != nullptr;};
    void deleteContainsExternInfo() { this->containsExternInfo_ = nullptr;};
    inline bool containsExternInfo() const { DARABONBA_PTR_GET_DEFAULT(containsExternInfo_, false) };
    inline ListOrganizationMembersRequest& setContainsExternInfo(bool containsExternInfo) { DARABONBA_PTR_SET_VALUE(containsExternInfo_, containsExternInfo) };


    // externUid Field Functions 
    bool hasExternUid() const { return this->externUid_ != nullptr;};
    void deleteExternUid() { this->externUid_ = nullptr;};
    inline string externUid() const { DARABONBA_PTR_GET_DEFAULT(externUid_, "") };
    inline ListOrganizationMembersRequest& setExternUid(string externUid) { DARABONBA_PTR_SET_VALUE(externUid_, externUid) };


    // joinTimeFrom Field Functions 
    bool hasJoinTimeFrom() const { return this->joinTimeFrom_ != nullptr;};
    void deleteJoinTimeFrom() { this->joinTimeFrom_ = nullptr;};
    inline int64_t joinTimeFrom() const { DARABONBA_PTR_GET_DEFAULT(joinTimeFrom_, 0L) };
    inline ListOrganizationMembersRequest& setJoinTimeFrom(int64_t joinTimeFrom) { DARABONBA_PTR_SET_VALUE(joinTimeFrom_, joinTimeFrom) };


    // joinTimeTo Field Functions 
    bool hasJoinTimeTo() const { return this->joinTimeTo_ != nullptr;};
    void deleteJoinTimeTo() { this->joinTimeTo_ = nullptr;};
    inline int64_t joinTimeTo() const { DARABONBA_PTR_GET_DEFAULT(joinTimeTo_, 0L) };
    inline ListOrganizationMembersRequest& setJoinTimeTo(int64_t joinTimeTo) { DARABONBA_PTR_SET_VALUE(joinTimeTo_, joinTimeTo) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int64_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0L) };
    inline ListOrganizationMembersRequest& setMaxResults(int64_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListOrganizationMembersRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // organizationMemberName Field Functions 
    bool hasOrganizationMemberName() const { return this->organizationMemberName_ != nullptr;};
    void deleteOrganizationMemberName() { this->organizationMemberName_ = nullptr;};
    inline string organizationMemberName() const { DARABONBA_PTR_GET_DEFAULT(organizationMemberName_, "") };
    inline ListOrganizationMembersRequest& setOrganizationMemberName(string organizationMemberName) { DARABONBA_PTR_SET_VALUE(organizationMemberName_, organizationMemberName) };


    // provider Field Functions 
    bool hasProvider() const { return this->provider_ != nullptr;};
    void deleteProvider() { this->provider_ = nullptr;};
    inline string provider() const { DARABONBA_PTR_GET_DEFAULT(provider_, "") };
    inline ListOrganizationMembersRequest& setProvider(string provider) { DARABONBA_PTR_SET_VALUE(provider_, provider) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline ListOrganizationMembersRequest& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


  protected:
    // 返回信息中是否包含第三方信息，默认不包含。
    std::shared_ptr<bool> containsExternInfo_ = nullptr;
    std::shared_ptr<string> externUid_ = nullptr;
    std::shared_ptr<int64_t> joinTimeFrom_ = nullptr;
    std::shared_ptr<int64_t> joinTimeTo_ = nullptr;
    std::shared_ptr<int64_t> maxResults_ = nullptr;
    std::shared_ptr<string> nextToken_ = nullptr;
    std::shared_ptr<string> organizationMemberName_ = nullptr;
    std::shared_ptr<string> provider_ = nullptr;
    std::shared_ptr<string> state_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
