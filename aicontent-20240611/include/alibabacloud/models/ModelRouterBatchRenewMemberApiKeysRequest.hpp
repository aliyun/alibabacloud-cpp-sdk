// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODELROUTERBATCHRENEWMEMBERAPIKEYSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODELROUTERBATCHRENEWMEMBERAPIKEYSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiContent20240611
{
namespace Models
{
  class ModelRouterBatchRenewMemberApiKeysRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModelRouterBatchRenewMemberApiKeysRequest& obj) { 
      DARABONBA_PTR_TO_JSON(expireAt, expireAt_);
      DARABONBA_PTR_TO_JSON(userIds, userIds_);
    };
    friend void from_json(const Darabonba::Json& j, ModelRouterBatchRenewMemberApiKeysRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(expireAt, expireAt_);
      DARABONBA_PTR_FROM_JSON(userIds, userIds_);
    };
    ModelRouterBatchRenewMemberApiKeysRequest() = default ;
    ModelRouterBatchRenewMemberApiKeysRequest(const ModelRouterBatchRenewMemberApiKeysRequest &) = default ;
    ModelRouterBatchRenewMemberApiKeysRequest(ModelRouterBatchRenewMemberApiKeysRequest &&) = default ;
    ModelRouterBatchRenewMemberApiKeysRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModelRouterBatchRenewMemberApiKeysRequest() = default ;
    ModelRouterBatchRenewMemberApiKeysRequest& operator=(const ModelRouterBatchRenewMemberApiKeysRequest &) = default ;
    ModelRouterBatchRenewMemberApiKeysRequest& operator=(ModelRouterBatchRenewMemberApiKeysRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->expireAt_ == nullptr
        && this->userIds_ == nullptr; };
    // expireAt Field Functions 
    bool hasExpireAt() const { return this->expireAt_ != nullptr;};
    void deleteExpireAt() { this->expireAt_ = nullptr;};
    inline string getExpireAt() const { DARABONBA_PTR_GET_DEFAULT(expireAt_, "") };
    inline ModelRouterBatchRenewMemberApiKeysRequest& setExpireAt(string expireAt) { DARABONBA_PTR_SET_VALUE(expireAt_, expireAt) };


    // userIds Field Functions 
    bool hasUserIds() const { return this->userIds_ != nullptr;};
    void deleteUserIds() { this->userIds_ = nullptr;};
    inline const vector<int64_t> & getUserIds() const { DARABONBA_PTR_GET_CONST(userIds_, vector<int64_t>) };
    inline vector<int64_t> getUserIds() { DARABONBA_PTR_GET(userIds_, vector<int64_t>) };
    inline ModelRouterBatchRenewMemberApiKeysRequest& setUserIds(const vector<int64_t> & userIds) { DARABONBA_PTR_SET_VALUE(userIds_, userIds) };
    inline ModelRouterBatchRenewMemberApiKeysRequest& setUserIds(vector<int64_t> && userIds) { DARABONBA_PTR_SET_RVALUE(userIds_, userIds) };


  protected:
    // The new expiration time in RFC 3339 format. The time must be later than the current time. If this parameter is not provided or is set to null, the API keys remain permanently valid. This parameter only modifies the validity period and does not change the enabled or disabled status.
    shared_ptr<string> expireAt_ {};
    // The list of member user IDs. This operation renews all undeleted API keys of these members in the specified department.
    // 
    // This parameter is required.
    shared_ptr<vector<int64_t>> userIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiContent20240611
#endif
