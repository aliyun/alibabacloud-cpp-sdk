// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEQUALITYTEMPLATESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEQUALITYTEMPLATESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class DeleteQualityTemplatesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteQualityTemplatesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeleteCommand, deleteCommand_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteQualityTemplatesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeleteCommand, deleteCommand_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
    };
    DeleteQualityTemplatesRequest() = default ;
    DeleteQualityTemplatesRequest(const DeleteQualityTemplatesRequest &) = default ;
    DeleteQualityTemplatesRequest(DeleteQualityTemplatesRequest &&) = default ;
    DeleteQualityTemplatesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteQualityTemplatesRequest() = default ;
    DeleteQualityTemplatesRequest& operator=(const DeleteQualityTemplatesRequest &) = default ;
    DeleteQualityTemplatesRequest& operator=(DeleteQualityTemplatesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DeleteCommand : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DeleteCommand& obj) { 
        DARABONBA_PTR_TO_JSON(TemplateIdList, templateIdList_);
      };
      friend void from_json(const Darabonba::Json& j, DeleteCommand& obj) { 
        DARABONBA_PTR_FROM_JSON(TemplateIdList, templateIdList_);
      };
      DeleteCommand() = default ;
      DeleteCommand(const DeleteCommand &) = default ;
      DeleteCommand(DeleteCommand &&) = default ;
      DeleteCommand(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DeleteCommand() = default ;
      DeleteCommand& operator=(const DeleteCommand &) = default ;
      DeleteCommand& operator=(DeleteCommand &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->templateIdList_ == nullptr; };
      // templateIdList Field Functions 
      bool hasTemplateIdList() const { return this->templateIdList_ != nullptr;};
      void deleteTemplateIdList() { this->templateIdList_ = nullptr;};
      inline const vector<int64_t> & getTemplateIdList() const { DARABONBA_PTR_GET_CONST(templateIdList_, vector<int64_t>) };
      inline vector<int64_t> getTemplateIdList() { DARABONBA_PTR_GET(templateIdList_, vector<int64_t>) };
      inline DeleteCommand& setTemplateIdList(const vector<int64_t> & templateIdList) { DARABONBA_PTR_SET_VALUE(templateIdList_, templateIdList) };
      inline DeleteCommand& setTemplateIdList(vector<int64_t> && templateIdList) { DARABONBA_PTR_SET_RVALUE(templateIdList_, templateIdList) };


    protected:
      // This parameter is required.
      shared_ptr<vector<int64_t>> templateIdList_ {};
    };

    virtual bool empty() const override { return this->deleteCommand_ == nullptr
        && this->opTenantId_ == nullptr; };
    // deleteCommand Field Functions 
    bool hasDeleteCommand() const { return this->deleteCommand_ != nullptr;};
    void deleteDeleteCommand() { this->deleteCommand_ = nullptr;};
    inline const DeleteQualityTemplatesRequest::DeleteCommand & getDeleteCommand() const { DARABONBA_PTR_GET_CONST(deleteCommand_, DeleteQualityTemplatesRequest::DeleteCommand) };
    inline DeleteQualityTemplatesRequest::DeleteCommand getDeleteCommand() { DARABONBA_PTR_GET(deleteCommand_, DeleteQualityTemplatesRequest::DeleteCommand) };
    inline DeleteQualityTemplatesRequest& setDeleteCommand(const DeleteQualityTemplatesRequest::DeleteCommand & deleteCommand) { DARABONBA_PTR_SET_VALUE(deleteCommand_, deleteCommand) };
    inline DeleteQualityTemplatesRequest& setDeleteCommand(DeleteQualityTemplatesRequest::DeleteCommand && deleteCommand) { DARABONBA_PTR_SET_RVALUE(deleteCommand_, deleteCommand) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline DeleteQualityTemplatesRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


  protected:
    // This parameter is required.
    shared_ptr<DeleteQualityTemplatesRequest::DeleteCommand> deleteCommand_ {};
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
