// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBACKENDLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBACKENDLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeBackendListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBackendListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BackendInfoList, backendInfoList_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBackendListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BackendInfoList, backendInfoList_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeBackendListResponseBody() = default ;
    DescribeBackendListResponseBody(const DescribeBackendListResponseBody &) = default ;
    DescribeBackendListResponseBody(DescribeBackendListResponseBody &&) = default ;
    DescribeBackendListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBackendListResponseBody() = default ;
    DescribeBackendListResponseBody& operator=(const DescribeBackendListResponseBody &) = default ;
    DescribeBackendListResponseBody& operator=(DescribeBackendListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class BackendInfoList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const BackendInfoList& obj) { 
        DARABONBA_PTR_TO_JSON(BackendId, backendId_);
        DARABONBA_PTR_TO_JSON(BackendName, backendName_);
        DARABONBA_PTR_TO_JSON(BackendType, backendType_);
        DARABONBA_PTR_TO_JSON(CreatedTime, createdTime_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
        DARABONBA_PTR_TO_JSON(Tags, tags_);
      };
      friend void from_json(const Darabonba::Json& j, BackendInfoList& obj) { 
        DARABONBA_PTR_FROM_JSON(BackendId, backendId_);
        DARABONBA_PTR_FROM_JSON(BackendName, backendName_);
        DARABONBA_PTR_FROM_JSON(BackendType, backendType_);
        DARABONBA_PTR_FROM_JSON(CreatedTime, createdTime_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
        DARABONBA_PTR_FROM_JSON(Tags, tags_);
      };
      BackendInfoList() = default ;
      BackendInfoList(const BackendInfoList &) = default ;
      BackendInfoList(BackendInfoList &&) = default ;
      BackendInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~BackendInfoList() = default ;
      BackendInfoList& operator=(const BackendInfoList &) = default ;
      BackendInfoList& operator=(BackendInfoList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
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
        // The name of the tag.
        shared_ptr<string> key_ {};
        // The value of the tag.
        shared_ptr<string> value_ {};
      };

      virtual bool empty() const override { return this->backendId_ == nullptr
        && this->backendName_ == nullptr && this->backendType_ == nullptr && this->createdTime_ == nullptr && this->description_ == nullptr && this->modifiedTime_ == nullptr
        && this->tags_ == nullptr; };
      // backendId Field Functions 
      bool hasBackendId() const { return this->backendId_ != nullptr;};
      void deleteBackendId() { this->backendId_ = nullptr;};
      inline string getBackendId() const { DARABONBA_PTR_GET_DEFAULT(backendId_, "") };
      inline BackendInfoList& setBackendId(string backendId) { DARABONBA_PTR_SET_VALUE(backendId_, backendId) };


      // backendName Field Functions 
      bool hasBackendName() const { return this->backendName_ != nullptr;};
      void deleteBackendName() { this->backendName_ = nullptr;};
      inline string getBackendName() const { DARABONBA_PTR_GET_DEFAULT(backendName_, "") };
      inline BackendInfoList& setBackendName(string backendName) { DARABONBA_PTR_SET_VALUE(backendName_, backendName) };


      // backendType Field Functions 
      bool hasBackendType() const { return this->backendType_ != nullptr;};
      void deleteBackendType() { this->backendType_ = nullptr;};
      inline string getBackendType() const { DARABONBA_PTR_GET_DEFAULT(backendType_, "") };
      inline BackendInfoList& setBackendType(string backendType) { DARABONBA_PTR_SET_VALUE(backendType_, backendType) };


      // createdTime Field Functions 
      bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
      void deleteCreatedTime() { this->createdTime_ = nullptr;};
      inline string getCreatedTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, "") };
      inline BackendInfoList& setCreatedTime(string createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline BackendInfoList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // modifiedTime Field Functions 
      bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
      void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
      inline string getModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, "") };
      inline BackendInfoList& setModifiedTime(string modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<BackendInfoList::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<BackendInfoList::Tags>) };
      inline vector<BackendInfoList::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<BackendInfoList::Tags>) };
      inline BackendInfoList& setTags(const vector<BackendInfoList::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline BackendInfoList& setTags(vector<BackendInfoList::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    protected:
      // The ID of the backend service.
      shared_ptr<string> backendId_ {};
      // The name of the backend service.
      shared_ptr<string> backendName_ {};
      // The type of the backend service.
      shared_ptr<string> backendType_ {};
      // The time when the backend service was created.
      shared_ptr<string> createdTime_ {};
      // The description of the backend service.
      shared_ptr<string> description_ {};
      // The time when the backend service was modified.
      shared_ptr<string> modifiedTime_ {};
      // The list of tags.
      shared_ptr<vector<BackendInfoList::Tags>> tags_ {};
    };

    virtual bool empty() const override { return this->backendInfoList_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // backendInfoList Field Functions 
    bool hasBackendInfoList() const { return this->backendInfoList_ != nullptr;};
    void deleteBackendInfoList() { this->backendInfoList_ = nullptr;};
    inline const vector<DescribeBackendListResponseBody::BackendInfoList> & getBackendInfoList() const { DARABONBA_PTR_GET_CONST(backendInfoList_, vector<DescribeBackendListResponseBody::BackendInfoList>) };
    inline vector<DescribeBackendListResponseBody::BackendInfoList> getBackendInfoList() { DARABONBA_PTR_GET(backendInfoList_, vector<DescribeBackendListResponseBody::BackendInfoList>) };
    inline DescribeBackendListResponseBody& setBackendInfoList(const vector<DescribeBackendListResponseBody::BackendInfoList> & backendInfoList) { DARABONBA_PTR_SET_VALUE(backendInfoList_, backendInfoList) };
    inline DescribeBackendListResponseBody& setBackendInfoList(vector<DescribeBackendListResponseBody::BackendInfoList> && backendInfoList) { DARABONBA_PTR_SET_RVALUE(backendInfoList_, backendInfoList) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeBackendListResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeBackendListResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeBackendListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeBackendListResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The backend services.
    shared_ptr<vector<DescribeBackendListResponseBody::BackendInfoList>> backendInfoList_ {};
    // The number of the current page.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries returned on each page.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
