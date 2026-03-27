// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DATABASE_HPP_
#define ALIBABACLOUD_MODELS_DATABASE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class Database : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Database& obj) { 
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(LocationUri, locationUri_);
      DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ParentMetaEntityId, parentMetaEntityId_);
    };
    friend void from_json(const Darabonba::Json& j, Database& obj) { 
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(LocationUri, locationUri_);
      DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ParentMetaEntityId, parentMetaEntityId_);
    };
    Database() = default ;
    Database(const Database &) = default ;
    Database(Database &&) = default ;
    Database(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Database() = default ;
    Database& operator=(const Database &) = default ;
    Database& operator=(Database &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->comment_ == nullptr
        && this->createTime_ == nullptr && this->id_ == nullptr && this->locationUri_ == nullptr && this->modifyTime_ == nullptr && this->name_ == nullptr
        && this->parentMetaEntityId_ == nullptr; };
    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline Database& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline Database& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline Database& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // locationUri Field Functions 
    bool hasLocationUri() const { return this->locationUri_ != nullptr;};
    void deleteLocationUri() { this->locationUri_ = nullptr;};
    inline string getLocationUri() const { DARABONBA_PTR_GET_DEFAULT(locationUri_, "") };
    inline Database& setLocationUri(string locationUri) { DARABONBA_PTR_SET_VALUE(locationUri_, locationUri) };


    // modifyTime Field Functions 
    bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
    void deleteModifyTime() { this->modifyTime_ = nullptr;};
    inline int64_t getModifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, 0L) };
    inline Database& setModifyTime(int64_t modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline Database& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // parentMetaEntityId Field Functions 
    bool hasParentMetaEntityId() const { return this->parentMetaEntityId_ != nullptr;};
    void deleteParentMetaEntityId() { this->parentMetaEntityId_ = nullptr;};
    inline string getParentMetaEntityId() const { DARABONBA_PTR_GET_DEFAULT(parentMetaEntityId_, "") };
    inline Database& setParentMetaEntityId(string parentMetaEntityId) { DARABONBA_PTR_SET_VALUE(parentMetaEntityId_, parentMetaEntityId) };


  protected:
    // The comments.
    shared_ptr<string> comment_ {};
    // The creation time. This value is a UNIX timestamp. Unit: milliseconds.
    shared_ptr<int64_t> createTime_ {};
    // The database ID. For more information, see [Concepts related to metadata entities](https://help.aliyun.com/document_detail/2880092.html).
    // 
    // The common format of this parameter is `${Entity type}:${Instance ID or escaped URL}:${Catalog identifier}:${Database name}`. If a level does not exist, specify an empty string as a placeholder.
    // 
    // >  For StarRocks data sources, specify a catalog name at the Catalog identifier level. For DLF data sources, specify a catalog ID at the Catalog identifier level. Other types of data sources do not support the Catalog identifier level. You can specify an empty string as a placeholder.
    // 
    // You can configure this parameter in one of the following formats based on your data source type:
    // 
    // `dlf-database::catalog_id:database_name`
    // 
    // `holo-database:instance_id::database_name`
    // 
    // `mysql-database:(instance_id|encoded_jdbc_url)::database_name`
    // 
    // > \\
    // `catalog_id`: the ID of a DLF catalog.\\
    // `instance_id`: the ID of an instance. If the related data source is added to DataWorks in Alibaba Cloud instance mode, you must configure this parameter.\\
    // `encoded_jdbc_url`: the JDBC connection string that is URL-encoded. If the related data source is added to DataWorks in connection string mode, you must configure this parameter.\\
    // `database_name`: the name of a database.
    shared_ptr<string> id_ {};
    // The uniform resource identifier (URI) of the storage location.
    shared_ptr<string> locationUri_ {};
    // The update time. This value is a UNIX timestamp. Unit: milliseconds.
    shared_ptr<int64_t> modifyTime_ {};
    // The database name.
    shared_ptr<string> name_ {};
    // The parent entity ID. For more information, see [Concepts related to metadata entities](https://help.aliyun.com/document_detail/2880092.html).
    // 
    // You can call the ListCrawlerTypes operation to query the parent entity types.
    // 
    // *   If the parent entity is a catalog, you can configure the `ParentMetaEntityId` parameter by referring to the `Catalog` topic.
    // *   If the parent entity is a metadata crawler, you can configure the `ParentMetaEntityId` parameter in the `${Crawler type}:${Instance ID or escaped URL}` format.
    // 
    // You can configure the ParentMetaEntityId parameter in one of the following formats based on your data source type:
    // 
    // `dlf-catalog::catalog_id`
    // 
    // `holo:instance_id`
    // 
    // `mysql:(instance_id|encoded_jdbc_url)`
    // 
    // > \\
    // `catalog_id`: the ID of a DLF catalog.\\
    // `instance_id`: the ID of an instance. If the related data source is added to DataWorks in Alibaba Cloud instance mode, you must configure this parameter.\\
    // `encoded_jdbc_url`: the JDBC connection string that is URL-encoded. If the related data source is added to DataWorks in connection string mode, you must configure this parameter.
    shared_ptr<string> parentMetaEntityId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
