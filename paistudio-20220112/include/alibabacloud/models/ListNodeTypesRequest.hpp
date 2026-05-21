// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNODETYPESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTNODETYPESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{
namespace Models
{
  class ListNodeTypesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNodeTypesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceleratorType, acceleratorType_);
      DARABONBA_PTR_TO_JSON(GPUType, GPUType_);
      DARABONBA_PTR_TO_JSON(NodeTypes, nodeTypes_);
      DARABONBA_PTR_TO_JSON(QuotaId, quotaId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupIds, resourceGroupIds_);
    };
    friend void from_json(const Darabonba::Json& j, ListNodeTypesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceleratorType, acceleratorType_);
      DARABONBA_PTR_FROM_JSON(GPUType, GPUType_);
      DARABONBA_PTR_FROM_JSON(NodeTypes, nodeTypes_);
      DARABONBA_PTR_FROM_JSON(QuotaId, quotaId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupIds, resourceGroupIds_);
    };
    ListNodeTypesRequest() = default ;
    ListNodeTypesRequest(const ListNodeTypesRequest &) = default ;
    ListNodeTypesRequest(ListNodeTypesRequest &&) = default ;
    ListNodeTypesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNodeTypesRequest() = default ;
    ListNodeTypesRequest& operator=(const ListNodeTypesRequest &) = default ;
    ListNodeTypesRequest& operator=(ListNodeTypesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceleratorType_ == nullptr
        && this->GPUType_ == nullptr && this->nodeTypes_ == nullptr && this->quotaId_ == nullptr && this->resourceGroupIds_ == nullptr; };
    // acceleratorType Field Functions 
    bool hasAcceleratorType() const { return this->acceleratorType_ != nullptr;};
    void deleteAcceleratorType() { this->acceleratorType_ = nullptr;};
    inline string getAcceleratorType() const { DARABONBA_PTR_GET_DEFAULT(acceleratorType_, "") };
    inline ListNodeTypesRequest& setAcceleratorType(string acceleratorType) { DARABONBA_PTR_SET_VALUE(acceleratorType_, acceleratorType) };


    // GPUType Field Functions 
    bool hasGPUType() const { return this->GPUType_ != nullptr;};
    void deleteGPUType() { this->GPUType_ = nullptr;};
    inline string getGPUType() const { DARABONBA_PTR_GET_DEFAULT(GPUType_, "") };
    inline ListNodeTypesRequest& setGPUType(string GPUType) { DARABONBA_PTR_SET_VALUE(GPUType_, GPUType) };


    // nodeTypes Field Functions 
    bool hasNodeTypes() const { return this->nodeTypes_ != nullptr;};
    void deleteNodeTypes() { this->nodeTypes_ = nullptr;};
    inline string getNodeTypes() const { DARABONBA_PTR_GET_DEFAULT(nodeTypes_, "") };
    inline ListNodeTypesRequest& setNodeTypes(string nodeTypes) { DARABONBA_PTR_SET_VALUE(nodeTypes_, nodeTypes) };


    // quotaId Field Functions 
    bool hasQuotaId() const { return this->quotaId_ != nullptr;};
    void deleteQuotaId() { this->quotaId_ = nullptr;};
    inline string getQuotaId() const { DARABONBA_PTR_GET_DEFAULT(quotaId_, "") };
    inline ListNodeTypesRequest& setQuotaId(string quotaId) { DARABONBA_PTR_SET_VALUE(quotaId_, quotaId) };


    // resourceGroupIds Field Functions 
    bool hasResourceGroupIds() const { return this->resourceGroupIds_ != nullptr;};
    void deleteResourceGroupIds() { this->resourceGroupIds_ = nullptr;};
    inline string getResourceGroupIds() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupIds_, "") };
    inline ListNodeTypesRequest& setResourceGroupIds(string resourceGroupIds) { DARABONBA_PTR_SET_VALUE(resourceGroupIds_, resourceGroupIds) };


  protected:
    shared_ptr<string> acceleratorType_ {};
    shared_ptr<string> GPUType_ {};
    shared_ptr<string> nodeTypes_ {};
    shared_ptr<string> quotaId_ {};
    shared_ptr<string> resourceGroupIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
