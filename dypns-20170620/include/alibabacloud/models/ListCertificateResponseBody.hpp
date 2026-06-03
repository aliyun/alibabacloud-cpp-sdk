// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCERTIFICATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCERTIFICATERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dypns20170620
{
namespace Models
{
  class ListCertificateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCertificateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListCertificateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListCertificateResponseBody() = default ;
    ListCertificateResponseBody(const ListCertificateResponseBody &) = default ;
    ListCertificateResponseBody(ListCertificateResponseBody &&) = default ;
    ListCertificateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCertificateResponseBody() = default ;
    ListCertificateResponseBody& operator=(const ListCertificateResponseBody &) = default ;
    ListCertificateResponseBody& operator=(ListCertificateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AuthorizationTime, authorizationTime_);
        DARABONBA_PTR_TO_JSON(BlockchainNo, blockchainNo_);
        DARABONBA_PTR_TO_JSON(BusinessTypeList, businessTypeList_);
        DARABONBA_PTR_TO_JSON(CancelTime, cancelTime_);
        DARABONBA_PTR_TO_JSON(CompanyName, companyName_);
        DARABONBA_PTR_TO_JSON(EndDate, endDate_);
        DARABONBA_PTR_TO_JSON(PhoneNo, phoneNo_);
        DARABONBA_PTR_TO_JSON(SchemeType, schemeType_);
        DARABONBA_PTR_TO_JSON(StartDate, startDate_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AuthorizationTime, authorizationTime_);
        DARABONBA_PTR_FROM_JSON(BlockchainNo, blockchainNo_);
        DARABONBA_PTR_FROM_JSON(BusinessTypeList, businessTypeList_);
        DARABONBA_PTR_FROM_JSON(CancelTime, cancelTime_);
        DARABONBA_PTR_FROM_JSON(CompanyName, companyName_);
        DARABONBA_PTR_FROM_JSON(EndDate, endDate_);
        DARABONBA_PTR_FROM_JSON(PhoneNo, phoneNo_);
        DARABONBA_PTR_FROM_JSON(SchemeType, schemeType_);
        DARABONBA_PTR_FROM_JSON(StartDate, startDate_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
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
      virtual bool empty() const override { return this->authorizationTime_ == nullptr
        && this->blockchainNo_ == nullptr && this->businessTypeList_ == nullptr && this->cancelTime_ == nullptr && this->companyName_ == nullptr && this->endDate_ == nullptr
        && this->phoneNo_ == nullptr && this->schemeType_ == nullptr && this->startDate_ == nullptr && this->status_ == nullptr; };
      // authorizationTime Field Functions 
      bool hasAuthorizationTime() const { return this->authorizationTime_ != nullptr;};
      void deleteAuthorizationTime() { this->authorizationTime_ = nullptr;};
      inline int64_t getAuthorizationTime() const { DARABONBA_PTR_GET_DEFAULT(authorizationTime_, 0L) };
      inline Data& setAuthorizationTime(int64_t authorizationTime) { DARABONBA_PTR_SET_VALUE(authorizationTime_, authorizationTime) };


      // blockchainNo Field Functions 
      bool hasBlockchainNo() const { return this->blockchainNo_ != nullptr;};
      void deleteBlockchainNo() { this->blockchainNo_ = nullptr;};
      inline string getBlockchainNo() const { DARABONBA_PTR_GET_DEFAULT(blockchainNo_, "") };
      inline Data& setBlockchainNo(string blockchainNo) { DARABONBA_PTR_SET_VALUE(blockchainNo_, blockchainNo) };


      // businessTypeList Field Functions 
      bool hasBusinessTypeList() const { return this->businessTypeList_ != nullptr;};
      void deleteBusinessTypeList() { this->businessTypeList_ = nullptr;};
      inline const vector<int32_t> & getBusinessTypeList() const { DARABONBA_PTR_GET_CONST(businessTypeList_, vector<int32_t>) };
      inline vector<int32_t> getBusinessTypeList() { DARABONBA_PTR_GET(businessTypeList_, vector<int32_t>) };
      inline Data& setBusinessTypeList(const vector<int32_t> & businessTypeList) { DARABONBA_PTR_SET_VALUE(businessTypeList_, businessTypeList) };
      inline Data& setBusinessTypeList(vector<int32_t> && businessTypeList) { DARABONBA_PTR_SET_RVALUE(businessTypeList_, businessTypeList) };


      // cancelTime Field Functions 
      bool hasCancelTime() const { return this->cancelTime_ != nullptr;};
      void deleteCancelTime() { this->cancelTime_ = nullptr;};
      inline int64_t getCancelTime() const { DARABONBA_PTR_GET_DEFAULT(cancelTime_, 0L) };
      inline Data& setCancelTime(int64_t cancelTime) { DARABONBA_PTR_SET_VALUE(cancelTime_, cancelTime) };


      // companyName Field Functions 
      bool hasCompanyName() const { return this->companyName_ != nullptr;};
      void deleteCompanyName() { this->companyName_ = nullptr;};
      inline string getCompanyName() const { DARABONBA_PTR_GET_DEFAULT(companyName_, "") };
      inline Data& setCompanyName(string companyName) { DARABONBA_PTR_SET_VALUE(companyName_, companyName) };


      // endDate Field Functions 
      bool hasEndDate() const { return this->endDate_ != nullptr;};
      void deleteEndDate() { this->endDate_ = nullptr;};
      inline string getEndDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, "") };
      inline Data& setEndDate(string endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


      // phoneNo Field Functions 
      bool hasPhoneNo() const { return this->phoneNo_ != nullptr;};
      void deletePhoneNo() { this->phoneNo_ = nullptr;};
      inline string getPhoneNo() const { DARABONBA_PTR_GET_DEFAULT(phoneNo_, "") };
      inline Data& setPhoneNo(string phoneNo) { DARABONBA_PTR_SET_VALUE(phoneNo_, phoneNo) };


      // schemeType Field Functions 
      bool hasSchemeType() const { return this->schemeType_ != nullptr;};
      void deleteSchemeType() { this->schemeType_ = nullptr;};
      inline int32_t getSchemeType() const { DARABONBA_PTR_GET_DEFAULT(schemeType_, 0) };
      inline Data& setSchemeType(int32_t schemeType) { DARABONBA_PTR_SET_VALUE(schemeType_, schemeType) };


      // startDate Field Functions 
      bool hasStartDate() const { return this->startDate_ != nullptr;};
      void deleteStartDate() { this->startDate_ = nullptr;};
      inline string getStartDate() const { DARABONBA_PTR_GET_DEFAULT(startDate_, "") };
      inline Data& setStartDate(string startDate) { DARABONBA_PTR_SET_VALUE(startDate_, startDate) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
      inline Data& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      shared_ptr<int64_t> authorizationTime_ {};
      shared_ptr<string> blockchainNo_ {};
      shared_ptr<vector<int32_t>> businessTypeList_ {};
      shared_ptr<int64_t> cancelTime_ {};
      shared_ptr<string> companyName_ {};
      shared_ptr<string> endDate_ {};
      shared_ptr<string> phoneNo_ {};
      shared_ptr<int32_t> schemeType_ {};
      shared_ptr<string> startDate_ {};
      shared_ptr<int32_t> status_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListCertificateResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListCertificateResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListCertificateResponseBody::Data>) };
    inline vector<ListCertificateResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListCertificateResponseBody::Data>) };
    inline ListCertificateResponseBody& setData(const vector<ListCertificateResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListCertificateResponseBody& setData(vector<ListCertificateResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListCertificateResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListCertificateResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListCertificateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListCertificateResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<vector<ListCertificateResponseBody::Data>> data_ {};
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dypns20170620
#endif
