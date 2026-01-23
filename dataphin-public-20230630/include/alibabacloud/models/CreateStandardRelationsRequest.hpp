// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESTANDARDRELATIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESTANDARDRELATIONSREQUEST_HPP_
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
  class CreateStandardRelationsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateStandardRelationsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CreateCommand, createCommand_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateStandardRelationsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateCommand, createCommand_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
    };
    CreateStandardRelationsRequest() = default ;
    CreateStandardRelationsRequest(const CreateStandardRelationsRequest &) = default ;
    CreateStandardRelationsRequest(CreateStandardRelationsRequest &&) = default ;
    CreateStandardRelationsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateStandardRelationsRequest() = default ;
    CreateStandardRelationsRequest& operator=(const CreateStandardRelationsRequest &) = default ;
    CreateStandardRelationsRequest& operator=(CreateStandardRelationsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CreateCommand : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CreateCommand& obj) { 
        DARABONBA_PTR_TO_JSON(RelationType, relationType_);
        DARABONBA_PTR_TO_JSON(StandardId, standardId_);
        DARABONBA_PTR_TO_JSON(StandardRefList, standardRefList_);
      };
      friend void from_json(const Darabonba::Json& j, CreateCommand& obj) { 
        DARABONBA_PTR_FROM_JSON(RelationType, relationType_);
        DARABONBA_PTR_FROM_JSON(StandardId, standardId_);
        DARABONBA_PTR_FROM_JSON(StandardRefList, standardRefList_);
      };
      CreateCommand() = default ;
      CreateCommand(const CreateCommand &) = default ;
      CreateCommand(CreateCommand &&) = default ;
      CreateCommand(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CreateCommand() = default ;
      CreateCommand& operator=(const CreateCommand &) = default ;
      CreateCommand& operator=(CreateCommand &&) = default ;
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
      inline CreateCommand& setRelationType(string relationType) { DARABONBA_PTR_SET_VALUE(relationType_, relationType) };


      // standardId Field Functions 
      bool hasStandardId() const { return this->standardId_ != nullptr;};
      void deleteStandardId() { this->standardId_ = nullptr;};
      inline int64_t getStandardId() const { DARABONBA_PTR_GET_DEFAULT(standardId_, 0L) };
      inline CreateCommand& setStandardId(int64_t standardId) { DARABONBA_PTR_SET_VALUE(standardId_, standardId) };


      // standardRefList Field Functions 
      bool hasStandardRefList() const { return this->standardRefList_ != nullptr;};
      void deleteStandardRefList() { this->standardRefList_ = nullptr;};
      inline const vector<CreateCommand::StandardRefList> & getStandardRefList() const { DARABONBA_PTR_GET_CONST(standardRefList_, vector<CreateCommand::StandardRefList>) };
      inline vector<CreateCommand::StandardRefList> getStandardRefList() { DARABONBA_PTR_GET(standardRefList_, vector<CreateCommand::StandardRefList>) };
      inline CreateCommand& setStandardRefList(const vector<CreateCommand::StandardRefList> & standardRefList) { DARABONBA_PTR_SET_VALUE(standardRefList_, standardRefList) };
      inline CreateCommand& setStandardRefList(vector<CreateCommand::StandardRefList> && standardRefList) { DARABONBA_PTR_SET_RVALUE(standardRefList_, standardRefList) };


    protected:
      // This parameter is required.
      shared_ptr<string> relationType_ {};
      // This parameter is required.
      shared_ptr<int64_t> standardId_ {};
      // This parameter is required.
      shared_ptr<vector<CreateCommand::StandardRefList>> standardRefList_ {};
    };

    virtual bool empty() const override { return this->createCommand_ == nullptr
        && this->opTenantId_ == nullptr; };
    // createCommand Field Functions 
    bool hasCreateCommand() const { return this->createCommand_ != nullptr;};
    void deleteCreateCommand() { this->createCommand_ = nullptr;};
    inline const CreateStandardRelationsRequest::CreateCommand & getCreateCommand() const { DARABONBA_PTR_GET_CONST(createCommand_, CreateStandardRelationsRequest::CreateCommand) };
    inline CreateStandardRelationsRequest::CreateCommand getCreateCommand() { DARABONBA_PTR_GET(createCommand_, CreateStandardRelationsRequest::CreateCommand) };
    inline CreateStandardRelationsRequest& setCreateCommand(const CreateStandardRelationsRequest::CreateCommand & createCommand) { DARABONBA_PTR_SET_VALUE(createCommand_, createCommand) };
    inline CreateStandardRelationsRequest& setCreateCommand(CreateStandardRelationsRequest::CreateCommand && createCommand) { DARABONBA_PTR_SET_RVALUE(createCommand_, createCommand) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline CreateStandardRelationsRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


  protected:
    // This parameter is required.
    shared_ptr<CreateStandardRelationsRequest::CreateCommand> createCommand_ {};
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
