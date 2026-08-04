// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNODEPODSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTNODEPODSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{
namespace Models
{
  class ListNodePodsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNodePodsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(GPUIndexes, GPUIndexes_);
      DARABONBA_PTR_TO_JSON(OversoldTypes, oversoldTypes_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, ListNodePodsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(GPUIndexes, GPUIndexes_);
      DARABONBA_PTR_FROM_JSON(OversoldTypes, oversoldTypes_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
    };
    ListNodePodsRequest() = default ;
    ListNodePodsRequest(const ListNodePodsRequest &) = default ;
    ListNodePodsRequest(ListNodePodsRequest &&) = default ;
    ListNodePodsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNodePodsRequest() = default ;
    ListNodePodsRequest& operator=(const ListNodePodsRequest &) = default ;
    ListNodePodsRequest& operator=(ListNodePodsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->GPUIndexes_ == nullptr
        && this->oversoldTypes_ == nullptr && this->resourceGroupId_ == nullptr; };
    // GPUIndexes Field Functions 
    bool hasGPUIndexes() const { return this->GPUIndexes_ != nullptr;};
    void deleteGPUIndexes() { this->GPUIndexes_ = nullptr;};
    inline string getGPUIndexes() const { DARABONBA_PTR_GET_DEFAULT(GPUIndexes_, "") };
    inline ListNodePodsRequest& setGPUIndexes(string GPUIndexes) { DARABONBA_PTR_SET_VALUE(GPUIndexes_, GPUIndexes) };


    // oversoldTypes Field Functions 
    bool hasOversoldTypes() const { return this->oversoldTypes_ != nullptr;};
    void deleteOversoldTypes() { this->oversoldTypes_ = nullptr;};
    inline string getOversoldTypes() const { DARABONBA_PTR_GET_DEFAULT(oversoldTypes_, "") };
    inline ListNodePodsRequest& setOversoldTypes(string oversoldTypes) { DARABONBA_PTR_SET_VALUE(oversoldTypes_, oversoldTypes) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListNodePodsRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


  protected:
    // The GPU index number.
    shared_ptr<string> GPUIndexes_ {};
    // The resource type used by the pod.
    shared_ptr<string> oversoldTypes_ {};
    // The ID of the resource group to which the node belongs.
    // 
    // This parameter is required.
    shared_ptr<string> resourceGroupId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
