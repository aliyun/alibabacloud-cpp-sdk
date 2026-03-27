// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CATALOG_HPP_
#define ALIBABACLOUD_MODELS_CATALOG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class Catalog : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Catalog& obj) { 
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ParentMetaEntityId, parentMetaEntityId_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, Catalog& obj) { 
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ParentMetaEntityId, parentMetaEntityId_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    Catalog() = default ;
    Catalog(const Catalog &) = default ;
    Catalog(Catalog &&) = default ;
    Catalog(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Catalog() = default ;
    Catalog& operator=(const Catalog &) = default ;
    Catalog& operator=(Catalog &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->comment_ == nullptr
        && this->createTime_ == nullptr && this->id_ == nullptr && this->modifyTime_ == nullptr && this->name_ == nullptr && this->parentMetaEntityId_ == nullptr
        && this->type_ == nullptr; };
    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline Catalog& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline Catalog& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline Catalog& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // modifyTime Field Functions 
    bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
    void deleteModifyTime() { this->modifyTime_ = nullptr;};
    inline int64_t getModifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, 0L) };
    inline Catalog& setModifyTime(int64_t modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline Catalog& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // parentMetaEntityId Field Functions 
    bool hasParentMetaEntityId() const { return this->parentMetaEntityId_ != nullptr;};
    void deleteParentMetaEntityId() { this->parentMetaEntityId_ = nullptr;};
    inline string getParentMetaEntityId() const { DARABONBA_PTR_GET_DEFAULT(parentMetaEntityId_, "") };
    inline Catalog& setParentMetaEntityId(string parentMetaEntityId) { DARABONBA_PTR_SET_VALUE(parentMetaEntityId_, parentMetaEntityId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline Catalog& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The comment.
    shared_ptr<string> comment_ {};
    // The creation time. The value is a UNIX timestamp. Unit: milliseconds.
    shared_ptr<int64_t> createTime_ {};
    // The catalog ID. Currently, only the DLF and StarRocks types are supported. For details, see [description of concepts related to metadata entities.](https://help.aliyun.com/document_detail/2880092.html)
    // 
    // *   For the DLF type, the format is `dlf-catalog::catalog_id`.
    // *   For the starrocks type, the format is `starrocks-catalog:(instance_id|encoded_jdbc_url):catalog_name`.
    // 
    // > \\
    // `catalog_id`: The the DLF catalog ID.\\
    // `instance_id`: The instance ID, required if the data source is registered in instance mode.\\
    // `encoded_jdbc_url`: The URL-encoded JDBC connection string, required if the data source is registered using a connection string.\\
    // `catalog_name`: The StarRocks catalog name.
    shared_ptr<string> id_ {};
    // The modification time. The value is a UNIX timestamp. Unit: milliseconds.
    shared_ptr<int64_t> modifyTime_ {};
    // The catalog name.
    shared_ptr<string> name_ {};
    // The parent entity ID.
    // 
    // *   For the DLF type, the format of `ParentMetaEntityId` is `dlf`.
    // *   For the StarRocks type, the format of `ParentMetaEntityId` is `starrocks:(instance_id|encoded_jdbc_url)`.
    // 
    // > \\
    // `instance_id`: The instance ID, required when the data source is registered in instance mode.\\
    // `encoded_jdbc_url`: The URL-encoded JDBC connection string, required if the data source is registered via a connection string.
    shared_ptr<string> parentMetaEntityId_ {};
    // The catalog type. The value of this parameter varies based on the type of the metadata crawler.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
