// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDATAARCHIVEORDERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDATAARCHIVEORDERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateDataArchiveOrderRequestParam.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class CreateDataArchiveOrderRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDataArchiveOrderRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(Param, param_);
      DARABONBA_PTR_TO_JSON(ParentId, parentId_);
      DARABONBA_PTR_TO_JSON(PluginType, pluginType_);
      DARABONBA_PTR_TO_JSON(RelatedUserList, relatedUserList_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDataArchiveOrderRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(Param, param_);
      DARABONBA_PTR_FROM_JSON(ParentId, parentId_);
      DARABONBA_PTR_FROM_JSON(PluginType, pluginType_);
      DARABONBA_PTR_FROM_JSON(RelatedUserList, relatedUserList_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
    };
    CreateDataArchiveOrderRequest() = default ;
    CreateDataArchiveOrderRequest(const CreateDataArchiveOrderRequest &) = default ;
    CreateDataArchiveOrderRequest(CreateDataArchiveOrderRequest &&) = default ;
    CreateDataArchiveOrderRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDataArchiveOrderRequest() = default ;
    CreateDataArchiveOrderRequest& operator=(const CreateDataArchiveOrderRequest &) = default ;
    CreateDataArchiveOrderRequest& operator=(CreateDataArchiveOrderRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->comment_ != nullptr
        && this->param_ != nullptr && this->parentId_ != nullptr && this->pluginType_ != nullptr && this->relatedUserList_ != nullptr && this->tid_ != nullptr; };
    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string comment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline CreateDataArchiveOrderRequest& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // param Field Functions 
    bool hasParam() const { return this->param_ != nullptr;};
    void deleteParam() { this->param_ = nullptr;};
    inline const CreateDataArchiveOrderRequestParam & param() const { DARABONBA_PTR_GET_CONST(param_, CreateDataArchiveOrderRequestParam) };
    inline CreateDataArchiveOrderRequestParam param() { DARABONBA_PTR_GET(param_, CreateDataArchiveOrderRequestParam) };
    inline CreateDataArchiveOrderRequest& setParam(const CreateDataArchiveOrderRequestParam & param) { DARABONBA_PTR_SET_VALUE(param_, param) };
    inline CreateDataArchiveOrderRequest& setParam(CreateDataArchiveOrderRequestParam && param) { DARABONBA_PTR_SET_RVALUE(param_, param) };


    // parentId Field Functions 
    bool hasParentId() const { return this->parentId_ != nullptr;};
    void deleteParentId() { this->parentId_ = nullptr;};
    inline int64_t parentId() const { DARABONBA_PTR_GET_DEFAULT(parentId_, 0L) };
    inline CreateDataArchiveOrderRequest& setParentId(int64_t parentId) { DARABONBA_PTR_SET_VALUE(parentId_, parentId) };


    // pluginType Field Functions 
    bool hasPluginType() const { return this->pluginType_ != nullptr;};
    void deletePluginType() { this->pluginType_ = nullptr;};
    inline string pluginType() const { DARABONBA_PTR_GET_DEFAULT(pluginType_, "") };
    inline CreateDataArchiveOrderRequest& setPluginType(string pluginType) { DARABONBA_PTR_SET_VALUE(pluginType_, pluginType) };


    // relatedUserList Field Functions 
    bool hasRelatedUserList() const { return this->relatedUserList_ != nullptr;};
    void deleteRelatedUserList() { this->relatedUserList_ = nullptr;};
    inline const vector<string> & relatedUserList() const { DARABONBA_PTR_GET_CONST(relatedUserList_, vector<string>) };
    inline vector<string> relatedUserList() { DARABONBA_PTR_GET(relatedUserList_, vector<string>) };
    inline CreateDataArchiveOrderRequest& setRelatedUserList(const vector<string> & relatedUserList) { DARABONBA_PTR_SET_VALUE(relatedUserList_, relatedUserList) };
    inline CreateDataArchiveOrderRequest& setRelatedUserList(vector<string> && relatedUserList) { DARABONBA_PTR_SET_RVALUE(relatedUserList_, relatedUserList) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t tid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline CreateDataArchiveOrderRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


  protected:
    // The description of the task.
    // 
    // This parameter is required.
    std::shared_ptr<string> comment_ = nullptr;
    // The parameters for archiving data.
    // 
    // This parameter is required.
    std::shared_ptr<CreateDataArchiveOrderRequestParam> param_ = nullptr;
    // The ID of the parent ticket. A parent ticket is generated only when a child ticket is created.
    std::shared_ptr<int64_t> parentId_ = nullptr;
    // The type of the plug-in. Default value: DATA_ARCHIVE.
    std::shared_ptr<string> pluginType_ = nullptr;
    // The list of the related users.
    std::shared_ptr<vector<string>> relatedUserList_ = nullptr;
    // The tenant ID. You can call the [GetUserActiveTenant](https://help.aliyun.com/document_detail/198073.html) or [ListUserTenants](https://help.aliyun.com/document_detail/198074.html) operation to obtain the tenant ID.
    std::shared_ptr<int64_t> tid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
