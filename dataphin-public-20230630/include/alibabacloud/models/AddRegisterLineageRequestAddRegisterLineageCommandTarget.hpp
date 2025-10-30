// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDREGISTERLINEAGEREQUESTADDREGISTERLINEAGECOMMANDTARGET_HPP_
#define ALIBABACLOUD_MODELS_ADDREGISTERLINEAGEREQUESTADDREGISTERLINEAGECOMMANDTARGET_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class AddRegisterLineageRequestAddRegisterLineageCommandTarget : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddRegisterLineageRequestAddRegisterLineageCommandTarget& obj) { 
      DARABONBA_PTR_TO_JSON(Catalog, catalog_);
      DARABONBA_PTR_TO_JSON(Env, env_);
      DARABONBA_ANY_TO_JSON(ExtProperties, extProperties_);
      DARABONBA_PTR_TO_JSON(Guid, guid_);
      DARABONBA_PTR_TO_JSON(MetadataSubType, metadataSubType_);
      DARABONBA_PTR_TO_JSON(MetadataType, metadataType_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ReferenceType, referenceType_);
      DARABONBA_PTR_TO_JSON(Schema, schema_);
    };
    friend void from_json(const Darabonba::Json& j, AddRegisterLineageRequestAddRegisterLineageCommandTarget& obj) { 
      DARABONBA_PTR_FROM_JSON(Catalog, catalog_);
      DARABONBA_PTR_FROM_JSON(Env, env_);
      DARABONBA_ANY_FROM_JSON(ExtProperties, extProperties_);
      DARABONBA_PTR_FROM_JSON(Guid, guid_);
      DARABONBA_PTR_FROM_JSON(MetadataSubType, metadataSubType_);
      DARABONBA_PTR_FROM_JSON(MetadataType, metadataType_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ReferenceType, referenceType_);
      DARABONBA_PTR_FROM_JSON(Schema, schema_);
    };
    AddRegisterLineageRequestAddRegisterLineageCommandTarget() = default ;
    AddRegisterLineageRequestAddRegisterLineageCommandTarget(const AddRegisterLineageRequestAddRegisterLineageCommandTarget &) = default ;
    AddRegisterLineageRequestAddRegisterLineageCommandTarget(AddRegisterLineageRequestAddRegisterLineageCommandTarget &&) = default ;
    AddRegisterLineageRequestAddRegisterLineageCommandTarget(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddRegisterLineageRequestAddRegisterLineageCommandTarget() = default ;
    AddRegisterLineageRequestAddRegisterLineageCommandTarget& operator=(const AddRegisterLineageRequestAddRegisterLineageCommandTarget &) = default ;
    AddRegisterLineageRequestAddRegisterLineageCommandTarget& operator=(AddRegisterLineageRequestAddRegisterLineageCommandTarget &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->catalog_ == nullptr
        && return this->env_ == nullptr && return this->extProperties_ == nullptr && return this->guid_ == nullptr && return this->metadataSubType_ == nullptr && return this->metadataType_ == nullptr
        && return this->name_ == nullptr && return this->referenceType_ == nullptr && return this->schema_ == nullptr; };
    // catalog Field Functions 
    bool hasCatalog() const { return this->catalog_ != nullptr;};
    void deleteCatalog() { this->catalog_ = nullptr;};
    inline string catalog() const { DARABONBA_PTR_GET_DEFAULT(catalog_, "") };
    inline AddRegisterLineageRequestAddRegisterLineageCommandTarget& setCatalog(string catalog) { DARABONBA_PTR_SET_VALUE(catalog_, catalog) };


    // env Field Functions 
    bool hasEnv() const { return this->env_ != nullptr;};
    void deleteEnv() { this->env_ = nullptr;};
    inline string env() const { DARABONBA_PTR_GET_DEFAULT(env_, "") };
    inline AddRegisterLineageRequestAddRegisterLineageCommandTarget& setEnv(string env) { DARABONBA_PTR_SET_VALUE(env_, env) };


    // extProperties Field Functions 
    bool hasExtProperties() const { return this->extProperties_ != nullptr;};
    void deleteExtProperties() { this->extProperties_ = nullptr;};
    inline     const Darabonba::Json & extProperties() const { DARABONBA_GET(extProperties_) };
    Darabonba::Json & extProperties() { DARABONBA_GET(extProperties_) };
    inline AddRegisterLineageRequestAddRegisterLineageCommandTarget& setExtProperties(const Darabonba::Json & extProperties) { DARABONBA_SET_VALUE(extProperties_, extProperties) };
    inline AddRegisterLineageRequestAddRegisterLineageCommandTarget& setExtProperties(Darabonba::Json & extProperties) { DARABONBA_SET_RVALUE(extProperties_, extProperties) };


    // guid Field Functions 
    bool hasGuid() const { return this->guid_ != nullptr;};
    void deleteGuid() { this->guid_ = nullptr;};
    inline string guid() const { DARABONBA_PTR_GET_DEFAULT(guid_, "") };
    inline AddRegisterLineageRequestAddRegisterLineageCommandTarget& setGuid(string guid) { DARABONBA_PTR_SET_VALUE(guid_, guid) };


    // metadataSubType Field Functions 
    bool hasMetadataSubType() const { return this->metadataSubType_ != nullptr;};
    void deleteMetadataSubType() { this->metadataSubType_ = nullptr;};
    inline string metadataSubType() const { DARABONBA_PTR_GET_DEFAULT(metadataSubType_, "") };
    inline AddRegisterLineageRequestAddRegisterLineageCommandTarget& setMetadataSubType(string metadataSubType) { DARABONBA_PTR_SET_VALUE(metadataSubType_, metadataSubType) };


    // metadataType Field Functions 
    bool hasMetadataType() const { return this->metadataType_ != nullptr;};
    void deleteMetadataType() { this->metadataType_ = nullptr;};
    inline string metadataType() const { DARABONBA_PTR_GET_DEFAULT(metadataType_, "") };
    inline AddRegisterLineageRequestAddRegisterLineageCommandTarget& setMetadataType(string metadataType) { DARABONBA_PTR_SET_VALUE(metadataType_, metadataType) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline AddRegisterLineageRequestAddRegisterLineageCommandTarget& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // referenceType Field Functions 
    bool hasReferenceType() const { return this->referenceType_ != nullptr;};
    void deleteReferenceType() { this->referenceType_ = nullptr;};
    inline string referenceType() const { DARABONBA_PTR_GET_DEFAULT(referenceType_, "") };
    inline AddRegisterLineageRequestAddRegisterLineageCommandTarget& setReferenceType(string referenceType) { DARABONBA_PTR_SET_VALUE(referenceType_, referenceType) };


    // schema Field Functions 
    bool hasSchema() const { return this->schema_ != nullptr;};
    void deleteSchema() { this->schema_ = nullptr;};
    inline string schema() const { DARABONBA_PTR_GET_DEFAULT(schema_, "") };
    inline AddRegisterLineageRequestAddRegisterLineageCommandTarget& setSchema(string schema) { DARABONBA_PTR_SET_VALUE(schema_, schema) };


  protected:
    std::shared_ptr<string> catalog_ = nullptr;
    std::shared_ptr<string> env_ = nullptr;
    Darabonba::Json extProperties_ = nullptr;
    std::shared_ptr<string> guid_ = nullptr;
    std::shared_ptr<string> metadataSubType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> metadataType_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> referenceType_ = nullptr;
    std::shared_ptr<string> schema_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
