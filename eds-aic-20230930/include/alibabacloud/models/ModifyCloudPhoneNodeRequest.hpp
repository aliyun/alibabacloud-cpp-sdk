// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYCLOUDPHONENODEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYCLOUDPHONENODEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class ModifyCloudPhoneNodeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyCloudPhoneNodeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(NewNodeName, newNodeName_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(StreamMode, streamMode_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyCloudPhoneNodeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(NewNodeName, newNodeName_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(StreamMode, streamMode_);
    };
    ModifyCloudPhoneNodeRequest() = default ;
    ModifyCloudPhoneNodeRequest(const ModifyCloudPhoneNodeRequest &) = default ;
    ModifyCloudPhoneNodeRequest(ModifyCloudPhoneNodeRequest &&) = default ;
    ModifyCloudPhoneNodeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyCloudPhoneNodeRequest() = default ;
    ModifyCloudPhoneNodeRequest& operator=(const ModifyCloudPhoneNodeRequest &) = default ;
    ModifyCloudPhoneNodeRequest& operator=(ModifyCloudPhoneNodeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->newNodeName_ == nullptr
        && return this->nodeId_ == nullptr && return this->streamMode_ == nullptr; };
    // newNodeName Field Functions 
    bool hasNewNodeName() const { return this->newNodeName_ != nullptr;};
    void deleteNewNodeName() { this->newNodeName_ = nullptr;};
    inline string newNodeName() const { DARABONBA_PTR_GET_DEFAULT(newNodeName_, "") };
    inline ModifyCloudPhoneNodeRequest& setNewNodeName(string newNodeName) { DARABONBA_PTR_SET_VALUE(newNodeName_, newNodeName) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string nodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline ModifyCloudPhoneNodeRequest& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // streamMode Field Functions 
    bool hasStreamMode() const { return this->streamMode_ != nullptr;};
    void deleteStreamMode() { this->streamMode_ = nullptr;};
    inline int32_t streamMode() const { DARABONBA_PTR_GET_DEFAULT(streamMode_, 0) };
    inline ModifyCloudPhoneNodeRequest& setStreamMode(int32_t streamMode) { DARABONBA_PTR_SET_VALUE(streamMode_, streamMode) };


  protected:
    // The name that you want to assign to the cloud phone matrix.
    std::shared_ptr<string> newNodeName_ = nullptr;
    // The ID of the cloud phone matrix.
    std::shared_ptr<string> nodeId_ = nullptr;
    std::shared_ptr<int32_t> streamMode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
