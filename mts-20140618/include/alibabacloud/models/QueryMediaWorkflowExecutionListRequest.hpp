// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMEDIAWORKFLOWEXECUTIONLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYMEDIAWORKFLOWEXECUTIONLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class QueryMediaWorkflowExecutionListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryMediaWorkflowExecutionListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(RunIds, runIds_);
    };
    friend void from_json(const Darabonba::Json& j, QueryMediaWorkflowExecutionListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(RunIds, runIds_);
    };
    QueryMediaWorkflowExecutionListRequest() = default ;
    QueryMediaWorkflowExecutionListRequest(const QueryMediaWorkflowExecutionListRequest &) = default ;
    QueryMediaWorkflowExecutionListRequest(QueryMediaWorkflowExecutionListRequest &&) = default ;
    QueryMediaWorkflowExecutionListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryMediaWorkflowExecutionListRequest() = default ;
    QueryMediaWorkflowExecutionListRequest& operator=(const QueryMediaWorkflowExecutionListRequest &) = default ;
    QueryMediaWorkflowExecutionListRequest& operator=(QueryMediaWorkflowExecutionListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ownerAccount_ == nullptr
        && this->ownerId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->runIds_ == nullptr; };
    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline QueryMediaWorkflowExecutionListRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline QueryMediaWorkflowExecutionListRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline QueryMediaWorkflowExecutionListRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline QueryMediaWorkflowExecutionListRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // runIds Field Functions 
    bool hasRunIds() const { return this->runIds_ != nullptr;};
    void deleteRunIds() { this->runIds_ = nullptr;};
    inline string getRunIds() const { DARABONBA_PTR_GET_DEFAULT(runIds_, "") };
    inline QueryMediaWorkflowExecutionListRequest& setRunIds(string runIds) { DARABONBA_PTR_SET_VALUE(runIds_, runIds) };


  protected:
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The IDs of the media workflow execution instances. To obtain the instance ID, log on to the **ApsaraVideo Media Processing (MPS) console** and choose **Workflows** > **Execution Instances** in the left-side navigation pane. Separate multiple IDs with commas (,). You can query a maximum of 10 media workflow execution instances at a time.
    // 
    // This parameter is required.
    shared_ptr<string> runIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
