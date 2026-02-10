// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVULAUTOREPAIRCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTVULAUTOREPAIRCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListVulAutoRepairConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListVulAutoRepairConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(VulAutoRepairConfigList, vulAutoRepairConfigList_);
    };
    friend void from_json(const Darabonba::Json& j, ListVulAutoRepairConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(VulAutoRepairConfigList, vulAutoRepairConfigList_);
    };
    ListVulAutoRepairConfigResponseBody() = default ;
    ListVulAutoRepairConfigResponseBody(const ListVulAutoRepairConfigResponseBody &) = default ;
    ListVulAutoRepairConfigResponseBody(ListVulAutoRepairConfigResponseBody &&) = default ;
    ListVulAutoRepairConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListVulAutoRepairConfigResponseBody() = default ;
    ListVulAutoRepairConfigResponseBody& operator=(const ListVulAutoRepairConfigResponseBody &) = default ;
    ListVulAutoRepairConfigResponseBody& operator=(ListVulAutoRepairConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class VulAutoRepairConfigList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const VulAutoRepairConfigList& obj) { 
        DARABONBA_PTR_TO_JSON(AliasName, aliasName_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Reason, reason_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, VulAutoRepairConfigList& obj) { 
        DARABONBA_PTR_FROM_JSON(AliasName, aliasName_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Reason, reason_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      VulAutoRepairConfigList() = default ;
      VulAutoRepairConfigList(const VulAutoRepairConfigList &) = default ;
      VulAutoRepairConfigList(VulAutoRepairConfigList &&) = default ;
      VulAutoRepairConfigList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~VulAutoRepairConfigList() = default ;
      VulAutoRepairConfigList& operator=(const VulAutoRepairConfigList &) = default ;
      VulAutoRepairConfigList& operator=(VulAutoRepairConfigList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->aliasName_ == nullptr
        && this->id_ == nullptr && this->name_ == nullptr && this->reason_ == nullptr && this->type_ == nullptr; };
      // aliasName Field Functions 
      bool hasAliasName() const { return this->aliasName_ != nullptr;};
      void deleteAliasName() { this->aliasName_ = nullptr;};
      inline string getAliasName() const { DARABONBA_PTR_GET_DEFAULT(aliasName_, "") };
      inline VulAutoRepairConfigList& setAliasName(string aliasName) { DARABONBA_PTR_SET_VALUE(aliasName_, aliasName) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline VulAutoRepairConfigList& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline VulAutoRepairConfigList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // reason Field Functions 
      bool hasReason() const { return this->reason_ != nullptr;};
      void deleteReason() { this->reason_ = nullptr;};
      inline string getReason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
      inline VulAutoRepairConfigList& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline VulAutoRepairConfigList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The alias of the vulnerability.
      shared_ptr<string> aliasName_ {};
      // The configuration ID of the vulnerability.
      shared_ptr<int64_t> id_ {};
      // The name of the vulnerability.
      shared_ptr<string> name_ {};
      // The reason why the vulnerability can be automatically fixed.
      shared_ptr<string> reason_ {};
      // The type of the vulnerability. Valid values:
      // 
      // *   **cve**: Linux software vulnerability
      // *   **sys**: Windows system vulnerability
      shared_ptr<string> type_ {};
    };

    class PageInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PageInfo& obj) { 
        DARABONBA_PTR_TO_JSON(Count, count_);
        DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, PageInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(Count, count_);
        DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      PageInfo() = default ;
      PageInfo(const PageInfo &) = default ;
      PageInfo(PageInfo &&) = default ;
      PageInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PageInfo() = default ;
      PageInfo& operator=(const PageInfo &) = default ;
      PageInfo& operator=(PageInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->count_ == nullptr
        && this->currentPage_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // count Field Functions 
      bool hasCount() const { return this->count_ != nullptr;};
      void deleteCount() { this->count_ = nullptr;};
      inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
      inline PageInfo& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


      // currentPage Field Functions 
      bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
      void deleteCurrentPage() { this->currentPage_ = nullptr;};
      inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
      inline PageInfo& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline PageInfo& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline PageInfo& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The number of entries returned on the current page.
      shared_ptr<int32_t> count_ {};
      // The page number of the returned page.
      shared_ptr<int32_t> currentPage_ {};
      // The number of entries returned per page. Default value: **10**.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of entries returned.
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->pageInfo_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr
        && this->vulAutoRepairConfigList_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListVulAutoRepairConfigResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListVulAutoRepairConfigResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListVulAutoRepairConfigResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const ListVulAutoRepairConfigResponseBody::PageInfo & getPageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, ListVulAutoRepairConfigResponseBody::PageInfo) };
    inline ListVulAutoRepairConfigResponseBody::PageInfo getPageInfo() { DARABONBA_PTR_GET(pageInfo_, ListVulAutoRepairConfigResponseBody::PageInfo) };
    inline ListVulAutoRepairConfigResponseBody& setPageInfo(const ListVulAutoRepairConfigResponseBody::PageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline ListVulAutoRepairConfigResponseBody& setPageInfo(ListVulAutoRepairConfigResponseBody::PageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListVulAutoRepairConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListVulAutoRepairConfigResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // vulAutoRepairConfigList Field Functions 
    bool hasVulAutoRepairConfigList() const { return this->vulAutoRepairConfigList_ != nullptr;};
    void deleteVulAutoRepairConfigList() { this->vulAutoRepairConfigList_ = nullptr;};
    inline const vector<ListVulAutoRepairConfigResponseBody::VulAutoRepairConfigList> & getVulAutoRepairConfigList() const { DARABONBA_PTR_GET_CONST(vulAutoRepairConfigList_, vector<ListVulAutoRepairConfigResponseBody::VulAutoRepairConfigList>) };
    inline vector<ListVulAutoRepairConfigResponseBody::VulAutoRepairConfigList> getVulAutoRepairConfigList() { DARABONBA_PTR_GET(vulAutoRepairConfigList_, vector<ListVulAutoRepairConfigResponseBody::VulAutoRepairConfigList>) };
    inline ListVulAutoRepairConfigResponseBody& setVulAutoRepairConfigList(const vector<ListVulAutoRepairConfigResponseBody::VulAutoRepairConfigList> & vulAutoRepairConfigList) { DARABONBA_PTR_SET_VALUE(vulAutoRepairConfigList_, vulAutoRepairConfigList) };
    inline ListVulAutoRepairConfigResponseBody& setVulAutoRepairConfigList(vector<ListVulAutoRepairConfigResponseBody::VulAutoRepairConfigList> && vulAutoRepairConfigList) { DARABONBA_PTR_SET_RVALUE(vulAutoRepairConfigList_, vulAutoRepairConfigList) };


  protected:
    // The status code returned. The status code **200** indicates that the request was successful. Other status codes indicate that the request failed. You can identify the cause of the failure based on the status code.
    shared_ptr<string> code_ {};
    // The HTTP status code returned.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The error message returned.
    shared_ptr<string> message_ {};
    // The pagination information.
    shared_ptr<ListVulAutoRepairConfigResponseBody::PageInfo> pageInfo_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**: The request was successful.
    // *   **false**: The request failed.
    shared_ptr<bool> success_ {};
    // An array consisting of the existing configurations of vulnerabilities that can be automatically fixed.
    shared_ptr<vector<ListVulAutoRepairConfigResponseBody::VulAutoRepairConfigList>> vulAutoRepairConfigList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
