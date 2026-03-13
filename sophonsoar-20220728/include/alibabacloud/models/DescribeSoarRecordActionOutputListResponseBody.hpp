// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESOARRECORDACTIONOUTPUTLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESOARRECORDACTIONOUTPUTLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sophonsoar20220728
{
namespace Models
{
  class DescribeSoarRecordActionOutputListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSoarRecordActionOutputListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ActionOutputs, actionOutputs_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSoarRecordActionOutputListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ActionOutputs, actionOutputs_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeSoarRecordActionOutputListResponseBody() = default ;
    DescribeSoarRecordActionOutputListResponseBody(const DescribeSoarRecordActionOutputListResponseBody &) = default ;
    DescribeSoarRecordActionOutputListResponseBody(DescribeSoarRecordActionOutputListResponseBody &&) = default ;
    DescribeSoarRecordActionOutputListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSoarRecordActionOutputListResponseBody() = default ;
    DescribeSoarRecordActionOutputListResponseBody& operator=(const DescribeSoarRecordActionOutputListResponseBody &) = default ;
    DescribeSoarRecordActionOutputListResponseBody& operator=(DescribeSoarRecordActionOutputListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->actionOutputs_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // actionOutputs Field Functions 
    bool hasActionOutputs() const { return this->actionOutputs_ != nullptr;};
    void deleteActionOutputs() { this->actionOutputs_ = nullptr;};
    inline string getActionOutputs() const { DARABONBA_PTR_GET_DEFAULT(actionOutputs_, "") };
    inline DescribeSoarRecordActionOutputListResponseBody& setActionOutputs(string actionOutputs) { DARABONBA_PTR_SET_VALUE(actionOutputs_, actionOutputs) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeSoarRecordActionOutputListResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeSoarRecordActionOutputListResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSoarRecordActionOutputListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeSoarRecordActionOutputListResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The data that is returned when the component action is performed. The value is a JSON array.
    // 
    // >  The format of the output data is determined by the component that is configured when the playbook is written.
    shared_ptr<string> actionOutputs_ {};
    // The page number. Default value: 1.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page. Default value: 10.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of pages returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sophonsoar20220728
#endif
