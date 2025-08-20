// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETREGISTRATIONPOLICYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETREGISTRATIONPOLICYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetRegistrationPolicyResponseBodyLimitDetail.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class GetRegistrationPolicyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRegistrationPolicyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(LimitDetail, limitDetail_);
      DARABONBA_PTR_TO_JSON(MatchMode, matchMode_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PolicyId, policyId_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(UserGroupIds, userGroupIds_);
      DARABONBA_PTR_TO_JSON(Whitelist, whitelist_);
    };
    friend void from_json(const Darabonba::Json& j, GetRegistrationPolicyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(LimitDetail, limitDetail_);
      DARABONBA_PTR_FROM_JSON(MatchMode, matchMode_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PolicyId, policyId_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(UserGroupIds, userGroupIds_);
      DARABONBA_PTR_FROM_JSON(Whitelist, whitelist_);
    };
    GetRegistrationPolicyResponseBody() = default ;
    GetRegistrationPolicyResponseBody(const GetRegistrationPolicyResponseBody &) = default ;
    GetRegistrationPolicyResponseBody(GetRegistrationPolicyResponseBody &&) = default ;
    GetRegistrationPolicyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRegistrationPolicyResponseBody() = default ;
    GetRegistrationPolicyResponseBody& operator=(const GetRegistrationPolicyResponseBody &) = default ;
    GetRegistrationPolicyResponseBody& operator=(GetRegistrationPolicyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createTime_ != nullptr
        && this->description_ != nullptr && this->limitDetail_ != nullptr && this->matchMode_ != nullptr && this->name_ != nullptr && this->policyId_ != nullptr
        && this->priority_ != nullptr && this->requestId_ != nullptr && this->status_ != nullptr && this->userGroupIds_ != nullptr && this->whitelist_ != nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetRegistrationPolicyResponseBody& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetRegistrationPolicyResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // limitDetail Field Functions 
    bool hasLimitDetail() const { return this->limitDetail_ != nullptr;};
    void deleteLimitDetail() { this->limitDetail_ = nullptr;};
    inline const vector<GetRegistrationPolicyResponseBodyLimitDetail> & limitDetail() const { DARABONBA_PTR_GET_CONST(limitDetail_, vector<GetRegistrationPolicyResponseBodyLimitDetail>) };
    inline vector<GetRegistrationPolicyResponseBodyLimitDetail> limitDetail() { DARABONBA_PTR_GET(limitDetail_, vector<GetRegistrationPolicyResponseBodyLimitDetail>) };
    inline GetRegistrationPolicyResponseBody& setLimitDetail(const vector<GetRegistrationPolicyResponseBodyLimitDetail> & limitDetail) { DARABONBA_PTR_SET_VALUE(limitDetail_, limitDetail) };
    inline GetRegistrationPolicyResponseBody& setLimitDetail(vector<GetRegistrationPolicyResponseBodyLimitDetail> && limitDetail) { DARABONBA_PTR_SET_RVALUE(limitDetail_, limitDetail) };


    // matchMode Field Functions 
    bool hasMatchMode() const { return this->matchMode_ != nullptr;};
    void deleteMatchMode() { this->matchMode_ = nullptr;};
    inline string matchMode() const { DARABONBA_PTR_GET_DEFAULT(matchMode_, "") };
    inline GetRegistrationPolicyResponseBody& setMatchMode(string matchMode) { DARABONBA_PTR_SET_VALUE(matchMode_, matchMode) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetRegistrationPolicyResponseBody& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // policyId Field Functions 
    bool hasPolicyId() const { return this->policyId_ != nullptr;};
    void deletePolicyId() { this->policyId_ = nullptr;};
    inline string policyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, "") };
    inline GetRegistrationPolicyResponseBody& setPolicyId(string policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int64_t priority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0L) };
    inline GetRegistrationPolicyResponseBody& setPriority(int64_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetRegistrationPolicyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetRegistrationPolicyResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // userGroupIds Field Functions 
    bool hasUserGroupIds() const { return this->userGroupIds_ != nullptr;};
    void deleteUserGroupIds() { this->userGroupIds_ = nullptr;};
    inline const vector<string> & userGroupIds() const { DARABONBA_PTR_GET_CONST(userGroupIds_, vector<string>) };
    inline vector<string> userGroupIds() { DARABONBA_PTR_GET(userGroupIds_, vector<string>) };
    inline GetRegistrationPolicyResponseBody& setUserGroupIds(const vector<string> & userGroupIds) { DARABONBA_PTR_SET_VALUE(userGroupIds_, userGroupIds) };
    inline GetRegistrationPolicyResponseBody& setUserGroupIds(vector<string> && userGroupIds) { DARABONBA_PTR_SET_RVALUE(userGroupIds_, userGroupIds) };


    // whitelist Field Functions 
    bool hasWhitelist() const { return this->whitelist_ != nullptr;};
    void deleteWhitelist() { this->whitelist_ = nullptr;};
    inline const vector<string> & whitelist() const { DARABONBA_PTR_GET_CONST(whitelist_, vector<string>) };
    inline vector<string> whitelist() { DARABONBA_PTR_GET(whitelist_, vector<string>) };
    inline GetRegistrationPolicyResponseBody& setWhitelist(const vector<string> & whitelist) { DARABONBA_PTR_SET_VALUE(whitelist_, whitelist) };
    inline GetRegistrationPolicyResponseBody& setWhitelist(vector<string> && whitelist) { DARABONBA_PTR_SET_RVALUE(whitelist_, whitelist) };


  protected:
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<vector<GetRegistrationPolicyResponseBodyLimitDetail>> limitDetail_ = nullptr;
    std::shared_ptr<string> matchMode_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> policyId_ = nullptr;
    std::shared_ptr<int64_t> priority_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<vector<string>> userGroupIds_ = nullptr;
    std::shared_ptr<vector<string>> whitelist_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
