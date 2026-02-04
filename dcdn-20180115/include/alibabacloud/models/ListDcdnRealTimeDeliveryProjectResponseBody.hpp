// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDCDNREALTIMEDELIVERYPROJECTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDCDNREALTIMEDELIVERYPROJECTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class ListDcdnRealTimeDeliveryProjectResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDcdnRealTimeDeliveryProjectResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListDcdnRealTimeDeliveryProjectResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListDcdnRealTimeDeliveryProjectResponseBody() = default ;
    ListDcdnRealTimeDeliveryProjectResponseBody(const ListDcdnRealTimeDeliveryProjectResponseBody &) = default ;
    ListDcdnRealTimeDeliveryProjectResponseBody(ListDcdnRealTimeDeliveryProjectResponseBody &&) = default ;
    ListDcdnRealTimeDeliveryProjectResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDcdnRealTimeDeliveryProjectResponseBody() = default ;
    ListDcdnRealTimeDeliveryProjectResponseBody& operator=(const ListDcdnRealTimeDeliveryProjectResponseBody &) = default ;
    ListDcdnRealTimeDeliveryProjectResponseBody& operator=(ListDcdnRealTimeDeliveryProjectResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Content : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Content& obj) { 
        DARABONBA_PTR_TO_JSON(Projects, projects_);
      };
      friend void from_json(const Darabonba::Json& j, Content& obj) { 
        DARABONBA_PTR_FROM_JSON(Projects, projects_);
      };
      Content() = default ;
      Content(const Content &) = default ;
      Content(Content &&) = default ;
      Content(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Content() = default ;
      Content& operator=(const Content &) = default ;
      Content& operator=(Content &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Projects : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Projects& obj) { 
          DARABONBA_PTR_TO_JSON(BusinessType, businessType_);
          DARABONBA_PTR_TO_JSON(DataCenter, dataCenter_);
          DARABONBA_PTR_TO_JSON(DomainName, domainName_);
          DARABONBA_PTR_TO_JSON(FieldName, fieldName_);
          DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
          DARABONBA_PTR_TO_JSON(SLSLogStore, SLSLogStore_);
          DARABONBA_PTR_TO_JSON(SLSProject, SLSProject_);
          DARABONBA_PTR_TO_JSON(SLSRegion, SLSRegion_);
          DARABONBA_PTR_TO_JSON(SamplingRate, samplingRate_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, Projects& obj) { 
          DARABONBA_PTR_FROM_JSON(BusinessType, businessType_);
          DARABONBA_PTR_FROM_JSON(DataCenter, dataCenter_);
          DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
          DARABONBA_PTR_FROM_JSON(FieldName, fieldName_);
          DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
          DARABONBA_PTR_FROM_JSON(SLSLogStore, SLSLogStore_);
          DARABONBA_PTR_FROM_JSON(SLSProject, SLSProject_);
          DARABONBA_PTR_FROM_JSON(SLSRegion, SLSRegion_);
          DARABONBA_PTR_FROM_JSON(SamplingRate, samplingRate_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
        };
        Projects() = default ;
        Projects(const Projects &) = default ;
        Projects(Projects &&) = default ;
        Projects(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Projects() = default ;
        Projects& operator=(const Projects &) = default ;
        Projects& operator=(Projects &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->businessType_ == nullptr
        && this->dataCenter_ == nullptr && this->domainName_ == nullptr && this->fieldName_ == nullptr && this->projectName_ == nullptr && this->SLSLogStore_ == nullptr
        && this->SLSProject_ == nullptr && this->SLSRegion_ == nullptr && this->samplingRate_ == nullptr && this->type_ == nullptr; };
        // businessType Field Functions 
        bool hasBusinessType() const { return this->businessType_ != nullptr;};
        void deleteBusinessType() { this->businessType_ = nullptr;};
        inline string getBusinessType() const { DARABONBA_PTR_GET_DEFAULT(businessType_, "") };
        inline Projects& setBusinessType(string businessType) { DARABONBA_PTR_SET_VALUE(businessType_, businessType) };


        // dataCenter Field Functions 
        bool hasDataCenter() const { return this->dataCenter_ != nullptr;};
        void deleteDataCenter() { this->dataCenter_ = nullptr;};
        inline string getDataCenter() const { DARABONBA_PTR_GET_DEFAULT(dataCenter_, "") };
        inline Projects& setDataCenter(string dataCenter) { DARABONBA_PTR_SET_VALUE(dataCenter_, dataCenter) };


        // domainName Field Functions 
        bool hasDomainName() const { return this->domainName_ != nullptr;};
        void deleteDomainName() { this->domainName_ = nullptr;};
        inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
        inline Projects& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


        // fieldName Field Functions 
        bool hasFieldName() const { return this->fieldName_ != nullptr;};
        void deleteFieldName() { this->fieldName_ = nullptr;};
        inline string getFieldName() const { DARABONBA_PTR_GET_DEFAULT(fieldName_, "") };
        inline Projects& setFieldName(string fieldName) { DARABONBA_PTR_SET_VALUE(fieldName_, fieldName) };


        // projectName Field Functions 
        bool hasProjectName() const { return this->projectName_ != nullptr;};
        void deleteProjectName() { this->projectName_ = nullptr;};
        inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
        inline Projects& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


        // SLSLogStore Field Functions 
        bool hasSLSLogStore() const { return this->SLSLogStore_ != nullptr;};
        void deleteSLSLogStore() { this->SLSLogStore_ = nullptr;};
        inline string getSLSLogStore() const { DARABONBA_PTR_GET_DEFAULT(SLSLogStore_, "") };
        inline Projects& setSLSLogStore(string SLSLogStore) { DARABONBA_PTR_SET_VALUE(SLSLogStore_, SLSLogStore) };


        // SLSProject Field Functions 
        bool hasSLSProject() const { return this->SLSProject_ != nullptr;};
        void deleteSLSProject() { this->SLSProject_ = nullptr;};
        inline string getSLSProject() const { DARABONBA_PTR_GET_DEFAULT(SLSProject_, "") };
        inline Projects& setSLSProject(string SLSProject) { DARABONBA_PTR_SET_VALUE(SLSProject_, SLSProject) };


        // SLSRegion Field Functions 
        bool hasSLSRegion() const { return this->SLSRegion_ != nullptr;};
        void deleteSLSRegion() { this->SLSRegion_ = nullptr;};
        inline string getSLSRegion() const { DARABONBA_PTR_GET_DEFAULT(SLSRegion_, "") };
        inline Projects& setSLSRegion(string SLSRegion) { DARABONBA_PTR_SET_VALUE(SLSRegion_, SLSRegion) };


        // samplingRate Field Functions 
        bool hasSamplingRate() const { return this->samplingRate_ != nullptr;};
        void deleteSamplingRate() { this->samplingRate_ = nullptr;};
        inline float getSamplingRate() const { DARABONBA_PTR_GET_DEFAULT(samplingRate_, 0.0) };
        inline Projects& setSamplingRate(float samplingRate) { DARABONBA_PTR_SET_VALUE(samplingRate_, samplingRate) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Projects& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        // The type of the collected logs. Default value: cdn_log_access_l1. Valid values:
        // 
        // *   **cdn_log_access_l1**: access logs of DCDN POPs
        // *   **cdn_log_origin**: back-to-origin logs
        // *   **cdn_log_er**: EdgeRoutine logs
        shared_ptr<string> businessType_ {};
        // The region from which logs were collected.
        shared_ptr<string> dataCenter_ {};
        // The domain names from which logs were collected. You can specify one or more domain names. Separate multiple domain names with commas (,).
        shared_ptr<string> domainName_ {};
        // The name of the field. For more information about fields in real-time log entries, see [Fields in a real-time log](https://help.aliyun.com/document_detail/324199.html).
        shared_ptr<string> fieldName_ {};
        // The name of the project.
        shared_ptr<string> projectName_ {};
        // The name of the Logstore.
        shared_ptr<string> SLSLogStore_ {};
        // The name of the log file.
        shared_ptr<string> SLSProject_ {};
        // The region to which logs were delivered.
        shared_ptr<string> SLSRegion_ {};
        // The sampling rate.
        shared_ptr<float> samplingRate_ {};
        // The type of log delivery. Only **SLS_POST** is supported.
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->projects_ == nullptr; };
      // projects Field Functions 
      bool hasProjects() const { return this->projects_ != nullptr;};
      void deleteProjects() { this->projects_ = nullptr;};
      inline const vector<Content::Projects> & getProjects() const { DARABONBA_PTR_GET_CONST(projects_, vector<Content::Projects>) };
      inline vector<Content::Projects> getProjects() { DARABONBA_PTR_GET(projects_, vector<Content::Projects>) };
      inline Content& setProjects(const vector<Content::Projects> & projects) { DARABONBA_PTR_SET_VALUE(projects_, projects) };
      inline Content& setProjects(vector<Content::Projects> && projects) { DARABONBA_PTR_SET_RVALUE(projects_, projects) };


    protected:
      shared_ptr<vector<Content::Projects>> projects_ {};
    };

    virtual bool empty() const override { return this->content_ == nullptr
        && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline const ListDcdnRealTimeDeliveryProjectResponseBody::Content & getContent() const { DARABONBA_PTR_GET_CONST(content_, ListDcdnRealTimeDeliveryProjectResponseBody::Content) };
    inline ListDcdnRealTimeDeliveryProjectResponseBody::Content getContent() { DARABONBA_PTR_GET(content_, ListDcdnRealTimeDeliveryProjectResponseBody::Content) };
    inline ListDcdnRealTimeDeliveryProjectResponseBody& setContent(const ListDcdnRealTimeDeliveryProjectResponseBody::Content & content) { DARABONBA_PTR_SET_VALUE(content_, content) };
    inline ListDcdnRealTimeDeliveryProjectResponseBody& setContent(ListDcdnRealTimeDeliveryProjectResponseBody::Content && content) { DARABONBA_PTR_SET_RVALUE(content_, content) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDcdnRealTimeDeliveryProjectResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListDcdnRealTimeDeliveryProjectResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The configuration results of the domain name.
    shared_ptr<ListDcdnRealTimeDeliveryProjectResponseBody::Content> content_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of returned entries.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
