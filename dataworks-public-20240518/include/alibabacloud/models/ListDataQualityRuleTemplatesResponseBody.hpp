// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATAQUALITYRULETEMPLATESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDATAQUALITYRULETEMPLATESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListDataQualityRuleTemplatesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataQualityRuleTemplatesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PagingInfo, pagingInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataQualityRuleTemplatesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PagingInfo, pagingInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListDataQualityRuleTemplatesResponseBody() = default ;
    ListDataQualityRuleTemplatesResponseBody(const ListDataQualityRuleTemplatesResponseBody &) = default ;
    ListDataQualityRuleTemplatesResponseBody(ListDataQualityRuleTemplatesResponseBody &&) = default ;
    ListDataQualityRuleTemplatesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataQualityRuleTemplatesResponseBody() = default ;
    ListDataQualityRuleTemplatesResponseBody& operator=(const ListDataQualityRuleTemplatesResponseBody &) = default ;
    ListDataQualityRuleTemplatesResponseBody& operator=(ListDataQualityRuleTemplatesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PagingInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PagingInfo& obj) { 
        DARABONBA_PTR_TO_JSON(DataQualityRuleTemplates, dataQualityRuleTemplates_);
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, PagingInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(DataQualityRuleTemplates, dataQualityRuleTemplates_);
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      PagingInfo() = default ;
      PagingInfo(const PagingInfo &) = default ;
      PagingInfo(PagingInfo &&) = default ;
      PagingInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PagingInfo() = default ;
      PagingInfo& operator=(const PagingInfo &) = default ;
      PagingInfo& operator=(PagingInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DataQualityRuleTemplates : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DataQualityRuleTemplates& obj) { 
          DARABONBA_PTR_TO_JSON(CheckingConfig, checkingConfig_);
          DARABONBA_PTR_TO_JSON(Code, code_);
          DARABONBA_PTR_TO_JSON(DirectoryPath, directoryPath_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
          DARABONBA_PTR_TO_JSON(SamplingConfig, samplingConfig_);
          DARABONBA_PTR_TO_JSON(VisibleScope, visibleScope_);
        };
        friend void from_json(const Darabonba::Json& j, DataQualityRuleTemplates& obj) { 
          DARABONBA_PTR_FROM_JSON(CheckingConfig, checkingConfig_);
          DARABONBA_PTR_FROM_JSON(Code, code_);
          DARABONBA_PTR_FROM_JSON(DirectoryPath, directoryPath_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
          DARABONBA_PTR_FROM_JSON(SamplingConfig, samplingConfig_);
          DARABONBA_PTR_FROM_JSON(VisibleScope, visibleScope_);
        };
        DataQualityRuleTemplates() = default ;
        DataQualityRuleTemplates(const DataQualityRuleTemplates &) = default ;
        DataQualityRuleTemplates(DataQualityRuleTemplates &&) = default ;
        DataQualityRuleTemplates(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DataQualityRuleTemplates() = default ;
        DataQualityRuleTemplates& operator=(const DataQualityRuleTemplates &) = default ;
        DataQualityRuleTemplates& operator=(DataQualityRuleTemplates &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class SamplingConfig : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const SamplingConfig& obj) { 
            DARABONBA_PTR_TO_JSON(Metric, metric_);
            DARABONBA_PTR_TO_JSON(MetricParameters, metricParameters_);
            DARABONBA_PTR_TO_JSON(SettingConfig, settingConfig_);
          };
          friend void from_json(const Darabonba::Json& j, SamplingConfig& obj) { 
            DARABONBA_PTR_FROM_JSON(Metric, metric_);
            DARABONBA_PTR_FROM_JSON(MetricParameters, metricParameters_);
            DARABONBA_PTR_FROM_JSON(SettingConfig, settingConfig_);
          };
          SamplingConfig() = default ;
          SamplingConfig(const SamplingConfig &) = default ;
          SamplingConfig(SamplingConfig &&) = default ;
          SamplingConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~SamplingConfig() = default ;
          SamplingConfig& operator=(const SamplingConfig &) = default ;
          SamplingConfig& operator=(SamplingConfig &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->metric_ == nullptr
        && this->metricParameters_ == nullptr && this->settingConfig_ == nullptr; };
          // metric Field Functions 
          bool hasMetric() const { return this->metric_ != nullptr;};
          void deleteMetric() { this->metric_ = nullptr;};
          inline string getMetric() const { DARABONBA_PTR_GET_DEFAULT(metric_, "") };
          inline SamplingConfig& setMetric(string metric) { DARABONBA_PTR_SET_VALUE(metric_, metric) };


          // metricParameters Field Functions 
          bool hasMetricParameters() const { return this->metricParameters_ != nullptr;};
          void deleteMetricParameters() { this->metricParameters_ = nullptr;};
          inline string getMetricParameters() const { DARABONBA_PTR_GET_DEFAULT(metricParameters_, "") };
          inline SamplingConfig& setMetricParameters(string metricParameters) { DARABONBA_PTR_SET_VALUE(metricParameters_, metricParameters) };


          // settingConfig Field Functions 
          bool hasSettingConfig() const { return this->settingConfig_ != nullptr;};
          void deleteSettingConfig() { this->settingConfig_ = nullptr;};
          inline string getSettingConfig() const { DARABONBA_PTR_GET_DEFAULT(settingConfig_, "") };
          inline SamplingConfig& setSettingConfig(string settingConfig) { DARABONBA_PTR_SET_VALUE(settingConfig_, settingConfig) };


        protected:
          // The name of the sampled metric.
          // - Count: number of table rows
          // - Min: minimum value of the field
          // - Max: The maximum value of the field.
          // - Avg: field mean
          // - DistinctCount: number of unique field values
          // - DistinctPercent: the ratio of the number of unique field values to the number of data rows.
          // - DuplicatedCount: number of duplicate field values
          // - DuplicatedPercent: the ratio of the number of duplicate field values to the number of data rows.
          // - TableSize: table size
          // - NullValueCount: number of rows with empty fields
          // - NullValuePercent: the proportion of fields that are empty.
          // - GroupCount: aggregate each value by field value and the corresponding number of data rows
          // - CountNotIn: the enumerated value does not match the number of rows.
          // - CountDistinctNotIn: the number of unique values that the enumerated values do not match.
          // - UserDefinedSql: use custom SQL to collect samples
          shared_ptr<string> metric_ {};
          // Parameters required for sample collection
          shared_ptr<string> metricParameters_ {};
          // Before executing the sample statement, insert some runtime parameter setting statements, which can be up to 1000 characters in length. Currently, only MaxCompute are supported.
          shared_ptr<string> settingConfig_ {};
        };

        class CheckingConfig : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const CheckingConfig& obj) { 
            DARABONBA_PTR_TO_JSON(ReferencedSamplesFilter, referencedSamplesFilter_);
            DARABONBA_PTR_TO_JSON(Type, type_);
          };
          friend void from_json(const Darabonba::Json& j, CheckingConfig& obj) { 
            DARABONBA_PTR_FROM_JSON(ReferencedSamplesFilter, referencedSamplesFilter_);
            DARABONBA_PTR_FROM_JSON(Type, type_);
          };
          CheckingConfig() = default ;
          CheckingConfig(const CheckingConfig &) = default ;
          CheckingConfig(CheckingConfig &&) = default ;
          CheckingConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~CheckingConfig() = default ;
          CheckingConfig& operator=(const CheckingConfig &) = default ;
          CheckingConfig& operator=(CheckingConfig &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->referencedSamplesFilter_ == nullptr
        && this->type_ == nullptr; };
          // referencedSamplesFilter Field Functions 
          bool hasReferencedSamplesFilter() const { return this->referencedSamplesFilter_ != nullptr;};
          void deleteReferencedSamplesFilter() { this->referencedSamplesFilter_ = nullptr;};
          inline string getReferencedSamplesFilter() const { DARABONBA_PTR_GET_DEFAULT(referencedSamplesFilter_, "") };
          inline CheckingConfig& setReferencedSamplesFilter(string referencedSamplesFilter) { DARABONBA_PTR_SET_VALUE(referencedSamplesFilter_, referencedSamplesFilter) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline CheckingConfig& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        protected:
          // Some types of thresholds need to query some reference samples, and then summarize the values of the reference samples to obtain the threshold for comparison. Here, an expression is used to represent the query method of the reference samples.
          shared_ptr<string> referencedSamplesFilter_ {};
          // Threshold Calculation method
          // - Fixed
          // - Fluctation
          // - FluctationDiscreate
          // - Auto
          // - Average
          // - Variance
          shared_ptr<string> type_ {};
        };

        virtual bool empty() const override { return this->checkingConfig_ == nullptr
        && this->code_ == nullptr && this->directoryPath_ == nullptr && this->name_ == nullptr && this->projectId_ == nullptr && this->samplingConfig_ == nullptr
        && this->visibleScope_ == nullptr; };
        // checkingConfig Field Functions 
        bool hasCheckingConfig() const { return this->checkingConfig_ != nullptr;};
        void deleteCheckingConfig() { this->checkingConfig_ = nullptr;};
        inline const DataQualityRuleTemplates::CheckingConfig & getCheckingConfig() const { DARABONBA_PTR_GET_CONST(checkingConfig_, DataQualityRuleTemplates::CheckingConfig) };
        inline DataQualityRuleTemplates::CheckingConfig getCheckingConfig() { DARABONBA_PTR_GET(checkingConfig_, DataQualityRuleTemplates::CheckingConfig) };
        inline DataQualityRuleTemplates& setCheckingConfig(const DataQualityRuleTemplates::CheckingConfig & checkingConfig) { DARABONBA_PTR_SET_VALUE(checkingConfig_, checkingConfig) };
        inline DataQualityRuleTemplates& setCheckingConfig(DataQualityRuleTemplates::CheckingConfig && checkingConfig) { DARABONBA_PTR_SET_RVALUE(checkingConfig_, checkingConfig) };


        // code Field Functions 
        bool hasCode() const { return this->code_ != nullptr;};
        void deleteCode() { this->code_ = nullptr;};
        inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
        inline DataQualityRuleTemplates& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


        // directoryPath Field Functions 
        bool hasDirectoryPath() const { return this->directoryPath_ != nullptr;};
        void deleteDirectoryPath() { this->directoryPath_ = nullptr;};
        inline string getDirectoryPath() const { DARABONBA_PTR_GET_DEFAULT(directoryPath_, "") };
        inline DataQualityRuleTemplates& setDirectoryPath(string directoryPath) { DARABONBA_PTR_SET_VALUE(directoryPath_, directoryPath) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline DataQualityRuleTemplates& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // projectId Field Functions 
        bool hasProjectId() const { return this->projectId_ != nullptr;};
        void deleteProjectId() { this->projectId_ = nullptr;};
        inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
        inline DataQualityRuleTemplates& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


        // samplingConfig Field Functions 
        bool hasSamplingConfig() const { return this->samplingConfig_ != nullptr;};
        void deleteSamplingConfig() { this->samplingConfig_ = nullptr;};
        inline const DataQualityRuleTemplates::SamplingConfig & getSamplingConfig() const { DARABONBA_PTR_GET_CONST(samplingConfig_, DataQualityRuleTemplates::SamplingConfig) };
        inline DataQualityRuleTemplates::SamplingConfig getSamplingConfig() { DARABONBA_PTR_GET(samplingConfig_, DataQualityRuleTemplates::SamplingConfig) };
        inline DataQualityRuleTemplates& setSamplingConfig(const DataQualityRuleTemplates::SamplingConfig & samplingConfig) { DARABONBA_PTR_SET_VALUE(samplingConfig_, samplingConfig) };
        inline DataQualityRuleTemplates& setSamplingConfig(DataQualityRuleTemplates::SamplingConfig && samplingConfig) { DARABONBA_PTR_SET_RVALUE(samplingConfig_, samplingConfig) };


        // visibleScope Field Functions 
        bool hasVisibleScope() const { return this->visibleScope_ != nullptr;};
        void deleteVisibleScope() { this->visibleScope_ = nullptr;};
        inline string getVisibleScope() const { DARABONBA_PTR_GET_DEFAULT(visibleScope_, "") };
        inline DataQualityRuleTemplates& setVisibleScope(string visibleScope) { DARABONBA_PTR_SET_VALUE(visibleScope_, visibleScope) };


      protected:
        // Sample verification settings
        shared_ptr<DataQualityRuleTemplates::CheckingConfig> checkingConfig_ {};
        // Rule template Code
        shared_ptr<string> code_ {};
        // The directory in which the template is stored. Slashes (/) are used to separate directory levels. The name of each directory level can be up to 1,024 characters in length. It cannot contain whitespace characters or slashes (/).
        shared_ptr<string> directoryPath_ {};
        // The name of the template. The name can be up to 512 characters in length and can contain digits, letters, and punctuation marks.
        shared_ptr<string> name_ {};
        // DataWorks workspace ID
        shared_ptr<int64_t> projectId_ {};
        // Settings required for sample collection
        shared_ptr<DataQualityRuleTemplates::SamplingConfig> samplingConfig_ {};
        // Available range of templates:
        // - Tenant: all tenants are available
        // - Project: only available in the current Project
        shared_ptr<string> visibleScope_ {};
      };

      virtual bool empty() const override { return this->dataQualityRuleTemplates_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // dataQualityRuleTemplates Field Functions 
      bool hasDataQualityRuleTemplates() const { return this->dataQualityRuleTemplates_ != nullptr;};
      void deleteDataQualityRuleTemplates() { this->dataQualityRuleTemplates_ = nullptr;};
      inline const vector<PagingInfo::DataQualityRuleTemplates> & getDataQualityRuleTemplates() const { DARABONBA_PTR_GET_CONST(dataQualityRuleTemplates_, vector<PagingInfo::DataQualityRuleTemplates>) };
      inline vector<PagingInfo::DataQualityRuleTemplates> getDataQualityRuleTemplates() { DARABONBA_PTR_GET(dataQualityRuleTemplates_, vector<PagingInfo::DataQualityRuleTemplates>) };
      inline PagingInfo& setDataQualityRuleTemplates(const vector<PagingInfo::DataQualityRuleTemplates> & dataQualityRuleTemplates) { DARABONBA_PTR_SET_VALUE(dataQualityRuleTemplates_, dataQualityRuleTemplates) };
      inline PagingInfo& setDataQualityRuleTemplates(vector<PagingInfo::DataQualityRuleTemplates> && dataQualityRuleTemplates) { DARABONBA_PTR_SET_RVALUE(dataQualityRuleTemplates_, dataQualityRuleTemplates) };


      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
      inline PagingInfo& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline PagingInfo& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline PagingInfo& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The templates.
      shared_ptr<vector<PagingInfo::DataQualityRuleTemplates>> dataQualityRuleTemplates_ {};
      // Page number
      shared_ptr<int32_t> pageNumber_ {};
      // Page size
      shared_ptr<int32_t> pageSize_ {};
      // Total number of entries
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->pagingInfo_ == nullptr
        && this->requestId_ == nullptr; };
    // pagingInfo Field Functions 
    bool hasPagingInfo() const { return this->pagingInfo_ != nullptr;};
    void deletePagingInfo() { this->pagingInfo_ = nullptr;};
    inline const ListDataQualityRuleTemplatesResponseBody::PagingInfo & getPagingInfo() const { DARABONBA_PTR_GET_CONST(pagingInfo_, ListDataQualityRuleTemplatesResponseBody::PagingInfo) };
    inline ListDataQualityRuleTemplatesResponseBody::PagingInfo getPagingInfo() { DARABONBA_PTR_GET(pagingInfo_, ListDataQualityRuleTemplatesResponseBody::PagingInfo) };
    inline ListDataQualityRuleTemplatesResponseBody& setPagingInfo(const ListDataQualityRuleTemplatesResponseBody::PagingInfo & pagingInfo) { DARABONBA_PTR_SET_VALUE(pagingInfo_, pagingInfo) };
    inline ListDataQualityRuleTemplatesResponseBody& setPagingInfo(ListDataQualityRuleTemplatesResponseBody::PagingInfo && pagingInfo) { DARABONBA_PTR_SET_RVALUE(pagingInfo_, pagingInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDataQualityRuleTemplatesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The pagination information.
    shared_ptr<ListDataQualityRuleTemplatesResponseBody::PagingInfo> pagingInfo_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
