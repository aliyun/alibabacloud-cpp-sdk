// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTENTERPRISEINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTENTERPRISEINFORESPONSEBODY_HPP_
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
  class ListEnterpriseInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEnterpriseInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListEnterpriseInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListEnterpriseInfoResponseBody() = default ;
    ListEnterpriseInfoResponseBody(const ListEnterpriseInfoResponseBody &) = default ;
    ListEnterpriseInfoResponseBody(ListEnterpriseInfoResponseBody &&) = default ;
    ListEnterpriseInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEnterpriseInfoResponseBody() = default ;
    ListEnterpriseInfoResponseBody& operator=(const ListEnterpriseInfoResponseBody &) = default ;
    ListEnterpriseInfoResponseBody& operator=(ListEnterpriseInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AuditDesc, auditDesc_);
        DARABONBA_PTR_TO_JSON(EnterpriseId, enterpriseId_);
        DARABONBA_PTR_TO_JSON(EnterpriseName, enterpriseName_);
        DARABONBA_PTR_TO_JSON(ManagerContactNumber, managerContactNumber_);
        DARABONBA_PTR_TO_JSON(ManagerName, managerName_);
        DARABONBA_PTR_TO_JSON(OrganizationCode, organizationCode_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AuditDesc, auditDesc_);
        DARABONBA_PTR_FROM_JSON(EnterpriseId, enterpriseId_);
        DARABONBA_PTR_FROM_JSON(EnterpriseName, enterpriseName_);
        DARABONBA_PTR_FROM_JSON(ManagerContactNumber, managerContactNumber_);
        DARABONBA_PTR_FROM_JSON(ManagerName, managerName_);
        DARABONBA_PTR_FROM_JSON(OrganizationCode, organizationCode_);
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
      virtual bool empty() const override { return this->auditDesc_ == nullptr
        && this->enterpriseId_ == nullptr && this->enterpriseName_ == nullptr && this->managerContactNumber_ == nullptr && this->managerName_ == nullptr && this->organizationCode_ == nullptr
        && this->status_ == nullptr; };
      // auditDesc Field Functions 
      bool hasAuditDesc() const { return this->auditDesc_ != nullptr;};
      void deleteAuditDesc() { this->auditDesc_ = nullptr;};
      inline string getAuditDesc() const { DARABONBA_PTR_GET_DEFAULT(auditDesc_, "") };
      inline Data& setAuditDesc(string auditDesc) { DARABONBA_PTR_SET_VALUE(auditDesc_, auditDesc) };


      // enterpriseId Field Functions 
      bool hasEnterpriseId() const { return this->enterpriseId_ != nullptr;};
      void deleteEnterpriseId() { this->enterpriseId_ = nullptr;};
      inline int64_t getEnterpriseId() const { DARABONBA_PTR_GET_DEFAULT(enterpriseId_, 0L) };
      inline Data& setEnterpriseId(int64_t enterpriseId) { DARABONBA_PTR_SET_VALUE(enterpriseId_, enterpriseId) };


      // enterpriseName Field Functions 
      bool hasEnterpriseName() const { return this->enterpriseName_ != nullptr;};
      void deleteEnterpriseName() { this->enterpriseName_ = nullptr;};
      inline string getEnterpriseName() const { DARABONBA_PTR_GET_DEFAULT(enterpriseName_, "") };
      inline Data& setEnterpriseName(string enterpriseName) { DARABONBA_PTR_SET_VALUE(enterpriseName_, enterpriseName) };


      // managerContactNumber Field Functions 
      bool hasManagerContactNumber() const { return this->managerContactNumber_ != nullptr;};
      void deleteManagerContactNumber() { this->managerContactNumber_ = nullptr;};
      inline string getManagerContactNumber() const { DARABONBA_PTR_GET_DEFAULT(managerContactNumber_, "") };
      inline Data& setManagerContactNumber(string managerContactNumber) { DARABONBA_PTR_SET_VALUE(managerContactNumber_, managerContactNumber) };


      // managerName Field Functions 
      bool hasManagerName() const { return this->managerName_ != nullptr;};
      void deleteManagerName() { this->managerName_ = nullptr;};
      inline string getManagerName() const { DARABONBA_PTR_GET_DEFAULT(managerName_, "") };
      inline Data& setManagerName(string managerName) { DARABONBA_PTR_SET_VALUE(managerName_, managerName) };


      // organizationCode Field Functions 
      bool hasOrganizationCode() const { return this->organizationCode_ != nullptr;};
      void deleteOrganizationCode() { this->organizationCode_ = nullptr;};
      inline string getOrganizationCode() const { DARABONBA_PTR_GET_DEFAULT(organizationCode_, "") };
      inline Data& setOrganizationCode(string organizationCode) { DARABONBA_PTR_SET_VALUE(organizationCode_, organizationCode) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
      inline Data& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      shared_ptr<string> auditDesc_ {};
      shared_ptr<int64_t> enterpriseId_ {};
      shared_ptr<string> enterpriseName_ {};
      shared_ptr<string> managerContactNumber_ {};
      shared_ptr<string> managerName_ {};
      shared_ptr<string> organizationCode_ {};
      shared_ptr<int32_t> status_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListEnterpriseInfoResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListEnterpriseInfoResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListEnterpriseInfoResponseBody::Data>) };
    inline vector<ListEnterpriseInfoResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListEnterpriseInfoResponseBody::Data>) };
    inline ListEnterpriseInfoResponseBody& setData(const vector<ListEnterpriseInfoResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListEnterpriseInfoResponseBody& setData(vector<ListEnterpriseInfoResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListEnterpriseInfoResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListEnterpriseInfoResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListEnterpriseInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListEnterpriseInfoResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<vector<ListEnterpriseInfoResponseBody::Data>> data_ {};
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dypns20170620
#endif
