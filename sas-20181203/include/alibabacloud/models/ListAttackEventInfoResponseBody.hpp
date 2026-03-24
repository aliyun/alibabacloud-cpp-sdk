// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTATTACKEVENTINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTATTACKEVENTINFORESPONSEBODY_HPP_
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
  class ListAttackEventInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAttackEventInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(List, list_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListAttackEventInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(List, list_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListAttackEventInfoResponseBody() = default ;
    ListAttackEventInfoResponseBody(const ListAttackEventInfoResponseBody &) = default ;
    ListAttackEventInfoResponseBody(ListAttackEventInfoResponseBody &&) = default ;
    ListAttackEventInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAttackEventInfoResponseBody() = default ;
    ListAttackEventInfoResponseBody& operator=(const ListAttackEventInfoResponseBody &) = default ;
    ListAttackEventInfoResponseBody& operator=(ListAttackEventInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
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
      // Number of items displayed on the current page in pagination queries.
      shared_ptr<int32_t> count_ {};
      // Page number in pagination queries.
      shared_ptr<int32_t> currentPage_ {};
      // Maximum number of items per page in pagination queries.
      shared_ptr<int32_t> pageSize_ {};
      // Total number of items.
      shared_ptr<int32_t> totalCount_ {};
    };

    class List : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const List& obj) { 
        DARABONBA_PTR_TO_JSON(AttackType, attackType_);
        DARABONBA_PTR_TO_JSON(AttackTypeName, attackTypeName_);
        DARABONBA_PTR_TO_JSON(Count, count_);
        DARABONBA_PTR_TO_JSON(DstPort, dstPort_);
        DARABONBA_PTR_TO_JSON(FirstTime, firstTime_);
        DARABONBA_PTR_TO_JSON(FirstTimeStr, firstTimeStr_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_TO_JSON(InternetIp, internetIp_);
        DARABONBA_PTR_TO_JSON(IntranetIp, intranetIp_);
        DARABONBA_PTR_TO_JSON(LatestTime, latestTime_);
        DARABONBA_PTR_TO_JSON(LatestTimeStr, latestTimeStr_);
        DARABONBA_PTR_TO_JSON(PayloadMd5, payloadMd5_);
        DARABONBA_PTR_TO_JSON(SrcIp, srcIp_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Uuid, uuid_);
      };
      friend void from_json(const Darabonba::Json& j, List& obj) { 
        DARABONBA_PTR_FROM_JSON(AttackType, attackType_);
        DARABONBA_PTR_FROM_JSON(AttackTypeName, attackTypeName_);
        DARABONBA_PTR_FROM_JSON(Count, count_);
        DARABONBA_PTR_FROM_JSON(DstPort, dstPort_);
        DARABONBA_PTR_FROM_JSON(FirstTime, firstTime_);
        DARABONBA_PTR_FROM_JSON(FirstTimeStr, firstTimeStr_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_FROM_JSON(InternetIp, internetIp_);
        DARABONBA_PTR_FROM_JSON(IntranetIp, intranetIp_);
        DARABONBA_PTR_FROM_JSON(LatestTime, latestTime_);
        DARABONBA_PTR_FROM_JSON(LatestTimeStr, latestTimeStr_);
        DARABONBA_PTR_FROM_JSON(PayloadMd5, payloadMd5_);
        DARABONBA_PTR_FROM_JSON(SrcIp, srcIp_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
      };
      List() = default ;
      List(const List &) = default ;
      List(List &&) = default ;
      List(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~List() = default ;
      List& operator=(const List &) = default ;
      List& operator=(List &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->attackType_ == nullptr
        && this->attackTypeName_ == nullptr && this->count_ == nullptr && this->dstPort_ == nullptr && this->firstTime_ == nullptr && this->firstTimeStr_ == nullptr
        && this->id_ == nullptr && this->instanceName_ == nullptr && this->internetIp_ == nullptr && this->intranetIp_ == nullptr && this->latestTime_ == nullptr
        && this->latestTimeStr_ == nullptr && this->payloadMd5_ == nullptr && this->srcIp_ == nullptr && this->status_ == nullptr && this->uuid_ == nullptr; };
      // attackType Field Functions 
      bool hasAttackType() const { return this->attackType_ != nullptr;};
      void deleteAttackType() { this->attackType_ = nullptr;};
      inline string getAttackType() const { DARABONBA_PTR_GET_DEFAULT(attackType_, "") };
      inline List& setAttackType(string attackType) { DARABONBA_PTR_SET_VALUE(attackType_, attackType) };


      // attackTypeName Field Functions 
      bool hasAttackTypeName() const { return this->attackTypeName_ != nullptr;};
      void deleteAttackTypeName() { this->attackTypeName_ = nullptr;};
      inline string getAttackTypeName() const { DARABONBA_PTR_GET_DEFAULT(attackTypeName_, "") };
      inline List& setAttackTypeName(string attackTypeName) { DARABONBA_PTR_SET_VALUE(attackTypeName_, attackTypeName) };


      // count Field Functions 
      bool hasCount() const { return this->count_ != nullptr;};
      void deleteCount() { this->count_ = nullptr;};
      inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
      inline List& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


      // dstPort Field Functions 
      bool hasDstPort() const { return this->dstPort_ != nullptr;};
      void deleteDstPort() { this->dstPort_ = nullptr;};
      inline string getDstPort() const { DARABONBA_PTR_GET_DEFAULT(dstPort_, "") };
      inline List& setDstPort(string dstPort) { DARABONBA_PTR_SET_VALUE(dstPort_, dstPort) };


      // firstTime Field Functions 
      bool hasFirstTime() const { return this->firstTime_ != nullptr;};
      void deleteFirstTime() { this->firstTime_ = nullptr;};
      inline int64_t getFirstTime() const { DARABONBA_PTR_GET_DEFAULT(firstTime_, 0L) };
      inline List& setFirstTime(int64_t firstTime) { DARABONBA_PTR_SET_VALUE(firstTime_, firstTime) };


      // firstTimeStr Field Functions 
      bool hasFirstTimeStr() const { return this->firstTimeStr_ != nullptr;};
      void deleteFirstTimeStr() { this->firstTimeStr_ = nullptr;};
      inline string getFirstTimeStr() const { DARABONBA_PTR_GET_DEFAULT(firstTimeStr_, "") };
      inline List& setFirstTimeStr(string firstTimeStr) { DARABONBA_PTR_SET_VALUE(firstTimeStr_, firstTimeStr) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline List& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // instanceName Field Functions 
      bool hasInstanceName() const { return this->instanceName_ != nullptr;};
      void deleteInstanceName() { this->instanceName_ = nullptr;};
      inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
      inline List& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


      // internetIp Field Functions 
      bool hasInternetIp() const { return this->internetIp_ != nullptr;};
      void deleteInternetIp() { this->internetIp_ = nullptr;};
      inline string getInternetIp() const { DARABONBA_PTR_GET_DEFAULT(internetIp_, "") };
      inline List& setInternetIp(string internetIp) { DARABONBA_PTR_SET_VALUE(internetIp_, internetIp) };


      // intranetIp Field Functions 
      bool hasIntranetIp() const { return this->intranetIp_ != nullptr;};
      void deleteIntranetIp() { this->intranetIp_ = nullptr;};
      inline string getIntranetIp() const { DARABONBA_PTR_GET_DEFAULT(intranetIp_, "") };
      inline List& setIntranetIp(string intranetIp) { DARABONBA_PTR_SET_VALUE(intranetIp_, intranetIp) };


      // latestTime Field Functions 
      bool hasLatestTime() const { return this->latestTime_ != nullptr;};
      void deleteLatestTime() { this->latestTime_ = nullptr;};
      inline int64_t getLatestTime() const { DARABONBA_PTR_GET_DEFAULT(latestTime_, 0L) };
      inline List& setLatestTime(int64_t latestTime) { DARABONBA_PTR_SET_VALUE(latestTime_, latestTime) };


      // latestTimeStr Field Functions 
      bool hasLatestTimeStr() const { return this->latestTimeStr_ != nullptr;};
      void deleteLatestTimeStr() { this->latestTimeStr_ = nullptr;};
      inline string getLatestTimeStr() const { DARABONBA_PTR_GET_DEFAULT(latestTimeStr_, "") };
      inline List& setLatestTimeStr(string latestTimeStr) { DARABONBA_PTR_SET_VALUE(latestTimeStr_, latestTimeStr) };


      // payloadMd5 Field Functions 
      bool hasPayloadMd5() const { return this->payloadMd5_ != nullptr;};
      void deletePayloadMd5() { this->payloadMd5_ = nullptr;};
      inline string getPayloadMd5() const { DARABONBA_PTR_GET_DEFAULT(payloadMd5_, "") };
      inline List& setPayloadMd5(string payloadMd5) { DARABONBA_PTR_SET_VALUE(payloadMd5_, payloadMd5) };


      // srcIp Field Functions 
      bool hasSrcIp() const { return this->srcIp_ != nullptr;};
      void deleteSrcIp() { this->srcIp_ = nullptr;};
      inline string getSrcIp() const { DARABONBA_PTR_GET_DEFAULT(srcIp_, "") };
      inline List& setSrcIp(string srcIp) { DARABONBA_PTR_SET_VALUE(srcIp_, srcIp) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline List& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // uuid Field Functions 
      bool hasUuid() const { return this->uuid_ != nullptr;};
      void deleteUuid() { this->uuid_ = nullptr;};
      inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
      inline List& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


    protected:
      // Attack type. Values:
      // - 9: SQL Server brute force attack
      // - 5: SSH brute force attack
      // - 6: RDP brute force attack
      // - 101: Java Struts2 attack interception
      // - 102: Redis attack interception
      // - 103: Chinese AntSword WebShell communication
      // - 104: Chinese Chopper WebShell communication
      // - 133: XISE WebShell communication
      // - 161: WebShell upload
      // - 209: PHP WebShell upload
      // - 210: JSP WebShell upload
      // - 211: ASP WebShell upload
      // - 215: Special suffix WebShell upload
      // - ai_webshell: Intelligent defense for WebShell upload
      // - java_common_rce: Java common RCE vulnerability interception
      // - alinet_webrce: Adaptive web attack defense
      // - other: Other
      shared_ptr<string> attackType_ {};
      // Mapped name of the attack type. Values:
      // - 9: SQL Server brute force
      // - 5: SSH brute force
      // - 6: RDP brute force
      // - 101: Java Struts2 attack interception
      // - 102: Redis attack interception
      // - 103: Chinese AntSword WebShell communication
      // - 104: Chinese Chopper WebShell communication
      // - 133: XISE WebShell communication
      // - 161: WebShell upload
      // - 209: PHP WebShell upload
      // - 210: JSP WebShell upload
      // - 211: ASP WebShell upload
      // - 215: Special suffix WebShell upload
      // - ai_webshell: Intelligent defense for WebShell upload
      // - java_common_rce: Java common RCE vulnerability interception
      // - alinet_webrce: Adaptive web attack defense
      // - other: Other
      shared_ptr<string> attackTypeName_ {};
      // Number of attacks.
      shared_ptr<int32_t> count_ {};
      // Target port of the attack.
      shared_ptr<string> dstPort_ {};
      // First occurrence time of the attack event, in timestamp format.
      shared_ptr<int64_t> firstTime_ {};
      // String representation of the first occurrence time of the attack event.
      shared_ptr<string> firstTimeStr_ {};
      // ID of the attack event.
      shared_ptr<string> id_ {};
      // Instance name of the attacked asset.
      shared_ptr<string> instanceName_ {};
      // Public IP of the attacked asset.
      shared_ptr<string> internetIp_ {};
      // Private IP of the attacked asset.
      shared_ptr<string> intranetIp_ {};
      // Timestamp of the most recent occurrence of the attack event.
      shared_ptr<int64_t> latestTime_ {};
      // String representation of the most recent occurrence time of the attack event.
      shared_ptr<string> latestTimeStr_ {};
      // MD5 string of the attack payload.
      shared_ptr<string> payloadMd5_ {};
      // Source IP of the attack.
      shared_ptr<string> srcIp_ {};
      // Attack status. Values:
      // - block: Blocked (defended)
      shared_ptr<string> status_ {};
      // UUID of the attacked asset instance.
      shared_ptr<string> uuid_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpStatusCode_ == nullptr && this->list_ == nullptr && this->message_ == nullptr && this->pageInfo_ == nullptr && this->requestId_ == nullptr
        && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListAttackEventInfoResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListAttackEventInfoResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // list Field Functions 
    bool hasList() const { return this->list_ != nullptr;};
    void deleteList() { this->list_ = nullptr;};
    inline const vector<ListAttackEventInfoResponseBody::List> & getList() const { DARABONBA_PTR_GET_CONST(list_, vector<ListAttackEventInfoResponseBody::List>) };
    inline vector<ListAttackEventInfoResponseBody::List> getList() { DARABONBA_PTR_GET(list_, vector<ListAttackEventInfoResponseBody::List>) };
    inline ListAttackEventInfoResponseBody& setList(const vector<ListAttackEventInfoResponseBody::List> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
    inline ListAttackEventInfoResponseBody& setList(vector<ListAttackEventInfoResponseBody::List> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListAttackEventInfoResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const ListAttackEventInfoResponseBody::PageInfo & getPageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, ListAttackEventInfoResponseBody::PageInfo) };
    inline ListAttackEventInfoResponseBody::PageInfo getPageInfo() { DARABONBA_PTR_GET(pageInfo_, ListAttackEventInfoResponseBody::PageInfo) };
    inline ListAttackEventInfoResponseBody& setPageInfo(const ListAttackEventInfoResponseBody::PageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline ListAttackEventInfoResponseBody& setPageInfo(ListAttackEventInfoResponseBody::PageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAttackEventInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListAttackEventInfoResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // Result code, **200** indicates success, any other value indicates failure. The caller can use this field to determine the reason for the failure.
    shared_ptr<string> code_ {};
    // HTTP status code, 200 indicates a successful request.
    shared_ptr<int32_t> httpStatusCode_ {};
    // List of attack events.
    shared_ptr<vector<ListAttackEventInfoResponseBody::List>> list_ {};
    // Return message of the request result.
    shared_ptr<string> message_ {};
    // Pagination information.
    shared_ptr<ListAttackEventInfoResponseBody::PageInfo> pageInfo_ {};
    // The ID of this call request, a unique identifier generated by Alibaba Cloud for the request, which can be used to troubleshoot and pinpoint issues.
    shared_ptr<string> requestId_ {};
    // Indicates whether the API call was successful. Values:
    // - **true**: Success
    // - **false**: Failure
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
