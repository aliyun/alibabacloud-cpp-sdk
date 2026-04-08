// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMETACATEGORYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETMETACATEGORYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class GetMetaCategoryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMetaCategoryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetMetaCategoryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetMetaCategoryResponseBody() = default ;
    GetMetaCategoryResponseBody(const GetMetaCategoryResponseBody &) = default ;
    GetMetaCategoryResponseBody(GetMetaCategoryResponseBody &&) = default ;
    GetMetaCategoryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMetaCategoryResponseBody() = default ;
    GetMetaCategoryResponseBody& operator=(const GetMetaCategoryResponseBody &) = default ;
    GetMetaCategoryResponseBody& operator=(GetMetaCategoryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(DataEntityList, dataEntityList_);
        DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(DataEntityList, dataEntityList_);
        DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
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
      class DataEntityList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DataEntityList& obj) { 
          DARABONBA_PTR_TO_JSON(CategoryId, categoryId_);
          DARABONBA_PTR_TO_JSON(Comment, comment_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(Depth, depth_);
          DARABONBA_PTR_TO_JSON(LastOperatorId, lastOperatorId_);
          DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
          DARABONBA_PTR_TO_JSON(ParentCategoryId, parentCategoryId_);
        };
        friend void from_json(const Darabonba::Json& j, DataEntityList& obj) { 
          DARABONBA_PTR_FROM_JSON(CategoryId, categoryId_);
          DARABONBA_PTR_FROM_JSON(Comment, comment_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(Depth, depth_);
          DARABONBA_PTR_FROM_JSON(LastOperatorId, lastOperatorId_);
          DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
          DARABONBA_PTR_FROM_JSON(ParentCategoryId, parentCategoryId_);
        };
        DataEntityList() = default ;
        DataEntityList(const DataEntityList &) = default ;
        DataEntityList(DataEntityList &&) = default ;
        DataEntityList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DataEntityList() = default ;
        DataEntityList& operator=(const DataEntityList &) = default ;
        DataEntityList& operator=(DataEntityList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->categoryId_ == nullptr
        && this->comment_ == nullptr && this->createTime_ == nullptr && this->depth_ == nullptr && this->lastOperatorId_ == nullptr && this->modifiedTime_ == nullptr
        && this->name_ == nullptr && this->ownerId_ == nullptr && this->parentCategoryId_ == nullptr; };
        // categoryId Field Functions 
        bool hasCategoryId() const { return this->categoryId_ != nullptr;};
        void deleteCategoryId() { this->categoryId_ = nullptr;};
        inline int64_t getCategoryId() const { DARABONBA_PTR_GET_DEFAULT(categoryId_, 0L) };
        inline DataEntityList& setCategoryId(int64_t categoryId) { DARABONBA_PTR_SET_VALUE(categoryId_, categoryId) };


        // comment Field Functions 
        bool hasComment() const { return this->comment_ != nullptr;};
        void deleteComment() { this->comment_ = nullptr;};
        inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
        inline DataEntityList& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
        inline DataEntityList& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // depth Field Functions 
        bool hasDepth() const { return this->depth_ != nullptr;};
        void deleteDepth() { this->depth_ = nullptr;};
        inline int32_t getDepth() const { DARABONBA_PTR_GET_DEFAULT(depth_, 0) };
        inline DataEntityList& setDepth(int32_t depth) { DARABONBA_PTR_SET_VALUE(depth_, depth) };


        // lastOperatorId Field Functions 
        bool hasLastOperatorId() const { return this->lastOperatorId_ != nullptr;};
        void deleteLastOperatorId() { this->lastOperatorId_ = nullptr;};
        inline string getLastOperatorId() const { DARABONBA_PTR_GET_DEFAULT(lastOperatorId_, "") };
        inline DataEntityList& setLastOperatorId(string lastOperatorId) { DARABONBA_PTR_SET_VALUE(lastOperatorId_, lastOperatorId) };


        // modifiedTime Field Functions 
        bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
        void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
        inline int64_t getModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, 0L) };
        inline DataEntityList& setModifiedTime(int64_t modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline DataEntityList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // ownerId Field Functions 
        bool hasOwnerId() const { return this->ownerId_ != nullptr;};
        void deleteOwnerId() { this->ownerId_ = nullptr;};
        inline string getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
        inline DataEntityList& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


        // parentCategoryId Field Functions 
        bool hasParentCategoryId() const { return this->parentCategoryId_ != nullptr;};
        void deleteParentCategoryId() { this->parentCategoryId_ = nullptr;};
        inline int64_t getParentCategoryId() const { DARABONBA_PTR_GET_DEFAULT(parentCategoryId_, 0L) };
        inline DataEntityList& setParentCategoryId(int64_t parentCategoryId) { DARABONBA_PTR_SET_VALUE(parentCategoryId_, parentCategoryId) };


      protected:
        // The category ID.
        shared_ptr<int64_t> categoryId_ {};
        // The remarks of the category.
        shared_ptr<string> comment_ {};
        // The time when the category was created.
        shared_ptr<int64_t> createTime_ {};
        // The number of category levels.
        shared_ptr<int32_t> depth_ {};
        // The ID of the user that performed the last operation.
        shared_ptr<string> lastOperatorId_ {};
        // The time when the category was last modified.
        shared_ptr<int64_t> modifiedTime_ {};
        // The name of the category.
        shared_ptr<string> name_ {};
        // The category owner ID.
        shared_ptr<string> ownerId_ {};
        // The parent category ID.
        shared_ptr<int64_t> parentCategoryId_ {};
      };

      virtual bool empty() const override { return this->dataEntityList_ == nullptr
        && this->pageNum_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // dataEntityList Field Functions 
      bool hasDataEntityList() const { return this->dataEntityList_ != nullptr;};
      void deleteDataEntityList() { this->dataEntityList_ = nullptr;};
      inline const vector<Data::DataEntityList> & getDataEntityList() const { DARABONBA_PTR_GET_CONST(dataEntityList_, vector<Data::DataEntityList>) };
      inline vector<Data::DataEntityList> getDataEntityList() { DARABONBA_PTR_GET(dataEntityList_, vector<Data::DataEntityList>) };
      inline Data& setDataEntityList(const vector<Data::DataEntityList> & dataEntityList) { DARABONBA_PTR_SET_VALUE(dataEntityList_, dataEntityList) };
      inline Data& setDataEntityList(vector<Data::DataEntityList> && dataEntityList) { DARABONBA_PTR_SET_RVALUE(dataEntityList_, dataEntityList) };


      // pageNum Field Functions 
      bool hasPageNum() const { return this->pageNum_ != nullptr;};
      void deletePageNum() { this->pageNum_ = nullptr;};
      inline int32_t getPageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
      inline Data& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Data& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
      inline Data& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The information about the category tree.
      shared_ptr<vector<Data::DataEntityList>> dataEntityList_ {};
      // The page number.
      shared_ptr<int32_t> pageNum_ {};
      // The number of entries per page. Default value: 10. Maximum value: 100.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of categories returned.
      shared_ptr<int64_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errorCode_ == nullptr && this->errorMessage_ == nullptr && this->httpStatusCode_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetMetaCategoryResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetMetaCategoryResponseBody::Data) };
    inline GetMetaCategoryResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetMetaCategoryResponseBody::Data) };
    inline GetMetaCategoryResponseBody& setData(const GetMetaCategoryResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetMetaCategoryResponseBody& setData(GetMetaCategoryResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetMetaCategoryResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline GetMetaCategoryResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetMetaCategoryResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetMetaCategoryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetMetaCategoryResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The business data.
    shared_ptr<GetMetaCategoryResponseBody::Data> data_ {};
    // The error code.
    shared_ptr<string> errorCode_ {};
    // The error message.
    shared_ptr<string> errorMessage_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
