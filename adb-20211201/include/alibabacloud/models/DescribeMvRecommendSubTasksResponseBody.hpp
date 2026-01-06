// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMVRECOMMENDSUBTASKSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMVRECOMMENDSUBTASKSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/OpenStructMvRecommendSubTaskModel.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeMvRecommendSubTasksResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMvRecommendSubTasksResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMvRecommendSubTasksResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeMvRecommendSubTasksResponseBody() = default ;
    DescribeMvRecommendSubTasksResponseBody(const DescribeMvRecommendSubTasksResponseBody &) = default ;
    DescribeMvRecommendSubTasksResponseBody(DescribeMvRecommendSubTasksResponseBody &&) = default ;
    DescribeMvRecommendSubTasksResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMvRecommendSubTasksResponseBody() = default ;
    DescribeMvRecommendSubTasksResponseBody& operator=(const DescribeMvRecommendSubTasksResponseBody &) = default ;
    DescribeMvRecommendSubTasksResponseBody& operator=(DescribeMvRecommendSubTasksResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(MvRecommendSubTaskModels, mvRecommendSubTaskModels_);
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(MvRecommendSubTaskModels, mvRecommendSubTaskModels_);
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
      virtual bool empty() const override { return this->mvRecommendSubTaskModels_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // mvRecommendSubTaskModels Field Functions 
      bool hasMvRecommendSubTaskModels() const { return this->mvRecommendSubTaskModels_ != nullptr;};
      void deleteMvRecommendSubTaskModels() { this->mvRecommendSubTaskModels_ = nullptr;};
      inline const vector<OpenStructMvRecommendSubTaskModel> & getMvRecommendSubTaskModels() const { DARABONBA_PTR_GET_CONST(mvRecommendSubTaskModels_, vector<OpenStructMvRecommendSubTaskModel>) };
      inline vector<OpenStructMvRecommendSubTaskModel> getMvRecommendSubTaskModels() { DARABONBA_PTR_GET(mvRecommendSubTaskModels_, vector<OpenStructMvRecommendSubTaskModel>) };
      inline Data& setMvRecommendSubTaskModels(const vector<OpenStructMvRecommendSubTaskModel> & mvRecommendSubTaskModels) { DARABONBA_PTR_SET_VALUE(mvRecommendSubTaskModels_, mvRecommendSubTaskModels) };
      inline Data& setMvRecommendSubTaskModels(vector<OpenStructMvRecommendSubTaskModel> && mvRecommendSubTaskModels) { DARABONBA_PTR_SET_RVALUE(mvRecommendSubTaskModels_, mvRecommendSubTaskModels) };


      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
      inline Data& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
      inline Data& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
      inline Data& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The list of recommended tasks to be executed.
      shared_ptr<vector<OpenStructMvRecommendSubTaskModel>> mvRecommendSubTaskModels_ {};
      // The page number.
      shared_ptr<int64_t> pageNumber_ {};
      // The number of entries returned per page.
      shared_ptr<int64_t> pageSize_ {};
      // The total number of entries returned.
      shared_ptr<int64_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeMvRecommendSubTasksResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeMvRecommendSubTasksResponseBody::Data) };
    inline DescribeMvRecommendSubTasksResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeMvRecommendSubTasksResponseBody::Data) };
    inline DescribeMvRecommendSubTasksResponseBody& setData(const DescribeMvRecommendSubTasksResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeMvRecommendSubTasksResponseBody& setData(DescribeMvRecommendSubTasksResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline DescribeMvRecommendSubTasksResponseBody& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline DescribeMvRecommendSubTasksResponseBody& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeMvRecommendSubTasksResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeMvRecommendSubTasksResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The returned data.
    shared_ptr<DescribeMvRecommendSubTasksResponseBody::Data> data_ {};
    // The page number.
    shared_ptr<int64_t> pageNumber_ {};
    // The number of entries returned per page.
    shared_ptr<int64_t> pageSize_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
