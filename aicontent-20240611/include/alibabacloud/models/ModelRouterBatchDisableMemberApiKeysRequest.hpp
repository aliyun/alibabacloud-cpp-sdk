// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODELROUTERBATCHDISABLEMEMBERAPIKEYSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODELROUTERBATCHDISABLEMEMBERAPIKEYSREQUEST_HPP_
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
  class ModelRouterBatchDisableMemberApiKeysRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModelRouterBatchDisableMemberApiKeysRequest& obj) { 
      DARABONBA_PTR_TO_JSON(userIds, userIds_);
    };
    friend void from_json(const Darabonba::Json& j, ModelRouterBatchDisableMemberApiKeysRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(userIds, userIds_);
    };
    ModelRouterBatchDisableMemberApiKeysRequest() = default ;
    ModelRouterBatchDisableMemberApiKeysRequest(const ModelRouterBatchDisableMemberApiKeysRequest &) = default ;
    ModelRouterBatchDisableMemberApiKeysRequest(ModelRouterBatchDisableMemberApiKeysRequest &&) = default ;
    ModelRouterBatchDisableMemberApiKeysRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModelRouterBatchDisableMemberApiKeysRequest() = default ;
    ModelRouterBatchDisableMemberApiKeysRequest& operator=(const ModelRouterBatchDisableMemberApiKeysRequest &) = default ;
    ModelRouterBatchDisableMemberApiKeysRequest& operator=(ModelRouterBatchDisableMemberApiKeysRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->userIds_ == nullptr; };
    // userIds Field Functions 
    bool hasUserIds() const { return this->userIds_ != nullptr;};
    void deleteUserIds() { this->userIds_ = nullptr;};
    inline const vector<int64_t> & getUserIds() const { DARABONBA_PTR_GET_CONST(userIds_, vector<int64_t>) };
    inline vector<int64_t> getUserIds() { DARABONBA_PTR_GET(userIds_, vector<int64_t>) };
    inline ModelRouterBatchDisableMemberApiKeysRequest& setUserIds(const vector<int64_t> & userIds) { DARABONBA_PTR_SET_VALUE(userIds_, userIds) };
    inline ModelRouterBatchDisableMemberApiKeysRequest& setUserIds(vector<int64_t> && userIds) { DARABONBA_PTR_SET_RVALUE(userIds_, userIds) };


  protected:
    // The list of member user IDs.
    shared_ptr<vector<int64_t>> userIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiContent20240611
#endif
