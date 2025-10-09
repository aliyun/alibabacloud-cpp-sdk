// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDIJOBLOGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETDIJOBLOGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetDIJobLogRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDIJobLogRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DIJobId, DIJobId_);
      DARABONBA_PTR_TO_JSON(FailoverId, failoverId_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(NodeType, nodeType_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
    };
    friend void from_json(const Darabonba::Json& j, GetDIJobLogRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DIJobId, DIJobId_);
      DARABONBA_PTR_FROM_JSON(FailoverId, failoverId_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(NodeType, nodeType_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
    };
    GetDIJobLogRequest() = default ;
    GetDIJobLogRequest(const GetDIJobLogRequest &) = default ;
    GetDIJobLogRequest(GetDIJobLogRequest &&) = default ;
    GetDIJobLogRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDIJobLogRequest() = default ;
    GetDIJobLogRequest& operator=(const GetDIJobLogRequest &) = default ;
    GetDIJobLogRequest& operator=(GetDIJobLogRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->DIJobId_ != nullptr
        && this->failoverId_ != nullptr && this->id_ != nullptr && this->instanceId_ != nullptr && this->nodeType_ != nullptr && this->pageNumber_ != nullptr; };
    // DIJobId Field Functions 
    bool hasDIJobId() const { return this->DIJobId_ != nullptr;};
    void deleteDIJobId() { this->DIJobId_ = nullptr;};
    inline int64_t DIJobId() const { DARABONBA_PTR_GET_DEFAULT(DIJobId_, 0L) };
    inline GetDIJobLogRequest& setDIJobId(int64_t DIJobId) { DARABONBA_PTR_SET_VALUE(DIJobId_, DIJobId) };


    // failoverId Field Functions 
    bool hasFailoverId() const { return this->failoverId_ != nullptr;};
    void deleteFailoverId() { this->failoverId_ = nullptr;};
    inline int64_t failoverId() const { DARABONBA_PTR_GET_DEFAULT(failoverId_, 0L) };
    inline GetDIJobLogRequest& setFailoverId(int64_t failoverId) { DARABONBA_PTR_SET_VALUE(failoverId_, failoverId) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline GetDIJobLogRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline int64_t instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, 0L) };
    inline GetDIJobLogRequest& setInstanceId(int64_t instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // nodeType Field Functions 
    bool hasNodeType() const { return this->nodeType_ != nullptr;};
    void deleteNodeType() { this->nodeType_ = nullptr;};
    inline string nodeType() const { DARABONBA_PTR_GET_DEFAULT(nodeType_, "") };
    inline GetDIJobLogRequest& setNodeType(string nodeType) { DARABONBA_PTR_SET_VALUE(nodeType_, nodeType) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline GetDIJobLogRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


  protected:
    // This parameter is deprecated. Use the Id parameter instead.
    std::shared_ptr<int64_t> DIJobId_ = nullptr;
    // The failover ID.
    std::shared_ptr<int64_t> failoverId_ = nullptr;
    // The ID of the synchronization task.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The instance ID.
    std::shared_ptr<int64_t> instanceId_ = nullptr;
    // The type of the node. This parameter is applicable only to the tasks that are run on serverless resource groups. Valid values:
    // 
    // *   **MASTER**: the master node, which is used to query the logs of JobManagers.
    // *   **WORKER**: the worker node, which is used to query the logs of TaskManagers.
    std::shared_ptr<string> nodeType_ = nullptr;
    // The page number of the pagination query. The value is a positive integer greater than or equal to 1.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
