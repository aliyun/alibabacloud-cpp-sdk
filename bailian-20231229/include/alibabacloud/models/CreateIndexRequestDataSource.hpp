// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEINDEXREQUESTDATASOURCE_HPP_
#define ALIBABACLOUD_MODELS_CREATEINDEXREQUESTDATASOURCE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Bailian20231229
{
namespace Models
{
  class CreateIndexRequestDataSource : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateIndexRequestDataSource& obj) { 
      DARABONBA_PTR_TO_JSON(CredentialId, credentialId_);
      DARABONBA_PTR_TO_JSON(CredentialKey, credentialKey_);
      DARABONBA_PTR_TO_JSON(Database, database_);
      DARABONBA_PTR_TO_JSON(Endpoint, endpoint_);
      DARABONBA_PTR_TO_JSON(IsPrivateLink, isPrivateLink_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(SubPath, subPath_);
      DARABONBA_PTR_TO_JSON(SubType, subType_);
      DARABONBA_PTR_TO_JSON(Table, table_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, CreateIndexRequestDataSource& obj) { 
      DARABONBA_PTR_FROM_JSON(CredentialId, credentialId_);
      DARABONBA_PTR_FROM_JSON(CredentialKey, credentialKey_);
      DARABONBA_PTR_FROM_JSON(Database, database_);
      DARABONBA_PTR_FROM_JSON(Endpoint, endpoint_);
      DARABONBA_PTR_FROM_JSON(IsPrivateLink, isPrivateLink_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(SubPath, subPath_);
      DARABONBA_PTR_FROM_JSON(SubType, subType_);
      DARABONBA_PTR_FROM_JSON(Table, table_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    CreateIndexRequestDataSource() = default ;
    CreateIndexRequestDataSource(const CreateIndexRequestDataSource &) = default ;
    CreateIndexRequestDataSource(CreateIndexRequestDataSource &&) = default ;
    CreateIndexRequestDataSource(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateIndexRequestDataSource() = default ;
    CreateIndexRequestDataSource& operator=(const CreateIndexRequestDataSource &) = default ;
    CreateIndexRequestDataSource& operator=(CreateIndexRequestDataSource &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->credentialId_ == nullptr
        && return this->credentialKey_ == nullptr && return this->database_ == nullptr && return this->endpoint_ == nullptr && return this->isPrivateLink_ == nullptr && return this->region_ == nullptr
        && return this->subPath_ == nullptr && return this->subType_ == nullptr && return this->table_ == nullptr && return this->type_ == nullptr; };
    // credentialId Field Functions 
    bool hasCredentialId() const { return this->credentialId_ != nullptr;};
    void deleteCredentialId() { this->credentialId_ = nullptr;};
    inline string credentialId() const { DARABONBA_PTR_GET_DEFAULT(credentialId_, "") };
    inline CreateIndexRequestDataSource& setCredentialId(string credentialId) { DARABONBA_PTR_SET_VALUE(credentialId_, credentialId) };


    // credentialKey Field Functions 
    bool hasCredentialKey() const { return this->credentialKey_ != nullptr;};
    void deleteCredentialKey() { this->credentialKey_ = nullptr;};
    inline string credentialKey() const { DARABONBA_PTR_GET_DEFAULT(credentialKey_, "") };
    inline CreateIndexRequestDataSource& setCredentialKey(string credentialKey) { DARABONBA_PTR_SET_VALUE(credentialKey_, credentialKey) };


    // database Field Functions 
    bool hasDatabase() const { return this->database_ != nullptr;};
    void deleteDatabase() { this->database_ = nullptr;};
    inline string database() const { DARABONBA_PTR_GET_DEFAULT(database_, "") };
    inline CreateIndexRequestDataSource& setDatabase(string database) { DARABONBA_PTR_SET_VALUE(database_, database) };


    // endpoint Field Functions 
    bool hasEndpoint() const { return this->endpoint_ != nullptr;};
    void deleteEndpoint() { this->endpoint_ = nullptr;};
    inline string endpoint() const { DARABONBA_PTR_GET_DEFAULT(endpoint_, "") };
    inline CreateIndexRequestDataSource& setEndpoint(string endpoint) { DARABONBA_PTR_SET_VALUE(endpoint_, endpoint) };


    // isPrivateLink Field Functions 
    bool hasIsPrivateLink() const { return this->isPrivateLink_ != nullptr;};
    void deleteIsPrivateLink() { this->isPrivateLink_ = nullptr;};
    inline bool isPrivateLink() const { DARABONBA_PTR_GET_DEFAULT(isPrivateLink_, false) };
    inline CreateIndexRequestDataSource& setIsPrivateLink(bool isPrivateLink) { DARABONBA_PTR_SET_VALUE(isPrivateLink_, isPrivateLink) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline CreateIndexRequestDataSource& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // subPath Field Functions 
    bool hasSubPath() const { return this->subPath_ != nullptr;};
    void deleteSubPath() { this->subPath_ = nullptr;};
    inline string subPath() const { DARABONBA_PTR_GET_DEFAULT(subPath_, "") };
    inline CreateIndexRequestDataSource& setSubPath(string subPath) { DARABONBA_PTR_SET_VALUE(subPath_, subPath) };


    // subType Field Functions 
    bool hasSubType() const { return this->subType_ != nullptr;};
    void deleteSubType() { this->subType_ = nullptr;};
    inline string subType() const { DARABONBA_PTR_GET_DEFAULT(subType_, "") };
    inline CreateIndexRequestDataSource& setSubType(string subType) { DARABONBA_PTR_SET_VALUE(subType_, subType) };


    // table Field Functions 
    bool hasTable() const { return this->table_ != nullptr;};
    void deleteTable() { this->table_ = nullptr;};
    inline string table() const { DARABONBA_PTR_GET_DEFAULT(table_, "") };
    inline CreateIndexRequestDataSource& setTable(string table) { DARABONBA_PTR_SET_VALUE(table_, table) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreateIndexRequestDataSource& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // >  This parameter is not available. Do not specify this parameter.
    std::shared_ptr<string> credentialId_ = nullptr;
    // >  This parameter is not available. Do not specify this parameter.
    std::shared_ptr<string> credentialKey_ = nullptr;
    // >  This parameter is not available. Do not specify this parameter.
    std::shared_ptr<string> database_ = nullptr;
    // >  This parameter is not available. Do not specify this parameter.
    std::shared_ptr<string> endpoint_ = nullptr;
    // >  This parameter is not available. Do not specify this parameter.
    std::shared_ptr<bool> isPrivateLink_ = nullptr;
    // >  This parameter is not available. Do not specify this parameter.
    std::shared_ptr<string> region_ = nullptr;
    // >  This parameter is not available. Do not specify this parameter.
    std::shared_ptr<string> subPath_ = nullptr;
    // >  This parameter is not available. Do not specify this parameter.
    std::shared_ptr<string> subType_ = nullptr;
    // >  This parameter is not available. Do not specify this parameter.
    std::shared_ptr<string> table_ = nullptr;
    // >  This parameter is not available. Do not specify this parameter.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Bailian20231229
#endif
