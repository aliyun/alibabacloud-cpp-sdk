// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATAASSETTAGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDATAASSETTAGSRESPONSEBODY_HPP_
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
  class ListDataAssetTagsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataAssetTagsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PagingInfo, pagingInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataAssetTagsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PagingInfo, pagingInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListDataAssetTagsResponseBody() = default ;
    ListDataAssetTagsResponseBody(const ListDataAssetTagsResponseBody &) = default ;
    ListDataAssetTagsResponseBody(ListDataAssetTagsResponseBody &&) = default ;
    ListDataAssetTagsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataAssetTagsResponseBody() = default ;
    ListDataAssetTagsResponseBody& operator=(const ListDataAssetTagsResponseBody &) = default ;
    ListDataAssetTagsResponseBody& operator=(ListDataAssetTagsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PagingInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PagingInfo& obj) { 
        DARABONBA_PTR_TO_JSON(DataAssetTags, dataAssetTags_);
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, PagingInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(DataAssetTags, dataAssetTags_);
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      PagingInfo() = default ;
      PagingInfo(const PagingInfo &) = default ;
      PagingInfo(PagingInfo &&) = default ;
      PagingInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PagingInfo() = default ;
      PagingInfo& operator=(const PagingInfo &) = default ;
      PagingInfo& operator=(PagingInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DataAssetTags : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DataAssetTags& obj) { 
          DARABONBA_PTR_TO_JSON(Category, category_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(CreateUser, createUser_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(Key, key_);
          DARABONBA_PTR_TO_JSON(Managers, managers_);
          DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
          DARABONBA_PTR_TO_JSON(ModifyUser, modifyUser_);
          DARABONBA_PTR_TO_JSON(ValueType, valueType_);
          DARABONBA_PTR_TO_JSON(Values, values_);
        };
        friend void from_json(const Darabonba::Json& j, DataAssetTags& obj) { 
          DARABONBA_PTR_FROM_JSON(Category, category_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(CreateUser, createUser_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(Key, key_);
          DARABONBA_PTR_FROM_JSON(Managers, managers_);
          DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
          DARABONBA_PTR_FROM_JSON(ModifyUser, modifyUser_);
          DARABONBA_PTR_FROM_JSON(ValueType, valueType_);
          DARABONBA_PTR_FROM_JSON(Values, values_);
        };
        DataAssetTags() = default ;
        DataAssetTags(const DataAssetTags &) = default ;
        DataAssetTags(DataAssetTags &&) = default ;
        DataAssetTags(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DataAssetTags() = default ;
        DataAssetTags& operator=(const DataAssetTags &) = default ;
        DataAssetTags& operator=(DataAssetTags &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->category_ == nullptr
        && this->createTime_ == nullptr && this->createUser_ == nullptr && this->description_ == nullptr && this->key_ == nullptr && this->managers_ == nullptr
        && this->modifyTime_ == nullptr && this->modifyUser_ == nullptr && this->valueType_ == nullptr && this->values_ == nullptr; };
        // category Field Functions 
        bool hasCategory() const { return this->category_ != nullptr;};
        void deleteCategory() { this->category_ = nullptr;};
        inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
        inline DataAssetTags& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
        inline DataAssetTags& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // createUser Field Functions 
        bool hasCreateUser() const { return this->createUser_ != nullptr;};
        void deleteCreateUser() { this->createUser_ = nullptr;};
        inline string getCreateUser() const { DARABONBA_PTR_GET_DEFAULT(createUser_, "") };
        inline DataAssetTags& setCreateUser(string createUser) { DARABONBA_PTR_SET_VALUE(createUser_, createUser) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline DataAssetTags& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // key Field Functions 
        bool hasKey() const { return this->key_ != nullptr;};
        void deleteKey() { this->key_ = nullptr;};
        inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
        inline DataAssetTags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // managers Field Functions 
        bool hasManagers() const { return this->managers_ != nullptr;};
        void deleteManagers() { this->managers_ = nullptr;};
        inline const vector<string> & getManagers() const { DARABONBA_PTR_GET_CONST(managers_, vector<string>) };
        inline vector<string> getManagers() { DARABONBA_PTR_GET(managers_, vector<string>) };
        inline DataAssetTags& setManagers(const vector<string> & managers) { DARABONBA_PTR_SET_VALUE(managers_, managers) };
        inline DataAssetTags& setManagers(vector<string> && managers) { DARABONBA_PTR_SET_RVALUE(managers_, managers) };


        // modifyTime Field Functions 
        bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
        void deleteModifyTime() { this->modifyTime_ = nullptr;};
        inline int64_t getModifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, 0L) };
        inline DataAssetTags& setModifyTime(int64_t modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


        // modifyUser Field Functions 
        bool hasModifyUser() const { return this->modifyUser_ != nullptr;};
        void deleteModifyUser() { this->modifyUser_ = nullptr;};
        inline string getModifyUser() const { DARABONBA_PTR_GET_DEFAULT(modifyUser_, "") };
        inline DataAssetTags& setModifyUser(string modifyUser) { DARABONBA_PTR_SET_VALUE(modifyUser_, modifyUser) };


        // valueType Field Functions 
        bool hasValueType() const { return this->valueType_ != nullptr;};
        void deleteValueType() { this->valueType_ = nullptr;};
        inline string getValueType() const { DARABONBA_PTR_GET_DEFAULT(valueType_, "") };
        inline DataAssetTags& setValueType(string valueType) { DARABONBA_PTR_SET_VALUE(valueType_, valueType) };


        // values Field Functions 
        bool hasValues() const { return this->values_ != nullptr;};
        void deleteValues() { this->values_ = nullptr;};
        inline const vector<string> & getValues() const { DARABONBA_PTR_GET_CONST(values_, vector<string>) };
        inline vector<string> getValues() { DARABONBA_PTR_GET(values_, vector<string>) };
        inline DataAssetTags& setValues(const vector<string> & values) { DARABONBA_PTR_SET_VALUE(values_, values) };
        inline DataAssetTags& setValues(vector<string> && values) { DARABONBA_PTR_SET_RVALUE(values_, values) };


      protected:
        // The type of the tag.
        // 
        // Valid values:
        // 
        // *   Normal
        // *   System
        shared_ptr<string> category_ {};
        // The time when the tag was created.
        shared_ptr<int64_t> createTime_ {};
        // The creator of the tag.
        shared_ptr<string> createUser_ {};
        // The description of the tag.
        shared_ptr<string> description_ {};
        // The tag key.
        shared_ptr<string> key_ {};
        // The tag administrators.
        shared_ptr<vector<string>> managers_ {};
        // The time when the tag was last modified.
        shared_ptr<int64_t> modifyTime_ {};
        // The user who last modified the tag.
        shared_ptr<string> modifyUser_ {};
        // The type of the tag value.
        shared_ptr<string> valueType_ {};
        // The tag values.
        shared_ptr<vector<string>> values_ {};
      };

      virtual bool empty() const override { return this->dataAssetTags_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // dataAssetTags Field Functions 
      bool hasDataAssetTags() const { return this->dataAssetTags_ != nullptr;};
      void deleteDataAssetTags() { this->dataAssetTags_ = nullptr;};
      inline const vector<PagingInfo::DataAssetTags> & getDataAssetTags() const { DARABONBA_PTR_GET_CONST(dataAssetTags_, vector<PagingInfo::DataAssetTags>) };
      inline vector<PagingInfo::DataAssetTags> getDataAssetTags() { DARABONBA_PTR_GET(dataAssetTags_, vector<PagingInfo::DataAssetTags>) };
      inline PagingInfo& setDataAssetTags(const vector<PagingInfo::DataAssetTags> & dataAssetTags) { DARABONBA_PTR_SET_VALUE(dataAssetTags_, dataAssetTags) };
      inline PagingInfo& setDataAssetTags(vector<PagingInfo::DataAssetTags> && dataAssetTags) { DARABONBA_PTR_SET_RVALUE(dataAssetTags_, dataAssetTags) };


      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
      inline PagingInfo& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline PagingInfo& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline PagingInfo& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The tags.
      shared_ptr<vector<PagingInfo::DataAssetTags>> dataAssetTags_ {};
      // The page number.
      shared_ptr<int32_t> pageNumber_ {};
      // The number of entries per page.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of entries returned.
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->pagingInfo_ == nullptr
        && this->requestId_ == nullptr; };
    // pagingInfo Field Functions 
    bool hasPagingInfo() const { return this->pagingInfo_ != nullptr;};
    void deletePagingInfo() { this->pagingInfo_ = nullptr;};
    inline const ListDataAssetTagsResponseBody::PagingInfo & getPagingInfo() const { DARABONBA_PTR_GET_CONST(pagingInfo_, ListDataAssetTagsResponseBody::PagingInfo) };
    inline ListDataAssetTagsResponseBody::PagingInfo getPagingInfo() { DARABONBA_PTR_GET(pagingInfo_, ListDataAssetTagsResponseBody::PagingInfo) };
    inline ListDataAssetTagsResponseBody& setPagingInfo(const ListDataAssetTagsResponseBody::PagingInfo & pagingInfo) { DARABONBA_PTR_SET_VALUE(pagingInfo_, pagingInfo) };
    inline ListDataAssetTagsResponseBody& setPagingInfo(ListDataAssetTagsResponseBody::PagingInfo && pagingInfo) { DARABONBA_PTR_SET_RVALUE(pagingInfo_, pagingInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDataAssetTagsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The pagination information.
    shared_ptr<ListDataAssetTagsResponseBody::PagingInfo> pagingInfo_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
