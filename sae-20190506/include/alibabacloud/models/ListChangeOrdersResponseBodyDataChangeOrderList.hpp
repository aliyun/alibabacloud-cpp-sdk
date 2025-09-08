// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCHANGEORDERSRESPONSEBODYDATACHANGEORDERLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTCHANGEORDERSRESPONSEBODYDATACHANGEORDERLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class ListChangeOrdersResponseBodyDataChangeOrderList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListChangeOrdersResponseBodyDataChangeOrderList& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(BatchCount, batchCount_);
      DARABONBA_PTR_TO_JSON(BatchType, batchType_);
      DARABONBA_PTR_TO_JSON(ChangeOrderId, changeOrderId_);
      DARABONBA_PTR_TO_JSON(CoType, coType_);
      DARABONBA_PTR_TO_JSON(CoTypeCode, coTypeCode_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(CreateUserId, createUserId_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(FinishTime, finishTime_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, ListChangeOrdersResponseBodyDataChangeOrderList& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(BatchCount, batchCount_);
      DARABONBA_PTR_FROM_JSON(BatchType, batchType_);
      DARABONBA_PTR_FROM_JSON(ChangeOrderId, changeOrderId_);
      DARABONBA_PTR_FROM_JSON(CoType, coType_);
      DARABONBA_PTR_FROM_JSON(CoTypeCode, coTypeCode_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(CreateUserId, createUserId_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(FinishTime, finishTime_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    ListChangeOrdersResponseBodyDataChangeOrderList() = default ;
    ListChangeOrdersResponseBodyDataChangeOrderList(const ListChangeOrdersResponseBodyDataChangeOrderList &) = default ;
    ListChangeOrdersResponseBodyDataChangeOrderList(ListChangeOrdersResponseBodyDataChangeOrderList &&) = default ;
    ListChangeOrdersResponseBodyDataChangeOrderList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListChangeOrdersResponseBodyDataChangeOrderList() = default ;
    ListChangeOrdersResponseBodyDataChangeOrderList& operator=(const ListChangeOrdersResponseBodyDataChangeOrderList &) = default ;
    ListChangeOrdersResponseBodyDataChangeOrderList& operator=(ListChangeOrdersResponseBodyDataChangeOrderList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appId_ != nullptr
        && this->batchCount_ != nullptr && this->batchType_ != nullptr && this->changeOrderId_ != nullptr && this->coType_ != nullptr && this->coTypeCode_ != nullptr
        && this->createTime_ != nullptr && this->createUserId_ != nullptr && this->description_ != nullptr && this->finishTime_ != nullptr && this->groupId_ != nullptr
        && this->source_ != nullptr && this->status_ != nullptr && this->userId_ != nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline ListChangeOrdersResponseBodyDataChangeOrderList& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // batchCount Field Functions 
    bool hasBatchCount() const { return this->batchCount_ != nullptr;};
    void deleteBatchCount() { this->batchCount_ = nullptr;};
    inline int32_t batchCount() const { DARABONBA_PTR_GET_DEFAULT(batchCount_, 0) };
    inline ListChangeOrdersResponseBodyDataChangeOrderList& setBatchCount(int32_t batchCount) { DARABONBA_PTR_SET_VALUE(batchCount_, batchCount) };


    // batchType Field Functions 
    bool hasBatchType() const { return this->batchType_ != nullptr;};
    void deleteBatchType() { this->batchType_ = nullptr;};
    inline string batchType() const { DARABONBA_PTR_GET_DEFAULT(batchType_, "") };
    inline ListChangeOrdersResponseBodyDataChangeOrderList& setBatchType(string batchType) { DARABONBA_PTR_SET_VALUE(batchType_, batchType) };


    // changeOrderId Field Functions 
    bool hasChangeOrderId() const { return this->changeOrderId_ != nullptr;};
    void deleteChangeOrderId() { this->changeOrderId_ = nullptr;};
    inline string changeOrderId() const { DARABONBA_PTR_GET_DEFAULT(changeOrderId_, "") };
    inline ListChangeOrdersResponseBodyDataChangeOrderList& setChangeOrderId(string changeOrderId) { DARABONBA_PTR_SET_VALUE(changeOrderId_, changeOrderId) };


    // coType Field Functions 
    bool hasCoType() const { return this->coType_ != nullptr;};
    void deleteCoType() { this->coType_ = nullptr;};
    inline string coType() const { DARABONBA_PTR_GET_DEFAULT(coType_, "") };
    inline ListChangeOrdersResponseBodyDataChangeOrderList& setCoType(string coType) { DARABONBA_PTR_SET_VALUE(coType_, coType) };


    // coTypeCode Field Functions 
    bool hasCoTypeCode() const { return this->coTypeCode_ != nullptr;};
    void deleteCoTypeCode() { this->coTypeCode_ = nullptr;};
    inline string coTypeCode() const { DARABONBA_PTR_GET_DEFAULT(coTypeCode_, "") };
    inline ListChangeOrdersResponseBodyDataChangeOrderList& setCoTypeCode(string coTypeCode) { DARABONBA_PTR_SET_VALUE(coTypeCode_, coTypeCode) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListChangeOrdersResponseBodyDataChangeOrderList& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // createUserId Field Functions 
    bool hasCreateUserId() const { return this->createUserId_ != nullptr;};
    void deleteCreateUserId() { this->createUserId_ = nullptr;};
    inline string createUserId() const { DARABONBA_PTR_GET_DEFAULT(createUserId_, "") };
    inline ListChangeOrdersResponseBodyDataChangeOrderList& setCreateUserId(string createUserId) { DARABONBA_PTR_SET_VALUE(createUserId_, createUserId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListChangeOrdersResponseBodyDataChangeOrderList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // finishTime Field Functions 
    bool hasFinishTime() const { return this->finishTime_ != nullptr;};
    void deleteFinishTime() { this->finishTime_ = nullptr;};
    inline string finishTime() const { DARABONBA_PTR_GET_DEFAULT(finishTime_, "") };
    inline ListChangeOrdersResponseBodyDataChangeOrderList& setFinishTime(string finishTime) { DARABONBA_PTR_SET_VALUE(finishTime_, finishTime) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline ListChangeOrdersResponseBodyDataChangeOrderList& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline ListChangeOrdersResponseBodyDataChangeOrderList& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline ListChangeOrdersResponseBodyDataChangeOrderList& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline ListChangeOrdersResponseBodyDataChangeOrderList& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // The number of entries returned on each page.
    std::shared_ptr<string> appId_ = nullptr;
    // The ID of the user who created the change order.
    std::shared_ptr<int32_t> batchCount_ = nullptr;
    // The ID of the group.
    std::shared_ptr<string> batchType_ = nullptr;
    // The mode in which the release batches are determined. Valid values:
    // 
    // *   **auto**: SAE automatically determines the release batches.
    // *   **manual**: You must manually determine the release batches.
    std::shared_ptr<string> changeOrderId_ = nullptr;
    // The ID of the application.
    std::shared_ptr<string> coType_ = nullptr;
    // The code of the change order. Valid values:
    // 
    // *   **CoBindSlb**: associates the Server Load Balancer (SLB) instance with the application.
    // *   **CoUnbindSlb**: disassociates an SLB instance from the application.
    // *   **CoCreateApp**: creates the application.
    // *   **CoDeleteApp**: deletes the application.
    // *   **CoDeploy**: deploys the application.
    // *   **CoRestartApplication**: restarts the application.
    // *   **CoRollback**: rolls back the application.
    // *   **CoScaleIn**: scales in the application.
    // *   **CoScaleOut**: scales out the application.
    // *   **CoStartApplication**: starts the application.
    // *   **CoStopApplication**: stops the application.
    // *   **CoRescaleApplicationVertically**: modifies the instance type.
    // *   **CoDeployHistroy**: rolls back the application to an earlier version.
    // *   **CoBindNas**: associates a network-attached storage (NAS) file system with the application.
    // *   **CoUnbindNas**: disassociates a NAS file system from the application.
    // *   **CoBatchStartApplication**: starts multiple applications concurrently.
    // *   **CoBatchStopApplication**: stops multiple applications concurrently.
    // *   **CoRestartInstances**: restarts the instance.
    // *   **CoDeleteInstances**: deletes the instance.
    // *   **CoScaleInAppWithInstances**: reduces the specified number of application instances.
    std::shared_ptr<string> coTypeCode_ = nullptr;
    // The ID of the user.
    std::shared_ptr<string> createTime_ = nullptr;
    // The code of the change type. Valid values:
    // 
    // *   **CoBindSlb**: associates an SLB instance with the application.
    // *   **CoUnbindSlb**: disassociates the SLB instance from the application.
    // *   **CoCreateApp**: creates the application.
    // *   **CoDeleteApp**: deletes the application.
    // *   **CoDeploy**: deploys the application.
    // *   **CoRestartApplication**: restarts the application.
    // *   **CoRollback**: rolls back the application.
    // *   **CoScaleIn**: scales in the application.
    // *   **CoScaleOut**: scales out the application.
    // *   **CoStart**: starts the application.
    // *   **CoStop**: stops the application.
    // *   **CoRescaleApplicationVertically**: modifies the instance specifications.
    // *   **CoDeployHistroy**: rolls back the application to a historical version.
    // *   **CoBindNas**: associates a NAS file system with the application.
    // *   **CoUnbindNas**: disassociates the NAS file system from the application.
    // *   **CoBatchStartApplication**: starts multiple applications concurrently.
    // *   **CoBatchStopApplication**: stops multiple applications concurrently.
    // *   **CoRestartInstances**: restarts the instances.
    // *   **CoDeleteInstances**: deletes the instances.
    // *   **CoScaleInAppWithInstances**: reduces the number of the specified application instances.
    std::shared_ptr<string> createUserId_ = nullptr;
    // The change type, which corresponds to the **CoTypeCode** parameter.
    std::shared_ptr<string> description_ = nullptr;
    // The time when the change order was created.
    std::shared_ptr<string> finishTime_ = nullptr;
    // The description about the application.
    std::shared_ptr<string> groupId_ = nullptr;
    // The number of release batches.
    std::shared_ptr<string> source_ = nullptr;
    // The time when the change order was completed.
    std::shared_ptr<int32_t> status_ = nullptr;
    // The source of the change order.
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
