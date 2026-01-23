// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETESTANDARDVALIDMAPPINGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETESTANDARDVALIDMAPPINGREQUEST_HPP_
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
  class DeleteStandardValidMappingRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteStandardValidMappingRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeleteCommand, deleteCommand_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteStandardValidMappingRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeleteCommand, deleteCommand_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
    };
    DeleteStandardValidMappingRequest() = default ;
    DeleteStandardValidMappingRequest(const DeleteStandardValidMappingRequest &) = default ;
    DeleteStandardValidMappingRequest(DeleteStandardValidMappingRequest &&) = default ;
    DeleteStandardValidMappingRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteStandardValidMappingRequest() = default ;
    DeleteStandardValidMappingRequest& operator=(const DeleteStandardValidMappingRequest &) = default ;
    DeleteStandardValidMappingRequest& operator=(DeleteStandardValidMappingRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DeleteCommand : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DeleteCommand& obj) { 
        DARABONBA_PTR_TO_JSON(BelongGuidList, belongGuidList_);
        DARABONBA_PTR_TO_JSON(GuidList, guidList_);
        DARABONBA_PTR_TO_JSON(StandardId, standardId_);
      };
      friend void from_json(const Darabonba::Json& j, DeleteCommand& obj) { 
        DARABONBA_PTR_FROM_JSON(BelongGuidList, belongGuidList_);
        DARABONBA_PTR_FROM_JSON(GuidList, guidList_);
        DARABONBA_PTR_FROM_JSON(StandardId, standardId_);
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
      virtual bool empty() const override { return this->belongGuidList_ == nullptr
        && this->guidList_ == nullptr && this->standardId_ == nullptr; };
      // belongGuidList Field Functions 
      bool hasBelongGuidList() const { return this->belongGuidList_ != nullptr;};
      void deleteBelongGuidList() { this->belongGuidList_ = nullptr;};
      inline const vector<string> & getBelongGuidList() const { DARABONBA_PTR_GET_CONST(belongGuidList_, vector<string>) };
      inline vector<string> getBelongGuidList() { DARABONBA_PTR_GET(belongGuidList_, vector<string>) };
      inline DeleteCommand& setBelongGuidList(const vector<string> & belongGuidList) { DARABONBA_PTR_SET_VALUE(belongGuidList_, belongGuidList) };
      inline DeleteCommand& setBelongGuidList(vector<string> && belongGuidList) { DARABONBA_PTR_SET_RVALUE(belongGuidList_, belongGuidList) };


      // guidList Field Functions 
      bool hasGuidList() const { return this->guidList_ != nullptr;};
      void deleteGuidList() { this->guidList_ = nullptr;};
      inline const vector<string> & getGuidList() const { DARABONBA_PTR_GET_CONST(guidList_, vector<string>) };
      inline vector<string> getGuidList() { DARABONBA_PTR_GET(guidList_, vector<string>) };
      inline DeleteCommand& setGuidList(const vector<string> & guidList) { DARABONBA_PTR_SET_VALUE(guidList_, guidList) };
      inline DeleteCommand& setGuidList(vector<string> && guidList) { DARABONBA_PTR_SET_RVALUE(guidList_, guidList) };


      // standardId Field Functions 
      bool hasStandardId() const { return this->standardId_ != nullptr;};
      void deleteStandardId() { this->standardId_ = nullptr;};
      inline int64_t getStandardId() const { DARABONBA_PTR_GET_DEFAULT(standardId_, 0L) };
      inline DeleteCommand& setStandardId(int64_t standardId) { DARABONBA_PTR_SET_VALUE(standardId_, standardId) };


    protected:
      shared_ptr<vector<string>> belongGuidList_ {};
      shared_ptr<vector<string>> guidList_ {};
      // This parameter is required.
      shared_ptr<int64_t> standardId_ {};
    };

    virtual bool empty() const override { return this->deleteCommand_ == nullptr
        && this->opTenantId_ == nullptr; };
    // deleteCommand Field Functions 
    bool hasDeleteCommand() const { return this->deleteCommand_ != nullptr;};
    void deleteDeleteCommand() { this->deleteCommand_ = nullptr;};
    inline const DeleteStandardValidMappingRequest::DeleteCommand & getDeleteCommand() const { DARABONBA_PTR_GET_CONST(deleteCommand_, DeleteStandardValidMappingRequest::DeleteCommand) };
    inline DeleteStandardValidMappingRequest::DeleteCommand getDeleteCommand() { DARABONBA_PTR_GET(deleteCommand_, DeleteStandardValidMappingRequest::DeleteCommand) };
    inline DeleteStandardValidMappingRequest& setDeleteCommand(const DeleteStandardValidMappingRequest::DeleteCommand & deleteCommand) { DARABONBA_PTR_SET_VALUE(deleteCommand_, deleteCommand) };
    inline DeleteStandardValidMappingRequest& setDeleteCommand(DeleteStandardValidMappingRequest::DeleteCommand && deleteCommand) { DARABONBA_PTR_SET_RVALUE(deleteCommand_, deleteCommand) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline DeleteStandardValidMappingRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


  protected:
    // This parameter is required.
    shared_ptr<DeleteStandardValidMappingRequest::DeleteCommand> deleteCommand_ {};
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
