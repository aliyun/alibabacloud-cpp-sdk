// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMETACOLLECTIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTMETACOLLECTIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListMetaCollectionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMetaCollectionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListMetaCollectionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListMetaCollectionsResponseBody() = default ;
    ListMetaCollectionsResponseBody(const ListMetaCollectionsResponseBody &) = default ;
    ListMetaCollectionsResponseBody(ListMetaCollectionsResponseBody &&) = default ;
    ListMetaCollectionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMetaCollectionsResponseBody() = default ;
    ListMetaCollectionsResponseBody& operator=(const ListMetaCollectionsResponseBody &) = default ;
    ListMetaCollectionsResponseBody& operator=(ListMetaCollectionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(MetaCollections, metaCollections_);
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(MetaCollections, metaCollections_);
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class MetaCollections : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const MetaCollections& obj) { 
          DARABONBA_PTR_TO_JSON(Administrators, administrators_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(CreateUser, createUser_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(ParentId, parentId_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, MetaCollections& obj) { 
          DARABONBA_PTR_FROM_JSON(Administrators, administrators_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(CreateUser, createUser_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(ParentId, parentId_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
        };
        MetaCollections() = default ;
        MetaCollections(const MetaCollections &) = default ;
        MetaCollections(MetaCollections &&) = default ;
        MetaCollections(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~MetaCollections() = default ;
        MetaCollections& operator=(const MetaCollections &) = default ;
        MetaCollections& operator=(MetaCollections &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->administrators_ == nullptr
        && this->createTime_ == nullptr && this->createUser_ == nullptr && this->description_ == nullptr && this->id_ == nullptr && this->modifyTime_ == nullptr
        && this->name_ == nullptr && this->parentId_ == nullptr && this->type_ == nullptr; };
        // administrators Field Functions 
        bool hasAdministrators() const { return this->administrators_ != nullptr;};
        void deleteAdministrators() { this->administrators_ = nullptr;};
        inline const vector<string> & getAdministrators() const { DARABONBA_PTR_GET_CONST(administrators_, vector<string>) };
        inline vector<string> getAdministrators() { DARABONBA_PTR_GET(administrators_, vector<string>) };
        inline MetaCollections& setAdministrators(const vector<string> & administrators) { DARABONBA_PTR_SET_VALUE(administrators_, administrators) };
        inline MetaCollections& setAdministrators(vector<string> && administrators) { DARABONBA_PTR_SET_RVALUE(administrators_, administrators) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
        inline MetaCollections& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // createUser Field Functions 
        bool hasCreateUser() const { return this->createUser_ != nullptr;};
        void deleteCreateUser() { this->createUser_ = nullptr;};
        inline string getCreateUser() const { DARABONBA_PTR_GET_DEFAULT(createUser_, "") };
        inline MetaCollections& setCreateUser(string createUser) { DARABONBA_PTR_SET_VALUE(createUser_, createUser) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline MetaCollections& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline MetaCollections& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // modifyTime Field Functions 
        bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
        void deleteModifyTime() { this->modifyTime_ = nullptr;};
        inline int64_t getModifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, 0L) };
        inline MetaCollections& setModifyTime(int64_t modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline MetaCollections& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // parentId Field Functions 
        bool hasParentId() const { return this->parentId_ != nullptr;};
        void deleteParentId() { this->parentId_ = nullptr;};
        inline string getParentId() const { DARABONBA_PTR_GET_DEFAULT(parentId_, "") };
        inline MetaCollections& setParentId(string parentId) { DARABONBA_PTR_SET_VALUE(parentId_, parentId) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline MetaCollections& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        // The list of administrator IDs. Supported only for album types. Administrators must be users within the same tenant. Multiple administrators can be specified.
        shared_ptr<vector<string>> administrators_ {};
        // The creation time in milliseconds (timestamp).
        shared_ptr<int64_t> createTime_ {};
        // The creator user ID.
        shared_ptr<string> createUser_ {};
        // The collection description.
        shared_ptr<string> description_ {};
        // The collection name.
        shared_ptr<string> id_ {};
        // The modification time in milliseconds (timestamp).
        shared_ptr<int64_t> modifyTime_ {};
        // The collection name.
        shared_ptr<string> name_ {};
        // The ID of the parent collection. Can be empty.
        shared_ptr<string> parentId_ {};
        // The collection type. Valid values:
        // 
        // *   Category
        // *   Album
        // *   AlbumCategory: Album subcategory
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->metaCollections_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // metaCollections Field Functions 
      bool hasMetaCollections() const { return this->metaCollections_ != nullptr;};
      void deleteMetaCollections() { this->metaCollections_ = nullptr;};
      inline const vector<Data::MetaCollections> & getMetaCollections() const { DARABONBA_PTR_GET_CONST(metaCollections_, vector<Data::MetaCollections>) };
      inline vector<Data::MetaCollections> getMetaCollections() { DARABONBA_PTR_GET(metaCollections_, vector<Data::MetaCollections>) };
      inline Data& setMetaCollections(const vector<Data::MetaCollections> & metaCollections) { DARABONBA_PTR_SET_VALUE(metaCollections_, metaCollections) };
      inline Data& setMetaCollections(vector<Data::MetaCollections> && metaCollections) { DARABONBA_PTR_SET_RVALUE(metaCollections_, metaCollections) };


      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
      inline Data& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Data& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline Data& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The list of collections.
      shared_ptr<vector<Data::MetaCollections>> metaCollections_ {};
      // The page number.
      shared_ptr<int32_t> pageNumber_ {};
      // The number of entries per page.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of records.
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListMetaCollectionsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListMetaCollectionsResponseBody::Data) };
    inline ListMetaCollectionsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListMetaCollectionsResponseBody::Data) };
    inline ListMetaCollectionsResponseBody& setData(const ListMetaCollectionsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListMetaCollectionsResponseBody& setData(ListMetaCollectionsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListMetaCollectionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Pagination information.
    shared_ptr<ListMetaCollectionsResponseBody::Data> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
