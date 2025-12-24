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
        && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // actionOutputs Field Functions 
    bool hasActionOutputs() const { return this->actionOutputs_ != nullptr;};
    void deleteActionOutputs() { this->actionOutputs_ = nullptr;};
    inline string actionOutputs() const { DARABONBA_PTR_GET_DEFAULT(actionOutputs_, "") };
    inline DescribeSoarRecordActionOutputListResponseBody& setActionOutputs(string actionOutputs) { DARABONBA_PTR_SET_VALUE(actionOutputs_, actionOutputs) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeSoarRecordActionOutputListResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeSoarRecordActionOutputListResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSoarRecordActionOutputListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeSoarRecordActionOutputListResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The data that is returned when the component action is performed. The value is a JSON array.
    // 
    // >  The format of the output data is determined by the component that is configured when the playbook is written.
    std::shared_ptr<string> actionOutputs_ = nullptr;
    // The page number. Default value: 1.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page. Default value: 10.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of pages returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sophonsoar20220728
#endif
