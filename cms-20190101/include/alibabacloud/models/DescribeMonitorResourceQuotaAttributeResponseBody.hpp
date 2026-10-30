// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMONITORRESOURCEQUOTAATTRIBUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMONITORRESOURCEQUOTAATTRIBUTERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeMonitorResourceQuotaAttributeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMonitorResourceQuotaAttributeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceQuota, resourceQuota_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMonitorResourceQuotaAttributeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceQuota, resourceQuota_);
    };
    DescribeMonitorResourceQuotaAttributeResponseBody() = default ;
    DescribeMonitorResourceQuotaAttributeResponseBody(const DescribeMonitorResourceQuotaAttributeResponseBody &) = default ;
    DescribeMonitorResourceQuotaAttributeResponseBody(DescribeMonitorResourceQuotaAttributeResponseBody &&) = default ;
    DescribeMonitorResourceQuotaAttributeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMonitorResourceQuotaAttributeResponseBody() = default ;
    DescribeMonitorResourceQuotaAttributeResponseBody& operator=(const DescribeMonitorResourceQuotaAttributeResponseBody &) = default ;
    DescribeMonitorResourceQuotaAttributeResponseBody& operator=(DescribeMonitorResourceQuotaAttributeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResourceQuota : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResourceQuota& obj) { 
        DARABONBA_PTR_TO_JSON(Api, api_);
        DARABONBA_PTR_TO_JSON(CustomMonitor, customMonitor_);
        DARABONBA_PTR_TO_JSON(EnterpriseQuota, enterpriseQuota_);
        DARABONBA_PTR_TO_JSON(EventMonitor, eventMonitor_);
        DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(LogMonitor, logMonitor_);
        DARABONBA_PTR_TO_JSON(Phone, phone_);
        DARABONBA_PTR_TO_JSON(SMS, SMS_);
        DARABONBA_PTR_TO_JSON(SiteMonitorBrowser, siteMonitorBrowser_);
        DARABONBA_PTR_TO_JSON(SiteMonitorEcsProbe, siteMonitorEcsProbe_);
        DARABONBA_PTR_TO_JSON(SiteMonitorMobile, siteMonitorMobile_);
        DARABONBA_PTR_TO_JSON(SiteMonitorOperatorProbe, siteMonitorOperatorProbe_);
        DARABONBA_PTR_TO_JSON(SiteMonitorTask, siteMonitorTask_);
        DARABONBA_PTR_TO_JSON(SuitInfo, suitInfo_);
      };
      friend void from_json(const Darabonba::Json& j, ResourceQuota& obj) { 
        DARABONBA_PTR_FROM_JSON(Api, api_);
        DARABONBA_PTR_FROM_JSON(CustomMonitor, customMonitor_);
        DARABONBA_PTR_FROM_JSON(EnterpriseQuota, enterpriseQuota_);
        DARABONBA_PTR_FROM_JSON(EventMonitor, eventMonitor_);
        DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(LogMonitor, logMonitor_);
        DARABONBA_PTR_FROM_JSON(Phone, phone_);
        DARABONBA_PTR_FROM_JSON(SMS, SMS_);
        DARABONBA_PTR_FROM_JSON(SiteMonitorBrowser, siteMonitorBrowser_);
        DARABONBA_PTR_FROM_JSON(SiteMonitorEcsProbe, siteMonitorEcsProbe_);
        DARABONBA_PTR_FROM_JSON(SiteMonitorMobile, siteMonitorMobile_);
        DARABONBA_PTR_FROM_JSON(SiteMonitorOperatorProbe, siteMonitorOperatorProbe_);
        DARABONBA_PTR_FROM_JSON(SiteMonitorTask, siteMonitorTask_);
        DARABONBA_PTR_FROM_JSON(SuitInfo, suitInfo_);
      };
      ResourceQuota() = default ;
      ResourceQuota(const ResourceQuota &) = default ;
      ResourceQuota(ResourceQuota &&) = default ;
      ResourceQuota(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ResourceQuota() = default ;
      ResourceQuota& operator=(const ResourceQuota &) = default ;
      ResourceQuota& operator=(ResourceQuota &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SiteMonitorTask : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SiteMonitorTask& obj) { 
          DARABONBA_PTR_TO_JSON(QuotaLimit, quotaLimit_);
          DARABONBA_PTR_TO_JSON(QuotaPackage, quotaPackage_);
          DARABONBA_PTR_TO_JSON(QuotaUsed, quotaUsed_);
        };
        friend void from_json(const Darabonba::Json& j, SiteMonitorTask& obj) { 
          DARABONBA_PTR_FROM_JSON(QuotaLimit, quotaLimit_);
          DARABONBA_PTR_FROM_JSON(QuotaPackage, quotaPackage_);
          DARABONBA_PTR_FROM_JSON(QuotaUsed, quotaUsed_);
        };
        SiteMonitorTask() = default ;
        SiteMonitorTask(const SiteMonitorTask &) = default ;
        SiteMonitorTask(SiteMonitorTask &&) = default ;
        SiteMonitorTask(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SiteMonitorTask() = default ;
        SiteMonitorTask& operator=(const SiteMonitorTask &) = default ;
        SiteMonitorTask& operator=(SiteMonitorTask &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->quotaLimit_ == nullptr
        && this->quotaPackage_ == nullptr && this->quotaUsed_ == nullptr; };
        // quotaLimit Field Functions 
        bool hasQuotaLimit() const { return this->quotaLimit_ != nullptr;};
        void deleteQuotaLimit() { this->quotaLimit_ = nullptr;};
        inline int32_t getQuotaLimit() const { DARABONBA_PTR_GET_DEFAULT(quotaLimit_, 0) };
        inline SiteMonitorTask& setQuotaLimit(int32_t quotaLimit) { DARABONBA_PTR_SET_VALUE(quotaLimit_, quotaLimit) };


        // quotaPackage Field Functions 
        bool hasQuotaPackage() const { return this->quotaPackage_ != nullptr;};
        void deleteQuotaPackage() { this->quotaPackage_ = nullptr;};
        inline int32_t getQuotaPackage() const { DARABONBA_PTR_GET_DEFAULT(quotaPackage_, 0) };
        inline SiteMonitorTask& setQuotaPackage(int32_t quotaPackage) { DARABONBA_PTR_SET_VALUE(quotaPackage_, quotaPackage) };


        // quotaUsed Field Functions 
        bool hasQuotaUsed() const { return this->quotaUsed_ != nullptr;};
        void deleteQuotaUsed() { this->quotaUsed_ = nullptr;};
        inline int32_t getQuotaUsed() const { DARABONBA_PTR_GET_DEFAULT(quotaUsed_, 0) };
        inline SiteMonitorTask& setQuotaUsed(int32_t quotaUsed) { DARABONBA_PTR_SET_VALUE(quotaUsed_, quotaUsed) };


      protected:
        // The total quota of site monitoring tasks. Unit: tasks.
        shared_ptr<int32_t> quotaLimit_ {};
        // The quota of site monitoring tasks included in the plan. Unit: tasks.
        shared_ptr<int32_t> quotaPackage_ {};
        // The used quota of site monitoring tasks in the plan. Unit: tasks.
        shared_ptr<int32_t> quotaUsed_ {};
      };

      class SiteMonitorOperatorProbe : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SiteMonitorOperatorProbe& obj) { 
          DARABONBA_PTR_TO_JSON(QuotaLimit, quotaLimit_);
          DARABONBA_PTR_TO_JSON(QuotaPackage, quotaPackage_);
          DARABONBA_PTR_TO_JSON(QuotaUsed, quotaUsed_);
        };
        friend void from_json(const Darabonba::Json& j, SiteMonitorOperatorProbe& obj) { 
          DARABONBA_PTR_FROM_JSON(QuotaLimit, quotaLimit_);
          DARABONBA_PTR_FROM_JSON(QuotaPackage, quotaPackage_);
          DARABONBA_PTR_FROM_JSON(QuotaUsed, quotaUsed_);
        };
        SiteMonitorOperatorProbe() = default ;
        SiteMonitorOperatorProbe(const SiteMonitorOperatorProbe &) = default ;
        SiteMonitorOperatorProbe(SiteMonitorOperatorProbe &&) = default ;
        SiteMonitorOperatorProbe(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SiteMonitorOperatorProbe() = default ;
        SiteMonitorOperatorProbe& operator=(const SiteMonitorOperatorProbe &) = default ;
        SiteMonitorOperatorProbe& operator=(SiteMonitorOperatorProbe &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->quotaLimit_ == nullptr
        && this->quotaPackage_ == nullptr && this->quotaUsed_ == nullptr; };
        // quotaLimit Field Functions 
        bool hasQuotaLimit() const { return this->quotaLimit_ != nullptr;};
        void deleteQuotaLimit() { this->quotaLimit_ = nullptr;};
        inline int32_t getQuotaLimit() const { DARABONBA_PTR_GET_DEFAULT(quotaLimit_, 0) };
        inline SiteMonitorOperatorProbe& setQuotaLimit(int32_t quotaLimit) { DARABONBA_PTR_SET_VALUE(quotaLimit_, quotaLimit) };


        // quotaPackage Field Functions 
        bool hasQuotaPackage() const { return this->quotaPackage_ != nullptr;};
        void deleteQuotaPackage() { this->quotaPackage_ = nullptr;};
        inline int32_t getQuotaPackage() const { DARABONBA_PTR_GET_DEFAULT(quotaPackage_, 0) };
        inline SiteMonitorOperatorProbe& setQuotaPackage(int32_t quotaPackage) { DARABONBA_PTR_SET_VALUE(quotaPackage_, quotaPackage) };


        // quotaUsed Field Functions 
        bool hasQuotaUsed() const { return this->quotaUsed_ != nullptr;};
        void deleteQuotaUsed() { this->quotaUsed_ = nullptr;};
        inline int32_t getQuotaUsed() const { DARABONBA_PTR_GET_DEFAULT(quotaUsed_, 0) };
        inline SiteMonitorOperatorProbe& setQuotaUsed(int32_t quotaUsed) { DARABONBA_PTR_SET_VALUE(quotaUsed_, quotaUsed) };


      protected:
        // The total quota of carrier detection points for site monitoring.
        shared_ptr<int32_t> quotaLimit_ {};
        // The quota of carrier detection points for site monitoring included in the plan.
        shared_ptr<int32_t> quotaPackage_ {};
        // The used quota of carrier detection points for site monitoring in the plan.
        shared_ptr<int32_t> quotaUsed_ {};
      };

      class SiteMonitorMobile : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SiteMonitorMobile& obj) { 
          DARABONBA_PTR_TO_JSON(QuotaLimit, quotaLimit_);
          DARABONBA_PTR_TO_JSON(QuotaPackage, quotaPackage_);
          DARABONBA_PTR_TO_JSON(QuotaUsed, quotaUsed_);
        };
        friend void from_json(const Darabonba::Json& j, SiteMonitorMobile& obj) { 
          DARABONBA_PTR_FROM_JSON(QuotaLimit, quotaLimit_);
          DARABONBA_PTR_FROM_JSON(QuotaPackage, quotaPackage_);
          DARABONBA_PTR_FROM_JSON(QuotaUsed, quotaUsed_);
        };
        SiteMonitorMobile() = default ;
        SiteMonitorMobile(const SiteMonitorMobile &) = default ;
        SiteMonitorMobile(SiteMonitorMobile &&) = default ;
        SiteMonitorMobile(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SiteMonitorMobile() = default ;
        SiteMonitorMobile& operator=(const SiteMonitorMobile &) = default ;
        SiteMonitorMobile& operator=(SiteMonitorMobile &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->quotaLimit_ == nullptr
        && this->quotaPackage_ == nullptr && this->quotaUsed_ == nullptr; };
        // quotaLimit Field Functions 
        bool hasQuotaLimit() const { return this->quotaLimit_ != nullptr;};
        void deleteQuotaLimit() { this->quotaLimit_ = nullptr;};
        inline int32_t getQuotaLimit() const { DARABONBA_PTR_GET_DEFAULT(quotaLimit_, 0) };
        inline SiteMonitorMobile& setQuotaLimit(int32_t quotaLimit) { DARABONBA_PTR_SET_VALUE(quotaLimit_, quotaLimit) };


        // quotaPackage Field Functions 
        bool hasQuotaPackage() const { return this->quotaPackage_ != nullptr;};
        void deleteQuotaPackage() { this->quotaPackage_ = nullptr;};
        inline int32_t getQuotaPackage() const { DARABONBA_PTR_GET_DEFAULT(quotaPackage_, 0) };
        inline SiteMonitorMobile& setQuotaPackage(int32_t quotaPackage) { DARABONBA_PTR_SET_VALUE(quotaPackage_, quotaPackage) };


        // quotaUsed Field Functions 
        bool hasQuotaUsed() const { return this->quotaUsed_ != nullptr;};
        void deleteQuotaUsed() { this->quotaUsed_ = nullptr;};
        inline int32_t getQuotaUsed() const { DARABONBA_PTR_GET_DEFAULT(quotaUsed_, 0) };
        inline SiteMonitorMobile& setQuotaUsed(int32_t quotaUsed) { DARABONBA_PTR_SET_VALUE(quotaUsed_, quotaUsed) };


      protected:
        // The total quota of mobile monitoring tasks. Unit: tasks.
        shared_ptr<int32_t> quotaLimit_ {};
        // The quota of mobile monitoring tasks included in the plan. Unit: tasks.
        shared_ptr<int32_t> quotaPackage_ {};
        // The used quota of mobile monitoring tasks in the plan. Unit: tasks.
        shared_ptr<int32_t> quotaUsed_ {};
      };

      class SiteMonitorEcsProbe : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SiteMonitorEcsProbe& obj) { 
          DARABONBA_PTR_TO_JSON(QuotaLimit, quotaLimit_);
          DARABONBA_PTR_TO_JSON(QuotaPackage, quotaPackage_);
          DARABONBA_PTR_TO_JSON(QuotaUsed, quotaUsed_);
        };
        friend void from_json(const Darabonba::Json& j, SiteMonitorEcsProbe& obj) { 
          DARABONBA_PTR_FROM_JSON(QuotaLimit, quotaLimit_);
          DARABONBA_PTR_FROM_JSON(QuotaPackage, quotaPackage_);
          DARABONBA_PTR_FROM_JSON(QuotaUsed, quotaUsed_);
        };
        SiteMonitorEcsProbe() = default ;
        SiteMonitorEcsProbe(const SiteMonitorEcsProbe &) = default ;
        SiteMonitorEcsProbe(SiteMonitorEcsProbe &&) = default ;
        SiteMonitorEcsProbe(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SiteMonitorEcsProbe() = default ;
        SiteMonitorEcsProbe& operator=(const SiteMonitorEcsProbe &) = default ;
        SiteMonitorEcsProbe& operator=(SiteMonitorEcsProbe &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->quotaLimit_ == nullptr
        && this->quotaPackage_ == nullptr && this->quotaUsed_ == nullptr; };
        // quotaLimit Field Functions 
        bool hasQuotaLimit() const { return this->quotaLimit_ != nullptr;};
        void deleteQuotaLimit() { this->quotaLimit_ = nullptr;};
        inline int32_t getQuotaLimit() const { DARABONBA_PTR_GET_DEFAULT(quotaLimit_, 0) };
        inline SiteMonitorEcsProbe& setQuotaLimit(int32_t quotaLimit) { DARABONBA_PTR_SET_VALUE(quotaLimit_, quotaLimit) };


        // quotaPackage Field Functions 
        bool hasQuotaPackage() const { return this->quotaPackage_ != nullptr;};
        void deleteQuotaPackage() { this->quotaPackage_ = nullptr;};
        inline int32_t getQuotaPackage() const { DARABONBA_PTR_GET_DEFAULT(quotaPackage_, 0) };
        inline SiteMonitorEcsProbe& setQuotaPackage(int32_t quotaPackage) { DARABONBA_PTR_SET_VALUE(quotaPackage_, quotaPackage) };


        // quotaUsed Field Functions 
        bool hasQuotaUsed() const { return this->quotaUsed_ != nullptr;};
        void deleteQuotaUsed() { this->quotaUsed_ = nullptr;};
        inline int32_t getQuotaUsed() const { DARABONBA_PTR_GET_DEFAULT(quotaUsed_, 0) };
        inline SiteMonitorEcsProbe& setQuotaUsed(int32_t quotaUsed) { DARABONBA_PTR_SET_VALUE(quotaUsed_, quotaUsed) };


      protected:
        // The total quota of ECS detection points for site monitoring.
        // 
        // > The maximum number of ECS detection points that can be selected for a single site monitoring task.
        shared_ptr<int32_t> quotaLimit_ {};
        // The quota of ECS detection points for site monitoring included in the plan.
        shared_ptr<int32_t> quotaPackage_ {};
        // The used quota of ECS detection points for site monitoring in the plan.
        // 
        // > The total number of ECS detection points across all site monitoring tasks that have been created.
        shared_ptr<int32_t> quotaUsed_ {};
      };

      class SiteMonitorBrowser : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SiteMonitorBrowser& obj) { 
          DARABONBA_PTR_TO_JSON(QuotaLimit, quotaLimit_);
          DARABONBA_PTR_TO_JSON(QuotaPackage, quotaPackage_);
          DARABONBA_PTR_TO_JSON(QuotaUsed, quotaUsed_);
        };
        friend void from_json(const Darabonba::Json& j, SiteMonitorBrowser& obj) { 
          DARABONBA_PTR_FROM_JSON(QuotaLimit, quotaLimit_);
          DARABONBA_PTR_FROM_JSON(QuotaPackage, quotaPackage_);
          DARABONBA_PTR_FROM_JSON(QuotaUsed, quotaUsed_);
        };
        SiteMonitorBrowser() = default ;
        SiteMonitorBrowser(const SiteMonitorBrowser &) = default ;
        SiteMonitorBrowser(SiteMonitorBrowser &&) = default ;
        SiteMonitorBrowser(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SiteMonitorBrowser() = default ;
        SiteMonitorBrowser& operator=(const SiteMonitorBrowser &) = default ;
        SiteMonitorBrowser& operator=(SiteMonitorBrowser &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->quotaLimit_ == nullptr
        && this->quotaPackage_ == nullptr && this->quotaUsed_ == nullptr; };
        // quotaLimit Field Functions 
        bool hasQuotaLimit() const { return this->quotaLimit_ != nullptr;};
        void deleteQuotaLimit() { this->quotaLimit_ = nullptr;};
        inline int32_t getQuotaLimit() const { DARABONBA_PTR_GET_DEFAULT(quotaLimit_, 0) };
        inline SiteMonitorBrowser& setQuotaLimit(int32_t quotaLimit) { DARABONBA_PTR_SET_VALUE(quotaLimit_, quotaLimit) };


        // quotaPackage Field Functions 
        bool hasQuotaPackage() const { return this->quotaPackage_ != nullptr;};
        void deleteQuotaPackage() { this->quotaPackage_ = nullptr;};
        inline int32_t getQuotaPackage() const { DARABONBA_PTR_GET_DEFAULT(quotaPackage_, 0) };
        inline SiteMonitorBrowser& setQuotaPackage(int32_t quotaPackage) { DARABONBA_PTR_SET_VALUE(quotaPackage_, quotaPackage) };


        // quotaUsed Field Functions 
        bool hasQuotaUsed() const { return this->quotaUsed_ != nullptr;};
        void deleteQuotaUsed() { this->quotaUsed_ = nullptr;};
        inline int32_t getQuotaUsed() const { DARABONBA_PTR_GET_DEFAULT(quotaUsed_, 0) };
        inline SiteMonitorBrowser& setQuotaUsed(int32_t quotaUsed) { DARABONBA_PTR_SET_VALUE(quotaUsed_, quotaUsed) };


      protected:
        // The total quota of browser-based monitoring tasks. Unit: tasks.
        shared_ptr<int32_t> quotaLimit_ {};
        // The quota of browser-based monitoring tasks included in the plan. Unit: tasks.
        shared_ptr<int32_t> quotaPackage_ {};
        // The used quota of browser-based monitoring tasks in the plan. Unit: tasks.
        shared_ptr<int32_t> quotaUsed_ {};
      };

      class SMS : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SMS& obj) { 
          DARABONBA_PTR_TO_JSON(QuotaLimit, quotaLimit_);
          DARABONBA_PTR_TO_JSON(QuotaPackage, quotaPackage_);
          DARABONBA_PTR_TO_JSON(QuotaUsed, quotaUsed_);
        };
        friend void from_json(const Darabonba::Json& j, SMS& obj) { 
          DARABONBA_PTR_FROM_JSON(QuotaLimit, quotaLimit_);
          DARABONBA_PTR_FROM_JSON(QuotaPackage, quotaPackage_);
          DARABONBA_PTR_FROM_JSON(QuotaUsed, quotaUsed_);
        };
        SMS() = default ;
        SMS(const SMS &) = default ;
        SMS(SMS &&) = default ;
        SMS(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SMS() = default ;
        SMS& operator=(const SMS &) = default ;
        SMS& operator=(SMS &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->quotaLimit_ == nullptr
        && this->quotaPackage_ == nullptr && this->quotaUsed_ == nullptr; };
        // quotaLimit Field Functions 
        bool hasQuotaLimit() const { return this->quotaLimit_ != nullptr;};
        void deleteQuotaLimit() { this->quotaLimit_ = nullptr;};
        inline int32_t getQuotaLimit() const { DARABONBA_PTR_GET_DEFAULT(quotaLimit_, 0) };
        inline SMS& setQuotaLimit(int32_t quotaLimit) { DARABONBA_PTR_SET_VALUE(quotaLimit_, quotaLimit) };


        // quotaPackage Field Functions 
        bool hasQuotaPackage() const { return this->quotaPackage_ != nullptr;};
        void deleteQuotaPackage() { this->quotaPackage_ = nullptr;};
        inline int32_t getQuotaPackage() const { DARABONBA_PTR_GET_DEFAULT(quotaPackage_, 0) };
        inline SMS& setQuotaPackage(int32_t quotaPackage) { DARABONBA_PTR_SET_VALUE(quotaPackage_, quotaPackage) };


        // quotaUsed Field Functions 
        bool hasQuotaUsed() const { return this->quotaUsed_ != nullptr;};
        void deleteQuotaUsed() { this->quotaUsed_ = nullptr;};
        inline int32_t getQuotaUsed() const { DARABONBA_PTR_GET_DEFAULT(quotaUsed_, 0) };
        inline SMS& setQuotaUsed(int32_t quotaUsed) { DARABONBA_PTR_SET_VALUE(quotaUsed_, quotaUsed) };


      protected:
        // The total quota of alert text messages. Unit: messages.
        shared_ptr<int32_t> quotaLimit_ {};
        // The quota of alert text message packages. Unit: messages.
        shared_ptr<int32_t> quotaPackage_ {};
        // The used quota of alert text message packages. Unit: messages.
        shared_ptr<int32_t> quotaUsed_ {};
      };

      class Phone : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Phone& obj) { 
          DARABONBA_PTR_TO_JSON(QuotaLimit, quotaLimit_);
          DARABONBA_PTR_TO_JSON(QuotaPackage, quotaPackage_);
          DARABONBA_PTR_TO_JSON(QuotaUsed, quotaUsed_);
        };
        friend void from_json(const Darabonba::Json& j, Phone& obj) { 
          DARABONBA_PTR_FROM_JSON(QuotaLimit, quotaLimit_);
          DARABONBA_PTR_FROM_JSON(QuotaPackage, quotaPackage_);
          DARABONBA_PTR_FROM_JSON(QuotaUsed, quotaUsed_);
        };
        Phone() = default ;
        Phone(const Phone &) = default ;
        Phone(Phone &&) = default ;
        Phone(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Phone() = default ;
        Phone& operator=(const Phone &) = default ;
        Phone& operator=(Phone &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->quotaLimit_ == nullptr
        && this->quotaPackage_ == nullptr && this->quotaUsed_ == nullptr; };
        // quotaLimit Field Functions 
        bool hasQuotaLimit() const { return this->quotaLimit_ != nullptr;};
        void deleteQuotaLimit() { this->quotaLimit_ = nullptr;};
        inline int32_t getQuotaLimit() const { DARABONBA_PTR_GET_DEFAULT(quotaLimit_, 0) };
        inline Phone& setQuotaLimit(int32_t quotaLimit) { DARABONBA_PTR_SET_VALUE(quotaLimit_, quotaLimit) };


        // quotaPackage Field Functions 
        bool hasQuotaPackage() const { return this->quotaPackage_ != nullptr;};
        void deleteQuotaPackage() { this->quotaPackage_ = nullptr;};
        inline int32_t getQuotaPackage() const { DARABONBA_PTR_GET_DEFAULT(quotaPackage_, 0) };
        inline Phone& setQuotaPackage(int32_t quotaPackage) { DARABONBA_PTR_SET_VALUE(quotaPackage_, quotaPackage) };


        // quotaUsed Field Functions 
        bool hasQuotaUsed() const { return this->quotaUsed_ != nullptr;};
        void deleteQuotaUsed() { this->quotaUsed_ = nullptr;};
        inline int32_t getQuotaUsed() const { DARABONBA_PTR_GET_DEFAULT(quotaUsed_, 0) };
        inline Phone& setQuotaUsed(int32_t quotaUsed) { DARABONBA_PTR_SET_VALUE(quotaUsed_, quotaUsed) };


      protected:
        // The total quota of alert phone calls. Unit: calls.
        shared_ptr<int32_t> quotaLimit_ {};
        // The quota of alert phone call packages. Unit: calls.
        shared_ptr<int32_t> quotaPackage_ {};
        // The used quota of alert phone call packages. Unit: calls.
        shared_ptr<int32_t> quotaUsed_ {};
      };

      class LogMonitor : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const LogMonitor& obj) { 
          DARABONBA_PTR_TO_JSON(QuotaLimit, quotaLimit_);
          DARABONBA_PTR_TO_JSON(QuotaPackage, quotaPackage_);
          DARABONBA_PTR_TO_JSON(QuotaUsed, quotaUsed_);
        };
        friend void from_json(const Darabonba::Json& j, LogMonitor& obj) { 
          DARABONBA_PTR_FROM_JSON(QuotaLimit, quotaLimit_);
          DARABONBA_PTR_FROM_JSON(QuotaPackage, quotaPackage_);
          DARABONBA_PTR_FROM_JSON(QuotaUsed, quotaUsed_);
        };
        LogMonitor() = default ;
        LogMonitor(const LogMonitor &) = default ;
        LogMonitor(LogMonitor &&) = default ;
        LogMonitor(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~LogMonitor() = default ;
        LogMonitor& operator=(const LogMonitor &) = default ;
        LogMonitor& operator=(LogMonitor &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->quotaLimit_ == nullptr
        && this->quotaPackage_ == nullptr && this->quotaUsed_ == nullptr; };
        // quotaLimit Field Functions 
        bool hasQuotaLimit() const { return this->quotaLimit_ != nullptr;};
        void deleteQuotaLimit() { this->quotaLimit_ = nullptr;};
        inline int32_t getQuotaLimit() const { DARABONBA_PTR_GET_DEFAULT(quotaLimit_, 0) };
        inline LogMonitor& setQuotaLimit(int32_t quotaLimit) { DARABONBA_PTR_SET_VALUE(quotaLimit_, quotaLimit) };


        // quotaPackage Field Functions 
        bool hasQuotaPackage() const { return this->quotaPackage_ != nullptr;};
        void deleteQuotaPackage() { this->quotaPackage_ = nullptr;};
        inline int32_t getQuotaPackage() const { DARABONBA_PTR_GET_DEFAULT(quotaPackage_, 0) };
        inline LogMonitor& setQuotaPackage(int32_t quotaPackage) { DARABONBA_PTR_SET_VALUE(quotaPackage_, quotaPackage) };


        // quotaUsed Field Functions 
        bool hasQuotaUsed() const { return this->quotaUsed_ != nullptr;};
        void deleteQuotaUsed() { this->quotaUsed_ = nullptr;};
        inline int32_t getQuotaUsed() const { DARABONBA_PTR_GET_DEFAULT(quotaUsed_, 0) };
        inline LogMonitor& setQuotaUsed(int32_t quotaUsed) { DARABONBA_PTR_SET_VALUE(quotaUsed_, quotaUsed) };


      protected:
        // The total quota of Log Monitoring. Unit: MByte/Min.
        shared_ptr<int32_t> quotaLimit_ {};
        // The quota of Log Monitoring included in the plan. Unit: MByte/Min.
        shared_ptr<int32_t> quotaPackage_ {};
        // The used quota of Log Monitoring in the plan. Unit: MByte/Min.
        shared_ptr<int32_t> quotaUsed_ {};
      };

      class EventMonitor : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const EventMonitor& obj) { 
          DARABONBA_PTR_TO_JSON(QuotaLimit, quotaLimit_);
          DARABONBA_PTR_TO_JSON(QuotaPackage, quotaPackage_);
          DARABONBA_PTR_TO_JSON(QuotaUsed, quotaUsed_);
        };
        friend void from_json(const Darabonba::Json& j, EventMonitor& obj) { 
          DARABONBA_PTR_FROM_JSON(QuotaLimit, quotaLimit_);
          DARABONBA_PTR_FROM_JSON(QuotaPackage, quotaPackage_);
          DARABONBA_PTR_FROM_JSON(QuotaUsed, quotaUsed_);
        };
        EventMonitor() = default ;
        EventMonitor(const EventMonitor &) = default ;
        EventMonitor(EventMonitor &&) = default ;
        EventMonitor(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~EventMonitor() = default ;
        EventMonitor& operator=(const EventMonitor &) = default ;
        EventMonitor& operator=(EventMonitor &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->quotaLimit_ == nullptr
        && this->quotaPackage_ == nullptr && this->quotaUsed_ == nullptr; };
        // quotaLimit Field Functions 
        bool hasQuotaLimit() const { return this->quotaLimit_ != nullptr;};
        void deleteQuotaLimit() { this->quotaLimit_ = nullptr;};
        inline int32_t getQuotaLimit() const { DARABONBA_PTR_GET_DEFAULT(quotaLimit_, 0) };
        inline EventMonitor& setQuotaLimit(int32_t quotaLimit) { DARABONBA_PTR_SET_VALUE(quotaLimit_, quotaLimit) };


        // quotaPackage Field Functions 
        bool hasQuotaPackage() const { return this->quotaPackage_ != nullptr;};
        void deleteQuotaPackage() { this->quotaPackage_ = nullptr;};
        inline int32_t getQuotaPackage() const { DARABONBA_PTR_GET_DEFAULT(quotaPackage_, 0) };
        inline EventMonitor& setQuotaPackage(int32_t quotaPackage) { DARABONBA_PTR_SET_VALUE(quotaPackage_, quotaPackage) };


        // quotaUsed Field Functions 
        bool hasQuotaUsed() const { return this->quotaUsed_ != nullptr;};
        void deleteQuotaUsed() { this->quotaUsed_ = nullptr;};
        inline int32_t getQuotaUsed() const { DARABONBA_PTR_GET_DEFAULT(quotaUsed_, 0) };
        inline EventMonitor& setQuotaUsed(int32_t quotaUsed) { DARABONBA_PTR_SET_VALUE(quotaUsed_, quotaUsed) };


      protected:
        // The total quota of event monitoring. Unit: 10,000 events.
        shared_ptr<int32_t> quotaLimit_ {};
        // The quota of event monitoring included in the plan. Unit: 10,000 events.
        shared_ptr<int32_t> quotaPackage_ {};
        // The used quota of event monitoring in the plan. Unit: 10,000 events.
        shared_ptr<int32_t> quotaUsed_ {};
      };

      class EnterpriseQuota : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const EnterpriseQuota& obj) { 
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(SuitInfo, suitInfo_);
        };
        friend void from_json(const Darabonba::Json& j, EnterpriseQuota& obj) { 
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(SuitInfo, suitInfo_);
        };
        EnterpriseQuota() = default ;
        EnterpriseQuota(const EnterpriseQuota &) = default ;
        EnterpriseQuota(EnterpriseQuota &&) = default ;
        EnterpriseQuota(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~EnterpriseQuota() = default ;
        EnterpriseQuota& operator=(const EnterpriseQuota &) = default ;
        EnterpriseQuota& operator=(EnterpriseQuota &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->suitInfo_ == nullptr; };
        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline EnterpriseQuota& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // suitInfo Field Functions 
        bool hasSuitInfo() const { return this->suitInfo_ != nullptr;};
        void deleteSuitInfo() { this->suitInfo_ = nullptr;};
        inline string getSuitInfo() const { DARABONBA_PTR_GET_DEFAULT(suitInfo_, "") };
        inline EnterpriseQuota& setSuitInfo(string suitInfo) { DARABONBA_PTR_SET_VALUE(suitInfo_, suitInfo) };


      protected:
        // The instance ID of Hybrid Cloud Monitoring.
        shared_ptr<string> instanceId_ {};
        // The description of Hybrid Cloud Monitoring.
        shared_ptr<string> suitInfo_ {};
      };

      class CustomMonitor : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CustomMonitor& obj) { 
          DARABONBA_PTR_TO_JSON(QuotaLimit, quotaLimit_);
          DARABONBA_PTR_TO_JSON(QuotaPackage, quotaPackage_);
          DARABONBA_PTR_TO_JSON(QuotaUsed, quotaUsed_);
        };
        friend void from_json(const Darabonba::Json& j, CustomMonitor& obj) { 
          DARABONBA_PTR_FROM_JSON(QuotaLimit, quotaLimit_);
          DARABONBA_PTR_FROM_JSON(QuotaPackage, quotaPackage_);
          DARABONBA_PTR_FROM_JSON(QuotaUsed, quotaUsed_);
        };
        CustomMonitor() = default ;
        CustomMonitor(const CustomMonitor &) = default ;
        CustomMonitor(CustomMonitor &&) = default ;
        CustomMonitor(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CustomMonitor() = default ;
        CustomMonitor& operator=(const CustomMonitor &) = default ;
        CustomMonitor& operator=(CustomMonitor &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->quotaLimit_ == nullptr
        && this->quotaPackage_ == nullptr && this->quotaUsed_ == nullptr; };
        // quotaLimit Field Functions 
        bool hasQuotaLimit() const { return this->quotaLimit_ != nullptr;};
        void deleteQuotaLimit() { this->quotaLimit_ = nullptr;};
        inline int32_t getQuotaLimit() const { DARABONBA_PTR_GET_DEFAULT(quotaLimit_, 0) };
        inline CustomMonitor& setQuotaLimit(int32_t quotaLimit) { DARABONBA_PTR_SET_VALUE(quotaLimit_, quotaLimit) };


        // quotaPackage Field Functions 
        bool hasQuotaPackage() const { return this->quotaPackage_ != nullptr;};
        void deleteQuotaPackage() { this->quotaPackage_ = nullptr;};
        inline int32_t getQuotaPackage() const { DARABONBA_PTR_GET_DEFAULT(quotaPackage_, 0) };
        inline CustomMonitor& setQuotaPackage(int32_t quotaPackage) { DARABONBA_PTR_SET_VALUE(quotaPackage_, quotaPackage) };


        // quotaUsed Field Functions 
        bool hasQuotaUsed() const { return this->quotaUsed_ != nullptr;};
        void deleteQuotaUsed() { this->quotaUsed_ = nullptr;};
        inline int32_t getQuotaUsed() const { DARABONBA_PTR_GET_DEFAULT(quotaUsed_, 0) };
        inline CustomMonitor& setQuotaUsed(int32_t quotaUsed) { DARABONBA_PTR_SET_VALUE(quotaUsed_, quotaUsed) };


      protected:
        // The total quota of custom monitoring time series. Unit: time series.
        shared_ptr<int32_t> quotaLimit_ {};
        // The quota of custom monitoring time series included in the plan. Unit: time series.
        shared_ptr<int32_t> quotaPackage_ {};
        // The used quota of custom monitoring time series in the plan. Unit: time series.
        shared_ptr<int32_t> quotaUsed_ {};
      };

      class Api : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Api& obj) { 
          DARABONBA_PTR_TO_JSON(QuotaLimit, quotaLimit_);
          DARABONBA_PTR_TO_JSON(QuotaPackage, quotaPackage_);
          DARABONBA_PTR_TO_JSON(QuotaUsed, quotaUsed_);
        };
        friend void from_json(const Darabonba::Json& j, Api& obj) { 
          DARABONBA_PTR_FROM_JSON(QuotaLimit, quotaLimit_);
          DARABONBA_PTR_FROM_JSON(QuotaPackage, quotaPackage_);
          DARABONBA_PTR_FROM_JSON(QuotaUsed, quotaUsed_);
        };
        Api() = default ;
        Api(const Api &) = default ;
        Api(Api &&) = default ;
        Api(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Api() = default ;
        Api& operator=(const Api &) = default ;
        Api& operator=(Api &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->quotaLimit_ == nullptr
        && this->quotaPackage_ == nullptr && this->quotaUsed_ == nullptr; };
        // quotaLimit Field Functions 
        bool hasQuotaLimit() const { return this->quotaLimit_ != nullptr;};
        void deleteQuotaLimit() { this->quotaLimit_ = nullptr;};
        inline int32_t getQuotaLimit() const { DARABONBA_PTR_GET_DEFAULT(quotaLimit_, 0) };
        inline Api& setQuotaLimit(int32_t quotaLimit) { DARABONBA_PTR_SET_VALUE(quotaLimit_, quotaLimit) };


        // quotaPackage Field Functions 
        bool hasQuotaPackage() const { return this->quotaPackage_ != nullptr;};
        void deleteQuotaPackage() { this->quotaPackage_ = nullptr;};
        inline int32_t getQuotaPackage() const { DARABONBA_PTR_GET_DEFAULT(quotaPackage_, 0) };
        inline Api& setQuotaPackage(int32_t quotaPackage) { DARABONBA_PTR_SET_VALUE(quotaPackage_, quotaPackage) };


        // quotaUsed Field Functions 
        bool hasQuotaUsed() const { return this->quotaUsed_ != nullptr;};
        void deleteQuotaUsed() { this->quotaUsed_ = nullptr;};
        inline int32_t getQuotaUsed() const { DARABONBA_PTR_GET_DEFAULT(quotaUsed_, 0) };
        inline Api& setQuotaUsed(int32_t quotaUsed) { DARABONBA_PTR_SET_VALUE(quotaUsed_, quotaUsed) };


      protected:
        // The total API quota. Unit: 10,000 calls.
        shared_ptr<int32_t> quotaLimit_ {};
        // The API quota included in the plan. Unit: 10,000 calls.
        shared_ptr<int32_t> quotaPackage_ {};
        // The used API quota in the plan. Unit: calls.
        shared_ptr<int32_t> quotaUsed_ {};
      };

      virtual bool empty() const override { return this->api_ == nullptr
        && this->customMonitor_ == nullptr && this->enterpriseQuota_ == nullptr && this->eventMonitor_ == nullptr && this->expireTime_ == nullptr && this->instanceId_ == nullptr
        && this->logMonitor_ == nullptr && this->phone_ == nullptr && this->SMS_ == nullptr && this->siteMonitorBrowser_ == nullptr && this->siteMonitorEcsProbe_ == nullptr
        && this->siteMonitorMobile_ == nullptr && this->siteMonitorOperatorProbe_ == nullptr && this->siteMonitorTask_ == nullptr && this->suitInfo_ == nullptr; };
      // api Field Functions 
      bool hasApi() const { return this->api_ != nullptr;};
      void deleteApi() { this->api_ = nullptr;};
      inline const ResourceQuota::Api & getApi() const { DARABONBA_PTR_GET_CONST(api_, ResourceQuota::Api) };
      inline ResourceQuota::Api getApi() { DARABONBA_PTR_GET(api_, ResourceQuota::Api) };
      inline ResourceQuota& setApi(const ResourceQuota::Api & api) { DARABONBA_PTR_SET_VALUE(api_, api) };
      inline ResourceQuota& setApi(ResourceQuota::Api && api) { DARABONBA_PTR_SET_RVALUE(api_, api) };


      // customMonitor Field Functions 
      bool hasCustomMonitor() const { return this->customMonitor_ != nullptr;};
      void deleteCustomMonitor() { this->customMonitor_ = nullptr;};
      inline const ResourceQuota::CustomMonitor & getCustomMonitor() const { DARABONBA_PTR_GET_CONST(customMonitor_, ResourceQuota::CustomMonitor) };
      inline ResourceQuota::CustomMonitor getCustomMonitor() { DARABONBA_PTR_GET(customMonitor_, ResourceQuota::CustomMonitor) };
      inline ResourceQuota& setCustomMonitor(const ResourceQuota::CustomMonitor & customMonitor) { DARABONBA_PTR_SET_VALUE(customMonitor_, customMonitor) };
      inline ResourceQuota& setCustomMonitor(ResourceQuota::CustomMonitor && customMonitor) { DARABONBA_PTR_SET_RVALUE(customMonitor_, customMonitor) };


      // enterpriseQuota Field Functions 
      bool hasEnterpriseQuota() const { return this->enterpriseQuota_ != nullptr;};
      void deleteEnterpriseQuota() { this->enterpriseQuota_ = nullptr;};
      inline const ResourceQuota::EnterpriseQuota & getEnterpriseQuota() const { DARABONBA_PTR_GET_CONST(enterpriseQuota_, ResourceQuota::EnterpriseQuota) };
      inline ResourceQuota::EnterpriseQuota getEnterpriseQuota() { DARABONBA_PTR_GET(enterpriseQuota_, ResourceQuota::EnterpriseQuota) };
      inline ResourceQuota& setEnterpriseQuota(const ResourceQuota::EnterpriseQuota & enterpriseQuota) { DARABONBA_PTR_SET_VALUE(enterpriseQuota_, enterpriseQuota) };
      inline ResourceQuota& setEnterpriseQuota(ResourceQuota::EnterpriseQuota && enterpriseQuota) { DARABONBA_PTR_SET_RVALUE(enterpriseQuota_, enterpriseQuota) };


      // eventMonitor Field Functions 
      bool hasEventMonitor() const { return this->eventMonitor_ != nullptr;};
      void deleteEventMonitor() { this->eventMonitor_ = nullptr;};
      inline const ResourceQuota::EventMonitor & getEventMonitor() const { DARABONBA_PTR_GET_CONST(eventMonitor_, ResourceQuota::EventMonitor) };
      inline ResourceQuota::EventMonitor getEventMonitor() { DARABONBA_PTR_GET(eventMonitor_, ResourceQuota::EventMonitor) };
      inline ResourceQuota& setEventMonitor(const ResourceQuota::EventMonitor & eventMonitor) { DARABONBA_PTR_SET_VALUE(eventMonitor_, eventMonitor) };
      inline ResourceQuota& setEventMonitor(ResourceQuota::EventMonitor && eventMonitor) { DARABONBA_PTR_SET_RVALUE(eventMonitor_, eventMonitor) };


      // expireTime Field Functions 
      bool hasExpireTime() const { return this->expireTime_ != nullptr;};
      void deleteExpireTime() { this->expireTime_ = nullptr;};
      inline string getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
      inline ResourceQuota& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline ResourceQuota& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // logMonitor Field Functions 
      bool hasLogMonitor() const { return this->logMonitor_ != nullptr;};
      void deleteLogMonitor() { this->logMonitor_ = nullptr;};
      inline const ResourceQuota::LogMonitor & getLogMonitor() const { DARABONBA_PTR_GET_CONST(logMonitor_, ResourceQuota::LogMonitor) };
      inline ResourceQuota::LogMonitor getLogMonitor() { DARABONBA_PTR_GET(logMonitor_, ResourceQuota::LogMonitor) };
      inline ResourceQuota& setLogMonitor(const ResourceQuota::LogMonitor & logMonitor) { DARABONBA_PTR_SET_VALUE(logMonitor_, logMonitor) };
      inline ResourceQuota& setLogMonitor(ResourceQuota::LogMonitor && logMonitor) { DARABONBA_PTR_SET_RVALUE(logMonitor_, logMonitor) };


      // phone Field Functions 
      bool hasPhone() const { return this->phone_ != nullptr;};
      void deletePhone() { this->phone_ = nullptr;};
      inline const ResourceQuota::Phone & getPhone() const { DARABONBA_PTR_GET_CONST(phone_, ResourceQuota::Phone) };
      inline ResourceQuota::Phone getPhone() { DARABONBA_PTR_GET(phone_, ResourceQuota::Phone) };
      inline ResourceQuota& setPhone(const ResourceQuota::Phone & phone) { DARABONBA_PTR_SET_VALUE(phone_, phone) };
      inline ResourceQuota& setPhone(ResourceQuota::Phone && phone) { DARABONBA_PTR_SET_RVALUE(phone_, phone) };


      // SMS Field Functions 
      bool hasSMS() const { return this->SMS_ != nullptr;};
      void deleteSMS() { this->SMS_ = nullptr;};
      inline const ResourceQuota::SMS & getSMS() const { DARABONBA_PTR_GET_CONST(SMS_, ResourceQuota::SMS) };
      inline ResourceQuota::SMS getSMS() { DARABONBA_PTR_GET(SMS_, ResourceQuota::SMS) };
      inline ResourceQuota& setSMS(const ResourceQuota::SMS & sMS) { DARABONBA_PTR_SET_VALUE(SMS_, sMS) };
      inline ResourceQuota& setSMS(ResourceQuota::SMS && sMS) { DARABONBA_PTR_SET_RVALUE(SMS_, sMS) };


      // siteMonitorBrowser Field Functions 
      bool hasSiteMonitorBrowser() const { return this->siteMonitorBrowser_ != nullptr;};
      void deleteSiteMonitorBrowser() { this->siteMonitorBrowser_ = nullptr;};
      inline const ResourceQuota::SiteMonitorBrowser & getSiteMonitorBrowser() const { DARABONBA_PTR_GET_CONST(siteMonitorBrowser_, ResourceQuota::SiteMonitorBrowser) };
      inline ResourceQuota::SiteMonitorBrowser getSiteMonitorBrowser() { DARABONBA_PTR_GET(siteMonitorBrowser_, ResourceQuota::SiteMonitorBrowser) };
      inline ResourceQuota& setSiteMonitorBrowser(const ResourceQuota::SiteMonitorBrowser & siteMonitorBrowser) { DARABONBA_PTR_SET_VALUE(siteMonitorBrowser_, siteMonitorBrowser) };
      inline ResourceQuota& setSiteMonitorBrowser(ResourceQuota::SiteMonitorBrowser && siteMonitorBrowser) { DARABONBA_PTR_SET_RVALUE(siteMonitorBrowser_, siteMonitorBrowser) };


      // siteMonitorEcsProbe Field Functions 
      bool hasSiteMonitorEcsProbe() const { return this->siteMonitorEcsProbe_ != nullptr;};
      void deleteSiteMonitorEcsProbe() { this->siteMonitorEcsProbe_ = nullptr;};
      inline const ResourceQuota::SiteMonitorEcsProbe & getSiteMonitorEcsProbe() const { DARABONBA_PTR_GET_CONST(siteMonitorEcsProbe_, ResourceQuota::SiteMonitorEcsProbe) };
      inline ResourceQuota::SiteMonitorEcsProbe getSiteMonitorEcsProbe() { DARABONBA_PTR_GET(siteMonitorEcsProbe_, ResourceQuota::SiteMonitorEcsProbe) };
      inline ResourceQuota& setSiteMonitorEcsProbe(const ResourceQuota::SiteMonitorEcsProbe & siteMonitorEcsProbe) { DARABONBA_PTR_SET_VALUE(siteMonitorEcsProbe_, siteMonitorEcsProbe) };
      inline ResourceQuota& setSiteMonitorEcsProbe(ResourceQuota::SiteMonitorEcsProbe && siteMonitorEcsProbe) { DARABONBA_PTR_SET_RVALUE(siteMonitorEcsProbe_, siteMonitorEcsProbe) };


      // siteMonitorMobile Field Functions 
      bool hasSiteMonitorMobile() const { return this->siteMonitorMobile_ != nullptr;};
      void deleteSiteMonitorMobile() { this->siteMonitorMobile_ = nullptr;};
      inline const ResourceQuota::SiteMonitorMobile & getSiteMonitorMobile() const { DARABONBA_PTR_GET_CONST(siteMonitorMobile_, ResourceQuota::SiteMonitorMobile) };
      inline ResourceQuota::SiteMonitorMobile getSiteMonitorMobile() { DARABONBA_PTR_GET(siteMonitorMobile_, ResourceQuota::SiteMonitorMobile) };
      inline ResourceQuota& setSiteMonitorMobile(const ResourceQuota::SiteMonitorMobile & siteMonitorMobile) { DARABONBA_PTR_SET_VALUE(siteMonitorMobile_, siteMonitorMobile) };
      inline ResourceQuota& setSiteMonitorMobile(ResourceQuota::SiteMonitorMobile && siteMonitorMobile) { DARABONBA_PTR_SET_RVALUE(siteMonitorMobile_, siteMonitorMobile) };


      // siteMonitorOperatorProbe Field Functions 
      bool hasSiteMonitorOperatorProbe() const { return this->siteMonitorOperatorProbe_ != nullptr;};
      void deleteSiteMonitorOperatorProbe() { this->siteMonitorOperatorProbe_ = nullptr;};
      inline const ResourceQuota::SiteMonitorOperatorProbe & getSiteMonitorOperatorProbe() const { DARABONBA_PTR_GET_CONST(siteMonitorOperatorProbe_, ResourceQuota::SiteMonitorOperatorProbe) };
      inline ResourceQuota::SiteMonitorOperatorProbe getSiteMonitorOperatorProbe() { DARABONBA_PTR_GET(siteMonitorOperatorProbe_, ResourceQuota::SiteMonitorOperatorProbe) };
      inline ResourceQuota& setSiteMonitorOperatorProbe(const ResourceQuota::SiteMonitorOperatorProbe & siteMonitorOperatorProbe) { DARABONBA_PTR_SET_VALUE(siteMonitorOperatorProbe_, siteMonitorOperatorProbe) };
      inline ResourceQuota& setSiteMonitorOperatorProbe(ResourceQuota::SiteMonitorOperatorProbe && siteMonitorOperatorProbe) { DARABONBA_PTR_SET_RVALUE(siteMonitorOperatorProbe_, siteMonitorOperatorProbe) };


      // siteMonitorTask Field Functions 
      bool hasSiteMonitorTask() const { return this->siteMonitorTask_ != nullptr;};
      void deleteSiteMonitorTask() { this->siteMonitorTask_ = nullptr;};
      inline const ResourceQuota::SiteMonitorTask & getSiteMonitorTask() const { DARABONBA_PTR_GET_CONST(siteMonitorTask_, ResourceQuota::SiteMonitorTask) };
      inline ResourceQuota::SiteMonitorTask getSiteMonitorTask() { DARABONBA_PTR_GET(siteMonitorTask_, ResourceQuota::SiteMonitorTask) };
      inline ResourceQuota& setSiteMonitorTask(const ResourceQuota::SiteMonitorTask & siteMonitorTask) { DARABONBA_PTR_SET_VALUE(siteMonitorTask_, siteMonitorTask) };
      inline ResourceQuota& setSiteMonitorTask(ResourceQuota::SiteMonitorTask && siteMonitorTask) { DARABONBA_PTR_SET_RVALUE(siteMonitorTask_, siteMonitorTask) };


      // suitInfo Field Functions 
      bool hasSuitInfo() const { return this->suitInfo_ != nullptr;};
      void deleteSuitInfo() { this->suitInfo_ = nullptr;};
      inline string getSuitInfo() const { DARABONBA_PTR_GET_DEFAULT(suitInfo_, "") };
      inline ResourceQuota& setSuitInfo(string suitInfo) { DARABONBA_PTR_SET_VALUE(suitInfo_, suitInfo) };


    protected:
      // The API quota.
      shared_ptr<ResourceQuota::Api> api_ {};
      // The quota of custom monitoring.
      shared_ptr<ResourceQuota::CustomMonitor> customMonitor_ {};
      // The quota details of Hybrid Cloud Monitoring.
      shared_ptr<ResourceQuota::EnterpriseQuota> enterpriseQuota_ {};
      // The quota of event monitoring.
      shared_ptr<ResourceQuota::EventMonitor> eventMonitor_ {};
      // The expiration time of the plan. The time follows the ISO 8601 standard in the YYYY-MM-DD format. The default time zone is UTC+8.
      shared_ptr<string> expireTime_ {};
      // The subscription plan ID.
      shared_ptr<string> instanceId_ {};
      // The quota of Log Monitoring.
      shared_ptr<ResourceQuota::LogMonitor> logMonitor_ {};
      // The quota of alert phone call packages.
      shared_ptr<ResourceQuota::Phone> phone_ {};
      // The quota of alert text message packages.
      shared_ptr<ResourceQuota::SMS> SMS_ {};
      // The quota of browser-based monitoring tasks.
      shared_ptr<ResourceQuota::SiteMonitorBrowser> siteMonitorBrowser_ {};
      // The quota of ECS detection points for site monitoring.
      shared_ptr<ResourceQuota::SiteMonitorEcsProbe> siteMonitorEcsProbe_ {};
      // The quota of mobile monitoring tasks.
      shared_ptr<ResourceQuota::SiteMonitorMobile> siteMonitorMobile_ {};
      // The quota of carrier detection points for site monitoring.
      shared_ptr<ResourceQuota::SiteMonitorOperatorProbe> siteMonitorOperatorProbe_ {};
      // The quota of site monitoring tasks.
      shared_ptr<ResourceQuota::SiteMonitorTask> siteMonitorTask_ {};
      // The current edition of CloudMonitor. Valid values:
      // - free: Free Edition.
      // - pro: Pro Edition.
      // - cms_post: Pay-as-you-go.
      shared_ptr<string> suitInfo_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->resourceQuota_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeMonitorResourceQuotaAttributeResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeMonitorResourceQuotaAttributeResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeMonitorResourceQuotaAttributeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceQuota Field Functions 
    bool hasResourceQuota() const { return this->resourceQuota_ != nullptr;};
    void deleteResourceQuota() { this->resourceQuota_ = nullptr;};
    inline const DescribeMonitorResourceQuotaAttributeResponseBody::ResourceQuota & getResourceQuota() const { DARABONBA_PTR_GET_CONST(resourceQuota_, DescribeMonitorResourceQuotaAttributeResponseBody::ResourceQuota) };
    inline DescribeMonitorResourceQuotaAttributeResponseBody::ResourceQuota getResourceQuota() { DARABONBA_PTR_GET(resourceQuota_, DescribeMonitorResourceQuotaAttributeResponseBody::ResourceQuota) };
    inline DescribeMonitorResourceQuotaAttributeResponseBody& setResourceQuota(const DescribeMonitorResourceQuotaAttributeResponseBody::ResourceQuota & resourceQuota) { DARABONBA_PTR_SET_VALUE(resourceQuota_, resourceQuota) };
    inline DescribeMonitorResourceQuotaAttributeResponseBody& setResourceQuota(DescribeMonitorResourceQuotaAttributeResponseBody::ResourceQuota && resourceQuota) { DARABONBA_PTR_SET_RVALUE(resourceQuota_, resourceQuota) };


  protected:
    // The status code.
    // 
    // > 200 indicates success.
    shared_ptr<string> code_ {};
    // The error message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The quota details of CloudMonitor.
    shared_ptr<DescribeMonitorResourceQuotaAttributeResponseBody::ResourceQuota> resourceQuota_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
