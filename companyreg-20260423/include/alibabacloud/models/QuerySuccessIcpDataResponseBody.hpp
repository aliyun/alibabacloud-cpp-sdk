// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSUCCESSICPDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYSUCCESSICPDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Companyreg20260423
{
namespace Models
{
  class QuerySuccessIcpDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuerySuccessIcpDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BaSuccessDataWithRiskList, baSuccessDataWithRiskList_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QuerySuccessIcpDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BaSuccessDataWithRiskList, baSuccessDataWithRiskList_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QuerySuccessIcpDataResponseBody() = default ;
    QuerySuccessIcpDataResponseBody(const QuerySuccessIcpDataResponseBody &) = default ;
    QuerySuccessIcpDataResponseBody(QuerySuccessIcpDataResponseBody &&) = default ;
    QuerySuccessIcpDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuerySuccessIcpDataResponseBody() = default ;
    QuerySuccessIcpDataResponseBody& operator=(const QuerySuccessIcpDataResponseBody &) = default ;
    QuerySuccessIcpDataResponseBody& operator=(QuerySuccessIcpDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class BaSuccessDataWithRiskList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const BaSuccessDataWithRiskList& obj) { 
        DARABONBA_PTR_TO_JSON(AppList, appList_);
        DARABONBA_PTR_TO_JSON(IcpNumber, icpNumber_);
        DARABONBA_PTR_TO_JSON(OrganizersName, organizersName_);
        DARABONBA_PTR_TO_JSON(OrganizersNature, organizersNature_);
        DARABONBA_PTR_TO_JSON(ResponsiblePersonName, responsiblePersonName_);
        DARABONBA_PTR_TO_JSON(RiskList, riskList_);
        DARABONBA_PTR_TO_JSON(WebsiteList, websiteList_);
      };
      friend void from_json(const Darabonba::Json& j, BaSuccessDataWithRiskList& obj) { 
        DARABONBA_PTR_FROM_JSON(AppList, appList_);
        DARABONBA_PTR_FROM_JSON(IcpNumber, icpNumber_);
        DARABONBA_PTR_FROM_JSON(OrganizersName, organizersName_);
        DARABONBA_PTR_FROM_JSON(OrganizersNature, organizersNature_);
        DARABONBA_PTR_FROM_JSON(ResponsiblePersonName, responsiblePersonName_);
        DARABONBA_PTR_FROM_JSON(RiskList, riskList_);
        DARABONBA_PTR_FROM_JSON(WebsiteList, websiteList_);
      };
      BaSuccessDataWithRiskList() = default ;
      BaSuccessDataWithRiskList(const BaSuccessDataWithRiskList &) = default ;
      BaSuccessDataWithRiskList(BaSuccessDataWithRiskList &&) = default ;
      BaSuccessDataWithRiskList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~BaSuccessDataWithRiskList() = default ;
      BaSuccessDataWithRiskList& operator=(const BaSuccessDataWithRiskList &) = default ;
      BaSuccessDataWithRiskList& operator=(BaSuccessDataWithRiskList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class WebsiteList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const WebsiteList& obj) { 
          DARABONBA_PTR_TO_JSON(DomainList, domainList_);
          DARABONBA_PTR_TO_JSON(ResponsiblePersonName, responsiblePersonName_);
          DARABONBA_PTR_TO_JSON(SiteName, siteName_);
          DARABONBA_PTR_TO_JSON(SiteRecordNum, siteRecordNum_);
        };
        friend void from_json(const Darabonba::Json& j, WebsiteList& obj) { 
          DARABONBA_PTR_FROM_JSON(DomainList, domainList_);
          DARABONBA_PTR_FROM_JSON(ResponsiblePersonName, responsiblePersonName_);
          DARABONBA_PTR_FROM_JSON(SiteName, siteName_);
          DARABONBA_PTR_FROM_JSON(SiteRecordNum, siteRecordNum_);
        };
        WebsiteList() = default ;
        WebsiteList(const WebsiteList &) = default ;
        WebsiteList(WebsiteList &&) = default ;
        WebsiteList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~WebsiteList() = default ;
        WebsiteList& operator=(const WebsiteList &) = default ;
        WebsiteList& operator=(WebsiteList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->domainList_ == nullptr
        && this->responsiblePersonName_ == nullptr && this->siteName_ == nullptr && this->siteRecordNum_ == nullptr; };
        // domainList Field Functions 
        bool hasDomainList() const { return this->domainList_ != nullptr;};
        void deleteDomainList() { this->domainList_ = nullptr;};
        inline const vector<string> & getDomainList() const { DARABONBA_PTR_GET_CONST(domainList_, vector<string>) };
        inline vector<string> getDomainList() { DARABONBA_PTR_GET(domainList_, vector<string>) };
        inline WebsiteList& setDomainList(const vector<string> & domainList) { DARABONBA_PTR_SET_VALUE(domainList_, domainList) };
        inline WebsiteList& setDomainList(vector<string> && domainList) { DARABONBA_PTR_SET_RVALUE(domainList_, domainList) };


        // responsiblePersonName Field Functions 
        bool hasResponsiblePersonName() const { return this->responsiblePersonName_ != nullptr;};
        void deleteResponsiblePersonName() { this->responsiblePersonName_ = nullptr;};
        inline string getResponsiblePersonName() const { DARABONBA_PTR_GET_DEFAULT(responsiblePersonName_, "") };
        inline WebsiteList& setResponsiblePersonName(string responsiblePersonName) { DARABONBA_PTR_SET_VALUE(responsiblePersonName_, responsiblePersonName) };


        // siteName Field Functions 
        bool hasSiteName() const { return this->siteName_ != nullptr;};
        void deleteSiteName() { this->siteName_ = nullptr;};
        inline string getSiteName() const { DARABONBA_PTR_GET_DEFAULT(siteName_, "") };
        inline WebsiteList& setSiteName(string siteName) { DARABONBA_PTR_SET_VALUE(siteName_, siteName) };


        // siteRecordNum Field Functions 
        bool hasSiteRecordNum() const { return this->siteRecordNum_ != nullptr;};
        void deleteSiteRecordNum() { this->siteRecordNum_ = nullptr;};
        inline string getSiteRecordNum() const { DARABONBA_PTR_GET_DEFAULT(siteRecordNum_, "") };
        inline WebsiteList& setSiteRecordNum(string siteRecordNum) { DARABONBA_PTR_SET_VALUE(siteRecordNum_, siteRecordNum) };


      protected:
        shared_ptr<vector<string>> domainList_ {};
        shared_ptr<string> responsiblePersonName_ {};
        shared_ptr<string> siteName_ {};
        shared_ptr<string> siteRecordNum_ {};
      };

      class RiskList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RiskList& obj) { 
          DARABONBA_PTR_TO_JSON(DeadLine, deadLine_);
          DARABONBA_PTR_TO_JSON(RiskDetailList, riskDetailList_);
        };
        friend void from_json(const Darabonba::Json& j, RiskList& obj) { 
          DARABONBA_PTR_FROM_JSON(DeadLine, deadLine_);
          DARABONBA_PTR_FROM_JSON(RiskDetailList, riskDetailList_);
        };
        RiskList() = default ;
        RiskList(const RiskList &) = default ;
        RiskList(RiskList &&) = default ;
        RiskList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RiskList() = default ;
        RiskList& operator=(const RiskList &) = default ;
        RiskList& operator=(RiskList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class RiskDetailList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const RiskDetailList& obj) { 
            DARABONBA_PTR_TO_JSON(RectifySuggestList, rectifySuggestList_);
            DARABONBA_PTR_TO_JSON(RiskSource, riskSource_);
          };
          friend void from_json(const Darabonba::Json& j, RiskDetailList& obj) { 
            DARABONBA_PTR_FROM_JSON(RectifySuggestList, rectifySuggestList_);
            DARABONBA_PTR_FROM_JSON(RiskSource, riskSource_);
          };
          RiskDetailList() = default ;
          RiskDetailList(const RiskDetailList &) = default ;
          RiskDetailList(RiskDetailList &&) = default ;
          RiskDetailList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~RiskDetailList() = default ;
          RiskDetailList& operator=(const RiskDetailList &) = default ;
          RiskDetailList& operator=(RiskDetailList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->rectifySuggestList_ == nullptr
        && this->riskSource_ == nullptr; };
          // rectifySuggestList Field Functions 
          bool hasRectifySuggestList() const { return this->rectifySuggestList_ != nullptr;};
          void deleteRectifySuggestList() { this->rectifySuggestList_ = nullptr;};
          inline const vector<string> & getRectifySuggestList() const { DARABONBA_PTR_GET_CONST(rectifySuggestList_, vector<string>) };
          inline vector<string> getRectifySuggestList() { DARABONBA_PTR_GET(rectifySuggestList_, vector<string>) };
          inline RiskDetailList& setRectifySuggestList(const vector<string> & rectifySuggestList) { DARABONBA_PTR_SET_VALUE(rectifySuggestList_, rectifySuggestList) };
          inline RiskDetailList& setRectifySuggestList(vector<string> && rectifySuggestList) { DARABONBA_PTR_SET_RVALUE(rectifySuggestList_, rectifySuggestList) };


          // riskSource Field Functions 
          bool hasRiskSource() const { return this->riskSource_ != nullptr;};
          void deleteRiskSource() { this->riskSource_ = nullptr;};
          inline string getRiskSource() const { DARABONBA_PTR_GET_DEFAULT(riskSource_, "") };
          inline RiskDetailList& setRiskSource(string riskSource) { DARABONBA_PTR_SET_VALUE(riskSource_, riskSource) };


        protected:
          shared_ptr<vector<string>> rectifySuggestList_ {};
          shared_ptr<string> riskSource_ {};
        };

        virtual bool empty() const override { return this->deadLine_ == nullptr
        && this->riskDetailList_ == nullptr; };
        // deadLine Field Functions 
        bool hasDeadLine() const { return this->deadLine_ != nullptr;};
        void deleteDeadLine() { this->deadLine_ = nullptr;};
        inline string getDeadLine() const { DARABONBA_PTR_GET_DEFAULT(deadLine_, "") };
        inline RiskList& setDeadLine(string deadLine) { DARABONBA_PTR_SET_VALUE(deadLine_, deadLine) };


        // riskDetailList Field Functions 
        bool hasRiskDetailList() const { return this->riskDetailList_ != nullptr;};
        void deleteRiskDetailList() { this->riskDetailList_ = nullptr;};
        inline const vector<RiskList::RiskDetailList> & getRiskDetailList() const { DARABONBA_PTR_GET_CONST(riskDetailList_, vector<RiskList::RiskDetailList>) };
        inline vector<RiskList::RiskDetailList> getRiskDetailList() { DARABONBA_PTR_GET(riskDetailList_, vector<RiskList::RiskDetailList>) };
        inline RiskList& setRiskDetailList(const vector<RiskList::RiskDetailList> & riskDetailList) { DARABONBA_PTR_SET_VALUE(riskDetailList_, riskDetailList) };
        inline RiskList& setRiskDetailList(vector<RiskList::RiskDetailList> && riskDetailList) { DARABONBA_PTR_SET_RVALUE(riskDetailList_, riskDetailList) };


      protected:
        shared_ptr<string> deadLine_ {};
        shared_ptr<vector<RiskList::RiskDetailList>> riskDetailList_ {};
      };

      class AppList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AppList& obj) { 
          DARABONBA_PTR_TO_JSON(AppName, appName_);
          DARABONBA_PTR_TO_JSON(AppRecordNum, appRecordNum_);
          DARABONBA_PTR_TO_JSON(DomainList, domainList_);
          DARABONBA_PTR_TO_JSON(ResponsiblePersonName, responsiblePersonName_);
        };
        friend void from_json(const Darabonba::Json& j, AppList& obj) { 
          DARABONBA_PTR_FROM_JSON(AppName, appName_);
          DARABONBA_PTR_FROM_JSON(AppRecordNum, appRecordNum_);
          DARABONBA_PTR_FROM_JSON(DomainList, domainList_);
          DARABONBA_PTR_FROM_JSON(ResponsiblePersonName, responsiblePersonName_);
        };
        AppList() = default ;
        AppList(const AppList &) = default ;
        AppList(AppList &&) = default ;
        AppList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AppList() = default ;
        AppList& operator=(const AppList &) = default ;
        AppList& operator=(AppList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->appName_ == nullptr
        && this->appRecordNum_ == nullptr && this->domainList_ == nullptr && this->responsiblePersonName_ == nullptr; };
        // appName Field Functions 
        bool hasAppName() const { return this->appName_ != nullptr;};
        void deleteAppName() { this->appName_ = nullptr;};
        inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
        inline AppList& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


        // appRecordNum Field Functions 
        bool hasAppRecordNum() const { return this->appRecordNum_ != nullptr;};
        void deleteAppRecordNum() { this->appRecordNum_ = nullptr;};
        inline string getAppRecordNum() const { DARABONBA_PTR_GET_DEFAULT(appRecordNum_, "") };
        inline AppList& setAppRecordNum(string appRecordNum) { DARABONBA_PTR_SET_VALUE(appRecordNum_, appRecordNum) };


        // domainList Field Functions 
        bool hasDomainList() const { return this->domainList_ != nullptr;};
        void deleteDomainList() { this->domainList_ = nullptr;};
        inline const vector<string> & getDomainList() const { DARABONBA_PTR_GET_CONST(domainList_, vector<string>) };
        inline vector<string> getDomainList() { DARABONBA_PTR_GET(domainList_, vector<string>) };
        inline AppList& setDomainList(const vector<string> & domainList) { DARABONBA_PTR_SET_VALUE(domainList_, domainList) };
        inline AppList& setDomainList(vector<string> && domainList) { DARABONBA_PTR_SET_RVALUE(domainList_, domainList) };


        // responsiblePersonName Field Functions 
        bool hasResponsiblePersonName() const { return this->responsiblePersonName_ != nullptr;};
        void deleteResponsiblePersonName() { this->responsiblePersonName_ = nullptr;};
        inline string getResponsiblePersonName() const { DARABONBA_PTR_GET_DEFAULT(responsiblePersonName_, "") };
        inline AppList& setResponsiblePersonName(string responsiblePersonName) { DARABONBA_PTR_SET_VALUE(responsiblePersonName_, responsiblePersonName) };


      protected:
        shared_ptr<string> appName_ {};
        shared_ptr<string> appRecordNum_ {};
        shared_ptr<vector<string>> domainList_ {};
        shared_ptr<string> responsiblePersonName_ {};
      };

      virtual bool empty() const override { return this->appList_ == nullptr
        && this->icpNumber_ == nullptr && this->organizersName_ == nullptr && this->organizersNature_ == nullptr && this->responsiblePersonName_ == nullptr && this->riskList_ == nullptr
        && this->websiteList_ == nullptr; };
      // appList Field Functions 
      bool hasAppList() const { return this->appList_ != nullptr;};
      void deleteAppList() { this->appList_ = nullptr;};
      inline const vector<BaSuccessDataWithRiskList::AppList> & getAppList() const { DARABONBA_PTR_GET_CONST(appList_, vector<BaSuccessDataWithRiskList::AppList>) };
      inline vector<BaSuccessDataWithRiskList::AppList> getAppList() { DARABONBA_PTR_GET(appList_, vector<BaSuccessDataWithRiskList::AppList>) };
      inline BaSuccessDataWithRiskList& setAppList(const vector<BaSuccessDataWithRiskList::AppList> & appList) { DARABONBA_PTR_SET_VALUE(appList_, appList) };
      inline BaSuccessDataWithRiskList& setAppList(vector<BaSuccessDataWithRiskList::AppList> && appList) { DARABONBA_PTR_SET_RVALUE(appList_, appList) };


      // icpNumber Field Functions 
      bool hasIcpNumber() const { return this->icpNumber_ != nullptr;};
      void deleteIcpNumber() { this->icpNumber_ = nullptr;};
      inline string getIcpNumber() const { DARABONBA_PTR_GET_DEFAULT(icpNumber_, "") };
      inline BaSuccessDataWithRiskList& setIcpNumber(string icpNumber) { DARABONBA_PTR_SET_VALUE(icpNumber_, icpNumber) };


      // organizersName Field Functions 
      bool hasOrganizersName() const { return this->organizersName_ != nullptr;};
      void deleteOrganizersName() { this->organizersName_ = nullptr;};
      inline string getOrganizersName() const { DARABONBA_PTR_GET_DEFAULT(organizersName_, "") };
      inline BaSuccessDataWithRiskList& setOrganizersName(string organizersName) { DARABONBA_PTR_SET_VALUE(organizersName_, organizersName) };


      // organizersNature Field Functions 
      bool hasOrganizersNature() const { return this->organizersNature_ != nullptr;};
      void deleteOrganizersNature() { this->organizersNature_ = nullptr;};
      inline string getOrganizersNature() const { DARABONBA_PTR_GET_DEFAULT(organizersNature_, "") };
      inline BaSuccessDataWithRiskList& setOrganizersNature(string organizersNature) { DARABONBA_PTR_SET_VALUE(organizersNature_, organizersNature) };


      // responsiblePersonName Field Functions 
      bool hasResponsiblePersonName() const { return this->responsiblePersonName_ != nullptr;};
      void deleteResponsiblePersonName() { this->responsiblePersonName_ = nullptr;};
      inline string getResponsiblePersonName() const { DARABONBA_PTR_GET_DEFAULT(responsiblePersonName_, "") };
      inline BaSuccessDataWithRiskList& setResponsiblePersonName(string responsiblePersonName) { DARABONBA_PTR_SET_VALUE(responsiblePersonName_, responsiblePersonName) };


      // riskList Field Functions 
      bool hasRiskList() const { return this->riskList_ != nullptr;};
      void deleteRiskList() { this->riskList_ = nullptr;};
      inline const vector<BaSuccessDataWithRiskList::RiskList> & getRiskList() const { DARABONBA_PTR_GET_CONST(riskList_, vector<BaSuccessDataWithRiskList::RiskList>) };
      inline vector<BaSuccessDataWithRiskList::RiskList> getRiskList() { DARABONBA_PTR_GET(riskList_, vector<BaSuccessDataWithRiskList::RiskList>) };
      inline BaSuccessDataWithRiskList& setRiskList(const vector<BaSuccessDataWithRiskList::RiskList> & riskList) { DARABONBA_PTR_SET_VALUE(riskList_, riskList) };
      inline BaSuccessDataWithRiskList& setRiskList(vector<BaSuccessDataWithRiskList::RiskList> && riskList) { DARABONBA_PTR_SET_RVALUE(riskList_, riskList) };


      // websiteList Field Functions 
      bool hasWebsiteList() const { return this->websiteList_ != nullptr;};
      void deleteWebsiteList() { this->websiteList_ = nullptr;};
      inline const vector<BaSuccessDataWithRiskList::WebsiteList> & getWebsiteList() const { DARABONBA_PTR_GET_CONST(websiteList_, vector<BaSuccessDataWithRiskList::WebsiteList>) };
      inline vector<BaSuccessDataWithRiskList::WebsiteList> getWebsiteList() { DARABONBA_PTR_GET(websiteList_, vector<BaSuccessDataWithRiskList::WebsiteList>) };
      inline BaSuccessDataWithRiskList& setWebsiteList(const vector<BaSuccessDataWithRiskList::WebsiteList> & websiteList) { DARABONBA_PTR_SET_VALUE(websiteList_, websiteList) };
      inline BaSuccessDataWithRiskList& setWebsiteList(vector<BaSuccessDataWithRiskList::WebsiteList> && websiteList) { DARABONBA_PTR_SET_RVALUE(websiteList_, websiteList) };


    protected:
      shared_ptr<vector<BaSuccessDataWithRiskList::AppList>> appList_ {};
      shared_ptr<string> icpNumber_ {};
      shared_ptr<string> organizersName_ {};
      shared_ptr<string> organizersNature_ {};
      shared_ptr<string> responsiblePersonName_ {};
      shared_ptr<vector<BaSuccessDataWithRiskList::RiskList>> riskList_ {};
      shared_ptr<vector<BaSuccessDataWithRiskList::WebsiteList>> websiteList_ {};
    };

    virtual bool empty() const override { return this->baSuccessDataWithRiskList_ == nullptr
        && this->errorCode_ == nullptr && this->errorMessage_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // baSuccessDataWithRiskList Field Functions 
    bool hasBaSuccessDataWithRiskList() const { return this->baSuccessDataWithRiskList_ != nullptr;};
    void deleteBaSuccessDataWithRiskList() { this->baSuccessDataWithRiskList_ = nullptr;};
    inline const vector<QuerySuccessIcpDataResponseBody::BaSuccessDataWithRiskList> & getBaSuccessDataWithRiskList() const { DARABONBA_PTR_GET_CONST(baSuccessDataWithRiskList_, vector<QuerySuccessIcpDataResponseBody::BaSuccessDataWithRiskList>) };
    inline vector<QuerySuccessIcpDataResponseBody::BaSuccessDataWithRiskList> getBaSuccessDataWithRiskList() { DARABONBA_PTR_GET(baSuccessDataWithRiskList_, vector<QuerySuccessIcpDataResponseBody::BaSuccessDataWithRiskList>) };
    inline QuerySuccessIcpDataResponseBody& setBaSuccessDataWithRiskList(const vector<QuerySuccessIcpDataResponseBody::BaSuccessDataWithRiskList> & baSuccessDataWithRiskList) { DARABONBA_PTR_SET_VALUE(baSuccessDataWithRiskList_, baSuccessDataWithRiskList) };
    inline QuerySuccessIcpDataResponseBody& setBaSuccessDataWithRiskList(vector<QuerySuccessIcpDataResponseBody::BaSuccessDataWithRiskList> && baSuccessDataWithRiskList) { DARABONBA_PTR_SET_RVALUE(baSuccessDataWithRiskList_, baSuccessDataWithRiskList) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline int32_t getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, 0) };
    inline QuerySuccessIcpDataResponseBody& setErrorCode(int32_t errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline QuerySuccessIcpDataResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QuerySuccessIcpDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QuerySuccessIcpDataResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<vector<QuerySuccessIcpDataResponseBody::BaSuccessDataWithRiskList>> baSuccessDataWithRiskList_ {};
    shared_ptr<int32_t> errorCode_ {};
    shared_ptr<string> errorMessage_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Companyreg20260423
#endif
