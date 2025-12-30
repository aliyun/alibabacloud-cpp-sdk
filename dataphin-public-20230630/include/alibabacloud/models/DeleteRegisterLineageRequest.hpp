// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEREGISTERLINEAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEREGISTERLINEAGEREQUEST_HPP_
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
  class DeleteRegisterLineageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteRegisterLineageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeleteRegisterLineageCommand, deleteRegisterLineageCommand_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteRegisterLineageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeleteRegisterLineageCommand, deleteRegisterLineageCommand_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
    };
    DeleteRegisterLineageRequest() = default ;
    DeleteRegisterLineageRequest(const DeleteRegisterLineageRequest &) = default ;
    DeleteRegisterLineageRequest(DeleteRegisterLineageRequest &&) = default ;
    DeleteRegisterLineageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteRegisterLineageRequest() = default ;
    DeleteRegisterLineageRequest& operator=(const DeleteRegisterLineageRequest &) = default ;
    DeleteRegisterLineageRequest& operator=(DeleteRegisterLineageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DeleteRegisterLineageCommand : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DeleteRegisterLineageCommand& obj) { 
        DARABONBA_PTR_TO_JSON(CascadeDeleteLineage, cascadeDeleteLineage_);
        DARABONBA_PTR_TO_JSON(DetailedLineages, detailedLineages_);
        DARABONBA_PTR_TO_JSON(Source, source_);
        DARABONBA_PTR_TO_JSON(Target, target_);
        DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
        DARABONBA_PTR_TO_JSON(UserId, userId_);
      };
      friend void from_json(const Darabonba::Json& j, DeleteRegisterLineageCommand& obj) { 
        DARABONBA_PTR_FROM_JSON(CascadeDeleteLineage, cascadeDeleteLineage_);
        DARABONBA_PTR_FROM_JSON(DetailedLineages, detailedLineages_);
        DARABONBA_PTR_FROM_JSON(Source, source_);
        DARABONBA_PTR_FROM_JSON(Target, target_);
        DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
        DARABONBA_PTR_FROM_JSON(UserId, userId_);
      };
      DeleteRegisterLineageCommand() = default ;
      DeleteRegisterLineageCommand(const DeleteRegisterLineageCommand &) = default ;
      DeleteRegisterLineageCommand(DeleteRegisterLineageCommand &&) = default ;
      DeleteRegisterLineageCommand(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DeleteRegisterLineageCommand() = default ;
      DeleteRegisterLineageCommand& operator=(const DeleteRegisterLineageCommand &) = default ;
      DeleteRegisterLineageCommand& operator=(DeleteRegisterLineageCommand &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Target : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Target& obj) { 
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
        friend void from_json(const Darabonba::Json& j, Target& obj) { 
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
        Target() = default ;
        Target(const Target &) = default ;
        Target(Target &&) = default ;
        Target(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Target() = default ;
        Target& operator=(const Target &) = default ;
        Target& operator=(Target &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->catalog_ == nullptr
        && this->env_ == nullptr && this->extProperties_ == nullptr && this->guid_ == nullptr && this->metadataSubType_ == nullptr && this->metadataType_ == nullptr
        && this->name_ == nullptr && this->referenceType_ == nullptr && this->schema_ == nullptr; };
        // catalog Field Functions 
        bool hasCatalog() const { return this->catalog_ != nullptr;};
        void deleteCatalog() { this->catalog_ = nullptr;};
        inline string getCatalog() const { DARABONBA_PTR_GET_DEFAULT(catalog_, "") };
        inline Target& setCatalog(string catalog) { DARABONBA_PTR_SET_VALUE(catalog_, catalog) };


        // env Field Functions 
        bool hasEnv() const { return this->env_ != nullptr;};
        void deleteEnv() { this->env_ = nullptr;};
        inline string getEnv() const { DARABONBA_PTR_GET_DEFAULT(env_, "") };
        inline Target& setEnv(string env) { DARABONBA_PTR_SET_VALUE(env_, env) };


        // extProperties Field Functions 
        bool hasExtProperties() const { return this->extProperties_ != nullptr;};
        void deleteExtProperties() { this->extProperties_ = nullptr;};
        inline         const Darabonba::Json & getExtProperties() const { DARABONBA_GET(extProperties_) };
        Darabonba::Json & getExtProperties() { DARABONBA_GET(extProperties_) };
        inline Target& setExtProperties(const Darabonba::Json & extProperties) { DARABONBA_SET_VALUE(extProperties_, extProperties) };
        inline Target& setExtProperties(Darabonba::Json && extProperties) { DARABONBA_SET_RVALUE(extProperties_, extProperties) };


        // guid Field Functions 
        bool hasGuid() const { return this->guid_ != nullptr;};
        void deleteGuid() { this->guid_ = nullptr;};
        inline string getGuid() const { DARABONBA_PTR_GET_DEFAULT(guid_, "") };
        inline Target& setGuid(string guid) { DARABONBA_PTR_SET_VALUE(guid_, guid) };


        // metadataSubType Field Functions 
        bool hasMetadataSubType() const { return this->metadataSubType_ != nullptr;};
        void deleteMetadataSubType() { this->metadataSubType_ = nullptr;};
        inline string getMetadataSubType() const { DARABONBA_PTR_GET_DEFAULT(metadataSubType_, "") };
        inline Target& setMetadataSubType(string metadataSubType) { DARABONBA_PTR_SET_VALUE(metadataSubType_, metadataSubType) };


        // metadataType Field Functions 
        bool hasMetadataType() const { return this->metadataType_ != nullptr;};
        void deleteMetadataType() { this->metadataType_ = nullptr;};
        inline string getMetadataType() const { DARABONBA_PTR_GET_DEFAULT(metadataType_, "") };
        inline Target& setMetadataType(string metadataType) { DARABONBA_PTR_SET_VALUE(metadataType_, metadataType) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Target& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // referenceType Field Functions 
        bool hasReferenceType() const { return this->referenceType_ != nullptr;};
        void deleteReferenceType() { this->referenceType_ = nullptr;};
        inline string getReferenceType() const { DARABONBA_PTR_GET_DEFAULT(referenceType_, "") };
        inline Target& setReferenceType(string referenceType) { DARABONBA_PTR_SET_VALUE(referenceType_, referenceType) };


        // schema Field Functions 
        bool hasSchema() const { return this->schema_ != nullptr;};
        void deleteSchema() { this->schema_ = nullptr;};
        inline string getSchema() const { DARABONBA_PTR_GET_DEFAULT(schema_, "") };
        inline Target& setSchema(string schema) { DARABONBA_PTR_SET_VALUE(schema_, schema) };


      protected:
        shared_ptr<string> catalog_ {};
        shared_ptr<string> env_ {};
        Darabonba::Json extProperties_ {};
        shared_ptr<string> guid_ {};
        shared_ptr<string> metadataSubType_ {};
        // This parameter is required.
        shared_ptr<string> metadataType_ {};
        shared_ptr<string> name_ {};
        // This parameter is required.
        shared_ptr<string> referenceType_ {};
        shared_ptr<string> schema_ {};
      };

      class Source : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Source& obj) { 
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
        friend void from_json(const Darabonba::Json& j, Source& obj) { 
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
        Source() = default ;
        Source(const Source &) = default ;
        Source(Source &&) = default ;
        Source(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Source() = default ;
        Source& operator=(const Source &) = default ;
        Source& operator=(Source &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->catalog_ == nullptr
        && this->env_ == nullptr && this->extProperties_ == nullptr && this->guid_ == nullptr && this->metadataSubType_ == nullptr && this->metadataType_ == nullptr
        && this->name_ == nullptr && this->referenceType_ == nullptr && this->schema_ == nullptr; };
        // catalog Field Functions 
        bool hasCatalog() const { return this->catalog_ != nullptr;};
        void deleteCatalog() { this->catalog_ = nullptr;};
        inline string getCatalog() const { DARABONBA_PTR_GET_DEFAULT(catalog_, "") };
        inline Source& setCatalog(string catalog) { DARABONBA_PTR_SET_VALUE(catalog_, catalog) };


        // env Field Functions 
        bool hasEnv() const { return this->env_ != nullptr;};
        void deleteEnv() { this->env_ = nullptr;};
        inline string getEnv() const { DARABONBA_PTR_GET_DEFAULT(env_, "") };
        inline Source& setEnv(string env) { DARABONBA_PTR_SET_VALUE(env_, env) };


        // extProperties Field Functions 
        bool hasExtProperties() const { return this->extProperties_ != nullptr;};
        void deleteExtProperties() { this->extProperties_ = nullptr;};
        inline         const Darabonba::Json & getExtProperties() const { DARABONBA_GET(extProperties_) };
        Darabonba::Json & getExtProperties() { DARABONBA_GET(extProperties_) };
        inline Source& setExtProperties(const Darabonba::Json & extProperties) { DARABONBA_SET_VALUE(extProperties_, extProperties) };
        inline Source& setExtProperties(Darabonba::Json && extProperties) { DARABONBA_SET_RVALUE(extProperties_, extProperties) };


        // guid Field Functions 
        bool hasGuid() const { return this->guid_ != nullptr;};
        void deleteGuid() { this->guid_ = nullptr;};
        inline string getGuid() const { DARABONBA_PTR_GET_DEFAULT(guid_, "") };
        inline Source& setGuid(string guid) { DARABONBA_PTR_SET_VALUE(guid_, guid) };


        // metadataSubType Field Functions 
        bool hasMetadataSubType() const { return this->metadataSubType_ != nullptr;};
        void deleteMetadataSubType() { this->metadataSubType_ = nullptr;};
        inline string getMetadataSubType() const { DARABONBA_PTR_GET_DEFAULT(metadataSubType_, "") };
        inline Source& setMetadataSubType(string metadataSubType) { DARABONBA_PTR_SET_VALUE(metadataSubType_, metadataSubType) };


        // metadataType Field Functions 
        bool hasMetadataType() const { return this->metadataType_ != nullptr;};
        void deleteMetadataType() { this->metadataType_ = nullptr;};
        inline string getMetadataType() const { DARABONBA_PTR_GET_DEFAULT(metadataType_, "") };
        inline Source& setMetadataType(string metadataType) { DARABONBA_PTR_SET_VALUE(metadataType_, metadataType) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Source& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // referenceType Field Functions 
        bool hasReferenceType() const { return this->referenceType_ != nullptr;};
        void deleteReferenceType() { this->referenceType_ = nullptr;};
        inline string getReferenceType() const { DARABONBA_PTR_GET_DEFAULT(referenceType_, "") };
        inline Source& setReferenceType(string referenceType) { DARABONBA_PTR_SET_VALUE(referenceType_, referenceType) };


        // schema Field Functions 
        bool hasSchema() const { return this->schema_ != nullptr;};
        void deleteSchema() { this->schema_ = nullptr;};
        inline string getSchema() const { DARABONBA_PTR_GET_DEFAULT(schema_, "") };
        inline Source& setSchema(string schema) { DARABONBA_PTR_SET_VALUE(schema_, schema) };


      protected:
        shared_ptr<string> catalog_ {};
        shared_ptr<string> env_ {};
        Darabonba::Json extProperties_ {};
        shared_ptr<string> guid_ {};
        shared_ptr<string> metadataSubType_ {};
        // This parameter is required.
        shared_ptr<string> metadataType_ {};
        shared_ptr<string> name_ {};
        // This parameter is required.
        shared_ptr<string> referenceType_ {};
        shared_ptr<string> schema_ {};
      };

      class DetailedLineages : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DetailedLineages& obj) { 
          DARABONBA_PTR_TO_JSON(IsDirect, isDirect_);
          DARABONBA_PTR_TO_JSON(Source, source_);
          DARABONBA_PTR_TO_JSON(Target, target_);
        };
        friend void from_json(const Darabonba::Json& j, DetailedLineages& obj) { 
          DARABONBA_PTR_FROM_JSON(IsDirect, isDirect_);
          DARABONBA_PTR_FROM_JSON(Source, source_);
          DARABONBA_PTR_FROM_JSON(Target, target_);
        };
        DetailedLineages() = default ;
        DetailedLineages(const DetailedLineages &) = default ;
        DetailedLineages(DetailedLineages &&) = default ;
        DetailedLineages(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DetailedLineages() = default ;
        DetailedLineages& operator=(const DetailedLineages &) = default ;
        DetailedLineages& operator=(DetailedLineages &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Target : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Target& obj) { 
            DARABONBA_PTR_TO_JSON(Catalog, catalog_);
            DARABONBA_PTR_TO_JSON(Env, env_);
            DARABONBA_ANY_TO_JSON(ExtProperties, extProperties_);
            DARABONBA_PTR_TO_JSON(Guid, guid_);
            DARABONBA_PTR_TO_JSON(MetadataType, metadataType_);
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(ParentGuid, parentGuid_);
            DARABONBA_PTR_TO_JSON(ReferenceType, referenceType_);
            DARABONBA_PTR_TO_JSON(Schema, schema_);
          };
          friend void from_json(const Darabonba::Json& j, Target& obj) { 
            DARABONBA_PTR_FROM_JSON(Catalog, catalog_);
            DARABONBA_PTR_FROM_JSON(Env, env_);
            DARABONBA_ANY_FROM_JSON(ExtProperties, extProperties_);
            DARABONBA_PTR_FROM_JSON(Guid, guid_);
            DARABONBA_PTR_FROM_JSON(MetadataType, metadataType_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(ParentGuid, parentGuid_);
            DARABONBA_PTR_FROM_JSON(ReferenceType, referenceType_);
            DARABONBA_PTR_FROM_JSON(Schema, schema_);
          };
          Target() = default ;
          Target(const Target &) = default ;
          Target(Target &&) = default ;
          Target(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Target() = default ;
          Target& operator=(const Target &) = default ;
          Target& operator=(Target &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->catalog_ == nullptr
        && this->env_ == nullptr && this->extProperties_ == nullptr && this->guid_ == nullptr && this->metadataType_ == nullptr && this->name_ == nullptr
        && this->parentGuid_ == nullptr && this->referenceType_ == nullptr && this->schema_ == nullptr; };
          // catalog Field Functions 
          bool hasCatalog() const { return this->catalog_ != nullptr;};
          void deleteCatalog() { this->catalog_ = nullptr;};
          inline string getCatalog() const { DARABONBA_PTR_GET_DEFAULT(catalog_, "") };
          inline Target& setCatalog(string catalog) { DARABONBA_PTR_SET_VALUE(catalog_, catalog) };


          // env Field Functions 
          bool hasEnv() const { return this->env_ != nullptr;};
          void deleteEnv() { this->env_ = nullptr;};
          inline string getEnv() const { DARABONBA_PTR_GET_DEFAULT(env_, "") };
          inline Target& setEnv(string env) { DARABONBA_PTR_SET_VALUE(env_, env) };


          // extProperties Field Functions 
          bool hasExtProperties() const { return this->extProperties_ != nullptr;};
          void deleteExtProperties() { this->extProperties_ = nullptr;};
          inline           const Darabonba::Json & getExtProperties() const { DARABONBA_GET(extProperties_) };
          Darabonba::Json & getExtProperties() { DARABONBA_GET(extProperties_) };
          inline Target& setExtProperties(const Darabonba::Json & extProperties) { DARABONBA_SET_VALUE(extProperties_, extProperties) };
          inline Target& setExtProperties(Darabonba::Json && extProperties) { DARABONBA_SET_RVALUE(extProperties_, extProperties) };


          // guid Field Functions 
          bool hasGuid() const { return this->guid_ != nullptr;};
          void deleteGuid() { this->guid_ = nullptr;};
          inline string getGuid() const { DARABONBA_PTR_GET_DEFAULT(guid_, "") };
          inline Target& setGuid(string guid) { DARABONBA_PTR_SET_VALUE(guid_, guid) };


          // metadataType Field Functions 
          bool hasMetadataType() const { return this->metadataType_ != nullptr;};
          void deleteMetadataType() { this->metadataType_ = nullptr;};
          inline string getMetadataType() const { DARABONBA_PTR_GET_DEFAULT(metadataType_, "") };
          inline Target& setMetadataType(string metadataType) { DARABONBA_PTR_SET_VALUE(metadataType_, metadataType) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline Target& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // parentGuid Field Functions 
          bool hasParentGuid() const { return this->parentGuid_ != nullptr;};
          void deleteParentGuid() { this->parentGuid_ = nullptr;};
          inline string getParentGuid() const { DARABONBA_PTR_GET_DEFAULT(parentGuid_, "") };
          inline Target& setParentGuid(string parentGuid) { DARABONBA_PTR_SET_VALUE(parentGuid_, parentGuid) };


          // referenceType Field Functions 
          bool hasReferenceType() const { return this->referenceType_ != nullptr;};
          void deleteReferenceType() { this->referenceType_ = nullptr;};
          inline string getReferenceType() const { DARABONBA_PTR_GET_DEFAULT(referenceType_, "") };
          inline Target& setReferenceType(string referenceType) { DARABONBA_PTR_SET_VALUE(referenceType_, referenceType) };


          // schema Field Functions 
          bool hasSchema() const { return this->schema_ != nullptr;};
          void deleteSchema() { this->schema_ = nullptr;};
          inline string getSchema() const { DARABONBA_PTR_GET_DEFAULT(schema_, "") };
          inline Target& setSchema(string schema) { DARABONBA_PTR_SET_VALUE(schema_, schema) };


        protected:
          shared_ptr<string> catalog_ {};
          shared_ptr<string> env_ {};
          Darabonba::Json extProperties_ {};
          shared_ptr<string> guid_ {};
          shared_ptr<string> metadataType_ {};
          shared_ptr<string> name_ {};
          shared_ptr<string> parentGuid_ {};
          shared_ptr<string> referenceType_ {};
          shared_ptr<string> schema_ {};
        };

        class Source : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Source& obj) { 
            DARABONBA_PTR_TO_JSON(Catalog, catalog_);
            DARABONBA_PTR_TO_JSON(Env, env_);
            DARABONBA_ANY_TO_JSON(ExtProperties, extProperties_);
            DARABONBA_PTR_TO_JSON(Guid, guid_);
            DARABONBA_PTR_TO_JSON(MetadataType, metadataType_);
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(ParentGuid, parentGuid_);
            DARABONBA_PTR_TO_JSON(ReferenceType, referenceType_);
            DARABONBA_PTR_TO_JSON(Schema, schema_);
          };
          friend void from_json(const Darabonba::Json& j, Source& obj) { 
            DARABONBA_PTR_FROM_JSON(Catalog, catalog_);
            DARABONBA_PTR_FROM_JSON(Env, env_);
            DARABONBA_ANY_FROM_JSON(ExtProperties, extProperties_);
            DARABONBA_PTR_FROM_JSON(Guid, guid_);
            DARABONBA_PTR_FROM_JSON(MetadataType, metadataType_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(ParentGuid, parentGuid_);
            DARABONBA_PTR_FROM_JSON(ReferenceType, referenceType_);
            DARABONBA_PTR_FROM_JSON(Schema, schema_);
          };
          Source() = default ;
          Source(const Source &) = default ;
          Source(Source &&) = default ;
          Source(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Source() = default ;
          Source& operator=(const Source &) = default ;
          Source& operator=(Source &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->catalog_ == nullptr
        && this->env_ == nullptr && this->extProperties_ == nullptr && this->guid_ == nullptr && this->metadataType_ == nullptr && this->name_ == nullptr
        && this->parentGuid_ == nullptr && this->referenceType_ == nullptr && this->schema_ == nullptr; };
          // catalog Field Functions 
          bool hasCatalog() const { return this->catalog_ != nullptr;};
          void deleteCatalog() { this->catalog_ = nullptr;};
          inline string getCatalog() const { DARABONBA_PTR_GET_DEFAULT(catalog_, "") };
          inline Source& setCatalog(string catalog) { DARABONBA_PTR_SET_VALUE(catalog_, catalog) };


          // env Field Functions 
          bool hasEnv() const { return this->env_ != nullptr;};
          void deleteEnv() { this->env_ = nullptr;};
          inline string getEnv() const { DARABONBA_PTR_GET_DEFAULT(env_, "") };
          inline Source& setEnv(string env) { DARABONBA_PTR_SET_VALUE(env_, env) };


          // extProperties Field Functions 
          bool hasExtProperties() const { return this->extProperties_ != nullptr;};
          void deleteExtProperties() { this->extProperties_ = nullptr;};
          inline           const Darabonba::Json & getExtProperties() const { DARABONBA_GET(extProperties_) };
          Darabonba::Json & getExtProperties() { DARABONBA_GET(extProperties_) };
          inline Source& setExtProperties(const Darabonba::Json & extProperties) { DARABONBA_SET_VALUE(extProperties_, extProperties) };
          inline Source& setExtProperties(Darabonba::Json && extProperties) { DARABONBA_SET_RVALUE(extProperties_, extProperties) };


          // guid Field Functions 
          bool hasGuid() const { return this->guid_ != nullptr;};
          void deleteGuid() { this->guid_ = nullptr;};
          inline string getGuid() const { DARABONBA_PTR_GET_DEFAULT(guid_, "") };
          inline Source& setGuid(string guid) { DARABONBA_PTR_SET_VALUE(guid_, guid) };


          // metadataType Field Functions 
          bool hasMetadataType() const { return this->metadataType_ != nullptr;};
          void deleteMetadataType() { this->metadataType_ = nullptr;};
          inline string getMetadataType() const { DARABONBA_PTR_GET_DEFAULT(metadataType_, "") };
          inline Source& setMetadataType(string metadataType) { DARABONBA_PTR_SET_VALUE(metadataType_, metadataType) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline Source& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // parentGuid Field Functions 
          bool hasParentGuid() const { return this->parentGuid_ != nullptr;};
          void deleteParentGuid() { this->parentGuid_ = nullptr;};
          inline string getParentGuid() const { DARABONBA_PTR_GET_DEFAULT(parentGuid_, "") };
          inline Source& setParentGuid(string parentGuid) { DARABONBA_PTR_SET_VALUE(parentGuid_, parentGuid) };


          // referenceType Field Functions 
          bool hasReferenceType() const { return this->referenceType_ != nullptr;};
          void deleteReferenceType() { this->referenceType_ = nullptr;};
          inline string getReferenceType() const { DARABONBA_PTR_GET_DEFAULT(referenceType_, "") };
          inline Source& setReferenceType(string referenceType) { DARABONBA_PTR_SET_VALUE(referenceType_, referenceType) };


          // schema Field Functions 
          bool hasSchema() const { return this->schema_ != nullptr;};
          void deleteSchema() { this->schema_ = nullptr;};
          inline string getSchema() const { DARABONBA_PTR_GET_DEFAULT(schema_, "") };
          inline Source& setSchema(string schema) { DARABONBA_PTR_SET_VALUE(schema_, schema) };


        protected:
          shared_ptr<string> catalog_ {};
          shared_ptr<string> env_ {};
          Darabonba::Json extProperties_ {};
          shared_ptr<string> guid_ {};
          shared_ptr<string> metadataType_ {};
          shared_ptr<string> name_ {};
          shared_ptr<string> parentGuid_ {};
          shared_ptr<string> referenceType_ {};
          shared_ptr<string> schema_ {};
        };

        virtual bool empty() const override { return this->isDirect_ == nullptr
        && this->source_ == nullptr && this->target_ == nullptr; };
        // isDirect Field Functions 
        bool hasIsDirect() const { return this->isDirect_ != nullptr;};
        void deleteIsDirect() { this->isDirect_ = nullptr;};
        inline bool getIsDirect() const { DARABONBA_PTR_GET_DEFAULT(isDirect_, false) };
        inline DetailedLineages& setIsDirect(bool isDirect) { DARABONBA_PTR_SET_VALUE(isDirect_, isDirect) };


        // source Field Functions 
        bool hasSource() const { return this->source_ != nullptr;};
        void deleteSource() { this->source_ = nullptr;};
        inline const DetailedLineages::Source & getSource() const { DARABONBA_PTR_GET_CONST(source_, DetailedLineages::Source) };
        inline DetailedLineages::Source getSource() { DARABONBA_PTR_GET(source_, DetailedLineages::Source) };
        inline DetailedLineages& setSource(const DetailedLineages::Source & source) { DARABONBA_PTR_SET_VALUE(source_, source) };
        inline DetailedLineages& setSource(DetailedLineages::Source && source) { DARABONBA_PTR_SET_RVALUE(source_, source) };


        // target Field Functions 
        bool hasTarget() const { return this->target_ != nullptr;};
        void deleteTarget() { this->target_ = nullptr;};
        inline const DetailedLineages::Target & getTarget() const { DARABONBA_PTR_GET_CONST(target_, DetailedLineages::Target) };
        inline DetailedLineages::Target getTarget() { DARABONBA_PTR_GET(target_, DetailedLineages::Target) };
        inline DetailedLineages& setTarget(const DetailedLineages::Target & target) { DARABONBA_PTR_SET_VALUE(target_, target) };
        inline DetailedLineages& setTarget(DetailedLineages::Target && target) { DARABONBA_PTR_SET_RVALUE(target_, target) };


      protected:
        shared_ptr<bool> isDirect_ {};
        // This parameter is required.
        shared_ptr<DetailedLineages::Source> source_ {};
        // This parameter is required.
        shared_ptr<DetailedLineages::Target> target_ {};
      };

      virtual bool empty() const override { return this->cascadeDeleteLineage_ == nullptr
        && this->detailedLineages_ == nullptr && this->source_ == nullptr && this->target_ == nullptr && this->tenantId_ == nullptr && this->userId_ == nullptr; };
      // cascadeDeleteLineage Field Functions 
      bool hasCascadeDeleteLineage() const { return this->cascadeDeleteLineage_ != nullptr;};
      void deleteCascadeDeleteLineage() { this->cascadeDeleteLineage_ = nullptr;};
      inline bool getCascadeDeleteLineage() const { DARABONBA_PTR_GET_DEFAULT(cascadeDeleteLineage_, false) };
      inline DeleteRegisterLineageCommand& setCascadeDeleteLineage(bool cascadeDeleteLineage) { DARABONBA_PTR_SET_VALUE(cascadeDeleteLineage_, cascadeDeleteLineage) };


      // detailedLineages Field Functions 
      bool hasDetailedLineages() const { return this->detailedLineages_ != nullptr;};
      void deleteDetailedLineages() { this->detailedLineages_ = nullptr;};
      inline const vector<DeleteRegisterLineageCommand::DetailedLineages> & getDetailedLineages() const { DARABONBA_PTR_GET_CONST(detailedLineages_, vector<DeleteRegisterLineageCommand::DetailedLineages>) };
      inline vector<DeleteRegisterLineageCommand::DetailedLineages> getDetailedLineages() { DARABONBA_PTR_GET(detailedLineages_, vector<DeleteRegisterLineageCommand::DetailedLineages>) };
      inline DeleteRegisterLineageCommand& setDetailedLineages(const vector<DeleteRegisterLineageCommand::DetailedLineages> & detailedLineages) { DARABONBA_PTR_SET_VALUE(detailedLineages_, detailedLineages) };
      inline DeleteRegisterLineageCommand& setDetailedLineages(vector<DeleteRegisterLineageCommand::DetailedLineages> && detailedLineages) { DARABONBA_PTR_SET_RVALUE(detailedLineages_, detailedLineages) };


      // source Field Functions 
      bool hasSource() const { return this->source_ != nullptr;};
      void deleteSource() { this->source_ = nullptr;};
      inline const DeleteRegisterLineageCommand::Source & getSource() const { DARABONBA_PTR_GET_CONST(source_, DeleteRegisterLineageCommand::Source) };
      inline DeleteRegisterLineageCommand::Source getSource() { DARABONBA_PTR_GET(source_, DeleteRegisterLineageCommand::Source) };
      inline DeleteRegisterLineageCommand& setSource(const DeleteRegisterLineageCommand::Source & source) { DARABONBA_PTR_SET_VALUE(source_, source) };
      inline DeleteRegisterLineageCommand& setSource(DeleteRegisterLineageCommand::Source && source) { DARABONBA_PTR_SET_RVALUE(source_, source) };


      // target Field Functions 
      bool hasTarget() const { return this->target_ != nullptr;};
      void deleteTarget() { this->target_ = nullptr;};
      inline const DeleteRegisterLineageCommand::Target & getTarget() const { DARABONBA_PTR_GET_CONST(target_, DeleteRegisterLineageCommand::Target) };
      inline DeleteRegisterLineageCommand::Target getTarget() { DARABONBA_PTR_GET(target_, DeleteRegisterLineageCommand::Target) };
      inline DeleteRegisterLineageCommand& setTarget(const DeleteRegisterLineageCommand::Target & target) { DARABONBA_PTR_SET_VALUE(target_, target) };
      inline DeleteRegisterLineageCommand& setTarget(DeleteRegisterLineageCommand::Target && target) { DARABONBA_PTR_SET_RVALUE(target_, target) };


      // tenantId Field Functions 
      bool hasTenantId() const { return this->tenantId_ != nullptr;};
      void deleteTenantId() { this->tenantId_ = nullptr;};
      inline int64_t getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, 0L) };
      inline DeleteRegisterLineageCommand& setTenantId(int64_t tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline DeleteRegisterLineageCommand& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    protected:
      shared_ptr<bool> cascadeDeleteLineage_ {};
      shared_ptr<vector<DeleteRegisterLineageCommand::DetailedLineages>> detailedLineages_ {};
      // This parameter is required.
      shared_ptr<DeleteRegisterLineageCommand::Source> source_ {};
      // This parameter is required.
      shared_ptr<DeleteRegisterLineageCommand::Target> target_ {};
      shared_ptr<int64_t> tenantId_ {};
      shared_ptr<string> userId_ {};
    };

    virtual bool empty() const override { return this->deleteRegisterLineageCommand_ == nullptr
        && this->opTenantId_ == nullptr; };
    // deleteRegisterLineageCommand Field Functions 
    bool hasDeleteRegisterLineageCommand() const { return this->deleteRegisterLineageCommand_ != nullptr;};
    void deleteDeleteRegisterLineageCommand() { this->deleteRegisterLineageCommand_ = nullptr;};
    inline const DeleteRegisterLineageRequest::DeleteRegisterLineageCommand & getDeleteRegisterLineageCommand() const { DARABONBA_PTR_GET_CONST(deleteRegisterLineageCommand_, DeleteRegisterLineageRequest::DeleteRegisterLineageCommand) };
    inline DeleteRegisterLineageRequest::DeleteRegisterLineageCommand getDeleteRegisterLineageCommand() { DARABONBA_PTR_GET(deleteRegisterLineageCommand_, DeleteRegisterLineageRequest::DeleteRegisterLineageCommand) };
    inline DeleteRegisterLineageRequest& setDeleteRegisterLineageCommand(const DeleteRegisterLineageRequest::DeleteRegisterLineageCommand & deleteRegisterLineageCommand) { DARABONBA_PTR_SET_VALUE(deleteRegisterLineageCommand_, deleteRegisterLineageCommand) };
    inline DeleteRegisterLineageRequest& setDeleteRegisterLineageCommand(DeleteRegisterLineageRequest::DeleteRegisterLineageCommand && deleteRegisterLineageCommand) { DARABONBA_PTR_SET_RVALUE(deleteRegisterLineageCommand_, deleteRegisterLineageCommand) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline DeleteRegisterLineageRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


  protected:
    // This parameter is required.
    shared_ptr<DeleteRegisterLineageRequest::DeleteRegisterLineageCommand> deleteRegisterLineageCommand_ {};
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
