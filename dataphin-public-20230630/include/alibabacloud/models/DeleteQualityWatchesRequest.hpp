// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEQUALITYWATCHESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEQUALITYWATCHESREQUEST_HPP_
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
  class DeleteQualityWatchesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteQualityWatchesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeleteCommand, deleteCommand_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteQualityWatchesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeleteCommand, deleteCommand_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
    };
    DeleteQualityWatchesRequest() = default ;
    DeleteQualityWatchesRequest(const DeleteQualityWatchesRequest &) = default ;
    DeleteQualityWatchesRequest(DeleteQualityWatchesRequest &&) = default ;
    DeleteQualityWatchesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteQualityWatchesRequest() = default ;
    DeleteQualityWatchesRequest& operator=(const DeleteQualityWatchesRequest &) = default ;
    DeleteQualityWatchesRequest& operator=(DeleteQualityWatchesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DeleteCommand : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DeleteCommand& obj) { 
        DARABONBA_PTR_TO_JSON(WatchIdList, watchIdList_);
      };
      friend void from_json(const Darabonba::Json& j, DeleteCommand& obj) { 
        DARABONBA_PTR_FROM_JSON(WatchIdList, watchIdList_);
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
      virtual bool empty() const override { return this->watchIdList_ == nullptr; };
      // watchIdList Field Functions 
      bool hasWatchIdList() const { return this->watchIdList_ != nullptr;};
      void deleteWatchIdList() { this->watchIdList_ = nullptr;};
      inline const vector<int64_t> & getWatchIdList() const { DARABONBA_PTR_GET_CONST(watchIdList_, vector<int64_t>) };
      inline vector<int64_t> getWatchIdList() { DARABONBA_PTR_GET(watchIdList_, vector<int64_t>) };
      inline DeleteCommand& setWatchIdList(const vector<int64_t> & watchIdList) { DARABONBA_PTR_SET_VALUE(watchIdList_, watchIdList) };
      inline DeleteCommand& setWatchIdList(vector<int64_t> && watchIdList) { DARABONBA_PTR_SET_RVALUE(watchIdList_, watchIdList) };


    protected:
      // This parameter is required.
      shared_ptr<vector<int64_t>> watchIdList_ {};
    };

    virtual bool empty() const override { return this->deleteCommand_ == nullptr
        && this->opTenantId_ == nullptr; };
    // deleteCommand Field Functions 
    bool hasDeleteCommand() const { return this->deleteCommand_ != nullptr;};
    void deleteDeleteCommand() { this->deleteCommand_ = nullptr;};
    inline const DeleteQualityWatchesRequest::DeleteCommand & getDeleteCommand() const { DARABONBA_PTR_GET_CONST(deleteCommand_, DeleteQualityWatchesRequest::DeleteCommand) };
    inline DeleteQualityWatchesRequest::DeleteCommand getDeleteCommand() { DARABONBA_PTR_GET(deleteCommand_, DeleteQualityWatchesRequest::DeleteCommand) };
    inline DeleteQualityWatchesRequest& setDeleteCommand(const DeleteQualityWatchesRequest::DeleteCommand & deleteCommand) { DARABONBA_PTR_SET_VALUE(deleteCommand_, deleteCommand) };
    inline DeleteQualityWatchesRequest& setDeleteCommand(DeleteQualityWatchesRequest::DeleteCommand && deleteCommand) { DARABONBA_PTR_SET_RVALUE(deleteCommand_, deleteCommand) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline DeleteQualityWatchesRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


  protected:
    // This parameter is required.
    shared_ptr<DeleteQualityWatchesRequest::DeleteCommand> deleteCommand_ {};
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
