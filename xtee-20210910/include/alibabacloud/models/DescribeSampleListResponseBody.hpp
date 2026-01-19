// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESAMPLELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESAMPLELISTRESPONSEBODY_HPP_
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
  class DescribeSampleListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSampleListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(currentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(resultObject, resultObject_);
      DARABONBA_PTR_TO_JSON(totalItem, totalItem_);
      DARABONBA_PTR_TO_JSON(totalPage, totalPage_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSampleListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(currentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(resultObject, resultObject_);
      DARABONBA_PTR_FROM_JSON(totalItem, totalItem_);
      DARABONBA_PTR_FROM_JSON(totalPage, totalPage_);
    };
    DescribeSampleListResponseBody() = default ;
    DescribeSampleListResponseBody(const DescribeSampleListResponseBody &) = default ;
    DescribeSampleListResponseBody(DescribeSampleListResponseBody &&) = default ;
    DescribeSampleListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSampleListResponseBody() = default ;
    DescribeSampleListResponseBody& operator=(const DescribeSampleListResponseBody &) = default ;
    DescribeSampleListResponseBody& operator=(DescribeSampleListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResultObject : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResultObject& obj) { 
        DARABONBA_PTR_TO_JSON(id, id_);
        DARABONBA_PTR_TO_JSON(sampleTags, sampleTags_);
        DARABONBA_PTR_TO_JSON(sampleType, sampleType_);
        DARABONBA_PTR_TO_JSON(sampleValue, sampleValue_);
        DARABONBA_PTR_TO_JSON(updateTime, updateTime_);
        DARABONBA_PTR_TO_JSON(version, version_);
      };
      friend void from_json(const Darabonba::Json& j, ResultObject& obj) { 
        DARABONBA_PTR_FROM_JSON(id, id_);
        DARABONBA_PTR_FROM_JSON(sampleTags, sampleTags_);
        DARABONBA_PTR_FROM_JSON(sampleType, sampleType_);
        DARABONBA_PTR_FROM_JSON(sampleValue, sampleValue_);
        DARABONBA_PTR_FROM_JSON(updateTime, updateTime_);
        DARABONBA_PTR_FROM_JSON(version, version_);
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
      virtual bool empty() const override { return this->id_ == nullptr
        && this->sampleTags_ == nullptr && this->sampleType_ == nullptr && this->sampleValue_ == nullptr && this->updateTime_ == nullptr && this->version_ == nullptr; };
      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline ResultObject& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // sampleTags Field Functions 
      bool hasSampleTags() const { return this->sampleTags_ != nullptr;};
      void deleteSampleTags() { this->sampleTags_ = nullptr;};
      inline string getSampleTags() const { DARABONBA_PTR_GET_DEFAULT(sampleTags_, "") };
      inline ResultObject& setSampleTags(string sampleTags) { DARABONBA_PTR_SET_VALUE(sampleTags_, sampleTags) };


      // sampleType Field Functions 
      bool hasSampleType() const { return this->sampleType_ != nullptr;};
      void deleteSampleType() { this->sampleType_ = nullptr;};
      inline int32_t getSampleType() const { DARABONBA_PTR_GET_DEFAULT(sampleType_, 0) };
      inline ResultObject& setSampleType(int32_t sampleType) { DARABONBA_PTR_SET_VALUE(sampleType_, sampleType) };


      // sampleValue Field Functions 
      bool hasSampleValue() const { return this->sampleValue_ != nullptr;};
      void deleteSampleValue() { this->sampleValue_ = nullptr;};
      inline string getSampleValue() const { DARABONBA_PTR_GET_DEFAULT(sampleValue_, "") };
      inline ResultObject& setSampleValue(string sampleValue) { DARABONBA_PTR_SET_VALUE(sampleValue_, sampleValue) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline int64_t getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
      inline ResultObject& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


      // version Field Functions 
      bool hasVersion() const { return this->version_ != nullptr;};
      void deleteVersion() { this->version_ = nullptr;};
      inline int32_t getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, 0) };
      inline ResultObject& setVersion(int32_t version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    protected:
      // Database ID.
      shared_ptr<int64_t> id_ {};
      // Sample tags.
      shared_ptr<string> sampleTags_ {};
      // Sample type
      shared_ptr<int32_t> sampleType_ {};
      // Sample value.
      shared_ptr<string> sampleValue_ {};
      // Update time.
      shared_ptr<int64_t> updateTime_ {};
      // Version number.
      shared_ptr<int32_t> version_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->currentPage_ == nullptr && this->pageSize_ == nullptr && this->resultObject_ == nullptr && this->totalItem_ == nullptr && this->totalPage_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSampleListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeSampleListResponseBody& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeSampleListResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // resultObject Field Functions 
    bool hasResultObject() const { return this->resultObject_ != nullptr;};
    void deleteResultObject() { this->resultObject_ = nullptr;};
    inline const vector<DescribeSampleListResponseBody::ResultObject> & getResultObject() const { DARABONBA_PTR_GET_CONST(resultObject_, vector<DescribeSampleListResponseBody::ResultObject>) };
    inline vector<DescribeSampleListResponseBody::ResultObject> getResultObject() { DARABONBA_PTR_GET(resultObject_, vector<DescribeSampleListResponseBody::ResultObject>) };
    inline DescribeSampleListResponseBody& setResultObject(const vector<DescribeSampleListResponseBody::ResultObject> & resultObject) { DARABONBA_PTR_SET_VALUE(resultObject_, resultObject) };
    inline DescribeSampleListResponseBody& setResultObject(vector<DescribeSampleListResponseBody::ResultObject> && resultObject) { DARABONBA_PTR_SET_RVALUE(resultObject_, resultObject) };


    // totalItem Field Functions 
    bool hasTotalItem() const { return this->totalItem_ != nullptr;};
    void deleteTotalItem() { this->totalItem_ = nullptr;};
    inline int32_t getTotalItem() const { DARABONBA_PTR_GET_DEFAULT(totalItem_, 0) };
    inline DescribeSampleListResponseBody& setTotalItem(int32_t totalItem) { DARABONBA_PTR_SET_VALUE(totalItem_, totalItem) };


    // totalPage Field Functions 
    bool hasTotalPage() const { return this->totalPage_ != nullptr;};
    void deleteTotalPage() { this->totalPage_ = nullptr;};
    inline int32_t getTotalPage() const { DARABONBA_PTR_GET_DEFAULT(totalPage_, 0) };
    inline DescribeSampleListResponseBody& setTotalPage(int32_t totalPage) { DARABONBA_PTR_SET_VALUE(totalPage_, totalPage) };


  protected:
    // Request ID.
    shared_ptr<string> requestId_ {};
    // Current page number.
    shared_ptr<int32_t> currentPage_ {};
    // Page size, with a default value of 10
    shared_ptr<int32_t> pageSize_ {};
    // Returned object
    shared_ptr<vector<DescribeSampleListResponseBody::ResultObject>> resultObject_ {};
    // Total count.
    shared_ptr<int32_t> totalItem_ {};
    // Total pages
    shared_ptr<int32_t> totalPage_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
