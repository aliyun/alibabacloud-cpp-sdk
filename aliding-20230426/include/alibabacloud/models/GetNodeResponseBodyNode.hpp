// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETNODERESPONSEBODYNODE_HPP_
#define ALIBABACLOUD_MODELS_GETNODERESPONSEBODYNODE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetNodeResponseBodyNodeStatisticalInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetNodeResponseBodyNode : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetNodeResponseBodyNode& obj) { 
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(CreatorId, creatorId_);
      DARABONBA_PTR_TO_JSON(Extension, extension_);
      DARABONBA_PTR_TO_JSON(HasChildren, hasChildren_);
      DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
      DARABONBA_PTR_TO_JSON(ModifierId, modifierId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(PermissionRole, permissionRole_);
      DARABONBA_PTR_TO_JSON(Size, size_);
      DARABONBA_PTR_TO_JSON(StatisticalInfo, statisticalInfo_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Url, url_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, GetNodeResponseBodyNode& obj) { 
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(CreatorId, creatorId_);
      DARABONBA_PTR_FROM_JSON(Extension, extension_);
      DARABONBA_PTR_FROM_JSON(HasChildren, hasChildren_);
      DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
      DARABONBA_PTR_FROM_JSON(ModifierId, modifierId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(PermissionRole, permissionRole_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
      DARABONBA_PTR_FROM_JSON(StatisticalInfo, statisticalInfo_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    GetNodeResponseBodyNode() = default ;
    GetNodeResponseBodyNode(const GetNodeResponseBodyNode &) = default ;
    GetNodeResponseBodyNode(GetNodeResponseBodyNode &&) = default ;
    GetNodeResponseBodyNode(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetNodeResponseBodyNode() = default ;
    GetNodeResponseBodyNode& operator=(const GetNodeResponseBodyNode &) = default ;
    GetNodeResponseBodyNode& operator=(GetNodeResponseBodyNode &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->category_ != nullptr
        && this->createTime_ != nullptr && this->creatorId_ != nullptr && this->extension_ != nullptr && this->hasChildren_ != nullptr && this->modifiedTime_ != nullptr
        && this->modifierId_ != nullptr && this->name_ != nullptr && this->nodeId_ != nullptr && this->permissionRole_ != nullptr && this->size_ != nullptr
        && this->statisticalInfo_ != nullptr && this->type_ != nullptr && this->url_ != nullptr && this->workspaceId_ != nullptr; };
    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline GetNodeResponseBodyNode& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetNodeResponseBodyNode& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // creatorId Field Functions 
    bool hasCreatorId() const { return this->creatorId_ != nullptr;};
    void deleteCreatorId() { this->creatorId_ = nullptr;};
    inline string creatorId() const { DARABONBA_PTR_GET_DEFAULT(creatorId_, "") };
    inline GetNodeResponseBodyNode& setCreatorId(string creatorId) { DARABONBA_PTR_SET_VALUE(creatorId_, creatorId) };


    // extension Field Functions 
    bool hasExtension() const { return this->extension_ != nullptr;};
    void deleteExtension() { this->extension_ = nullptr;};
    inline string extension() const { DARABONBA_PTR_GET_DEFAULT(extension_, "") };
    inline GetNodeResponseBodyNode& setExtension(string extension) { DARABONBA_PTR_SET_VALUE(extension_, extension) };


    // hasChildren Field Functions 
    bool hasHasChildren() const { return this->hasChildren_ != nullptr;};
    void deleteHasChildren() { this->hasChildren_ = nullptr;};
    inline bool hasChildren() const { DARABONBA_PTR_GET_DEFAULT(hasChildren_, false) };
    inline GetNodeResponseBodyNode& setHasChildren(bool hasChildren) { DARABONBA_PTR_SET_VALUE(hasChildren_, hasChildren) };


    // modifiedTime Field Functions 
    bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
    void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
    inline string modifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, "") };
    inline GetNodeResponseBodyNode& setModifiedTime(string modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


    // modifierId Field Functions 
    bool hasModifierId() const { return this->modifierId_ != nullptr;};
    void deleteModifierId() { this->modifierId_ = nullptr;};
    inline string modifierId() const { DARABONBA_PTR_GET_DEFAULT(modifierId_, "") };
    inline GetNodeResponseBodyNode& setModifierId(string modifierId) { DARABONBA_PTR_SET_VALUE(modifierId_, modifierId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetNodeResponseBodyNode& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string nodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline GetNodeResponseBodyNode& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // permissionRole Field Functions 
    bool hasPermissionRole() const { return this->permissionRole_ != nullptr;};
    void deletePermissionRole() { this->permissionRole_ = nullptr;};
    inline string permissionRole() const { DARABONBA_PTR_GET_DEFAULT(permissionRole_, "") };
    inline GetNodeResponseBodyNode& setPermissionRole(string permissionRole) { DARABONBA_PTR_SET_VALUE(permissionRole_, permissionRole) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int64_t size() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
    inline GetNodeResponseBodyNode& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // statisticalInfo Field Functions 
    bool hasStatisticalInfo() const { return this->statisticalInfo_ != nullptr;};
    void deleteStatisticalInfo() { this->statisticalInfo_ = nullptr;};
    inline const Models::GetNodeResponseBodyNodeStatisticalInfo & statisticalInfo() const { DARABONBA_PTR_GET_CONST(statisticalInfo_, Models::GetNodeResponseBodyNodeStatisticalInfo) };
    inline Models::GetNodeResponseBodyNodeStatisticalInfo statisticalInfo() { DARABONBA_PTR_GET(statisticalInfo_, Models::GetNodeResponseBodyNodeStatisticalInfo) };
    inline GetNodeResponseBodyNode& setStatisticalInfo(const Models::GetNodeResponseBodyNodeStatisticalInfo & statisticalInfo) { DARABONBA_PTR_SET_VALUE(statisticalInfo_, statisticalInfo) };
    inline GetNodeResponseBodyNode& setStatisticalInfo(Models::GetNodeResponseBodyNodeStatisticalInfo && statisticalInfo) { DARABONBA_PTR_SET_RVALUE(statisticalInfo_, statisticalInfo) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetNodeResponseBodyNode& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline GetNodeResponseBodyNode& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline GetNodeResponseBodyNode& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    std::shared_ptr<string> category_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> creatorId_ = nullptr;
    std::shared_ptr<string> extension_ = nullptr;
    std::shared_ptr<bool> hasChildren_ = nullptr;
    std::shared_ptr<string> modifiedTime_ = nullptr;
    std::shared_ptr<string> modifierId_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> nodeId_ = nullptr;
    std::shared_ptr<string> permissionRole_ = nullptr;
    std::shared_ptr<int64_t> size_ = nullptr;
    std::shared_ptr<Models::GetNodeResponseBodyNodeStatisticalInfo> statisticalInfo_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
    std::shared_ptr<string> url_ = nullptr;
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
