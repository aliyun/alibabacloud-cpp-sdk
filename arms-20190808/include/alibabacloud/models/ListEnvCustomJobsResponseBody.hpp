// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTENVCUSTOMJOBSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTENVCUSTOMJOBSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class ListEnvCustomJobsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEnvCustomJobsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListEnvCustomJobsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListEnvCustomJobsResponseBody() = default ;
    ListEnvCustomJobsResponseBody(const ListEnvCustomJobsResponseBody &) = default ;
    ListEnvCustomJobsResponseBody(ListEnvCustomJobsResponseBody &&) = default ;
    ListEnvCustomJobsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEnvCustomJobsResponseBody() = default ;
    ListEnvCustomJobsResponseBody& operator=(const ListEnvCustomJobsResponseBody &) = default ;
    ListEnvCustomJobsResponseBody& operator=(ListEnvCustomJobsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AddonName, addonName_);
        DARABONBA_PTR_TO_JSON(AddonReleaseName, addonReleaseName_);
        DARABONBA_PTR_TO_JSON(AddonVersion, addonVersion_);
        DARABONBA_PTR_TO_JSON(ConfigYaml, configYaml_);
        DARABONBA_PTR_TO_JSON(CreationTimestamp, creationTimestamp_);
        DARABONBA_PTR_TO_JSON(CustomJobName, customJobName_);
        DARABONBA_PTR_TO_JSON(EnvironmentId, environmentId_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(ScrapeConfigs, scrapeConfigs_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AddonName, addonName_);
        DARABONBA_PTR_FROM_JSON(AddonReleaseName, addonReleaseName_);
        DARABONBA_PTR_FROM_JSON(AddonVersion, addonVersion_);
        DARABONBA_PTR_FROM_JSON(ConfigYaml, configYaml_);
        DARABONBA_PTR_FROM_JSON(CreationTimestamp, creationTimestamp_);
        DARABONBA_PTR_FROM_JSON(CustomJobName, customJobName_);
        DARABONBA_PTR_FROM_JSON(EnvironmentId, environmentId_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(ScrapeConfigs, scrapeConfigs_);
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
      class ScrapeConfigs : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ScrapeConfigs& obj) { 
          DARABONBA_PTR_TO_JSON(JobName, jobName_);
          DARABONBA_PTR_TO_JSON(MetricsPath, metricsPath_);
          DARABONBA_PTR_TO_JSON(ScrapeDiscoverys, scrapeDiscoverys_);
          DARABONBA_PTR_TO_JSON(ScrapeInterval, scrapeInterval_);
        };
        friend void from_json(const Darabonba::Json& j, ScrapeConfigs& obj) { 
          DARABONBA_PTR_FROM_JSON(JobName, jobName_);
          DARABONBA_PTR_FROM_JSON(MetricsPath, metricsPath_);
          DARABONBA_PTR_FROM_JSON(ScrapeDiscoverys, scrapeDiscoverys_);
          DARABONBA_PTR_FROM_JSON(ScrapeInterval, scrapeInterval_);
        };
        ScrapeConfigs() = default ;
        ScrapeConfigs(const ScrapeConfigs &) = default ;
        ScrapeConfigs(ScrapeConfigs &&) = default ;
        ScrapeConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ScrapeConfigs() = default ;
        ScrapeConfigs& operator=(const ScrapeConfigs &) = default ;
        ScrapeConfigs& operator=(ScrapeConfigs &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->jobName_ == nullptr
        && this->metricsPath_ == nullptr && this->scrapeDiscoverys_ == nullptr && this->scrapeInterval_ == nullptr; };
        // jobName Field Functions 
        bool hasJobName() const { return this->jobName_ != nullptr;};
        void deleteJobName() { this->jobName_ = nullptr;};
        inline string getJobName() const { DARABONBA_PTR_GET_DEFAULT(jobName_, "") };
        inline ScrapeConfigs& setJobName(string jobName) { DARABONBA_PTR_SET_VALUE(jobName_, jobName) };


        // metricsPath Field Functions 
        bool hasMetricsPath() const { return this->metricsPath_ != nullptr;};
        void deleteMetricsPath() { this->metricsPath_ = nullptr;};
        inline string getMetricsPath() const { DARABONBA_PTR_GET_DEFAULT(metricsPath_, "") };
        inline ScrapeConfigs& setMetricsPath(string metricsPath) { DARABONBA_PTR_SET_VALUE(metricsPath_, metricsPath) };


        // scrapeDiscoverys Field Functions 
        bool hasScrapeDiscoverys() const { return this->scrapeDiscoverys_ != nullptr;};
        void deleteScrapeDiscoverys() { this->scrapeDiscoverys_ = nullptr;};
        inline const vector<string> & getScrapeDiscoverys() const { DARABONBA_PTR_GET_CONST(scrapeDiscoverys_, vector<string>) };
        inline vector<string> getScrapeDiscoverys() { DARABONBA_PTR_GET(scrapeDiscoverys_, vector<string>) };
        inline ScrapeConfigs& setScrapeDiscoverys(const vector<string> & scrapeDiscoverys) { DARABONBA_PTR_SET_VALUE(scrapeDiscoverys_, scrapeDiscoverys) };
        inline ScrapeConfigs& setScrapeDiscoverys(vector<string> && scrapeDiscoverys) { DARABONBA_PTR_SET_RVALUE(scrapeDiscoverys_, scrapeDiscoverys) };


        // scrapeInterval Field Functions 
        bool hasScrapeInterval() const { return this->scrapeInterval_ != nullptr;};
        void deleteScrapeInterval() { this->scrapeInterval_ = nullptr;};
        inline string getScrapeInterval() const { DARABONBA_PTR_GET_DEFAULT(scrapeInterval_, "") };
        inline ScrapeConfigs& setScrapeInterval(string scrapeInterval) { DARABONBA_PTR_SET_VALUE(scrapeInterval_, scrapeInterval) };


      protected:
        // The name of the job.
        shared_ptr<string> jobName_ {};
        // The path of the metric.
        shared_ptr<string> metricsPath_ {};
        // The service discovery methods.
        shared_ptr<vector<string>> scrapeDiscoverys_ {};
        // The capture interval.
        shared_ptr<string> scrapeInterval_ {};
      };

      virtual bool empty() const override { return this->addonName_ == nullptr
        && this->addonReleaseName_ == nullptr && this->addonVersion_ == nullptr && this->configYaml_ == nullptr && this->creationTimestamp_ == nullptr && this->customJobName_ == nullptr
        && this->environmentId_ == nullptr && this->regionId_ == nullptr && this->scrapeConfigs_ == nullptr && this->status_ == nullptr; };
      // addonName Field Functions 
      bool hasAddonName() const { return this->addonName_ != nullptr;};
      void deleteAddonName() { this->addonName_ = nullptr;};
      inline string getAddonName() const { DARABONBA_PTR_GET_DEFAULT(addonName_, "") };
      inline Data& setAddonName(string addonName) { DARABONBA_PTR_SET_VALUE(addonName_, addonName) };


      // addonReleaseName Field Functions 
      bool hasAddonReleaseName() const { return this->addonReleaseName_ != nullptr;};
      void deleteAddonReleaseName() { this->addonReleaseName_ = nullptr;};
      inline string getAddonReleaseName() const { DARABONBA_PTR_GET_DEFAULT(addonReleaseName_, "") };
      inline Data& setAddonReleaseName(string addonReleaseName) { DARABONBA_PTR_SET_VALUE(addonReleaseName_, addonReleaseName) };


      // addonVersion Field Functions 
      bool hasAddonVersion() const { return this->addonVersion_ != nullptr;};
      void deleteAddonVersion() { this->addonVersion_ = nullptr;};
      inline string getAddonVersion() const { DARABONBA_PTR_GET_DEFAULT(addonVersion_, "") };
      inline Data& setAddonVersion(string addonVersion) { DARABONBA_PTR_SET_VALUE(addonVersion_, addonVersion) };


      // configYaml Field Functions 
      bool hasConfigYaml() const { return this->configYaml_ != nullptr;};
      void deleteConfigYaml() { this->configYaml_ = nullptr;};
      inline string getConfigYaml() const { DARABONBA_PTR_GET_DEFAULT(configYaml_, "") };
      inline Data& setConfigYaml(string configYaml) { DARABONBA_PTR_SET_VALUE(configYaml_, configYaml) };


      // creationTimestamp Field Functions 
      bool hasCreationTimestamp() const { return this->creationTimestamp_ != nullptr;};
      void deleteCreationTimestamp() { this->creationTimestamp_ = nullptr;};
      inline string getCreationTimestamp() const { DARABONBA_PTR_GET_DEFAULT(creationTimestamp_, "") };
      inline Data& setCreationTimestamp(string creationTimestamp) { DARABONBA_PTR_SET_VALUE(creationTimestamp_, creationTimestamp) };


      // customJobName Field Functions 
      bool hasCustomJobName() const { return this->customJobName_ != nullptr;};
      void deleteCustomJobName() { this->customJobName_ = nullptr;};
      inline string getCustomJobName() const { DARABONBA_PTR_GET_DEFAULT(customJobName_, "") };
      inline Data& setCustomJobName(string customJobName) { DARABONBA_PTR_SET_VALUE(customJobName_, customJobName) };


      // environmentId Field Functions 
      bool hasEnvironmentId() const { return this->environmentId_ != nullptr;};
      void deleteEnvironmentId() { this->environmentId_ = nullptr;};
      inline string getEnvironmentId() const { DARABONBA_PTR_GET_DEFAULT(environmentId_, "") };
      inline Data& setEnvironmentId(string environmentId) { DARABONBA_PTR_SET_VALUE(environmentId_, environmentId) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline Data& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // scrapeConfigs Field Functions 
      bool hasScrapeConfigs() const { return this->scrapeConfigs_ != nullptr;};
      void deleteScrapeConfigs() { this->scrapeConfigs_ = nullptr;};
      inline const vector<Data::ScrapeConfigs> & getScrapeConfigs() const { DARABONBA_PTR_GET_CONST(scrapeConfigs_, vector<Data::ScrapeConfigs>) };
      inline vector<Data::ScrapeConfigs> getScrapeConfigs() { DARABONBA_PTR_GET(scrapeConfigs_, vector<Data::ScrapeConfigs>) };
      inline Data& setScrapeConfigs(const vector<Data::ScrapeConfigs> & scrapeConfigs) { DARABONBA_PTR_SET_VALUE(scrapeConfigs_, scrapeConfigs) };
      inline Data& setScrapeConfigs(vector<Data::ScrapeConfigs> && scrapeConfigs) { DARABONBA_PTR_SET_RVALUE(scrapeConfigs_, scrapeConfigs) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The name of the add-on to which the custom job belongs.
      shared_ptr<string> addonName_ {};
      // The instance name of the add-on.
      shared_ptr<string> addonReleaseName_ {};
      // The version of the add-on.
      shared_ptr<string> addonVersion_ {};
      // If the request parameter EncryptYaml is set to true, a Base64-encoded YAML string is returned. Otherwise, a plaintext YAML string is returned.
      shared_ptr<string> configYaml_ {};
      // The time when the custom job was created. The value of this parameter is a timestamp.
      shared_ptr<string> creationTimestamp_ {};
      // The name of the custom job.
      shared_ptr<string> customJobName_ {};
      // The ID of the environment instance.
      shared_ptr<string> environmentId_ {};
      // The region ID.
      shared_ptr<string> regionId_ {};
      // The capture configurations.
      shared_ptr<vector<Data::ScrapeConfigs>> scrapeConfigs_ {};
      // The status of the custom job.
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline ListEnvCustomJobsResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListEnvCustomJobsResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListEnvCustomJobsResponseBody::Data>) };
    inline vector<ListEnvCustomJobsResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListEnvCustomJobsResponseBody::Data>) };
    inline ListEnvCustomJobsResponseBody& setData(const vector<ListEnvCustomJobsResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListEnvCustomJobsResponseBody& setData(vector<ListEnvCustomJobsResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListEnvCustomJobsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListEnvCustomJobsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The HTTP status code. The status code 200 indicates that the request was successful.
    shared_ptr<int32_t> code_ {};
    // The returned struct.
    shared_ptr<vector<ListEnvCustomJobsResponseBody::Data>> data_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
