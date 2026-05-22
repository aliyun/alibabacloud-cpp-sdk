// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCEQUOTASWITHUSAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCEQUOTASWITHUSAGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class ListInstanceQuotasWithUsageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstanceQuotasWithUsageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Quotas, quotas_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstanceQuotasWithUsageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Quotas, quotas_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ListInstanceQuotasWithUsageResponseBody() = default ;
    ListInstanceQuotasWithUsageResponseBody(const ListInstanceQuotasWithUsageResponseBody &) = default ;
    ListInstanceQuotasWithUsageResponseBody(ListInstanceQuotasWithUsageResponseBody &&) = default ;
    ListInstanceQuotasWithUsageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstanceQuotasWithUsageResponseBody() = default ;
    ListInstanceQuotasWithUsageResponseBody& operator=(const ListInstanceQuotasWithUsageResponseBody &) = default ;
    ListInstanceQuotasWithUsageResponseBody& operator=(ListInstanceQuotasWithUsageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Quotas : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Quotas& obj) { 
        DARABONBA_PTR_TO_JSON(QuotaName, quotaName_);
        DARABONBA_PTR_TO_JSON(QuotaValue, quotaValue_);
        DARABONBA_PTR_TO_JSON(SiteUsage, siteUsage_);
        DARABONBA_PTR_TO_JSON(Usage, usage_);
      };
      friend void from_json(const Darabonba::Json& j, Quotas& obj) { 
        DARABONBA_PTR_FROM_JSON(QuotaName, quotaName_);
        DARABONBA_PTR_FROM_JSON(QuotaValue, quotaValue_);
        DARABONBA_PTR_FROM_JSON(SiteUsage, siteUsage_);
        DARABONBA_PTR_FROM_JSON(Usage, usage_);
      };
      Quotas() = default ;
      Quotas(const Quotas &) = default ;
      Quotas(Quotas &&) = default ;
      Quotas(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Quotas() = default ;
      Quotas& operator=(const Quotas &) = default ;
      Quotas& operator=(Quotas &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SiteUsage : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SiteUsage& obj) { 
          DARABONBA_PTR_TO_JSON(SiteId, siteId_);
          DARABONBA_PTR_TO_JSON(SiteName, siteName_);
          DARABONBA_PTR_TO_JSON(SiteUsage, siteUsage_);
        };
        friend void from_json(const Darabonba::Json& j, SiteUsage& obj) { 
          DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
          DARABONBA_PTR_FROM_JSON(SiteName, siteName_);
          DARABONBA_PTR_FROM_JSON(SiteUsage, siteUsage_);
        };
        SiteUsage() = default ;
        SiteUsage(const SiteUsage &) = default ;
        SiteUsage(SiteUsage &&) = default ;
        SiteUsage(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SiteUsage() = default ;
        SiteUsage& operator=(const SiteUsage &) = default ;
        SiteUsage& operator=(SiteUsage &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->siteId_ == nullptr
        && this->siteName_ == nullptr && this->siteUsage_ == nullptr; };
        // siteId Field Functions 
        bool hasSiteId() const { return this->siteId_ != nullptr;};
        void deleteSiteId() { this->siteId_ = nullptr;};
        inline int64_t getSiteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
        inline SiteUsage& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


        // siteName Field Functions 
        bool hasSiteName() const { return this->siteName_ != nullptr;};
        void deleteSiteName() { this->siteName_ = nullptr;};
        inline string getSiteName() const { DARABONBA_PTR_GET_DEFAULT(siteName_, "") };
        inline SiteUsage& setSiteName(string siteName) { DARABONBA_PTR_SET_VALUE(siteName_, siteName) };


        // siteUsage Field Functions 
        bool hasSiteUsage() const { return this->siteUsage_ != nullptr;};
        void deleteSiteUsage() { this->siteUsage_ = nullptr;};
        inline string getSiteUsage() const { DARABONBA_PTR_GET_DEFAULT(siteUsage_, "") };
        inline SiteUsage& setSiteUsage(string siteUsage) { DARABONBA_PTR_SET_VALUE(siteUsage_, siteUsage) };


      protected:
        // The website ID.
        shared_ptr<int64_t> siteId_ {};
        // The website name.
        shared_ptr<string> siteName_ {};
        // The quota usage of the website.
        shared_ptr<string> siteUsage_ {};
      };

      virtual bool empty() const override { return this->quotaName_ == nullptr
        && this->quotaValue_ == nullptr && this->siteUsage_ == nullptr && this->usage_ == nullptr; };
      // quotaName Field Functions 
      bool hasQuotaName() const { return this->quotaName_ != nullptr;};
      void deleteQuotaName() { this->quotaName_ = nullptr;};
      inline string getQuotaName() const { DARABONBA_PTR_GET_DEFAULT(quotaName_, "") };
      inline Quotas& setQuotaName(string quotaName) { DARABONBA_PTR_SET_VALUE(quotaName_, quotaName) };


      // quotaValue Field Functions 
      bool hasQuotaValue() const { return this->quotaValue_ != nullptr;};
      void deleteQuotaValue() { this->quotaValue_ = nullptr;};
      inline string getQuotaValue() const { DARABONBA_PTR_GET_DEFAULT(quotaValue_, "") };
      inline Quotas& setQuotaValue(string quotaValue) { DARABONBA_PTR_SET_VALUE(quotaValue_, quotaValue) };


      // siteUsage Field Functions 
      bool hasSiteUsage() const { return this->siteUsage_ != nullptr;};
      void deleteSiteUsage() { this->siteUsage_ = nullptr;};
      inline const vector<Quotas::SiteUsage> & getSiteUsage() const { DARABONBA_PTR_GET_CONST(siteUsage_, vector<Quotas::SiteUsage>) };
      inline vector<Quotas::SiteUsage> getSiteUsage() { DARABONBA_PTR_GET(siteUsage_, vector<Quotas::SiteUsage>) };
      inline Quotas& setSiteUsage(const vector<Quotas::SiteUsage> & siteUsage) { DARABONBA_PTR_SET_VALUE(siteUsage_, siteUsage) };
      inline Quotas& setSiteUsage(vector<Quotas::SiteUsage> && siteUsage) { DARABONBA_PTR_SET_RVALUE(siteUsage_, siteUsage) };


      // usage Field Functions 
      bool hasUsage() const { return this->usage_ != nullptr;};
      void deleteUsage() { this->usage_ = nullptr;};
      inline string getUsage() const { DARABONBA_PTR_GET_DEFAULT(usage_, "") };
      inline Quotas& setUsage(string usage) { DARABONBA_PTR_SET_VALUE(usage_, usage) };


    protected:
      // The quota name.
      shared_ptr<string> quotaName_ {};
      // The quota value.
      shared_ptr<string> quotaValue_ {};
      // The usage of the quota in each website associated with the plan.
      shared_ptr<vector<Quotas::SiteUsage>> siteUsage_ {};
      // The quota usage.
      shared_ptr<string> usage_ {};
    };

    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->quotas_ == nullptr && this->requestId_ == nullptr && this->status_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListInstanceQuotasWithUsageResponseBody& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // quotas Field Functions 
    bool hasQuotas() const { return this->quotas_ != nullptr;};
    void deleteQuotas() { this->quotas_ = nullptr;};
    inline const vector<ListInstanceQuotasWithUsageResponseBody::Quotas> & getQuotas() const { DARABONBA_PTR_GET_CONST(quotas_, vector<ListInstanceQuotasWithUsageResponseBody::Quotas>) };
    inline vector<ListInstanceQuotasWithUsageResponseBody::Quotas> getQuotas() { DARABONBA_PTR_GET(quotas_, vector<ListInstanceQuotasWithUsageResponseBody::Quotas>) };
    inline ListInstanceQuotasWithUsageResponseBody& setQuotas(const vector<ListInstanceQuotasWithUsageResponseBody::Quotas> & quotas) { DARABONBA_PTR_SET_VALUE(quotas_, quotas) };
    inline ListInstanceQuotasWithUsageResponseBody& setQuotas(vector<ListInstanceQuotasWithUsageResponseBody::Quotas> && quotas) { DARABONBA_PTR_SET_RVALUE(quotas_, quotas) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListInstanceQuotasWithUsageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListInstanceQuotasWithUsageResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The plan ID.[](~~2850189~~)
    shared_ptr<string> instanceId_ {};
    // The quotas and their actual usage in the plan.
    shared_ptr<vector<ListInstanceQuotasWithUsageResponseBody::Quotas>> quotas_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The plan status. Valid values:
    // 
    // *   online: The plan is in service.
    // *   offline: The plan has expired within an allowable period. In this state, the plan is unavailable.
    // *   disable: The plan is released.
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
