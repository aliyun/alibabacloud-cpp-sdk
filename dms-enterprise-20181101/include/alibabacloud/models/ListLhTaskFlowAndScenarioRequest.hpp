// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLHTASKFLOWANDSCENARIOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTLHTASKFLOWANDSCENARIOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListLhTaskFlowAndScenarioRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLhTaskFlowAndScenarioRequest& obj) { 
      DARABONBA_PTR_TO_JSON(SpaceId, spaceId_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, ListLhTaskFlowAndScenarioRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(SpaceId, spaceId_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    ListLhTaskFlowAndScenarioRequest() = default ;
    ListLhTaskFlowAndScenarioRequest(const ListLhTaskFlowAndScenarioRequest &) = default ;
    ListLhTaskFlowAndScenarioRequest(ListLhTaskFlowAndScenarioRequest &&) = default ;
    ListLhTaskFlowAndScenarioRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLhTaskFlowAndScenarioRequest() = default ;
    ListLhTaskFlowAndScenarioRequest& operator=(const ListLhTaskFlowAndScenarioRequest &) = default ;
    ListLhTaskFlowAndScenarioRequest& operator=(ListLhTaskFlowAndScenarioRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->spaceId_ != nullptr
        && this->tid_ != nullptr && this->userId_ != nullptr; };
    // spaceId Field Functions 
    bool hasSpaceId() const { return this->spaceId_ != nullptr;};
    void deleteSpaceId() { this->spaceId_ = nullptr;};
    inline int64_t spaceId() const { DARABONBA_PTR_GET_DEFAULT(spaceId_, 0L) };
    inline ListLhTaskFlowAndScenarioRequest& setSpaceId(int64_t spaceId) { DARABONBA_PTR_SET_VALUE(spaceId_, spaceId) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t tid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline ListLhTaskFlowAndScenarioRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline int64_t userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, 0L) };
    inline ListLhTaskFlowAndScenarioRequest& setUserId(int64_t userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // The ID of the workspace. You can call the [GetLhSpaceByName](https://help.aliyun.com/document_detail/424379.html) operation to obtain the workspace ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> spaceId_ = nullptr;
    // The ID of the tenant. You can call the [GetUserActiveTenant](https://help.aliyun.com/document_detail/198073.html) or [ListUserTenants](https://help.aliyun.com/document_detail/198074.html) operation to obtain the tenant ID.
    std::shared_ptr<int64_t> tid_ = nullptr;
    // The ID of the user. You can call the [ListUsers](https://help.aliyun.com/document_detail/141938.html) or [GetUser](https://help.aliyun.com/document_detail/147098.html) operation to obtain the user ID.
    std::shared_ptr<int64_t> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
