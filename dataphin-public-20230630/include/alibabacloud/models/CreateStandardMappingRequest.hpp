// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESTANDARDMAPPINGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESTANDARDMAPPINGREQUEST_HPP_
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
  class CreateStandardMappingRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateStandardMappingRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CreateCommand, createCommand_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateStandardMappingRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateCommand, createCommand_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
    };
    CreateStandardMappingRequest() = default ;
    CreateStandardMappingRequest(const CreateStandardMappingRequest &) = default ;
    CreateStandardMappingRequest(CreateStandardMappingRequest &&) = default ;
    CreateStandardMappingRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateStandardMappingRequest() = default ;
    CreateStandardMappingRequest& operator=(const CreateStandardMappingRequest &) = default ;
    CreateStandardMappingRequest& operator=(CreateStandardMappingRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CreateCommand : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CreateCommand& obj) { 
        DARABONBA_PTR_TO_JSON(AssetGuidList, assetGuidList_);
        DARABONBA_PTR_TO_JSON(InvalidMappingRelationOperationType, invalidMappingRelationOperationType_);
        DARABONBA_PTR_TO_JSON(RelationType, relationType_);
        DARABONBA_PTR_TO_JSON(StandardId, standardId_);
      };
      friend void from_json(const Darabonba::Json& j, CreateCommand& obj) { 
        DARABONBA_PTR_FROM_JSON(AssetGuidList, assetGuidList_);
        DARABONBA_PTR_FROM_JSON(InvalidMappingRelationOperationType, invalidMappingRelationOperationType_);
        DARABONBA_PTR_FROM_JSON(RelationType, relationType_);
        DARABONBA_PTR_FROM_JSON(StandardId, standardId_);
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
      virtual bool empty() const override { return this->assetGuidList_ == nullptr
        && this->invalidMappingRelationOperationType_ == nullptr && this->relationType_ == nullptr && this->standardId_ == nullptr; };
      // assetGuidList Field Functions 
      bool hasAssetGuidList() const { return this->assetGuidList_ != nullptr;};
      void deleteAssetGuidList() { this->assetGuidList_ = nullptr;};
      inline const vector<string> & getAssetGuidList() const { DARABONBA_PTR_GET_CONST(assetGuidList_, vector<string>) };
      inline vector<string> getAssetGuidList() { DARABONBA_PTR_GET(assetGuidList_, vector<string>) };
      inline CreateCommand& setAssetGuidList(const vector<string> & assetGuidList) { DARABONBA_PTR_SET_VALUE(assetGuidList_, assetGuidList) };
      inline CreateCommand& setAssetGuidList(vector<string> && assetGuidList) { DARABONBA_PTR_SET_RVALUE(assetGuidList_, assetGuidList) };


      // invalidMappingRelationOperationType Field Functions 
      bool hasInvalidMappingRelationOperationType() const { return this->invalidMappingRelationOperationType_ != nullptr;};
      void deleteInvalidMappingRelationOperationType() { this->invalidMappingRelationOperationType_ = nullptr;};
      inline string getInvalidMappingRelationOperationType() const { DARABONBA_PTR_GET_DEFAULT(invalidMappingRelationOperationType_, "") };
      inline CreateCommand& setInvalidMappingRelationOperationType(string invalidMappingRelationOperationType) { DARABONBA_PTR_SET_VALUE(invalidMappingRelationOperationType_, invalidMappingRelationOperationType) };


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


    protected:
      // This parameter is required.
      shared_ptr<vector<string>> assetGuidList_ {};
      shared_ptr<string> invalidMappingRelationOperationType_ {};
      shared_ptr<string> relationType_ {};
      // This parameter is required.
      shared_ptr<int64_t> standardId_ {};
    };

    virtual bool empty() const override { return this->createCommand_ == nullptr
        && this->opTenantId_ == nullptr; };
    // createCommand Field Functions 
    bool hasCreateCommand() const { return this->createCommand_ != nullptr;};
    void deleteCreateCommand() { this->createCommand_ = nullptr;};
    inline const CreateStandardMappingRequest::CreateCommand & getCreateCommand() const { DARABONBA_PTR_GET_CONST(createCommand_, CreateStandardMappingRequest::CreateCommand) };
    inline CreateStandardMappingRequest::CreateCommand getCreateCommand() { DARABONBA_PTR_GET(createCommand_, CreateStandardMappingRequest::CreateCommand) };
    inline CreateStandardMappingRequest& setCreateCommand(const CreateStandardMappingRequest::CreateCommand & createCommand) { DARABONBA_PTR_SET_VALUE(createCommand_, createCommand) };
    inline CreateStandardMappingRequest& setCreateCommand(CreateStandardMappingRequest::CreateCommand && createCommand) { DARABONBA_PTR_SET_RVALUE(createCommand_, createCommand) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline CreateStandardMappingRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


  protected:
    // This parameter is required.
    shared_ptr<CreateStandardMappingRequest::CreateCommand> createCommand_ {};
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
