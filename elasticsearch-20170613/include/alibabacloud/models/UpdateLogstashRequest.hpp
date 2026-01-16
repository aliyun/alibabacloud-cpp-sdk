// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATELOGSTASHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATELOGSTASHREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class UpdateLogstashRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateLogstashRequest& obj) { 
      DARABONBA_PTR_TO_JSON(nodeAmount, nodeAmount_);
      DARABONBA_PTR_TO_JSON(nodeSpec, nodeSpec_);
      DARABONBA_PTR_TO_JSON(clientToken, clientToken_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateLogstashRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(nodeAmount, nodeAmount_);
      DARABONBA_PTR_FROM_JSON(nodeSpec, nodeSpec_);
      DARABONBA_PTR_FROM_JSON(clientToken, clientToken_);
    };
    UpdateLogstashRequest() = default ;
    UpdateLogstashRequest(const UpdateLogstashRequest &) = default ;
    UpdateLogstashRequest(UpdateLogstashRequest &&) = default ;
    UpdateLogstashRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateLogstashRequest() = default ;
    UpdateLogstashRequest& operator=(const UpdateLogstashRequest &) = default ;
    UpdateLogstashRequest& operator=(UpdateLogstashRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class NodeSpec : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const NodeSpec& obj) { 
        DARABONBA_PTR_TO_JSON(disk, disk_);
        DARABONBA_PTR_TO_JSON(diskType, diskType_);
        DARABONBA_PTR_TO_JSON(spec, spec_);
      };
      friend void from_json(const Darabonba::Json& j, NodeSpec& obj) { 
        DARABONBA_PTR_FROM_JSON(disk, disk_);
        DARABONBA_PTR_FROM_JSON(diskType, diskType_);
        DARABONBA_PTR_FROM_JSON(spec, spec_);
      };
      NodeSpec() = default ;
      NodeSpec(const NodeSpec &) = default ;
      NodeSpec(NodeSpec &&) = default ;
      NodeSpec(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~NodeSpec() = default ;
      NodeSpec& operator=(const NodeSpec &) = default ;
      NodeSpec& operator=(NodeSpec &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->disk_ == nullptr
        && this->diskType_ == nullptr && this->spec_ == nullptr; };
      // disk Field Functions 
      bool hasDisk() const { return this->disk_ != nullptr;};
      void deleteDisk() { this->disk_ = nullptr;};
      inline int32_t getDisk() const { DARABONBA_PTR_GET_DEFAULT(disk_, 0) };
      inline NodeSpec& setDisk(int32_t disk) { DARABONBA_PTR_SET_VALUE(disk_, disk) };


      // diskType Field Functions 
      bool hasDiskType() const { return this->diskType_ != nullptr;};
      void deleteDiskType() { this->diskType_ = nullptr;};
      inline string getDiskType() const { DARABONBA_PTR_GET_DEFAULT(diskType_, "") };
      inline NodeSpec& setDiskType(string diskType) { DARABONBA_PTR_SET_VALUE(diskType_, diskType) };


      // spec Field Functions 
      bool hasSpec() const { return this->spec_ != nullptr;};
      void deleteSpec() { this->spec_ = nullptr;};
      inline string getSpec() const { DARABONBA_PTR_GET_DEFAULT(spec_, "") };
      inline NodeSpec& setSpec(string spec) { DARABONBA_PTR_SET_VALUE(spec_, spec) };


    protected:
      shared_ptr<int32_t> disk_ {};
      shared_ptr<string> diskType_ {};
      shared_ptr<string> spec_ {};
    };

    virtual bool empty() const override { return this->nodeAmount_ == nullptr
        && this->nodeSpec_ == nullptr && this->clientToken_ == nullptr; };
    // nodeAmount Field Functions 
    bool hasNodeAmount() const { return this->nodeAmount_ != nullptr;};
    void deleteNodeAmount() { this->nodeAmount_ = nullptr;};
    inline int32_t getNodeAmount() const { DARABONBA_PTR_GET_DEFAULT(nodeAmount_, 0) };
    inline UpdateLogstashRequest& setNodeAmount(int32_t nodeAmount) { DARABONBA_PTR_SET_VALUE(nodeAmount_, nodeAmount) };


    // nodeSpec Field Functions 
    bool hasNodeSpec() const { return this->nodeSpec_ != nullptr;};
    void deleteNodeSpec() { this->nodeSpec_ = nullptr;};
    inline const UpdateLogstashRequest::NodeSpec & getNodeSpec() const { DARABONBA_PTR_GET_CONST(nodeSpec_, UpdateLogstashRequest::NodeSpec) };
    inline UpdateLogstashRequest::NodeSpec getNodeSpec() { DARABONBA_PTR_GET(nodeSpec_, UpdateLogstashRequest::NodeSpec) };
    inline UpdateLogstashRequest& setNodeSpec(const UpdateLogstashRequest::NodeSpec & nodeSpec) { DARABONBA_PTR_SET_VALUE(nodeSpec_, nodeSpec) };
    inline UpdateLogstashRequest& setNodeSpec(UpdateLogstashRequest::NodeSpec && nodeSpec) { DARABONBA_PTR_SET_RVALUE(nodeSpec_, nodeSpec) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateLogstashRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


  protected:
    shared_ptr<int32_t> nodeAmount_ {};
    shared_ptr<UpdateLogstashRequest::NodeSpec> nodeSpec_ {};
    shared_ptr<string> clientToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
