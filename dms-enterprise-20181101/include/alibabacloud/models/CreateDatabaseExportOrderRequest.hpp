// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDATABASEEXPORTORDERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDATABASEEXPORTORDERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateDatabaseExportOrderRequestPluginParam.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class CreateDatabaseExportOrderRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDatabaseExportOrderRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AttachmentKey, attachmentKey_);
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(ParentId, parentId_);
      DARABONBA_PTR_TO_JSON(PluginParam, pluginParam_);
      DARABONBA_PTR_TO_JSON(RelatedUserList, relatedUserList_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDatabaseExportOrderRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AttachmentKey, attachmentKey_);
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(ParentId, parentId_);
      DARABONBA_PTR_FROM_JSON(PluginParam, pluginParam_);
      DARABONBA_PTR_FROM_JSON(RelatedUserList, relatedUserList_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
    };
    CreateDatabaseExportOrderRequest() = default ;
    CreateDatabaseExportOrderRequest(const CreateDatabaseExportOrderRequest &) = default ;
    CreateDatabaseExportOrderRequest(CreateDatabaseExportOrderRequest &&) = default ;
    CreateDatabaseExportOrderRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDatabaseExportOrderRequest() = default ;
    CreateDatabaseExportOrderRequest& operator=(const CreateDatabaseExportOrderRequest &) = default ;
    CreateDatabaseExportOrderRequest& operator=(CreateDatabaseExportOrderRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->attachmentKey_ != nullptr
        && this->comment_ != nullptr && this->parentId_ != nullptr && this->pluginParam_ != nullptr && this->relatedUserList_ != nullptr && this->tid_ != nullptr; };
    // attachmentKey Field Functions 
    bool hasAttachmentKey() const { return this->attachmentKey_ != nullptr;};
    void deleteAttachmentKey() { this->attachmentKey_ = nullptr;};
    inline string attachmentKey() const { DARABONBA_PTR_GET_DEFAULT(attachmentKey_, "") };
    inline CreateDatabaseExportOrderRequest& setAttachmentKey(string attachmentKey) { DARABONBA_PTR_SET_VALUE(attachmentKey_, attachmentKey) };


    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string comment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline CreateDatabaseExportOrderRequest& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // parentId Field Functions 
    bool hasParentId() const { return this->parentId_ != nullptr;};
    void deleteParentId() { this->parentId_ = nullptr;};
    inline int64_t parentId() const { DARABONBA_PTR_GET_DEFAULT(parentId_, 0L) };
    inline CreateDatabaseExportOrderRequest& setParentId(int64_t parentId) { DARABONBA_PTR_SET_VALUE(parentId_, parentId) };


    // pluginParam Field Functions 
    bool hasPluginParam() const { return this->pluginParam_ != nullptr;};
    void deletePluginParam() { this->pluginParam_ = nullptr;};
    inline const CreateDatabaseExportOrderRequestPluginParam & pluginParam() const { DARABONBA_PTR_GET_CONST(pluginParam_, CreateDatabaseExportOrderRequestPluginParam) };
    inline CreateDatabaseExportOrderRequestPluginParam pluginParam() { DARABONBA_PTR_GET(pluginParam_, CreateDatabaseExportOrderRequestPluginParam) };
    inline CreateDatabaseExportOrderRequest& setPluginParam(const CreateDatabaseExportOrderRequestPluginParam & pluginParam) { DARABONBA_PTR_SET_VALUE(pluginParam_, pluginParam) };
    inline CreateDatabaseExportOrderRequest& setPluginParam(CreateDatabaseExportOrderRequestPluginParam && pluginParam) { DARABONBA_PTR_SET_RVALUE(pluginParam_, pluginParam) };


    // relatedUserList Field Functions 
    bool hasRelatedUserList() const { return this->relatedUserList_ != nullptr;};
    void deleteRelatedUserList() { this->relatedUserList_ = nullptr;};
    inline const vector<int64_t> & relatedUserList() const { DARABONBA_PTR_GET_CONST(relatedUserList_, vector<int64_t>) };
    inline vector<int64_t> relatedUserList() { DARABONBA_PTR_GET(relatedUserList_, vector<int64_t>) };
    inline CreateDatabaseExportOrderRequest& setRelatedUserList(const vector<int64_t> & relatedUserList) { DARABONBA_PTR_SET_VALUE(relatedUserList_, relatedUserList) };
    inline CreateDatabaseExportOrderRequest& setRelatedUserList(vector<int64_t> && relatedUserList) { DARABONBA_PTR_SET_RVALUE(relatedUserList_, relatedUserList) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t tid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline CreateDatabaseExportOrderRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


  protected:
    // The key of the attachment that provides more instructions for the ticket. You can call the [GetUserUploadFileJob](https://help.aliyun.com/document_detail/206069.html) operation to obtain the attachment key.
    std::shared_ptr<string> attachmentKey_ = nullptr;
    // The purpose or objective of the ticket. This parameter helps reduce unnecessary communication.
    // 
    // This parameter is required.
    std::shared_ptr<string> comment_ = nullptr;
    // The ID of the parent ticket.
    std::shared_ptr<int64_t> parentId_ = nullptr;
    // The parameters of the ticket.
    // 
    // This parameter is required.
    std::shared_ptr<CreateDatabaseExportOrderRequestPluginParam> pluginParam_ = nullptr;
    // The stakeholders involved in this operation.
    std::shared_ptr<vector<int64_t>> relatedUserList_ = nullptr;
    // The tenant ID.
    // 
    // > To view the ID of the tenant, move the pointer over the profile picture in the upper-right corner of the DMS console. For more information, see the [View information about the current tenant](https://help.aliyun.com/document_detail/181330.html) section of the "Manage DMS tenants" topic.
    std::shared_ptr<int64_t> tid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
