// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TABLE_HPP_
#define ALIBABACLOUD_MODELS_TABLE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class Table : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Table& obj) { 
      DARABONBA_PTR_TO_JSON(Catalog, catalog_);
      DARABONBA_PTR_TO_JSON(Columns, columns_);
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(RetentionPolicy, retentionPolicy_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, Table& obj) { 
      DARABONBA_PTR_FROM_JSON(Catalog, catalog_);
      DARABONBA_PTR_FROM_JSON(Columns, columns_);
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(RetentionPolicy, retentionPolicy_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
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
    class RetentionPolicy : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RetentionPolicy& obj) { 
        DARABONBA_PTR_TO_JSON(ColdTTL, coldTTL_);
        DARABONBA_PTR_TO_JSON(HotTTL, hotTTL_);
      };
      friend void from_json(const Darabonba::Json& j, RetentionPolicy& obj) { 
        DARABONBA_PTR_FROM_JSON(ColdTTL, coldTTL_);
        DARABONBA_PTR_FROM_JSON(HotTTL, hotTTL_);
      };
      RetentionPolicy() = default ;
      RetentionPolicy(const RetentionPolicy &) = default ;
      RetentionPolicy(RetentionPolicy &&) = default ;
      RetentionPolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RetentionPolicy() = default ;
      RetentionPolicy& operator=(const RetentionPolicy &) = default ;
      RetentionPolicy& operator=(RetentionPolicy &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->coldTTL_ == nullptr
        && this->hotTTL_ == nullptr; };
      // coldTTL Field Functions 
      bool hasColdTTL() const { return this->coldTTL_ != nullptr;};
      void deleteColdTTL() { this->coldTTL_ = nullptr;};
      inline int32_t getColdTTL() const { DARABONBA_PTR_GET_DEFAULT(coldTTL_, 0) };
      inline RetentionPolicy& setColdTTL(int32_t coldTTL) { DARABONBA_PTR_SET_VALUE(coldTTL_, coldTTL) };


      // hotTTL Field Functions 
      bool hasHotTTL() const { return this->hotTTL_ != nullptr;};
      void deleteHotTTL() { this->hotTTL_ = nullptr;};
      inline int32_t getHotTTL() const { DARABONBA_PTR_GET_DEFAULT(hotTTL_, 0) };
      inline RetentionPolicy& setHotTTL(int32_t hotTTL) { DARABONBA_PTR_SET_VALUE(hotTTL_, hotTTL) };


    protected:
      shared_ptr<int32_t> coldTTL_ {};
      shared_ptr<int32_t> hotTTL_ {};
    };

    class Columns : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Columns& obj) { 
        DARABONBA_PTR_TO_JSON(Comment, comment_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Columns& obj) { 
        DARABONBA_PTR_FROM_JSON(Comment, comment_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      Columns() = default ;
      Columns(const Columns &) = default ;
      Columns(Columns &&) = default ;
      Columns(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Columns() = default ;
      Columns& operator=(const Columns &) = default ;
      Columns& operator=(Columns &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->comment_ == nullptr
        && this->name_ == nullptr && this->type_ == nullptr; };
      // comment Field Functions 
      bool hasComment() const { return this->comment_ != nullptr;};
      void deleteComment() { this->comment_ = nullptr;};
      inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
      inline Columns& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Columns& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Columns& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      shared_ptr<string> comment_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->catalog_ == nullptr
        && this->columns_ == nullptr && this->comment_ == nullptr && this->createTime_ == nullptr && this->name_ == nullptr && this->namespace_ == nullptr
        && this->retentionPolicy_ == nullptr && this->updateTime_ == nullptr; };
    // catalog Field Functions 
    bool hasCatalog() const { return this->catalog_ != nullptr;};
    void deleteCatalog() { this->catalog_ = nullptr;};
    inline string getCatalog() const { DARABONBA_PTR_GET_DEFAULT(catalog_, "") };
    inline Table& setCatalog(string catalog) { DARABONBA_PTR_SET_VALUE(catalog_, catalog) };


    // columns Field Functions 
    bool hasColumns() const { return this->columns_ != nullptr;};
    void deleteColumns() { this->columns_ = nullptr;};
    inline const vector<Table::Columns> & getColumns() const { DARABONBA_PTR_GET_CONST(columns_, vector<Table::Columns>) };
    inline vector<Table::Columns> getColumns() { DARABONBA_PTR_GET(columns_, vector<Table::Columns>) };
    inline Table& setColumns(const vector<Table::Columns> & columns) { DARABONBA_PTR_SET_VALUE(columns_, columns) };
    inline Table& setColumns(vector<Table::Columns> && columns) { DARABONBA_PTR_SET_RVALUE(columns_, columns) };


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


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline Table& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline Table& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // retentionPolicy Field Functions 
    bool hasRetentionPolicy() const { return this->retentionPolicy_ != nullptr;};
    void deleteRetentionPolicy() { this->retentionPolicy_ = nullptr;};
    inline const Table::RetentionPolicy & getRetentionPolicy() const { DARABONBA_PTR_GET_CONST(retentionPolicy_, Table::RetentionPolicy) };
    inline Table::RetentionPolicy getRetentionPolicy() { DARABONBA_PTR_GET(retentionPolicy_, Table::RetentionPolicy) };
    inline Table& setRetentionPolicy(const Table::RetentionPolicy & retentionPolicy) { DARABONBA_PTR_SET_VALUE(retentionPolicy_, retentionPolicy) };
    inline Table& setRetentionPolicy(Table::RetentionPolicy && retentionPolicy) { DARABONBA_PTR_SET_RVALUE(retentionPolicy_, retentionPolicy) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline int64_t getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
    inline Table& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    shared_ptr<string> catalog_ {};
    shared_ptr<vector<Table::Columns>> columns_ {};
    shared_ptr<string> comment_ {};
    shared_ptr<int64_t> createTime_ {};
    shared_ptr<string> name_ {};
    shared_ptr<string> namespace_ {};
    shared_ptr<Table::RetentionPolicy> retentionPolicy_ {};
    shared_ptr<int64_t> updateTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
