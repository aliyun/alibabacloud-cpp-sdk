// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATETASKCONTENTV2REQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATETASKCONTENTV2REQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class UpdateTaskContentV2Request : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateTaskContentV2Request& obj) { 
      DARABONBA_PTR_TO_JSON(NodeContent, nodeContent_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateTaskContentV2Request& obj) { 
      DARABONBA_PTR_FROM_JSON(NodeContent, nodeContent_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
    };
    UpdateTaskContentV2Request() = default ;
    UpdateTaskContentV2Request(const UpdateTaskContentV2Request &) = default ;
    UpdateTaskContentV2Request(UpdateTaskContentV2Request &&) = default ;
    UpdateTaskContentV2Request(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateTaskContentV2Request() = default ;
    UpdateTaskContentV2Request& operator=(const UpdateTaskContentV2Request &) = default ;
    UpdateTaskContentV2Request& operator=(UpdateTaskContentV2Request &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->nodeContent_ == nullptr
        && return this->nodeId_ == nullptr; };
    // nodeContent Field Functions 
    bool hasNodeContent() const { return this->nodeContent_ != nullptr;};
    void deleteNodeContent() { this->nodeContent_ = nullptr;};
    inline string nodeContent() const { DARABONBA_PTR_GET_DEFAULT(nodeContent_, "") };
    inline UpdateTaskContentV2Request& setNodeContent(string nodeContent) { DARABONBA_PTR_SET_VALUE(nodeContent_, nodeContent) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string nodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline UpdateTaskContentV2Request& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


  protected:
    // The node configurations after modification.
    // 
    // >  We recommend that you change the SQL type from SELECT to INSERT/CREATE.
    std::shared_ptr<string> nodeContent_ = nullptr;
    // The ID of the task node. You can call the [GetTaskInstanceRelation](https://help.aliyun.com/document_detail/424711.html) operation to query the node ID.
    std::shared_ptr<string> nodeId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
