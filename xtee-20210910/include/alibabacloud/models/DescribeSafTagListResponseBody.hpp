// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESAFTAGLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESAFTAGLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeSafTagListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSafTagListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(currentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(resultObject, resultObject_);
      DARABONBA_PTR_TO_JSON(totalItem, totalItem_);
      DARABONBA_PTR_TO_JSON(totalPage, totalPage_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSafTagListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(currentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(resultObject, resultObject_);
      DARABONBA_PTR_FROM_JSON(totalItem, totalItem_);
      DARABONBA_PTR_FROM_JSON(totalPage, totalPage_);
    };
    DescribeSafTagListResponseBody() = default ;
    DescribeSafTagListResponseBody(const DescribeSafTagListResponseBody &) = default ;
    DescribeSafTagListResponseBody(DescribeSafTagListResponseBody &&) = default ;
    DescribeSafTagListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSafTagListResponseBody() = default ;
    DescribeSafTagListResponseBody& operator=(const DescribeSafTagListResponseBody &) = default ;
    DescribeSafTagListResponseBody& operator=(DescribeSafTagListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResultObject : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResultObject& obj) { 
        DARABONBA_PTR_TO_JSON(tagDesc, tagDesc_);
        DARABONBA_PTR_TO_JSON(tagMean, tagMean_);
        DARABONBA_PTR_TO_JSON(tagName, tagName_);
        DARABONBA_PTR_TO_JSON(tagState, tagState_);
        DARABONBA_PTR_TO_JSON(tagType, tagType_);
        DARABONBA_PTR_TO_JSON(tagUid, tagUid_);
        DARABONBA_PTR_TO_JSON(updateTime, updateTime_);
      };
      friend void from_json(const Darabonba::Json& j, ResultObject& obj) { 
        DARABONBA_PTR_FROM_JSON(tagDesc, tagDesc_);
        DARABONBA_PTR_FROM_JSON(tagMean, tagMean_);
        DARABONBA_PTR_FROM_JSON(tagName, tagName_);
        DARABONBA_PTR_FROM_JSON(tagState, tagState_);
        DARABONBA_PTR_FROM_JSON(tagType, tagType_);
        DARABONBA_PTR_FROM_JSON(tagUid, tagUid_);
        DARABONBA_PTR_FROM_JSON(updateTime, updateTime_);
      };
      ResultObject() = default ;
      ResultObject(const ResultObject &) = default ;
      ResultObject(ResultObject &&) = default ;
      ResultObject(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ResultObject() = default ;
      ResultObject& operator=(const ResultObject &) = default ;
      ResultObject& operator=(ResultObject &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->tagDesc_ == nullptr
        && this->tagMean_ == nullptr && this->tagName_ == nullptr && this->tagState_ == nullptr && this->tagType_ == nullptr && this->tagUid_ == nullptr
        && this->updateTime_ == nullptr; };
      // tagDesc Field Functions 
      bool hasTagDesc() const { return this->tagDesc_ != nullptr;};
      void deleteTagDesc() { this->tagDesc_ = nullptr;};
      inline string getTagDesc() const { DARABONBA_PTR_GET_DEFAULT(tagDesc_, "") };
      inline ResultObject& setTagDesc(string tagDesc) { DARABONBA_PTR_SET_VALUE(tagDesc_, tagDesc) };


      // tagMean Field Functions 
      bool hasTagMean() const { return this->tagMean_ != nullptr;};
      void deleteTagMean() { this->tagMean_ = nullptr;};
      inline string getTagMean() const { DARABONBA_PTR_GET_DEFAULT(tagMean_, "") };
      inline ResultObject& setTagMean(string tagMean) { DARABONBA_PTR_SET_VALUE(tagMean_, tagMean) };


      // tagName Field Functions 
      bool hasTagName() const { return this->tagName_ != nullptr;};
      void deleteTagName() { this->tagName_ = nullptr;};
      inline string getTagName() const { DARABONBA_PTR_GET_DEFAULT(tagName_, "") };
      inline ResultObject& setTagName(string tagName) { DARABONBA_PTR_SET_VALUE(tagName_, tagName) };


      // tagState Field Functions 
      bool hasTagState() const { return this->tagState_ != nullptr;};
      void deleteTagState() { this->tagState_ = nullptr;};
      inline string getTagState() const { DARABONBA_PTR_GET_DEFAULT(tagState_, "") };
      inline ResultObject& setTagState(string tagState) { DARABONBA_PTR_SET_VALUE(tagState_, tagState) };


      // tagType Field Functions 
      bool hasTagType() const { return this->tagType_ != nullptr;};
      void deleteTagType() { this->tagType_ = nullptr;};
      inline string getTagType() const { DARABONBA_PTR_GET_DEFAULT(tagType_, "") };
      inline ResultObject& setTagType(string tagType) { DARABONBA_PTR_SET_VALUE(tagType_, tagType) };


      // tagUid Field Functions 
      bool hasTagUid() const { return this->tagUid_ != nullptr;};
      void deleteTagUid() { this->tagUid_ = nullptr;};
      inline string getTagUid() const { DARABONBA_PTR_GET_DEFAULT(tagUid_, "") };
      inline ResultObject& setTagUid(string tagUid) { DARABONBA_PTR_SET_VALUE(tagUid_, tagUid) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
      inline ResultObject& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    protected:
      // Tag description.
      shared_ptr<string> tagDesc_ {};
      // Tag meaning.
      shared_ptr<string> tagMean_ {};
      // Tag name.
      shared_ptr<string> tagName_ {};
      // Tag identifier.
      shared_ptr<string> tagState_ {};
      // Tag type.
      shared_ptr<string> tagType_ {};
      // Unique identifier of the tag key.
      shared_ptr<string> tagUid_ {};
      // Update time.
      shared_ptr<string> updateTime_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->currentPage_ == nullptr && this->pageSize_ == nullptr && this->resultObject_ == nullptr && this->totalItem_ == nullptr && this->totalPage_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSafTagListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeSafTagListResponseBody& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeSafTagListResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // resultObject Field Functions 
    bool hasResultObject() const { return this->resultObject_ != nullptr;};
    void deleteResultObject() { this->resultObject_ = nullptr;};
    inline const vector<DescribeSafTagListResponseBody::ResultObject> & getResultObject() const { DARABONBA_PTR_GET_CONST(resultObject_, vector<DescribeSafTagListResponseBody::ResultObject>) };
    inline vector<DescribeSafTagListResponseBody::ResultObject> getResultObject() { DARABONBA_PTR_GET(resultObject_, vector<DescribeSafTagListResponseBody::ResultObject>) };
    inline DescribeSafTagListResponseBody& setResultObject(const vector<DescribeSafTagListResponseBody::ResultObject> & resultObject) { DARABONBA_PTR_SET_VALUE(resultObject_, resultObject) };
    inline DescribeSafTagListResponseBody& setResultObject(vector<DescribeSafTagListResponseBody::ResultObject> && resultObject) { DARABONBA_PTR_SET_RVALUE(resultObject_, resultObject) };


    // totalItem Field Functions 
    bool hasTotalItem() const { return this->totalItem_ != nullptr;};
    void deleteTotalItem() { this->totalItem_ = nullptr;};
    inline int32_t getTotalItem() const { DARABONBA_PTR_GET_DEFAULT(totalItem_, 0) };
    inline DescribeSafTagListResponseBody& setTotalItem(int32_t totalItem) { DARABONBA_PTR_SET_VALUE(totalItem_, totalItem) };


    // totalPage Field Functions 
    bool hasTotalPage() const { return this->totalPage_ != nullptr;};
    void deleteTotalPage() { this->totalPage_ = nullptr;};
    inline int32_t getTotalPage() const { DARABONBA_PTR_GET_DEFAULT(totalPage_, 0) };
    inline DescribeSafTagListResponseBody& setTotalPage(int32_t totalPage) { DARABONBA_PTR_SET_VALUE(totalPage_, totalPage) };


  protected:
    // Request ID.
    shared_ptr<string> requestId_ {};
    // Current page number.
    shared_ptr<int32_t> currentPage_ {};
    // Page size, default value is 10.
    shared_ptr<int32_t> pageSize_ {};
    // Returned object.
    shared_ptr<vector<DescribeSafTagListResponseBody::ResultObject>> resultObject_ {};
    // Total number of items.
    shared_ptr<int32_t> totalItem_ {};
    // Total number of pages.
    shared_ptr<int32_t> totalPage_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
