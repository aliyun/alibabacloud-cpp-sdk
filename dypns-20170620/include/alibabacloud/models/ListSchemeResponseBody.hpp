// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSCHEMERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSCHEMERESPONSEBODY_HPP_
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
  class ListSchemeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSchemeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListSchemeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListSchemeResponseBody() = default ;
    ListSchemeResponseBody(const ListSchemeResponseBody &) = default ;
    ListSchemeResponseBody(ListSchemeResponseBody &&) = default ;
    ListSchemeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSchemeResponseBody() = default ;
    ListSchemeResponseBody& operator=(const ListSchemeResponseBody &) = default ;
    ListSchemeResponseBody& operator=(ListSchemeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ApplyTime, applyTime_);
        DARABONBA_PTR_TO_JSON(AuditDesc, auditDesc_);
        DARABONBA_PTR_TO_JSON(BusinessTypeList, businessTypeList_);
        DARABONBA_PTR_TO_JSON(CompanyName, companyName_);
        DARABONBA_PTR_TO_JSON(SchemeId, schemeId_);
        DARABONBA_PTR_TO_JSON(SchemeName, schemeName_);
        DARABONBA_PTR_TO_JSON(SchemeType, schemeType_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ApplyTime, applyTime_);
        DARABONBA_PTR_FROM_JSON(AuditDesc, auditDesc_);
        DARABONBA_PTR_FROM_JSON(BusinessTypeList, businessTypeList_);
        DARABONBA_PTR_FROM_JSON(CompanyName, companyName_);
        DARABONBA_PTR_FROM_JSON(SchemeId, schemeId_);
        DARABONBA_PTR_FROM_JSON(SchemeName, schemeName_);
        DARABONBA_PTR_FROM_JSON(SchemeType, schemeType_);
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
      virtual bool empty() const override { return this->applyTime_ == nullptr
        && this->auditDesc_ == nullptr && this->businessTypeList_ == nullptr && this->companyName_ == nullptr && this->schemeId_ == nullptr && this->schemeName_ == nullptr
        && this->schemeType_ == nullptr && this->status_ == nullptr; };
      // applyTime Field Functions 
      bool hasApplyTime() const { return this->applyTime_ != nullptr;};
      void deleteApplyTime() { this->applyTime_ = nullptr;};
      inline int64_t getApplyTime() const { DARABONBA_PTR_GET_DEFAULT(applyTime_, 0L) };
      inline Data& setApplyTime(int64_t applyTime) { DARABONBA_PTR_SET_VALUE(applyTime_, applyTime) };


      // auditDesc Field Functions 
      bool hasAuditDesc() const { return this->auditDesc_ != nullptr;};
      void deleteAuditDesc() { this->auditDesc_ = nullptr;};
      inline string getAuditDesc() const { DARABONBA_PTR_GET_DEFAULT(auditDesc_, "") };
      inline Data& setAuditDesc(string auditDesc) { DARABONBA_PTR_SET_VALUE(auditDesc_, auditDesc) };


      // businessTypeList Field Functions 
      bool hasBusinessTypeList() const { return this->businessTypeList_ != nullptr;};
      void deleteBusinessTypeList() { this->businessTypeList_ = nullptr;};
      inline const vector<int32_t> & getBusinessTypeList() const { DARABONBA_PTR_GET_CONST(businessTypeList_, vector<int32_t>) };
      inline vector<int32_t> getBusinessTypeList() { DARABONBA_PTR_GET(businessTypeList_, vector<int32_t>) };
      inline Data& setBusinessTypeList(const vector<int32_t> & businessTypeList) { DARABONBA_PTR_SET_VALUE(businessTypeList_, businessTypeList) };
      inline Data& setBusinessTypeList(vector<int32_t> && businessTypeList) { DARABONBA_PTR_SET_RVALUE(businessTypeList_, businessTypeList) };


      // companyName Field Functions 
      bool hasCompanyName() const { return this->companyName_ != nullptr;};
      void deleteCompanyName() { this->companyName_ = nullptr;};
      inline string getCompanyName() const { DARABONBA_PTR_GET_DEFAULT(companyName_, "") };
      inline Data& setCompanyName(string companyName) { DARABONBA_PTR_SET_VALUE(companyName_, companyName) };


      // schemeId Field Functions 
      bool hasSchemeId() const { return this->schemeId_ != nullptr;};
      void deleteSchemeId() { this->schemeId_ = nullptr;};
      inline int64_t getSchemeId() const { DARABONBA_PTR_GET_DEFAULT(schemeId_, 0L) };
      inline Data& setSchemeId(int64_t schemeId) { DARABONBA_PTR_SET_VALUE(schemeId_, schemeId) };


      // schemeName Field Functions 
      bool hasSchemeName() const { return this->schemeName_ != nullptr;};
      void deleteSchemeName() { this->schemeName_ = nullptr;};
      inline string getSchemeName() const { DARABONBA_PTR_GET_DEFAULT(schemeName_, "") };
      inline Data& setSchemeName(string schemeName) { DARABONBA_PTR_SET_VALUE(schemeName_, schemeName) };


      // schemeType Field Functions 
      bool hasSchemeType() const { return this->schemeType_ != nullptr;};
      void deleteSchemeType() { this->schemeType_ = nullptr;};
      inline int32_t getSchemeType() const { DARABONBA_PTR_GET_DEFAULT(schemeType_, 0) };
      inline Data& setSchemeType(int32_t schemeType) { DARABONBA_PTR_SET_VALUE(schemeType_, schemeType) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
      inline Data& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      shared_ptr<int64_t> applyTime_ {};
      shared_ptr<string> auditDesc_ {};
      shared_ptr<vector<int32_t>> businessTypeList_ {};
      shared_ptr<string> companyName_ {};
      shared_ptr<int64_t> schemeId_ {};
      shared_ptr<string> schemeName_ {};
      shared_ptr<int32_t> schemeType_ {};
      shared_ptr<int32_t> status_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListSchemeResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListSchemeResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListSchemeResponseBody::Data>) };
    inline vector<ListSchemeResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListSchemeResponseBody::Data>) };
    inline ListSchemeResponseBody& setData(const vector<ListSchemeResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListSchemeResponseBody& setData(vector<ListSchemeResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListSchemeResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListSchemeResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSchemeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListSchemeResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<vector<ListSchemeResponseBody::Data>> data_ {};
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dypns20170620
#endif
