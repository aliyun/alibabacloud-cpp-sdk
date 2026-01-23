// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETESTANDARDRELATIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETESTANDARDRELATIONSREQUEST_HPP_
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
  class DeleteStandardRelationsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteStandardRelationsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeleteCommand, deleteCommand_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteStandardRelationsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeleteCommand, deleteCommand_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
    };
    DeleteStandardRelationsRequest() = default ;
    DeleteStandardRelationsRequest(const DeleteStandardRelationsRequest &) = default ;
    DeleteStandardRelationsRequest(DeleteStandardRelationsRequest &&) = default ;
    DeleteStandardRelationsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteStandardRelationsRequest() = default ;
    DeleteStandardRelationsRequest& operator=(const DeleteStandardRelationsRequest &) = default ;
    DeleteStandardRelationsRequest& operator=(DeleteStandardRelationsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DeleteCommand : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DeleteCommand& obj) { 
        DARABONBA_PTR_TO_JSON(RelationType, relationType_);
        DARABONBA_PTR_TO_JSON(StandardId, standardId_);
        DARABONBA_PTR_TO_JSON(StandardRefList, standardRefList_);
      };
      friend void from_json(const Darabonba::Json& j, DeleteCommand& obj) { 
        DARABONBA_PTR_FROM_JSON(RelationType, relationType_);
        DARABONBA_PTR_FROM_JSON(StandardId, standardId_);
        DARABONBA_PTR_FROM_JSON(StandardRefList, standardRefList_);
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
      class StandardRefList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const StandardRefList& obj) { 
          DARABONBA_PTR_TO_JSON(StandardId, standardId_);
        };
        friend void from_json(const Darabonba::Json& j, StandardRefList& obj) { 
          DARABONBA_PTR_FROM_JSON(StandardId, standardId_);
        };
        StandardRefList() = default ;
        StandardRefList(const StandardRefList &) = default ;
        StandardRefList(StandardRefList &&) = default ;
        StandardRefList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~StandardRefList() = default ;
        StandardRefList& operator=(const StandardRefList &) = default ;
        StandardRefList& operator=(StandardRefList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->standardId_ == nullptr; };
        // standardId Field Functions 
        bool hasStandardId() const { return this->standardId_ != nullptr;};
        void deleteStandardId() { this->standardId_ = nullptr;};
        inline int64_t getStandardId() const { DARABONBA_PTR_GET_DEFAULT(standardId_, 0L) };
        inline StandardRefList& setStandardId(int64_t standardId) { DARABONBA_PTR_SET_VALUE(standardId_, standardId) };


      protected:
        // This parameter is required.
        shared_ptr<int64_t> standardId_ {};
      };

      virtual bool empty() const override { return this->relationType_ == nullptr
        && this->standardId_ == nullptr && this->standardRefList_ == nullptr; };
      // relationType Field Functions 
      bool hasRelationType() const { return this->relationType_ != nullptr;};
      void deleteRelationType() { this->relationType_ = nullptr;};
      inline string getRelationType() const { DARABONBA_PTR_GET_DEFAULT(relationType_, "") };
      inline DeleteCommand& setRelationType(string relationType) { DARABONBA_PTR_SET_VALUE(relationType_, relationType) };


      // standardId Field Functions 
      bool hasStandardId() const { return this->standardId_ != nullptr;};
      void deleteStandardId() { this->standardId_ = nullptr;};
      inline int64_t getStandardId() const { DARABONBA_PTR_GET_DEFAULT(standardId_, 0L) };
      inline DeleteCommand& setStandardId(int64_t standardId) { DARABONBA_PTR_SET_VALUE(standardId_, standardId) };


      // standardRefList Field Functions 
      bool hasStandardRefList() const { return this->standardRefList_ != nullptr;};
      void deleteStandardRefList() { this->standardRefList_ = nullptr;};
      inline const vector<DeleteCommand::StandardRefList> & getStandardRefList() const { DARABONBA_PTR_GET_CONST(standardRefList_, vector<DeleteCommand::StandardRefList>) };
      inline vector<DeleteCommand::StandardRefList> getStandardRefList() { DARABONBA_PTR_GET(standardRefList_, vector<DeleteCommand::StandardRefList>) };
      inline DeleteCommand& setStandardRefList(const vector<DeleteCommand::StandardRefList> & standardRefList) { DARABONBA_PTR_SET_VALUE(standardRefList_, standardRefList) };
      inline DeleteCommand& setStandardRefList(vector<DeleteCommand::StandardRefList> && standardRefList) { DARABONBA_PTR_SET_RVALUE(standardRefList_, standardRefList) };


    protected:
      // This parameter is required.
      shared_ptr<string> relationType_ {};
      // This parameter is required.
      shared_ptr<int64_t> standardId_ {};
      // This parameter is required.
      shared_ptr<vector<DeleteCommand::StandardRefList>> standardRefList_ {};
    };

    virtual bool empty() const override { return this->deleteCommand_ == nullptr
        && this->opTenantId_ == nullptr; };
    // deleteCommand Field Functions 
    bool hasDeleteCommand() const { return this->deleteCommand_ != nullptr;};
    void deleteDeleteCommand() { this->deleteCommand_ = nullptr;};
    inline const DeleteStandardRelationsRequest::DeleteCommand & getDeleteCommand() const { DARABONBA_PTR_GET_CONST(deleteCommand_, DeleteStandardRelationsRequest::DeleteCommand) };
    inline DeleteStandardRelationsRequest::DeleteCommand getDeleteCommand() { DARABONBA_PTR_GET(deleteCommand_, DeleteStandardRelationsRequest::DeleteCommand) };
    inline DeleteStandardRelationsRequest& setDeleteCommand(const DeleteStandardRelationsRequest::DeleteCommand & deleteCommand) { DARABONBA_PTR_SET_VALUE(deleteCommand_, deleteCommand) };
    inline DeleteStandardRelationsRequest& setDeleteCommand(DeleteStandardRelationsRequest::DeleteCommand && deleteCommand) { DARABONBA_PTR_SET_RVALUE(deleteCommand_, deleteCommand) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline DeleteStandardRelationsRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


  protected:
    // This parameter is required.
    shared_ptr<DeleteStandardRelationsRequest::DeleteCommand> deleteCommand_ {};
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
