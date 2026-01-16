// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATATASKSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDATATASKSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class ListDataTasksResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataTasksResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataTasksResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    ListDataTasksResponseBody() = default ;
    ListDataTasksResponseBody(const ListDataTasksResponseBody &) = default ;
    ListDataTasksResponseBody(ListDataTasksResponseBody &&) = default ;
    ListDataTasksResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataTasksResponseBody() = default ;
    ListDataTasksResponseBody& operator=(const ListDataTasksResponseBody &) = default ;
    ListDataTasksResponseBody& operator=(ListDataTasksResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(createTime, createTime_);
        DARABONBA_PTR_TO_JSON(sinkCluster, sinkCluster_);
        DARABONBA_PTR_TO_JSON(sourceCluster, sourceCluster_);
        DARABONBA_PTR_TO_JSON(status, status_);
        DARABONBA_PTR_TO_JSON(taskId, taskId_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(createTime, createTime_);
        DARABONBA_PTR_FROM_JSON(sinkCluster, sinkCluster_);
        DARABONBA_PTR_FROM_JSON(sourceCluster, sourceCluster_);
        DARABONBA_PTR_FROM_JSON(status, status_);
        DARABONBA_PTR_FROM_JSON(taskId, taskId_);
      };
      Result() = default ;
      Result(const Result &) = default ;
      Result(Result &&) = default ;
      Result(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Result() = default ;
      Result& operator=(const Result &) = default ;
      Result& operator=(Result &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SourceCluster : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SourceCluster& obj) { 
          DARABONBA_PTR_TO_JSON(dataSourceType, dataSourceType_);
          DARABONBA_PTR_TO_JSON(index, index_);
          DARABONBA_PTR_TO_JSON(mapping, mapping_);
          DARABONBA_PTR_TO_JSON(routing, routing_);
          DARABONBA_PTR_TO_JSON(settings, settings_);
          DARABONBA_PTR_TO_JSON(type, type_);
        };
        friend void from_json(const Darabonba::Json& j, SourceCluster& obj) { 
          DARABONBA_PTR_FROM_JSON(dataSourceType, dataSourceType_);
          DARABONBA_PTR_FROM_JSON(index, index_);
          DARABONBA_PTR_FROM_JSON(mapping, mapping_);
          DARABONBA_PTR_FROM_JSON(routing, routing_);
          DARABONBA_PTR_FROM_JSON(settings, settings_);
          DARABONBA_PTR_FROM_JSON(type, type_);
        };
        SourceCluster() = default ;
        SourceCluster(const SourceCluster &) = default ;
        SourceCluster(SourceCluster &&) = default ;
        SourceCluster(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SourceCluster() = default ;
        SourceCluster& operator=(const SourceCluster &) = default ;
        SourceCluster& operator=(SourceCluster &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->dataSourceType_ == nullptr
        && this->index_ == nullptr && this->mapping_ == nullptr && this->routing_ == nullptr && this->settings_ == nullptr && this->type_ == nullptr; };
        // dataSourceType Field Functions 
        bool hasDataSourceType() const { return this->dataSourceType_ != nullptr;};
        void deleteDataSourceType() { this->dataSourceType_ = nullptr;};
        inline string getDataSourceType() const { DARABONBA_PTR_GET_DEFAULT(dataSourceType_, "") };
        inline SourceCluster& setDataSourceType(string dataSourceType) { DARABONBA_PTR_SET_VALUE(dataSourceType_, dataSourceType) };


        // index Field Functions 
        bool hasIndex() const { return this->index_ != nullptr;};
        void deleteIndex() { this->index_ = nullptr;};
        inline string getIndex() const { DARABONBA_PTR_GET_DEFAULT(index_, "") };
        inline SourceCluster& setIndex(string index) { DARABONBA_PTR_SET_VALUE(index_, index) };


        // mapping Field Functions 
        bool hasMapping() const { return this->mapping_ != nullptr;};
        void deleteMapping() { this->mapping_ = nullptr;};
        inline string getMapping() const { DARABONBA_PTR_GET_DEFAULT(mapping_, "") };
        inline SourceCluster& setMapping(string mapping) { DARABONBA_PTR_SET_VALUE(mapping_, mapping) };


        // routing Field Functions 
        bool hasRouting() const { return this->routing_ != nullptr;};
        void deleteRouting() { this->routing_ = nullptr;};
        inline string getRouting() const { DARABONBA_PTR_GET_DEFAULT(routing_, "") };
        inline SourceCluster& setRouting(string routing) { DARABONBA_PTR_SET_VALUE(routing_, routing) };


        // settings Field Functions 
        bool hasSettings() const { return this->settings_ != nullptr;};
        void deleteSettings() { this->settings_ = nullptr;};
        inline string getSettings() const { DARABONBA_PTR_GET_DEFAULT(settings_, "") };
        inline SourceCluster& setSettings(string settings) { DARABONBA_PTR_SET_VALUE(settings_, settings) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline SourceCluster& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        // The type of the source cluster. Default value: elasticsearch.
        shared_ptr<string> dataSourceType_ {};
        // The index whose data you want to migrate.
        shared_ptr<string> index_ {};
        // The Mapping configuration of the cluster.
        shared_ptr<string> mapping_ {};
        // The routing field to index the table. It is set to the primary key by default.
        shared_ptr<string> routing_ {};
        // The Settings of the cluster.
        shared_ptr<string> settings_ {};
        // The type of the destination index.
        shared_ptr<string> type_ {};
      };

      class SinkCluster : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SinkCluster& obj) { 
          DARABONBA_PTR_TO_JSON(dataSourceType, dataSourceType_);
          DARABONBA_PTR_TO_JSON(endpoint, endpoint_);
          DARABONBA_PTR_TO_JSON(index, index_);
          DARABONBA_PTR_TO_JSON(type, type_);
          DARABONBA_PTR_TO_JSON(vpcId, vpcId_);
          DARABONBA_PTR_TO_JSON(vpcInstanceId, vpcInstanceId_);
          DARABONBA_PTR_TO_JSON(vpcInstancePort, vpcInstancePort_);
        };
        friend void from_json(const Darabonba::Json& j, SinkCluster& obj) { 
          DARABONBA_PTR_FROM_JSON(dataSourceType, dataSourceType_);
          DARABONBA_PTR_FROM_JSON(endpoint, endpoint_);
          DARABONBA_PTR_FROM_JSON(index, index_);
          DARABONBA_PTR_FROM_JSON(type, type_);
          DARABONBA_PTR_FROM_JSON(vpcId, vpcId_);
          DARABONBA_PTR_FROM_JSON(vpcInstanceId, vpcInstanceId_);
          DARABONBA_PTR_FROM_JSON(vpcInstancePort, vpcInstancePort_);
        };
        SinkCluster() = default ;
        SinkCluster(const SinkCluster &) = default ;
        SinkCluster(SinkCluster &&) = default ;
        SinkCluster(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SinkCluster() = default ;
        SinkCluster& operator=(const SinkCluster &) = default ;
        SinkCluster& operator=(SinkCluster &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->dataSourceType_ == nullptr
        && this->endpoint_ == nullptr && this->index_ == nullptr && this->type_ == nullptr && this->vpcId_ == nullptr && this->vpcInstanceId_ == nullptr
        && this->vpcInstancePort_ == nullptr; };
        // dataSourceType Field Functions 
        bool hasDataSourceType() const { return this->dataSourceType_ != nullptr;};
        void deleteDataSourceType() { this->dataSourceType_ = nullptr;};
        inline string getDataSourceType() const { DARABONBA_PTR_GET_DEFAULT(dataSourceType_, "") };
        inline SinkCluster& setDataSourceType(string dataSourceType) { DARABONBA_PTR_SET_VALUE(dataSourceType_, dataSourceType) };


        // endpoint Field Functions 
        bool hasEndpoint() const { return this->endpoint_ != nullptr;};
        void deleteEndpoint() { this->endpoint_ = nullptr;};
        inline string getEndpoint() const { DARABONBA_PTR_GET_DEFAULT(endpoint_, "") };
        inline SinkCluster& setEndpoint(string endpoint) { DARABONBA_PTR_SET_VALUE(endpoint_, endpoint) };


        // index Field Functions 
        bool hasIndex() const { return this->index_ != nullptr;};
        void deleteIndex() { this->index_ = nullptr;};
        inline string getIndex() const { DARABONBA_PTR_GET_DEFAULT(index_, "") };
        inline SinkCluster& setIndex(string index) { DARABONBA_PTR_SET_VALUE(index_, index) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline SinkCluster& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // vpcId Field Functions 
        bool hasVpcId() const { return this->vpcId_ != nullptr;};
        void deleteVpcId() { this->vpcId_ = nullptr;};
        inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
        inline SinkCluster& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


        // vpcInstanceId Field Functions 
        bool hasVpcInstanceId() const { return this->vpcInstanceId_ != nullptr;};
        void deleteVpcInstanceId() { this->vpcInstanceId_ = nullptr;};
        inline string getVpcInstanceId() const { DARABONBA_PTR_GET_DEFAULT(vpcInstanceId_, "") };
        inline SinkCluster& setVpcInstanceId(string vpcInstanceId) { DARABONBA_PTR_SET_VALUE(vpcInstanceId_, vpcInstanceId) };


        // vpcInstancePort Field Functions 
        bool hasVpcInstancePort() const { return this->vpcInstancePort_ != nullptr;};
        void deleteVpcInstancePort() { this->vpcInstancePort_ = nullptr;};
        inline string getVpcInstancePort() const { DARABONBA_PTR_GET_DEFAULT(vpcInstancePort_, "") };
        inline SinkCluster& setVpcInstancePort(string vpcInstancePort) { DARABONBA_PTR_SET_VALUE(vpcInstancePort_, vpcInstancePort) };


      protected:
        // The type of the target cluster. Default value: elasticsearch.
        shared_ptr<string> dataSourceType_ {};
        // The public network access address of the target cluster.
        shared_ptr<string> endpoint_ {};
        // The target index.
        shared_ptr<string> index_ {};
        // The type of the destination index.
        shared_ptr<string> type_ {};
        // The ID of the VPC to which the cluster belongs.
        shared_ptr<string> vpcId_ {};
        // The instance ID or Server Load Balancer (SLB) ID of the current cluster.
        shared_ptr<string> vpcInstanceId_ {};
        // The access port number of the cluster.
        shared_ptr<string> vpcInstancePort_ {};
      };

      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->sinkCluster_ == nullptr && this->sourceCluster_ == nullptr && this->status_ == nullptr && this->taskId_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Result& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // sinkCluster Field Functions 
      bool hasSinkCluster() const { return this->sinkCluster_ != nullptr;};
      void deleteSinkCluster() { this->sinkCluster_ = nullptr;};
      inline const Result::SinkCluster & getSinkCluster() const { DARABONBA_PTR_GET_CONST(sinkCluster_, Result::SinkCluster) };
      inline Result::SinkCluster getSinkCluster() { DARABONBA_PTR_GET(sinkCluster_, Result::SinkCluster) };
      inline Result& setSinkCluster(const Result::SinkCluster & sinkCluster) { DARABONBA_PTR_SET_VALUE(sinkCluster_, sinkCluster) };
      inline Result& setSinkCluster(Result::SinkCluster && sinkCluster) { DARABONBA_PTR_SET_RVALUE(sinkCluster_, sinkCluster) };


      // sourceCluster Field Functions 
      bool hasSourceCluster() const { return this->sourceCluster_ != nullptr;};
      void deleteSourceCluster() { this->sourceCluster_ = nullptr;};
      inline const Result::SourceCluster & getSourceCluster() const { DARABONBA_PTR_GET_CONST(sourceCluster_, Result::SourceCluster) };
      inline Result::SourceCluster getSourceCluster() { DARABONBA_PTR_GET(sourceCluster_, Result::SourceCluster) };
      inline Result& setSourceCluster(const Result::SourceCluster & sourceCluster) { DARABONBA_PTR_SET_VALUE(sourceCluster_, sourceCluster) };
      inline Result& setSourceCluster(Result::SourceCluster && sourceCluster) { DARABONBA_PTR_SET_RVALUE(sourceCluster_, sourceCluster) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Result& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline Result& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    protected:
      // The time when the site monitoring task was created.
      shared_ptr<string> createTime_ {};
      // The information of the target cluster.
      shared_ptr<Result::SinkCluster> sinkCluster_ {};
      // The information about the source cluster.
      shared_ptr<Result::SourceCluster> sourceCluster_ {};
      // The status of the task.
      shared_ptr<string> status_ {};
      // The ID of the task.
      shared_ptr<string> taskId_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDataTasksResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<ListDataTasksResponseBody::Result> & getResult() const { DARABONBA_PTR_GET_CONST(result_, vector<ListDataTasksResponseBody::Result>) };
    inline vector<ListDataTasksResponseBody::Result> getResult() { DARABONBA_PTR_GET(result_, vector<ListDataTasksResponseBody::Result>) };
    inline ListDataTasksResponseBody& setResult(const vector<ListDataTasksResponseBody::Result> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline ListDataTasksResponseBody& setResult(vector<ListDataTasksResponseBody::Result> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The return results.
    shared_ptr<vector<ListDataTasksResponseBody::Result>> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
