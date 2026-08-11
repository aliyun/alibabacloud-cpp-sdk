// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENTERPRISEORGRENAMENODEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ENTERPRISEORGRENAMENODEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AccountCenter20241209
{
namespace Models
{
  class EnterpriseOrgRenameNodeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EnterpriseOrgRenameNodeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(BizName, bizName_);
      DARABONBA_ANY_TO_JSON(Ext, ext_);
      DARABONBA_PTR_TO_JSON(IsOpenApi, isOpenApi_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(NodeName, nodeName_);
      DARABONBA_PTR_TO_JSON(NodeType, nodeType_);
      DARABONBA_PTR_TO_JSON(OrientedEcId, orientedEcId_);
      DARABONBA_PTR_TO_JSON(OrientedLeId, orientedLeId_);
      DARABONBA_PTR_TO_JSON(OrientedNbId, orientedNbId_);
      DARABONBA_PTR_TO_JSON(ShowCompleteInfo, showCompleteInfo_);
      DARABONBA_PTR_TO_JSON(TreeId, treeId_);
    };
    friend void from_json(const Darabonba::Json& j, EnterpriseOrgRenameNodeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(BizName, bizName_);
      DARABONBA_ANY_FROM_JSON(Ext, ext_);
      DARABONBA_PTR_FROM_JSON(IsOpenApi, isOpenApi_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(NodeName, nodeName_);
      DARABONBA_PTR_FROM_JSON(NodeType, nodeType_);
      DARABONBA_PTR_FROM_JSON(OrientedEcId, orientedEcId_);
      DARABONBA_PTR_FROM_JSON(OrientedLeId, orientedLeId_);
      DARABONBA_PTR_FROM_JSON(OrientedNbId, orientedNbId_);
      DARABONBA_PTR_FROM_JSON(ShowCompleteInfo, showCompleteInfo_);
      DARABONBA_PTR_FROM_JSON(TreeId, treeId_);
    };
    EnterpriseOrgRenameNodeRequest() = default ;
    EnterpriseOrgRenameNodeRequest(const EnterpriseOrgRenameNodeRequest &) = default ;
    EnterpriseOrgRenameNodeRequest(EnterpriseOrgRenameNodeRequest &&) = default ;
    EnterpriseOrgRenameNodeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EnterpriseOrgRenameNodeRequest() = default ;
    EnterpriseOrgRenameNodeRequest& operator=(const EnterpriseOrgRenameNodeRequest &) = default ;
    EnterpriseOrgRenameNodeRequest& operator=(EnterpriseOrgRenameNodeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appName_ == nullptr
        && this->bizName_ == nullptr && this->ext_ == nullptr && this->isOpenApi_ == nullptr && this->nodeId_ == nullptr && this->nodeName_ == nullptr
        && this->nodeType_ == nullptr && this->orientedEcId_ == nullptr && this->orientedLeId_ == nullptr && this->orientedNbId_ == nullptr && this->showCompleteInfo_ == nullptr
        && this->treeId_ == nullptr; };
    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline EnterpriseOrgRenameNodeRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // bizName Field Functions 
    bool hasBizName() const { return this->bizName_ != nullptr;};
    void deleteBizName() { this->bizName_ = nullptr;};
    inline string getBizName() const { DARABONBA_PTR_GET_DEFAULT(bizName_, "") };
    inline EnterpriseOrgRenameNodeRequest& setBizName(string bizName) { DARABONBA_PTR_SET_VALUE(bizName_, bizName) };


    // ext Field Functions 
    bool hasExt() const { return this->ext_ != nullptr;};
    void deleteExt() { this->ext_ = nullptr;};
    inline     const Darabonba::Json & getExt() const { DARABONBA_GET(ext_) };
    Darabonba::Json & getExt() { DARABONBA_GET(ext_) };
    inline EnterpriseOrgRenameNodeRequest& setExt(const Darabonba::Json & ext) { DARABONBA_SET_VALUE(ext_, ext) };
    inline EnterpriseOrgRenameNodeRequest& setExt(Darabonba::Json && ext) { DARABONBA_SET_RVALUE(ext_, ext) };


    // isOpenApi Field Functions 
    bool hasIsOpenApi() const { return this->isOpenApi_ != nullptr;};
    void deleteIsOpenApi() { this->isOpenApi_ = nullptr;};
    inline bool getIsOpenApi() const { DARABONBA_PTR_GET_DEFAULT(isOpenApi_, false) };
    inline EnterpriseOrgRenameNodeRequest& setIsOpenApi(bool isOpenApi) { DARABONBA_PTR_SET_VALUE(isOpenApi_, isOpenApi) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline EnterpriseOrgRenameNodeRequest& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // nodeName Field Functions 
    bool hasNodeName() const { return this->nodeName_ != nullptr;};
    void deleteNodeName() { this->nodeName_ = nullptr;};
    inline string getNodeName() const { DARABONBA_PTR_GET_DEFAULT(nodeName_, "") };
    inline EnterpriseOrgRenameNodeRequest& setNodeName(string nodeName) { DARABONBA_PTR_SET_VALUE(nodeName_, nodeName) };


    // nodeType Field Functions 
    bool hasNodeType() const { return this->nodeType_ != nullptr;};
    void deleteNodeType() { this->nodeType_ = nullptr;};
    inline string getNodeType() const { DARABONBA_PTR_GET_DEFAULT(nodeType_, "") };
    inline EnterpriseOrgRenameNodeRequest& setNodeType(string nodeType) { DARABONBA_PTR_SET_VALUE(nodeType_, nodeType) };


    // orientedEcId Field Functions 
    bool hasOrientedEcId() const { return this->orientedEcId_ != nullptr;};
    void deleteOrientedEcId() { this->orientedEcId_ = nullptr;};
    inline string getOrientedEcId() const { DARABONBA_PTR_GET_DEFAULT(orientedEcId_, "") };
    inline EnterpriseOrgRenameNodeRequest& setOrientedEcId(string orientedEcId) { DARABONBA_PTR_SET_VALUE(orientedEcId_, orientedEcId) };


    // orientedLeId Field Functions 
    bool hasOrientedLeId() const { return this->orientedLeId_ != nullptr;};
    void deleteOrientedLeId() { this->orientedLeId_ = nullptr;};
    inline string getOrientedLeId() const { DARABONBA_PTR_GET_DEFAULT(orientedLeId_, "") };
    inline EnterpriseOrgRenameNodeRequest& setOrientedLeId(string orientedLeId) { DARABONBA_PTR_SET_VALUE(orientedLeId_, orientedLeId) };


    // orientedNbId Field Functions 
    bool hasOrientedNbId() const { return this->orientedNbId_ != nullptr;};
    void deleteOrientedNbId() { this->orientedNbId_ = nullptr;};
    inline string getOrientedNbId() const { DARABONBA_PTR_GET_DEFAULT(orientedNbId_, "") };
    inline EnterpriseOrgRenameNodeRequest& setOrientedNbId(string orientedNbId) { DARABONBA_PTR_SET_VALUE(orientedNbId_, orientedNbId) };


    // showCompleteInfo Field Functions 
    bool hasShowCompleteInfo() const { return this->showCompleteInfo_ != nullptr;};
    void deleteShowCompleteInfo() { this->showCompleteInfo_ = nullptr;};
    inline bool getShowCompleteInfo() const { DARABONBA_PTR_GET_DEFAULT(showCompleteInfo_, false) };
    inline EnterpriseOrgRenameNodeRequest& setShowCompleteInfo(bool showCompleteInfo) { DARABONBA_PTR_SET_VALUE(showCompleteInfo_, showCompleteInfo) };


    // treeId Field Functions 
    bool hasTreeId() const { return this->treeId_ != nullptr;};
    void deleteTreeId() { this->treeId_ = nullptr;};
    inline int64_t getTreeId() const { DARABONBA_PTR_GET_DEFAULT(treeId_, 0L) };
    inline EnterpriseOrgRenameNodeRequest& setTreeId(int64_t treeId) { DARABONBA_PTR_SET_VALUE(treeId_, treeId) };


  protected:
    shared_ptr<string> appName_ {};
    shared_ptr<string> bizName_ {};
    Darabonba::Json ext_ {};
    shared_ptr<bool> isOpenApi_ {};
    shared_ptr<string> nodeId_ {};
    shared_ptr<string> nodeName_ {};
    shared_ptr<string> nodeType_ {};
    shared_ptr<string> orientedEcId_ {};
    shared_ptr<string> orientedLeId_ {};
    shared_ptr<string> orientedNbId_ {};
    shared_ptr<bool> showCompleteInfo_ {};
    shared_ptr<int64_t> treeId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AccountCenter20241209
#endif
