// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHYBRIDMONITORNAMESPACELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHYBRIDMONITORNAMESPACELISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeHybridMonitorNamespaceListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHybridMonitorNamespaceListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(DescribeHybridMonitorNamespace, describeHybridMonitorNamespace_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHybridMonitorNamespaceListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(DescribeHybridMonitorNamespace, describeHybridMonitorNamespace_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    DescribeHybridMonitorNamespaceListResponseBody() = default ;
    DescribeHybridMonitorNamespaceListResponseBody(const DescribeHybridMonitorNamespaceListResponseBody &) = default ;
    DescribeHybridMonitorNamespaceListResponseBody(DescribeHybridMonitorNamespaceListResponseBody &&) = default ;
    DescribeHybridMonitorNamespaceListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHybridMonitorNamespaceListResponseBody() = default ;
    DescribeHybridMonitorNamespaceListResponseBody& operator=(const DescribeHybridMonitorNamespaceListResponseBody &) = default ;
    DescribeHybridMonitorNamespaceListResponseBody& operator=(DescribeHybridMonitorNamespaceListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DescribeHybridMonitorNamespace : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DescribeHybridMonitorNamespace& obj) { 
        DARABONBA_PTR_TO_JSON(AliyunProductMetricList, aliyunProductMetricList_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(Detail, detail_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(IsDelete, isDelete_);
        DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
        DARABONBA_PTR_TO_JSON(Namespace, namespace_);
        DARABONBA_PTR_TO_JSON(NamespaceType, namespaceType_);
        DARABONBA_PTR_TO_JSON(NotAliyunTaskNumber, notAliyunTaskNumber_);
      };
      friend void from_json(const Darabonba::Json& j, DescribeHybridMonitorNamespace& obj) { 
        DARABONBA_PTR_FROM_JSON(AliyunProductMetricList, aliyunProductMetricList_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(Detail, detail_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(IsDelete, isDelete_);
        DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
        DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
        DARABONBA_PTR_FROM_JSON(NamespaceType, namespaceType_);
        DARABONBA_PTR_FROM_JSON(NotAliyunTaskNumber, notAliyunTaskNumber_);
      };
      DescribeHybridMonitorNamespace() = default ;
      DescribeHybridMonitorNamespace(const DescribeHybridMonitorNamespace &) = default ;
      DescribeHybridMonitorNamespace(DescribeHybridMonitorNamespace &&) = default ;
      DescribeHybridMonitorNamespace(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DescribeHybridMonitorNamespace() = default ;
      DescribeHybridMonitorNamespace& operator=(const DescribeHybridMonitorNamespace &) = default ;
      DescribeHybridMonitorNamespace& operator=(DescribeHybridMonitorNamespace &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Detail : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Detail& obj) { 
          DARABONBA_PTR_TO_JSON(NamespaceRegion, namespaceRegion_);
          DARABONBA_PTR_TO_JSON(PrometheusInstanceId, prometheusInstanceId_);
          DARABONBA_PTR_TO_JSON(SLSProject, SLSProject_);
          DARABONBA_PTR_TO_JSON(Spec, spec_);
        };
        friend void from_json(const Darabonba::Json& j, Detail& obj) { 
          DARABONBA_PTR_FROM_JSON(NamespaceRegion, namespaceRegion_);
          DARABONBA_PTR_FROM_JSON(PrometheusInstanceId, prometheusInstanceId_);
          DARABONBA_PTR_FROM_JSON(SLSProject, SLSProject_);
          DARABONBA_PTR_FROM_JSON(Spec, spec_);
        };
        Detail() = default ;
        Detail(const Detail &) = default ;
        Detail(Detail &&) = default ;
        Detail(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Detail() = default ;
        Detail& operator=(const Detail &) = default ;
        Detail& operator=(Detail &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->namespaceRegion_ == nullptr
        && this->prometheusInstanceId_ == nullptr && this->SLSProject_ == nullptr && this->spec_ == nullptr; };
        // namespaceRegion Field Functions 
        bool hasNamespaceRegion() const { return this->namespaceRegion_ != nullptr;};
        void deleteNamespaceRegion() { this->namespaceRegion_ = nullptr;};
        inline string getNamespaceRegion() const { DARABONBA_PTR_GET_DEFAULT(namespaceRegion_, "") };
        inline Detail& setNamespaceRegion(string namespaceRegion) { DARABONBA_PTR_SET_VALUE(namespaceRegion_, namespaceRegion) };


        // prometheusInstanceId Field Functions 
        bool hasPrometheusInstanceId() const { return this->prometheusInstanceId_ != nullptr;};
        void deletePrometheusInstanceId() { this->prometheusInstanceId_ = nullptr;};
        inline string getPrometheusInstanceId() const { DARABONBA_PTR_GET_DEFAULT(prometheusInstanceId_, "") };
        inline Detail& setPrometheusInstanceId(string prometheusInstanceId) { DARABONBA_PTR_SET_VALUE(prometheusInstanceId_, prometheusInstanceId) };


        // SLSProject Field Functions 
        bool hasSLSProject() const { return this->SLSProject_ != nullptr;};
        void deleteSLSProject() { this->SLSProject_ = nullptr;};
        inline string getSLSProject() const { DARABONBA_PTR_GET_DEFAULT(SLSProject_, "") };
        inline Detail& setSLSProject(string SLSProject) { DARABONBA_PTR_SET_VALUE(SLSProject_, SLSProject) };


        // spec Field Functions 
        bool hasSpec() const { return this->spec_ != nullptr;};
        void deleteSpec() { this->spec_ = nullptr;};
        inline string getSpec() const { DARABONBA_PTR_GET_DEFAULT(spec_, "") };
        inline Detail& setSpec(string spec) { DARABONBA_PTR_SET_VALUE(spec_, spec) };


      protected:
        // The region where the metric data is stored.
        // 
        // >  This parameter is returned if you select `m_prom_user` for `NamespaceType` when you create a namespace.
        shared_ptr<string> namespaceRegion_ {};
        shared_ptr<string> prometheusInstanceId_ {};
        // The project where the metric data is located.
        // 
        // >  This parameter is returned if you select `m_prom_user` for `NamespaceType` when you create a namespace.
        shared_ptr<string> SLSProject_ {};
        // The data retention period. Valid values:
        // 
        // *   cms.s1.large (Retention Period 15 Days)
        // *   cms.s1.xlarge (Retention Period 32 Days)
        // *   cms.s1.2xlarge (Retention Period 63 Days)
        // *   cms.s1.3xlarge (Retention Period 93 Days)
        // *   cms.s1.6xlarge (Retention Period 185 Days)
        // *   cms.s1.12xlarge (Retention Period 367 Days)
        shared_ptr<string> spec_ {};
      };

      class AliyunProductMetricList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AliyunProductMetricList& obj) { 
          DARABONBA_PTR_TO_JSON(NamespaceList, namespaceList_);
          DARABONBA_PTR_TO_JSON(UserId, userId_);
          DARABONBA_PTR_TO_JSON(YAMLConfig, YAMLConfig_);
        };
        friend void from_json(const Darabonba::Json& j, AliyunProductMetricList& obj) { 
          DARABONBA_PTR_FROM_JSON(NamespaceList, namespaceList_);
          DARABONBA_PTR_FROM_JSON(UserId, userId_);
          DARABONBA_PTR_FROM_JSON(YAMLConfig, YAMLConfig_);
        };
        AliyunProductMetricList() = default ;
        AliyunProductMetricList(const AliyunProductMetricList &) = default ;
        AliyunProductMetricList(AliyunProductMetricList &&) = default ;
        AliyunProductMetricList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AliyunProductMetricList() = default ;
        AliyunProductMetricList& operator=(const AliyunProductMetricList &) = default ;
        AliyunProductMetricList& operator=(AliyunProductMetricList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class NamespaceList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const NamespaceList& obj) { 
            DARABONBA_PTR_TO_JSON(MetricList, metricList_);
            DARABONBA_PTR_TO_JSON(Namespace, namespace_);
          };
          friend void from_json(const Darabonba::Json& j, NamespaceList& obj) { 
            DARABONBA_PTR_FROM_JSON(MetricList, metricList_);
            DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
          };
          NamespaceList() = default ;
          NamespaceList(const NamespaceList &) = default ;
          NamespaceList(NamespaceList &&) = default ;
          NamespaceList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~NamespaceList() = default ;
          NamespaceList& operator=(const NamespaceList &) = default ;
          NamespaceList& operator=(NamespaceList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class MetricList : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const MetricList& obj) { 
              DARABONBA_PTR_TO_JSON(List, list_);
              DARABONBA_PTR_TO_JSON(Period, period_);
            };
            friend void from_json(const Darabonba::Json& j, MetricList& obj) { 
              DARABONBA_PTR_FROM_JSON(List, list_);
              DARABONBA_PTR_FROM_JSON(Period, period_);
            };
            MetricList() = default ;
            MetricList(const MetricList &) = default ;
            MetricList(MetricList &&) = default ;
            MetricList(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~MetricList() = default ;
            MetricList& operator=(const MetricList &) = default ;
            MetricList& operator=(MetricList &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->list_ == nullptr
        && this->period_ == nullptr; };
            // list Field Functions 
            bool hasList() const { return this->list_ != nullptr;};
            void deleteList() { this->list_ = nullptr;};
            inline const vector<string> & getList() const { DARABONBA_PTR_GET_CONST(list_, vector<string>) };
            inline vector<string> getList() { DARABONBA_PTR_GET(list_, vector<string>) };
            inline MetricList& setList(const vector<string> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
            inline MetricList& setList(vector<string> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


            // period Field Functions 
            bool hasPeriod() const { return this->period_ != nullptr;};
            void deletePeriod() { this->period_ = nullptr;};
            inline int64_t getPeriod() const { DARABONBA_PTR_GET_DEFAULT(period_, 0L) };
            inline MetricList& setPeriod(int64_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


          protected:
            // The metrics.
            shared_ptr<vector<string>> list_ {};
            // The collection period of the metric.
            // 
            // Unit: seconds.
            shared_ptr<int64_t> period_ {};
          };

          virtual bool empty() const override { return this->metricList_ == nullptr
        && this->namespace_ == nullptr; };
          // metricList Field Functions 
          bool hasMetricList() const { return this->metricList_ != nullptr;};
          void deleteMetricList() { this->metricList_ = nullptr;};
          inline const vector<NamespaceList::MetricList> & getMetricList() const { DARABONBA_PTR_GET_CONST(metricList_, vector<NamespaceList::MetricList>) };
          inline vector<NamespaceList::MetricList> getMetricList() { DARABONBA_PTR_GET(metricList_, vector<NamespaceList::MetricList>) };
          inline NamespaceList& setMetricList(const vector<NamespaceList::MetricList> & metricList) { DARABONBA_PTR_SET_VALUE(metricList_, metricList) };
          inline NamespaceList& setMetricList(vector<NamespaceList::MetricList> && metricList) { DARABONBA_PTR_SET_RVALUE(metricList_, metricList) };


          // namespace Field Functions 
          bool hasNamespace() const { return this->namespace_ != nullptr;};
          void deleteNamespace() { this->namespace_ = nullptr;};
          inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
          inline NamespaceList& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


        protected:
          // The metrics for the Alibaba Cloud service.
          shared_ptr<vector<NamespaceList::MetricList>> metricList_ {};
          // The namespace for the Alibaba Cloud service.
          shared_ptr<string> namespace_ {};
        };

        virtual bool empty() const override { return this->namespaceList_ == nullptr
        && this->userId_ == nullptr && this->YAMLConfig_ == nullptr; };
        // namespaceList Field Functions 
        bool hasNamespaceList() const { return this->namespaceList_ != nullptr;};
        void deleteNamespaceList() { this->namespaceList_ = nullptr;};
        inline const vector<AliyunProductMetricList::NamespaceList> & getNamespaceList() const { DARABONBA_PTR_GET_CONST(namespaceList_, vector<AliyunProductMetricList::NamespaceList>) };
        inline vector<AliyunProductMetricList::NamespaceList> getNamespaceList() { DARABONBA_PTR_GET(namespaceList_, vector<AliyunProductMetricList::NamespaceList>) };
        inline AliyunProductMetricList& setNamespaceList(const vector<AliyunProductMetricList::NamespaceList> & namespaceList) { DARABONBA_PTR_SET_VALUE(namespaceList_, namespaceList) };
        inline AliyunProductMetricList& setNamespaceList(vector<AliyunProductMetricList::NamespaceList> && namespaceList) { DARABONBA_PTR_SET_RVALUE(namespaceList_, namespaceList) };


        // userId Field Functions 
        bool hasUserId() const { return this->userId_ != nullptr;};
        void deleteUserId() { this->userId_ = nullptr;};
        inline int64_t getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, 0L) };
        inline AliyunProductMetricList& setUserId(int64_t userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


        // YAMLConfig Field Functions 
        bool hasYAMLConfig() const { return this->YAMLConfig_ != nullptr;};
        void deleteYAMLConfig() { this->YAMLConfig_ = nullptr;};
        inline string getYAMLConfig() const { DARABONBA_PTR_GET_DEFAULT(YAMLConfig_, "") };
        inline AliyunProductMetricList& setYAMLConfig(string YAMLConfig) { DARABONBA_PTR_SET_VALUE(YAMLConfig_, YAMLConfig) };


      protected:
        // The namespaces.
        shared_ptr<vector<AliyunProductMetricList::NamespaceList>> namespaceList_ {};
        // The account that is used to create the namespace.
        shared_ptr<int64_t> userId_ {};
        // The configuration file of the Alibaba Cloud service that you want to monitor by using Hybrid Cloud Monitoring.
        // 
        // *   namespace: the namespace of the Alibaba Cloud service.
        // *   metric_list: the metrics of the Alibaba Cloud service.
        // *   dimension: the resources of the Alibaba Cloud service that you want to monitor by using Hybrid Cloud Monitoring. If you do not specify a dimension, all resources of the Alibaba Cloud service are monitored.
        shared_ptr<string> YAMLConfig_ {};
      };

      virtual bool empty() const override { return this->aliyunProductMetricList_ == nullptr
        && this->createTime_ == nullptr && this->description_ == nullptr && this->detail_ == nullptr && this->id_ == nullptr && this->isDelete_ == nullptr
        && this->modifyTime_ == nullptr && this->namespace_ == nullptr && this->namespaceType_ == nullptr && this->notAliyunTaskNumber_ == nullptr; };
      // aliyunProductMetricList Field Functions 
      bool hasAliyunProductMetricList() const { return this->aliyunProductMetricList_ != nullptr;};
      void deleteAliyunProductMetricList() { this->aliyunProductMetricList_ = nullptr;};
      inline const vector<DescribeHybridMonitorNamespace::AliyunProductMetricList> & getAliyunProductMetricList() const { DARABONBA_PTR_GET_CONST(aliyunProductMetricList_, vector<DescribeHybridMonitorNamespace::AliyunProductMetricList>) };
      inline vector<DescribeHybridMonitorNamespace::AliyunProductMetricList> getAliyunProductMetricList() { DARABONBA_PTR_GET(aliyunProductMetricList_, vector<DescribeHybridMonitorNamespace::AliyunProductMetricList>) };
      inline DescribeHybridMonitorNamespace& setAliyunProductMetricList(const vector<DescribeHybridMonitorNamespace::AliyunProductMetricList> & aliyunProductMetricList) { DARABONBA_PTR_SET_VALUE(aliyunProductMetricList_, aliyunProductMetricList) };
      inline DescribeHybridMonitorNamespace& setAliyunProductMetricList(vector<DescribeHybridMonitorNamespace::AliyunProductMetricList> && aliyunProductMetricList) { DARABONBA_PTR_SET_RVALUE(aliyunProductMetricList_, aliyunProductMetricList) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline DescribeHybridMonitorNamespace& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline DescribeHybridMonitorNamespace& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // detail Field Functions 
      bool hasDetail() const { return this->detail_ != nullptr;};
      void deleteDetail() { this->detail_ = nullptr;};
      inline const DescribeHybridMonitorNamespace::Detail & getDetail() const { DARABONBA_PTR_GET_CONST(detail_, DescribeHybridMonitorNamespace::Detail) };
      inline DescribeHybridMonitorNamespace::Detail getDetail() { DARABONBA_PTR_GET(detail_, DescribeHybridMonitorNamespace::Detail) };
      inline DescribeHybridMonitorNamespace& setDetail(const DescribeHybridMonitorNamespace::Detail & detail) { DARABONBA_PTR_SET_VALUE(detail_, detail) };
      inline DescribeHybridMonitorNamespace& setDetail(DescribeHybridMonitorNamespace::Detail && detail) { DARABONBA_PTR_SET_RVALUE(detail_, detail) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline DescribeHybridMonitorNamespace& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // isDelete Field Functions 
      bool hasIsDelete() const { return this->isDelete_ != nullptr;};
      void deleteIsDelete() { this->isDelete_ = nullptr;};
      inline int32_t getIsDelete() const { DARABONBA_PTR_GET_DEFAULT(isDelete_, 0) };
      inline DescribeHybridMonitorNamespace& setIsDelete(int32_t isDelete) { DARABONBA_PTR_SET_VALUE(isDelete_, isDelete) };


      // modifyTime Field Functions 
      bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
      void deleteModifyTime() { this->modifyTime_ = nullptr;};
      inline string getModifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, "") };
      inline DescribeHybridMonitorNamespace& setModifyTime(string modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


      // namespace Field Functions 
      bool hasNamespace() const { return this->namespace_ != nullptr;};
      void deleteNamespace() { this->namespace_ = nullptr;};
      inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
      inline DescribeHybridMonitorNamespace& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


      // namespaceType Field Functions 
      bool hasNamespaceType() const { return this->namespaceType_ != nullptr;};
      void deleteNamespaceType() { this->namespaceType_ = nullptr;};
      inline string getNamespaceType() const { DARABONBA_PTR_GET_DEFAULT(namespaceType_, "") };
      inline DescribeHybridMonitorNamespace& setNamespaceType(string namespaceType) { DARABONBA_PTR_SET_VALUE(namespaceType_, namespaceType) };


      // notAliyunTaskNumber Field Functions 
      bool hasNotAliyunTaskNumber() const { return this->notAliyunTaskNumber_ != nullptr;};
      void deleteNotAliyunTaskNumber() { this->notAliyunTaskNumber_ = nullptr;};
      inline int64_t getNotAliyunTaskNumber() const { DARABONBA_PTR_GET_DEFAULT(notAliyunTaskNumber_, 0L) };
      inline DescribeHybridMonitorNamespace& setNotAliyunTaskNumber(int64_t notAliyunTaskNumber) { DARABONBA_PTR_SET_VALUE(notAliyunTaskNumber_, notAliyunTaskNumber) };


    protected:
      // The configuration details of metric import tasks for Alibaba Cloud services.
      shared_ptr<vector<DescribeHybridMonitorNamespace::AliyunProductMetricList>> aliyunProductMetricList_ {};
      // The timestamp that was generated when the namespace was created.
      // 
      // Unit: milliseconds.
      shared_ptr<string> createTime_ {};
      // The description of the namespace.
      shared_ptr<string> description_ {};
      // The details of the data retention period.
      shared_ptr<DescribeHybridMonitorNamespace::Detail> detail_ {};
      // The ID of the namespace.
      shared_ptr<string> id_ {};
      // Indicates whether the namespace is deleted. Valid values:
      // 
      // *   0: The namespace is not deleted.
      // *   1: The namespace is deleted.
      shared_ptr<int32_t> isDelete_ {};
      // The timestamp that was generated when the namespace was last modified.
      shared_ptr<string> modifyTime_ {};
      // The name of the namespace.
      shared_ptr<string> namespace_ {};
      // The storage scheme of metric data. Valid values:
      // 
      // *   m_prom_user: The metric data is stored in Simple Log Service.
      // *   m_prom_pool: The metric data is stored in the storage space provided by CloudMonitor.
      shared_ptr<string> namespaceType_ {};
      // The number of metric import tasks for third-party services.
      shared_ptr<int64_t> notAliyunTaskNumber_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->describeHybridMonitorNamespace_ == nullptr && this->message_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr
        && this->success_ == nullptr && this->total_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeHybridMonitorNamespaceListResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // describeHybridMonitorNamespace Field Functions 
    bool hasDescribeHybridMonitorNamespace() const { return this->describeHybridMonitorNamespace_ != nullptr;};
    void deleteDescribeHybridMonitorNamespace() { this->describeHybridMonitorNamespace_ = nullptr;};
    inline const vector<DescribeHybridMonitorNamespaceListResponseBody::DescribeHybridMonitorNamespace> & getDescribeHybridMonitorNamespace() const { DARABONBA_PTR_GET_CONST(describeHybridMonitorNamespace_, vector<DescribeHybridMonitorNamespaceListResponseBody::DescribeHybridMonitorNamespace>) };
    inline vector<DescribeHybridMonitorNamespaceListResponseBody::DescribeHybridMonitorNamespace> getDescribeHybridMonitorNamespace() { DARABONBA_PTR_GET(describeHybridMonitorNamespace_, vector<DescribeHybridMonitorNamespaceListResponseBody::DescribeHybridMonitorNamespace>) };
    inline DescribeHybridMonitorNamespaceListResponseBody& setDescribeHybridMonitorNamespace(const vector<DescribeHybridMonitorNamespaceListResponseBody::DescribeHybridMonitorNamespace> & describeHybridMonitorNamespace) { DARABONBA_PTR_SET_VALUE(describeHybridMonitorNamespace_, describeHybridMonitorNamespace) };
    inline DescribeHybridMonitorNamespaceListResponseBody& setDescribeHybridMonitorNamespace(vector<DescribeHybridMonitorNamespaceListResponseBody::DescribeHybridMonitorNamespace> && describeHybridMonitorNamespace) { DARABONBA_PTR_SET_RVALUE(describeHybridMonitorNamespace_, describeHybridMonitorNamespace) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeHybridMonitorNamespaceListResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeHybridMonitorNamespaceListResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeHybridMonitorNamespaceListResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeHybridMonitorNamespaceListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline DescribeHybridMonitorNamespaceListResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline DescribeHybridMonitorNamespaceListResponseBody& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The response code.
    shared_ptr<string> code_ {};
    // The details of the namespaces.
    shared_ptr<vector<DescribeHybridMonitorNamespaceListResponseBody::DescribeHybridMonitorNamespace>> describeHybridMonitorNamespace_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   true
    // *   false
    shared_ptr<string> success_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
