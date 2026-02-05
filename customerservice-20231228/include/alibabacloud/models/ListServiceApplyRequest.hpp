// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSERVICEAPPLYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSERVICEAPPLYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CustomerService20231228
{
namespace Models
{
  class ListServiceApplyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListServiceApplyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(applyType, applyType_);
      DARABONBA_PTR_TO_JSON(endDate, endDate_);
      DARABONBA_PTR_TO_JSON(pageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(productCode, productCode_);
      DARABONBA_PTR_TO_JSON(startDate, startDate_);
      DARABONBA_PTR_TO_JSON(status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListServiceApplyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(applyType, applyType_);
      DARABONBA_PTR_FROM_JSON(endDate, endDate_);
      DARABONBA_PTR_FROM_JSON(pageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(productCode, productCode_);
      DARABONBA_PTR_FROM_JSON(startDate, startDate_);
      DARABONBA_PTR_FROM_JSON(status, status_);
    };
    ListServiceApplyRequest() = default ;
    ListServiceApplyRequest(const ListServiceApplyRequest &) = default ;
    ListServiceApplyRequest(ListServiceApplyRequest &&) = default ;
    ListServiceApplyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListServiceApplyRequest() = default ;
    ListServiceApplyRequest& operator=(const ListServiceApplyRequest &) = default ;
    ListServiceApplyRequest& operator=(ListServiceApplyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applyType_ == nullptr
        && this->endDate_ == nullptr && this->pageNum_ == nullptr && this->pageSize_ == nullptr && this->productCode_ == nullptr && this->startDate_ == nullptr
        && this->status_ == nullptr; };
    // applyType Field Functions 
    bool hasApplyType() const { return this->applyType_ != nullptr;};
    void deleteApplyType() { this->applyType_ = nullptr;};
    inline const vector<string> & getApplyType() const { DARABONBA_PTR_GET_CONST(applyType_, vector<string>) };
    inline vector<string> getApplyType() { DARABONBA_PTR_GET(applyType_, vector<string>) };
    inline ListServiceApplyRequest& setApplyType(const vector<string> & applyType) { DARABONBA_PTR_SET_VALUE(applyType_, applyType) };
    inline ListServiceApplyRequest& setApplyType(vector<string> && applyType) { DARABONBA_PTR_SET_RVALUE(applyType_, applyType) };


    // endDate Field Functions 
    bool hasEndDate() const { return this->endDate_ != nullptr;};
    void deleteEndDate() { this->endDate_ = nullptr;};
    inline int64_t getEndDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, 0L) };
    inline ListServiceApplyRequest& setEndDate(int64_t endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int32_t getPageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
    inline ListServiceApplyRequest& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListServiceApplyRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline int32_t getProductCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, 0) };
    inline ListServiceApplyRequest& setProductCode(int32_t productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // startDate Field Functions 
    bool hasStartDate() const { return this->startDate_ != nullptr;};
    void deleteStartDate() { this->startDate_ = nullptr;};
    inline int64_t getStartDate() const { DARABONBA_PTR_GET_DEFAULT(startDate_, 0L) };
    inline ListServiceApplyRequest& setStartDate(int64_t startDate) { DARABONBA_PTR_SET_VALUE(startDate_, startDate) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListServiceApplyRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    shared_ptr<vector<string>> applyType_ {};
    shared_ptr<int64_t> endDate_ {};
    shared_ptr<int32_t> pageNum_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<int32_t> productCode_ {};
    shared_ptr<int64_t> startDate_ {};
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CustomerService20231228
#endif
