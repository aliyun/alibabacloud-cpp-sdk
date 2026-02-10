// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTHONEYPOTATTACKERPORTRAITRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTHONEYPOTATTACKERPORTRAITRESPONSEBODY_HPP_
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
  class ListHoneypotAttackerPortraitResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListHoneypotAttackerPortraitResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(List, list_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListHoneypotAttackerPortraitResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(List, list_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListHoneypotAttackerPortraitResponseBody() = default ;
    ListHoneypotAttackerPortraitResponseBody(const ListHoneypotAttackerPortraitResponseBody &) = default ;
    ListHoneypotAttackerPortraitResponseBody(ListHoneypotAttackerPortraitResponseBody &&) = default ;
    ListHoneypotAttackerPortraitResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListHoneypotAttackerPortraitResponseBody() = default ;
    ListHoneypotAttackerPortraitResponseBody& operator=(const ListHoneypotAttackerPortraitResponseBody &) = default ;
    ListHoneypotAttackerPortraitResponseBody& operator=(ListHoneypotAttackerPortraitResponseBody &&) = default ;
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
      // The number of entries returned on the current page.
      shared_ptr<int32_t> count_ {};
      // The page number.
      shared_ptr<int32_t> currentPage_ {};
      // The number of entries per page.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of entries returned.
      shared_ptr<int32_t> totalCount_ {};
    };

    class List : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const List& obj) { 
        DARABONBA_PTR_TO_JSON(AttackCount, attackCount_);
        DARABONBA_PTR_TO_JSON(Browser, browser_);
        DARABONBA_PTR_TO_JSON(Host, host_);
        DARABONBA_PTR_TO_JSON(LastTime, lastTime_);
        DARABONBA_PTR_TO_JSON(Network, network_);
        DARABONBA_PTR_TO_JSON(PortraitId, portraitId_);
        DARABONBA_PTR_TO_JSON(Social, social_);
      };
      friend void from_json(const Darabonba::Json& j, List& obj) { 
        DARABONBA_PTR_FROM_JSON(AttackCount, attackCount_);
        DARABONBA_PTR_FROM_JSON(Browser, browser_);
        DARABONBA_PTR_FROM_JSON(Host, host_);
        DARABONBA_PTR_FROM_JSON(LastTime, lastTime_);
        DARABONBA_PTR_FROM_JSON(Network, network_);
        DARABONBA_PTR_FROM_JSON(PortraitId, portraitId_);
        DARABONBA_PTR_FROM_JSON(Social, social_);
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
      class Network : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Network& obj) { 
          DARABONBA_PTR_TO_JSON(ExternalIp, externalIp_);
          DARABONBA_PTR_TO_JSON(InternalIp, internalIp_);
          DARABONBA_PTR_TO_JSON(RealIp, realIp_);
        };
        friend void from_json(const Darabonba::Json& j, Network& obj) { 
          DARABONBA_PTR_FROM_JSON(ExternalIp, externalIp_);
          DARABONBA_PTR_FROM_JSON(InternalIp, internalIp_);
          DARABONBA_PTR_FROM_JSON(RealIp, realIp_);
        };
        Network() = default ;
        Network(const Network &) = default ;
        Network(Network &&) = default ;
        Network(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Network() = default ;
        Network& operator=(const Network &) = default ;
        Network& operator=(Network &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->externalIp_ == nullptr
        && this->internalIp_ == nullptr && this->realIp_ == nullptr; };
        // externalIp Field Functions 
        bool hasExternalIp() const { return this->externalIp_ != nullptr;};
        void deleteExternalIp() { this->externalIp_ = nullptr;};
        inline const vector<string> & getExternalIp() const { DARABONBA_PTR_GET_CONST(externalIp_, vector<string>) };
        inline vector<string> getExternalIp() { DARABONBA_PTR_GET(externalIp_, vector<string>) };
        inline Network& setExternalIp(const vector<string> & externalIp) { DARABONBA_PTR_SET_VALUE(externalIp_, externalIp) };
        inline Network& setExternalIp(vector<string> && externalIp) { DARABONBA_PTR_SET_RVALUE(externalIp_, externalIp) };


        // internalIp Field Functions 
        bool hasInternalIp() const { return this->internalIp_ != nullptr;};
        void deleteInternalIp() { this->internalIp_ = nullptr;};
        inline const vector<string> & getInternalIp() const { DARABONBA_PTR_GET_CONST(internalIp_, vector<string>) };
        inline vector<string> getInternalIp() { DARABONBA_PTR_GET(internalIp_, vector<string>) };
        inline Network& setInternalIp(const vector<string> & internalIp) { DARABONBA_PTR_SET_VALUE(internalIp_, internalIp) };
        inline Network& setInternalIp(vector<string> && internalIp) { DARABONBA_PTR_SET_RVALUE(internalIp_, internalIp) };


        // realIp Field Functions 
        bool hasRealIp() const { return this->realIp_ != nullptr;};
        void deleteRealIp() { this->realIp_ = nullptr;};
        inline const vector<string> & getRealIp() const { DARABONBA_PTR_GET_CONST(realIp_, vector<string>) };
        inline vector<string> getRealIp() { DARABONBA_PTR_GET(realIp_, vector<string>) };
        inline Network& setRealIp(const vector<string> & realIp) { DARABONBA_PTR_SET_VALUE(realIp_, realIp) };
        inline Network& setRealIp(vector<string> && realIp) { DARABONBA_PTR_SET_RVALUE(realIp_, realIp) };


      protected:
        // The public IP addresses.
        shared_ptr<vector<string>> externalIp_ {};
        // The private IP addresses.
        shared_ptr<vector<string>> internalIp_ {};
        // The originating IP addresses.
        shared_ptr<vector<string>> realIp_ {};
      };

      virtual bool empty() const override { return this->attackCount_ == nullptr
        && this->browser_ == nullptr && this->host_ == nullptr && this->lastTime_ == nullptr && this->network_ == nullptr && this->portraitId_ == nullptr
        && this->social_ == nullptr; };
      // attackCount Field Functions 
      bool hasAttackCount() const { return this->attackCount_ != nullptr;};
      void deleteAttackCount() { this->attackCount_ = nullptr;};
      inline int32_t getAttackCount() const { DARABONBA_PTR_GET_DEFAULT(attackCount_, 0) };
      inline List& setAttackCount(int32_t attackCount) { DARABONBA_PTR_SET_VALUE(attackCount_, attackCount) };


      // browser Field Functions 
      bool hasBrowser() const { return this->browser_ != nullptr;};
      void deleteBrowser() { this->browser_ = nullptr;};
      inline const vector<string> & getBrowser() const { DARABONBA_PTR_GET_CONST(browser_, vector<string>) };
      inline vector<string> getBrowser() { DARABONBA_PTR_GET(browser_, vector<string>) };
      inline List& setBrowser(const vector<string> & browser) { DARABONBA_PTR_SET_VALUE(browser_, browser) };
      inline List& setBrowser(vector<string> && browser) { DARABONBA_PTR_SET_RVALUE(browser_, browser) };


      // host Field Functions 
      bool hasHost() const { return this->host_ != nullptr;};
      void deleteHost() { this->host_ = nullptr;};
      inline const vector<string> & getHost() const { DARABONBA_PTR_GET_CONST(host_, vector<string>) };
      inline vector<string> getHost() { DARABONBA_PTR_GET(host_, vector<string>) };
      inline List& setHost(const vector<string> & host) { DARABONBA_PTR_SET_VALUE(host_, host) };
      inline List& setHost(vector<string> && host) { DARABONBA_PTR_SET_RVALUE(host_, host) };


      // lastTime Field Functions 
      bool hasLastTime() const { return this->lastTime_ != nullptr;};
      void deleteLastTime() { this->lastTime_ = nullptr;};
      inline int64_t getLastTime() const { DARABONBA_PTR_GET_DEFAULT(lastTime_, 0L) };
      inline List& setLastTime(int64_t lastTime) { DARABONBA_PTR_SET_VALUE(lastTime_, lastTime) };


      // network Field Functions 
      bool hasNetwork() const { return this->network_ != nullptr;};
      void deleteNetwork() { this->network_ = nullptr;};
      inline const List::Network & getNetwork() const { DARABONBA_PTR_GET_CONST(network_, List::Network) };
      inline List::Network getNetwork() { DARABONBA_PTR_GET(network_, List::Network) };
      inline List& setNetwork(const List::Network & network) { DARABONBA_PTR_SET_VALUE(network_, network) };
      inline List& setNetwork(List::Network && network) { DARABONBA_PTR_SET_RVALUE(network_, network) };


      // portraitId Field Functions 
      bool hasPortraitId() const { return this->portraitId_ != nullptr;};
      void deletePortraitId() { this->portraitId_ = nullptr;};
      inline string getPortraitId() const { DARABONBA_PTR_GET_DEFAULT(portraitId_, "") };
      inline List& setPortraitId(string portraitId) { DARABONBA_PTR_SET_VALUE(portraitId_, portraitId) };


      // social Field Functions 
      bool hasSocial() const { return this->social_ != nullptr;};
      void deleteSocial() { this->social_ = nullptr;};
      inline const vector<string> & getSocial() const { DARABONBA_PTR_GET_CONST(social_, vector<string>) };
      inline vector<string> getSocial() { DARABONBA_PTR_GET(social_, vector<string>) };
      inline List& setSocial(const vector<string> & social) { DARABONBA_PTR_SET_VALUE(social_, social) };
      inline List& setSocial(vector<string> && social) { DARABONBA_PTR_SET_RVALUE(social_, social) };


    protected:
      // The number of attacks.
      shared_ptr<int32_t> attackCount_ {};
      // The information about the browsers of the attack source.
      shared_ptr<vector<string>> browser_ {};
      // The information about the hosts of the attack source.
      shared_ptr<vector<string>> host_ {};
      // The timestamp at which the attack was last detected. Unit: milliseconds.
      shared_ptr<int64_t> lastTime_ {};
      // The network information about the attack source.
      shared_ptr<List::Network> network_ {};
      // The attacker profile ID.
      shared_ptr<string> portraitId_ {};
      // The social information about the attack source.
      shared_ptr<vector<string>> social_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpStatusCode_ == nullptr && this->list_ == nullptr && this->message_ == nullptr && this->pageInfo_ == nullptr && this->requestId_ == nullptr
        && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListHoneypotAttackerPortraitResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListHoneypotAttackerPortraitResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // list Field Functions 
    bool hasList() const { return this->list_ != nullptr;};
    void deleteList() { this->list_ = nullptr;};
    inline const vector<ListHoneypotAttackerPortraitResponseBody::List> & getList() const { DARABONBA_PTR_GET_CONST(list_, vector<ListHoneypotAttackerPortraitResponseBody::List>) };
    inline vector<ListHoneypotAttackerPortraitResponseBody::List> getList() { DARABONBA_PTR_GET(list_, vector<ListHoneypotAttackerPortraitResponseBody::List>) };
    inline ListHoneypotAttackerPortraitResponseBody& setList(const vector<ListHoneypotAttackerPortraitResponseBody::List> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
    inline ListHoneypotAttackerPortraitResponseBody& setList(vector<ListHoneypotAttackerPortraitResponseBody::List> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListHoneypotAttackerPortraitResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const ListHoneypotAttackerPortraitResponseBody::PageInfo & getPageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, ListHoneypotAttackerPortraitResponseBody::PageInfo) };
    inline ListHoneypotAttackerPortraitResponseBody::PageInfo getPageInfo() { DARABONBA_PTR_GET(pageInfo_, ListHoneypotAttackerPortraitResponseBody::PageInfo) };
    inline ListHoneypotAttackerPortraitResponseBody& setPageInfo(const ListHoneypotAttackerPortraitResponseBody::PageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline ListHoneypotAttackerPortraitResponseBody& setPageInfo(ListHoneypotAttackerPortraitResponseBody::PageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListHoneypotAttackerPortraitResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListHoneypotAttackerPortraitResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The status code that is returned. The status code **200** indicates that the request was successful. Other status codes indicate that the request failed. You can identify the cause of the failure based on the status code.
    shared_ptr<string> code_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The details of the attacker profile.
    shared_ptr<vector<ListHoneypotAttackerPortraitResponseBody::List>> list_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // The pagination information.
    shared_ptr<ListHoneypotAttackerPortraitResponseBody::PageInfo> pageInfo_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**
    // *   **false**
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
