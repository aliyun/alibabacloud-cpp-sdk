// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERALBILLPAGERESULT_HPP_
#define ALIBABACLOUD_MODELS_GENERALBILLPAGERESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GeneralBill.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Linkedmall20230930
{
namespace Models
{
  class GeneralBillPageResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GeneralBillPageResult& obj) { 
      DARABONBA_PTR_TO_JSON(generalBills, generalBills_);
      DARABONBA_PTR_TO_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(total, total_);
    };
    friend void from_json(const Darabonba::Json& j, GeneralBillPageResult& obj) { 
      DARABONBA_PTR_FROM_JSON(generalBills, generalBills_);
      DARABONBA_PTR_FROM_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(total, total_);
    };
    GeneralBillPageResult() = default ;
    GeneralBillPageResult(const GeneralBillPageResult &) = default ;
    GeneralBillPageResult(GeneralBillPageResult &&) = default ;
    GeneralBillPageResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GeneralBillPageResult() = default ;
    GeneralBillPageResult& operator=(const GeneralBillPageResult &) = default ;
    GeneralBillPageResult& operator=(GeneralBillPageResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->generalBills_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->total_ == nullptr; };
    // generalBills Field Functions 
    bool hasGeneralBills() const { return this->generalBills_ != nullptr;};
    void deleteGeneralBills() { this->generalBills_ = nullptr;};
    inline const vector<GeneralBill> & getGeneralBills() const { DARABONBA_PTR_GET_CONST(generalBills_, vector<GeneralBill>) };
    inline vector<GeneralBill> getGeneralBills() { DARABONBA_PTR_GET(generalBills_, vector<GeneralBill>) };
    inline GeneralBillPageResult& setGeneralBills(const vector<GeneralBill> & generalBills) { DARABONBA_PTR_SET_VALUE(generalBills_, generalBills) };
    inline GeneralBillPageResult& setGeneralBills(vector<GeneralBill> && generalBills) { DARABONBA_PTR_SET_RVALUE(generalBills_, generalBills) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline GeneralBillPageResult& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline GeneralBillPageResult& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GeneralBillPageResult& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline GeneralBillPageResult& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    shared_ptr<vector<GeneralBill>> generalBills_ {};
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Linkedmall20230930
#endif
