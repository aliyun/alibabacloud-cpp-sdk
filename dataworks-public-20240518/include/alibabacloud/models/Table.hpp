// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TABLE_HPP_
#define ALIBABACLOUD_MODELS_TABLE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class Table : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Table& obj) { 
      DARABONBA_PTR_TO_JSON(BusinessMetadata, businessMetadata_);
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ParentMetaEntityId, parentMetaEntityId_);
      DARABONBA_PTR_TO_JSON(PartitionKeys, partitionKeys_);
      DARABONBA_PTR_TO_JSON(TableType, tableType_);
      DARABONBA_PTR_TO_JSON(TechnicalMetadata, technicalMetadata_);
    };
    friend void from_json(const Darabonba::Json& j, Table& obj) { 
      DARABONBA_PTR_FROM_JSON(BusinessMetadata, businessMetadata_);
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ParentMetaEntityId, parentMetaEntityId_);
      DARABONBA_PTR_FROM_JSON(PartitionKeys, partitionKeys_);
      DARABONBA_PTR_FROM_JSON(TableType, tableType_);
      DARABONBA_PTR_FROM_JSON(TechnicalMetadata, technicalMetadata_);
    };
    Table() = default ;
    Table(const Table &) = default ;
    Table(Table &&) = default ;
    Table(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Table() = default ;
    Table& operator=(const Table &) = default ;
    Table& operator=(Table &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TechnicalMetadata : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TechnicalMetadata& obj) { 
        DARABONBA_PTR_TO_JSON(Compressed, compressed_);
        DARABONBA_PTR_TO_JSON(InputFormat, inputFormat_);
        DARABONBA_PTR_TO_JSON(Location, location_);
        DARABONBA_PTR_TO_JSON(OutputFormat, outputFormat_);
        DARABONBA_PTR_TO_JSON(Owner, owner_);
        DARABONBA_PTR_TO_JSON(Parameters, parameters_);
        DARABONBA_PTR_TO_JSON(SerializationLibrary, serializationLibrary_);
      };
      friend void from_json(const Darabonba::Json& j, TechnicalMetadata& obj) { 
        DARABONBA_PTR_FROM_JSON(Compressed, compressed_);
        DARABONBA_PTR_FROM_JSON(InputFormat, inputFormat_);
        DARABONBA_PTR_FROM_JSON(Location, location_);
        DARABONBA_PTR_FROM_JSON(OutputFormat, outputFormat_);
        DARABONBA_PTR_FROM_JSON(Owner, owner_);
        DARABONBA_PTR_FROM_JSON(Parameters, parameters_);
        DARABONBA_PTR_FROM_JSON(SerializationLibrary, serializationLibrary_);
      };
      TechnicalMetadata() = default ;
      TechnicalMetadata(const TechnicalMetadata &) = default ;
      TechnicalMetadata(TechnicalMetadata &&) = default ;
      TechnicalMetadata(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TechnicalMetadata() = default ;
      TechnicalMetadata& operator=(const TechnicalMetadata &) = default ;
      TechnicalMetadata& operator=(TechnicalMetadata &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->compressed_ == nullptr
        && this->inputFormat_ == nullptr && this->location_ == nullptr && this->outputFormat_ == nullptr && this->owner_ == nullptr && this->parameters_ == nullptr
        && this->serializationLibrary_ == nullptr; };
      // compressed Field Functions 
      bool hasCompressed() const { return this->compressed_ != nullptr;};
      void deleteCompressed() { this->compressed_ = nullptr;};
      inline bool getCompressed() const { DARABONBA_PTR_GET_DEFAULT(compressed_, false) };
      inline TechnicalMetadata& setCompressed(bool compressed) { DARABONBA_PTR_SET_VALUE(compressed_, compressed) };


      // inputFormat Field Functions 
      bool hasInputFormat() const { return this->inputFormat_ != nullptr;};
      void deleteInputFormat() { this->inputFormat_ = nullptr;};
      inline string getInputFormat() const { DARABONBA_PTR_GET_DEFAULT(inputFormat_, "") };
      inline TechnicalMetadata& setInputFormat(string inputFormat) { DARABONBA_PTR_SET_VALUE(inputFormat_, inputFormat) };


      // location Field Functions 
      bool hasLocation() const { return this->location_ != nullptr;};
      void deleteLocation() { this->location_ = nullptr;};
      inline string getLocation() const { DARABONBA_PTR_GET_DEFAULT(location_, "") };
      inline TechnicalMetadata& setLocation(string location) { DARABONBA_PTR_SET_VALUE(location_, location) };


      // outputFormat Field Functions 
      bool hasOutputFormat() const { return this->outputFormat_ != nullptr;};
      void deleteOutputFormat() { this->outputFormat_ = nullptr;};
      inline string getOutputFormat() const { DARABONBA_PTR_GET_DEFAULT(outputFormat_, "") };
      inline TechnicalMetadata& setOutputFormat(string outputFormat) { DARABONBA_PTR_SET_VALUE(outputFormat_, outputFormat) };


      // owner Field Functions 
      bool hasOwner() const { return this->owner_ != nullptr;};
      void deleteOwner() { this->owner_ = nullptr;};
      inline string getOwner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
      inline TechnicalMetadata& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


      // parameters Field Functions 
      bool hasParameters() const { return this->parameters_ != nullptr;};
      void deleteParameters() { this->parameters_ = nullptr;};
      inline const map<string, string> & getParameters() const { DARABONBA_PTR_GET_CONST(parameters_, map<string, string>) };
      inline map<string, string> getParameters() { DARABONBA_PTR_GET(parameters_, map<string, string>) };
      inline TechnicalMetadata& setParameters(const map<string, string> & parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };
      inline TechnicalMetadata& setParameters(map<string, string> && parameters) { DARABONBA_PTR_SET_RVALUE(parameters_, parameters) };


      // serializationLibrary Field Functions 
      bool hasSerializationLibrary() const { return this->serializationLibrary_ != nullptr;};
      void deleteSerializationLibrary() { this->serializationLibrary_ = nullptr;};
      inline string getSerializationLibrary() const { DARABONBA_PTR_GET_DEFAULT(serializationLibrary_, "") };
      inline TechnicalMetadata& setSerializationLibrary(string serializationLibrary) { DARABONBA_PTR_SET_VALUE(serializationLibrary_, serializationLibrary) };


    protected:
      // Indicates whether the table is compressed.
      shared_ptr<bool> compressed_ {};
      // The input format.
      shared_ptr<string> inputFormat_ {};
      // The storage location.
      shared_ptr<string> location_ {};
      // The output format.
      shared_ptr<string> outputFormat_ {};
      // The table owner.
      shared_ptr<string> owner_ {};
      // The parameter information.
      shared_ptr<map<string, string>> parameters_ {};
      // The class used by the serializer/deserializer (SerDe).
      shared_ptr<string> serializationLibrary_ {};
    };

    class BusinessMetadata : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const BusinessMetadata& obj) { 
        DARABONBA_PTR_TO_JSON(Categories, categories_);
        DARABONBA_PTR_TO_JSON(CustomAttributes, customAttributes_);
        DARABONBA_PTR_TO_JSON(Extension, extension_);
        DARABONBA_PTR_TO_JSON(Readme, readme_);
        DARABONBA_PTR_TO_JSON(Tags, tags_);
        DARABONBA_PTR_TO_JSON(UpstreamTasks, upstreamTasks_);
      };
      friend void from_json(const Darabonba::Json& j, BusinessMetadata& obj) { 
        DARABONBA_PTR_FROM_JSON(Categories, categories_);
        DARABONBA_PTR_FROM_JSON(CustomAttributes, customAttributes_);
        DARABONBA_PTR_FROM_JSON(Extension, extension_);
        DARABONBA_PTR_FROM_JSON(Readme, readme_);
        DARABONBA_PTR_FROM_JSON(Tags, tags_);
        DARABONBA_PTR_FROM_JSON(UpstreamTasks, upstreamTasks_);
      };
      BusinessMetadata() = default ;
      BusinessMetadata(const BusinessMetadata &) = default ;
      BusinessMetadata(BusinessMetadata &&) = default ;
      BusinessMetadata(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~BusinessMetadata() = default ;
      BusinessMetadata& operator=(const BusinessMetadata &) = default ;
      BusinessMetadata& operator=(BusinessMetadata &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class UpstreamTasks : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const UpstreamTasks& obj) { 
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Name, name_);
        };
        friend void from_json(const Darabonba::Json& j, UpstreamTasks& obj) { 
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
        };
        UpstreamTasks() = default ;
        UpstreamTasks(const UpstreamTasks &) = default ;
        UpstreamTasks(UpstreamTasks &&) = default ;
        UpstreamTasks(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~UpstreamTasks() = default ;
        UpstreamTasks& operator=(const UpstreamTasks &) = default ;
        UpstreamTasks& operator=(UpstreamTasks &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->id_ == nullptr
        && this->name_ == nullptr; };
        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline UpstreamTasks& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline UpstreamTasks& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      protected:
        // The task ID.
        shared_ptr<int64_t> id_ {};
        // The task name.
        shared_ptr<string> name_ {};
      };

      class Tags : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Tags& obj) { 
          DARABONBA_PTR_TO_JSON(Key, key_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, Tags& obj) { 
          DARABONBA_PTR_FROM_JSON(Key, key_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        Tags() = default ;
        Tags(const Tags &) = default ;
        Tags(Tags &&) = default ;
        Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Tags() = default ;
        Tags& operator=(const Tags &) = default ;
        Tags& operator=(Tags &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
        // key Field Functions 
        bool hasKey() const { return this->key_ != nullptr;};
        void deleteKey() { this->key_ = nullptr;};
        inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
        inline Tags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline Tags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        // The tag key. This value cannot be empty.
        shared_ptr<string> key_ {};
        // The tag value. This can be an empty string.
        shared_ptr<string> value_ {};
      };

      class Extension : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Extension& obj) { 
          DARABONBA_PTR_TO_JSON(EnvType, envType_);
          DARABONBA_PTR_TO_JSON(FavorCount, favorCount_);
          DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
          DARABONBA_PTR_TO_JSON(ReadCount, readCount_);
          DARABONBA_PTR_TO_JSON(ViewCount, viewCount_);
        };
        friend void from_json(const Darabonba::Json& j, Extension& obj) { 
          DARABONBA_PTR_FROM_JSON(EnvType, envType_);
          DARABONBA_PTR_FROM_JSON(FavorCount, favorCount_);
          DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
          DARABONBA_PTR_FROM_JSON(ReadCount, readCount_);
          DARABONBA_PTR_FROM_JSON(ViewCount, viewCount_);
        };
        Extension() = default ;
        Extension(const Extension &) = default ;
        Extension(Extension &&) = default ;
        Extension(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Extension() = default ;
        Extension& operator=(const Extension &) = default ;
        Extension& operator=(Extension &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->envType_ == nullptr
        && this->favorCount_ == nullptr && this->projectId_ == nullptr && this->readCount_ == nullptr && this->viewCount_ == nullptr; };
        // envType Field Functions 
        bool hasEnvType() const { return this->envType_ != nullptr;};
        void deleteEnvType() { this->envType_ = nullptr;};
        inline string getEnvType() const { DARABONBA_PTR_GET_DEFAULT(envType_, "") };
        inline Extension& setEnvType(string envType) { DARABONBA_PTR_SET_VALUE(envType_, envType) };


        // favorCount Field Functions 
        bool hasFavorCount() const { return this->favorCount_ != nullptr;};
        void deleteFavorCount() { this->favorCount_ = nullptr;};
        inline int64_t getFavorCount() const { DARABONBA_PTR_GET_DEFAULT(favorCount_, 0L) };
        inline Extension& setFavorCount(int64_t favorCount) { DARABONBA_PTR_SET_VALUE(favorCount_, favorCount) };


        // projectId Field Functions 
        bool hasProjectId() const { return this->projectId_ != nullptr;};
        void deleteProjectId() { this->projectId_ = nullptr;};
        inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
        inline Extension& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


        // readCount Field Functions 
        bool hasReadCount() const { return this->readCount_ != nullptr;};
        void deleteReadCount() { this->readCount_ = nullptr;};
        inline int64_t getReadCount() const { DARABONBA_PTR_GET_DEFAULT(readCount_, 0L) };
        inline Extension& setReadCount(int64_t readCount) { DARABONBA_PTR_SET_VALUE(readCount_, readCount) };


        // viewCount Field Functions 
        bool hasViewCount() const { return this->viewCount_ != nullptr;};
        void deleteViewCount() { this->viewCount_ = nullptr;};
        inline int64_t getViewCount() const { DARABONBA_PTR_GET_DEFAULT(viewCount_, 0L) };
        inline Extension& setViewCount(int64_t viewCount) { DARABONBA_PTR_SET_VALUE(viewCount_, viewCount) };


      protected:
        // The environment type. Valid values:
        // 
        // - Prod: The production environment.
        // 
        // - Dev: The development environment.
        shared_ptr<string> envType_ {};
        // The number of times the table was favorited.
        shared_ptr<int64_t> favorCount_ {};
        // The workspace ID.
        shared_ptr<int64_t> projectId_ {};
        // The number of reads.
        shared_ptr<int64_t> readCount_ {};
        // The number of views.
        shared_ptr<int64_t> viewCount_ {};
      };

      virtual bool empty() const override { return this->categories_ == nullptr
        && this->customAttributes_ == nullptr && this->extension_ == nullptr && this->readme_ == nullptr && this->tags_ == nullptr && this->upstreamTasks_ == nullptr; };
      // categories Field Functions 
      bool hasCategories() const { return this->categories_ != nullptr;};
      void deleteCategories() { this->categories_ = nullptr;};
      inline const vector<vector<BusinessMetadata::Categories>> & getCategories() const { DARABONBA_PTR_GET_CONST(categories_, vector<vector<BusinessMetadata::Categories>>) };
      inline vector<vector<BusinessMetadata::Categories>> getCategories() { DARABONBA_PTR_GET(categories_, vector<vector<BusinessMetadata::Categories>>) };
      inline BusinessMetadata& setCategories(const vector<vector<BusinessMetadata::Categories>> & categories) { DARABONBA_PTR_SET_VALUE(categories_, categories) };
      inline BusinessMetadata& setCategories(vector<vector<BusinessMetadata::Categories>> && categories) { DARABONBA_PTR_SET_RVALUE(categories_, categories) };


      // customAttributes Field Functions 
      bool hasCustomAttributes() const { return this->customAttributes_ != nullptr;};
      void deleteCustomAttributes() { this->customAttributes_ = nullptr;};
      inline const map<string, vector<string>> & getCustomAttributes() const { DARABONBA_PTR_GET_CONST(customAttributes_, map<string, vector<string>>) };
      inline map<string, vector<string>> getCustomAttributes() { DARABONBA_PTR_GET(customAttributes_, map<string, vector<string>>) };
      inline BusinessMetadata& setCustomAttributes(const map<string, vector<string>> & customAttributes) { DARABONBA_PTR_SET_VALUE(customAttributes_, customAttributes) };
      inline BusinessMetadata& setCustomAttributes(map<string, vector<string>> && customAttributes) { DARABONBA_PTR_SET_RVALUE(customAttributes_, customAttributes) };


      // extension Field Functions 
      bool hasExtension() const { return this->extension_ != nullptr;};
      void deleteExtension() { this->extension_ = nullptr;};
      inline const BusinessMetadata::Extension & getExtension() const { DARABONBA_PTR_GET_CONST(extension_, BusinessMetadata::Extension) };
      inline BusinessMetadata::Extension getExtension() { DARABONBA_PTR_GET(extension_, BusinessMetadata::Extension) };
      inline BusinessMetadata& setExtension(const BusinessMetadata::Extension & extension) { DARABONBA_PTR_SET_VALUE(extension_, extension) };
      inline BusinessMetadata& setExtension(BusinessMetadata::Extension && extension) { DARABONBA_PTR_SET_RVALUE(extension_, extension) };


      // readme Field Functions 
      bool hasReadme() const { return this->readme_ != nullptr;};
      void deleteReadme() { this->readme_ = nullptr;};
      inline string getReadme() const { DARABONBA_PTR_GET_DEFAULT(readme_, "") };
      inline BusinessMetadata& setReadme(string readme) { DARABONBA_PTR_SET_VALUE(readme_, readme) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<BusinessMetadata::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<BusinessMetadata::Tags>) };
      inline vector<BusinessMetadata::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<BusinessMetadata::Tags>) };
      inline BusinessMetadata& setTags(const vector<BusinessMetadata::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline BusinessMetadata& setTags(vector<BusinessMetadata::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      // upstreamTasks Field Functions 
      bool hasUpstreamTasks() const { return this->upstreamTasks_ != nullptr;};
      void deleteUpstreamTasks() { this->upstreamTasks_ = nullptr;};
      inline const vector<BusinessMetadata::UpstreamTasks> & getUpstreamTasks() const { DARABONBA_PTR_GET_CONST(upstreamTasks_, vector<BusinessMetadata::UpstreamTasks>) };
      inline vector<BusinessMetadata::UpstreamTasks> getUpstreamTasks() { DARABONBA_PTR_GET(upstreamTasks_, vector<BusinessMetadata::UpstreamTasks>) };
      inline BusinessMetadata& setUpstreamTasks(const vector<BusinessMetadata::UpstreamTasks> & upstreamTasks) { DARABONBA_PTR_SET_VALUE(upstreamTasks_, upstreamTasks) };
      inline BusinessMetadata& setUpstreamTasks(vector<BusinessMetadata::UpstreamTasks> && upstreamTasks) { DARABONBA_PTR_SET_RVALUE(upstreamTasks_, upstreamTasks) };


    protected:
      // The list of categories to which the table belongs.
      shared_ptr<vector<vector<BusinessMetadata::Categories>>> categories_ {};
      // A map of custom attribute identifiers to lists of their corresponding values.
      shared_ptr<map<string, vector<string>>> customAttributes_ {};
      // Extended information. This parameter is supported only for the MaxCompute data type.
      shared_ptr<BusinessMetadata::Extension> extension_ {};
      // The instructions for use.
      shared_ptr<string> readme_ {};
      // The list of tags.
      shared_ptr<vector<BusinessMetadata::Tags>> tags_ {};
      // The list of upstream tasks.
      shared_ptr<vector<BusinessMetadata::UpstreamTasks>> upstreamTasks_ {};
    };

    virtual bool empty() const override { return this->businessMetadata_ == nullptr
        && this->comment_ == nullptr && this->createTime_ == nullptr && this->id_ == nullptr && this->modifyTime_ == nullptr && this->name_ == nullptr
        && this->parentMetaEntityId_ == nullptr && this->partitionKeys_ == nullptr && this->tableType_ == nullptr && this->technicalMetadata_ == nullptr; };
    // businessMetadata Field Functions 
    bool hasBusinessMetadata() const { return this->businessMetadata_ != nullptr;};
    void deleteBusinessMetadata() { this->businessMetadata_ = nullptr;};
    inline const Table::BusinessMetadata & getBusinessMetadata() const { DARABONBA_PTR_GET_CONST(businessMetadata_, Table::BusinessMetadata) };
    inline Table::BusinessMetadata getBusinessMetadata() { DARABONBA_PTR_GET(businessMetadata_, Table::BusinessMetadata) };
    inline Table& setBusinessMetadata(const Table::BusinessMetadata & businessMetadata) { DARABONBA_PTR_SET_VALUE(businessMetadata_, businessMetadata) };
    inline Table& setBusinessMetadata(Table::BusinessMetadata && businessMetadata) { DARABONBA_PTR_SET_RVALUE(businessMetadata_, businessMetadata) };


    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline Table& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline Table& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline Table& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // modifyTime Field Functions 
    bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
    void deleteModifyTime() { this->modifyTime_ = nullptr;};
    inline int64_t getModifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, 0L) };
    inline Table& setModifyTime(int64_t modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline Table& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // parentMetaEntityId Field Functions 
    bool hasParentMetaEntityId() const { return this->parentMetaEntityId_ != nullptr;};
    void deleteParentMetaEntityId() { this->parentMetaEntityId_ = nullptr;};
    inline string getParentMetaEntityId() const { DARABONBA_PTR_GET_DEFAULT(parentMetaEntityId_, "") };
    inline Table& setParentMetaEntityId(string parentMetaEntityId) { DARABONBA_PTR_SET_VALUE(parentMetaEntityId_, parentMetaEntityId) };


    // partitionKeys Field Functions 
    bool hasPartitionKeys() const { return this->partitionKeys_ != nullptr;};
    void deletePartitionKeys() { this->partitionKeys_ = nullptr;};
    inline const vector<string> & getPartitionKeys() const { DARABONBA_PTR_GET_CONST(partitionKeys_, vector<string>) };
    inline vector<string> getPartitionKeys() { DARABONBA_PTR_GET(partitionKeys_, vector<string>) };
    inline Table& setPartitionKeys(const vector<string> & partitionKeys) { DARABONBA_PTR_SET_VALUE(partitionKeys_, partitionKeys) };
    inline Table& setPartitionKeys(vector<string> && partitionKeys) { DARABONBA_PTR_SET_RVALUE(partitionKeys_, partitionKeys) };


    // tableType Field Functions 
    bool hasTableType() const { return this->tableType_ != nullptr;};
    void deleteTableType() { this->tableType_ = nullptr;};
    inline string getTableType() const { DARABONBA_PTR_GET_DEFAULT(tableType_, "") };
    inline Table& setTableType(string tableType) { DARABONBA_PTR_SET_VALUE(tableType_, tableType) };


    // technicalMetadata Field Functions 
    bool hasTechnicalMetadata() const { return this->technicalMetadata_ != nullptr;};
    void deleteTechnicalMetadata() { this->technicalMetadata_ = nullptr;};
    inline const Table::TechnicalMetadata & getTechnicalMetadata() const { DARABONBA_PTR_GET_CONST(technicalMetadata_, Table::TechnicalMetadata) };
    inline Table::TechnicalMetadata getTechnicalMetadata() { DARABONBA_PTR_GET(technicalMetadata_, Table::TechnicalMetadata) };
    inline Table& setTechnicalMetadata(const Table::TechnicalMetadata & technicalMetadata) { DARABONBA_PTR_SET_VALUE(technicalMetadata_, technicalMetadata) };
    inline Table& setTechnicalMetadata(Table::TechnicalMetadata && technicalMetadata) { DARABONBA_PTR_SET_RVALUE(technicalMetadata_, technicalMetadata) };


  protected:
    // The business metadata. This parameter is specific to DataWorks and includes instructions, tags, categories, upstream tasks, and extended information.
    shared_ptr<Table::BusinessMetadata> businessMetadata_ {};
    // The comment on the table.
    shared_ptr<string> comment_ {};
    // The table creation time, provided as a Unix timestamp in milliseconds.
    shared_ptr<int64_t> createTime_ {};
    // The ID of the entity. For more information, see [Metadata entity concepts](https://help.aliyun.com/document_detail/2880092.html).
    // 
    // The format is `${EntityType}:${instance ID or escaped URL}:${data catalog identifier}:${database name}:${schema name}:${table name}`. Use an empty string as a placeholder for any non-existent level.
    // 
    // > For MaxCompute and DLF data types, use an empty string as a placeholder for the instance ID. For MaxCompute, the database name is the MaxCompute project name. You must provide a schema name for projects where the three-layer model is enabled. If the model is not enabled, use an empty string as a placeholder for the schema name.
    // 
    // > For StarRocks data types, the data catalog identifier is the catalog name. For DLF data types, the data catalog identifier is the catalog ID. Other data types do not support the catalog level. For these types, use an empty string as a placeholder.
    // 
    // The following are the ID formats for several common data types:
    // 
    // `maxcompute-table:::project_name:[schema_name]:table_name`
    // 
    // `dlf-table::catalog_id:database_name::table_name`
    // 
    // `hms-table:instance_id::database_name::table_name`
    // 
    // `holo-table:instance_id::database_name:schema_name:table_name`
    // 
    // `mysql-table:(instance_id|encoded_jdbc_url)::database_name::table_name`
    // 
    // > Placeholder descriptions:<br>
    // > `instance_id`: The instance ID. This is required when the data source is registered in instance mode.<br>
    // > `encoded_jdbc_url`: The URL-encoded JDBC connection string. This is required when the data source is registered by using a connection string.<br>
    // > `catalog_id`: The DLF catalog ID.<br>
    // > `project_name`: The MaxCompute project name.<br>
    // > `database_name`: The database name.<br>
    // > `schema_name`: The schema name. For the MaxCompute data type, this is required only if the project has the three-layer model enabled. Otherwise, use an empty string as a placeholder.<br>
    // > `table_name`: The table name.<br><br><br><br><br><br><br>
    shared_ptr<string> id_ {};
    // The time the table was last modified, provided as a Unix timestamp in milliseconds.
    shared_ptr<int64_t> modifyTime_ {};
    // The name of the table.
    shared_ptr<string> name_ {};
    // The ID of the parent metadata entity. For more information, see [Metadata entity concepts](https://help.aliyun.com/document_detail/2880092.html).
    // 
    // - For data types that support schemas, such as `maxcompute/holo/postgresql/sqlserver/hybriddb_for_postgresql/oracle`, `ParentMetaEntityId` specifies the table\\"s database schema. For the MaxCompute data type, this applies only to MaxCompute projects with the three-layer model enabled. The format is `${EntityType}:${instance ID or escaped URL}:${data catalog identifier}:${database name}:${schema name}`. Use an empty string as a placeholder for any non-existent level.
    // 
    // - For other data types, `ParentMetaEntityId` specifies the table\\"s database. The format is `${EntityType}:${instance ID or escaped URL}:${data catalog identifier}:${database name}`. Use an empty string as a placeholder for any non-existent level.
    // 
    // > For MaxCompute and DLF data types, use an empty string as a placeholder for the instance ID. For the MaxCompute data type, the database name is the MaxCompute project name.
    // 
    // > For StarRocks data types, the data catalog identifier is the catalog name. For DLF data types, the data catalog identifier is the catalog ID. Other data types do not support the catalog level. For these types, use an empty string as a placeholder.
    // 
    // The following are the formats of `ParentMetaEntityId` for several common data types:
    // 
    // `maxcompute-project:::project_name`
    // 
    // `maxcompute-schema:::project_name:schema_name` (Only for projects with the three-layer model enabled)
    // 
    // `dlf-database::catalog_id:database_name`
    // 
    // `hms-database:instance_id::database_name`
    // 
    // `holo-schema:instance_id::database_name:schema_name`
    // 
    // `mysql-database:(instance_id|encoded_jdbc_url)::database_name`
    // 
    // > Placeholder descriptions:<br>
    // > `instance_id`: The instance ID. This is required when the data source is registered in instance mode.<br>
    // > `encoded_jdbc_url`: The URL-encoded JDBC connection string. This is required when the data source is registered by using a connection string.<br>
    // > `catalog_id`: The DLF catalog ID.<br>
    // > `project_name`: The MaxCompute project name.<br>
    // > `database_name`: The database name.<br>
    // > `schema_name`: The schema name.<br><br><br><br><br><br>
    shared_ptr<string> parentMetaEntityId_ {};
    // The list of partition keys. This parameter is empty for non-partitioned tables.
    shared_ptr<vector<string>> partitionKeys_ {};
    // The table type. The value depends on the type of metadata collector.
    shared_ptr<string> tableType_ {};
    // The technical metadata.
    shared_ptr<Table::TechnicalMetadata> technicalMetadata_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
