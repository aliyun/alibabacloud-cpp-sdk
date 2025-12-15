// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ATTACHNODESREQUESTCOMPUTENODE_HPP_
#define ALIBABACLOUD_MODELS_ATTACHNODESREQUESTCOMPUTENODE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EHPC20240730
{
namespace Models
{
  class AttachNodesRequestComputeNode : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AttachNodesRequestComputeNode& obj) { 
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(InstanceIds, instanceIds_);
    };
    friend void from_json(const Darabonba::Json& j, AttachNodesRequestComputeNode& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIds_);
    };
    AttachNodesRequestComputeNode() = default ;
    AttachNodesRequestComputeNode(const AttachNodesRequestComputeNode &) = default ;
    AttachNodesRequestComputeNode(AttachNodesRequestComputeNode &&) = default ;
    AttachNodesRequestComputeNode(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AttachNodesRequestComputeNode() = default ;
    AttachNodesRequestComputeNode& operator=(const AttachNodesRequestComputeNode &) = default ;
    AttachNodesRequestComputeNode& operator=(AttachNodesRequestComputeNode &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->imageId_ == nullptr
        && return this->instanceIds_ == nullptr; };
    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string imageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline AttachNodesRequestComputeNode& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // instanceIds Field Functions 
    bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
    void deleteInstanceIds() { this->instanceIds_ = nullptr;};
    inline const vector<string> & instanceIds() const { DARABONBA_PTR_GET_CONST(instanceIds_, vector<string>) };
    inline vector<string> instanceIds() { DARABONBA_PTR_GET(instanceIds_, vector<string>) };
    inline AttachNodesRequestComputeNode& setInstanceIds(const vector<string> & instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };
    inline AttachNodesRequestComputeNode& setInstanceIds(vector<string> && instanceIds) { DARABONBA_PTR_SET_RVALUE(instanceIds_, instanceIds) };


  protected:
    // The image ID. This image will be used to replace the original system disk image.
    // 
    // This parameter is required.
    std::shared_ptr<string> imageId_ = nullptr;
    // The IDs of ECS instances.
    // 
    // This parameter is required.
    std::shared_ptr<vector<string>> instanceIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EHPC20240730
#endif
