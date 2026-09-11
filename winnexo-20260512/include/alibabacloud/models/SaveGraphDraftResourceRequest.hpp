// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SAVEGRAPHDRAFTRESOURCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SAVEGRAPHDRAFTRESOURCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class SaveGraphDraftResourceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SaveGraphDraftResourceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(elementType, elementType_);
      DARABONBA_PTR_TO_JSON(graphName, graphName_);
      DARABONBA_PTR_TO_JSON(resourceName, resourceName_);
      DARABONBA_PTR_TO_JSON(resourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(yamlEdit, yamlEdit_);
    };
    friend void from_json(const Darabonba::Json& j, SaveGraphDraftResourceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(elementType, elementType_);
      DARABONBA_PTR_FROM_JSON(graphName, graphName_);
      DARABONBA_PTR_FROM_JSON(resourceName, resourceName_);
      DARABONBA_PTR_FROM_JSON(resourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(yamlEdit, yamlEdit_);
    };
    SaveGraphDraftResourceRequest() = default ;
    SaveGraphDraftResourceRequest(const SaveGraphDraftResourceRequest &) = default ;
    SaveGraphDraftResourceRequest(SaveGraphDraftResourceRequest &&) = default ;
    SaveGraphDraftResourceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SaveGraphDraftResourceRequest() = default ;
    SaveGraphDraftResourceRequest& operator=(const SaveGraphDraftResourceRequest &) = default ;
    SaveGraphDraftResourceRequest& operator=(SaveGraphDraftResourceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->elementType_ == nullptr
        && this->graphName_ == nullptr && this->resourceName_ == nullptr && this->resourceType_ == nullptr && this->tenantId_ == nullptr && this->yamlEdit_ == nullptr; };
    // elementType Field Functions 
    bool hasElementType() const { return this->elementType_ != nullptr;};
    void deleteElementType() { this->elementType_ = nullptr;};
    inline string getElementType() const { DARABONBA_PTR_GET_DEFAULT(elementType_, "") };
    inline SaveGraphDraftResourceRequest& setElementType(string elementType) { DARABONBA_PTR_SET_VALUE(elementType_, elementType) };


    // graphName Field Functions 
    bool hasGraphName() const { return this->graphName_ != nullptr;};
    void deleteGraphName() { this->graphName_ = nullptr;};
    inline string getGraphName() const { DARABONBA_PTR_GET_DEFAULT(graphName_, "") };
    inline SaveGraphDraftResourceRequest& setGraphName(string graphName) { DARABONBA_PTR_SET_VALUE(graphName_, graphName) };


    // resourceName Field Functions 
    bool hasResourceName() const { return this->resourceName_ != nullptr;};
    void deleteResourceName() { this->resourceName_ = nullptr;};
    inline string getResourceName() const { DARABONBA_PTR_GET_DEFAULT(resourceName_, "") };
    inline SaveGraphDraftResourceRequest& setResourceName(string resourceName) { DARABONBA_PTR_SET_VALUE(resourceName_, resourceName) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline SaveGraphDraftResourceRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline SaveGraphDraftResourceRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // yamlEdit Field Functions 
    bool hasYamlEdit() const { return this->yamlEdit_ != nullptr;};
    void deleteYamlEdit() { this->yamlEdit_ = nullptr;};
    inline string getYamlEdit() const { DARABONBA_PTR_GET_DEFAULT(yamlEdit_, "") };
    inline SaveGraphDraftResourceRequest& setYamlEdit(string yamlEdit) { DARABONBA_PTR_SET_VALUE(yamlEdit_, yamlEdit) };


  protected:
    // 资源小类：resourceType=object 时固定 object_type；resourceType=element 时为 indicator / logic / process / rule / analysis 之一
    // 
    // This parameter is required.
    shared_ptr<string> elementType_ {};
    // 图谱名称，须已存在（active 记录）
    // 
    // This parameter is required.
    shared_ptr<string> graphName_ {};
    // 资源名（创建后不可改名，底层校验）
    // 
    // This parameter is required.
    shared_ptr<string> resourceName_ {};
    // 资源大类：object（对象）/ element（业务元素）
    // 
    // This parameter is required.
    shared_ptr<string> resourceType_ {};
    // 租户ID，公共参数，缺省时使用调用方默认租户
    shared_ptr<string> tenantId_ {};
    // 单资源 YAML 文本
    // 
    // This parameter is required.
    shared_ptr<string> yamlEdit_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
