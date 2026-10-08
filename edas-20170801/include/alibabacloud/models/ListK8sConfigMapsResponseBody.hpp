// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTK8SCONFIGMAPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTK8SCONFIGMAPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class ListK8sConfigMapsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListK8sConfigMapsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, ListK8sConfigMapsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    ListK8sConfigMapsResponseBody() = default ;
    ListK8sConfigMapsResponseBody(const ListK8sConfigMapsResponseBody &) = default ;
    ListK8sConfigMapsResponseBody(ListK8sConfigMapsResponseBody &&) = default ;
    ListK8sConfigMapsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListK8sConfigMapsResponseBody() = default ;
    ListK8sConfigMapsResponseBody& operator=(const ListK8sConfigMapsResponseBody &) = default ;
    ListK8sConfigMapsResponseBody& operator=(ListK8sConfigMapsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(ConfigMaps, configMaps_);
        DARABONBA_PTR_TO_JSON(Total, total_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(ConfigMaps, configMaps_);
        DARABONBA_PTR_FROM_JSON(Total, total_);
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
      class ConfigMaps : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ConfigMaps& obj) { 
          DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
          DARABONBA_PTR_TO_JSON(ClusterName, clusterName_);
          DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
          DARABONBA_PTR_TO_JSON(Data, data_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Namespace, namespace_);
          DARABONBA_PTR_TO_JSON(RelatedApps, relatedApps_);
        };
        friend void from_json(const Darabonba::Json& j, ConfigMaps& obj) { 
          DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
          DARABONBA_PTR_FROM_JSON(ClusterName, clusterName_);
          DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
          DARABONBA_PTR_FROM_JSON(Data, data_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
          DARABONBA_PTR_FROM_JSON(RelatedApps, relatedApps_);
        };
        ConfigMaps() = default ;
        ConfigMaps(const ConfigMaps &) = default ;
        ConfigMaps(ConfigMaps &&) = default ;
        ConfigMaps(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ConfigMaps() = default ;
        ConfigMaps& operator=(const ConfigMaps &) = default ;
        ConfigMaps& operator=(ConfigMaps &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class RelatedApps : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const RelatedApps& obj) { 
            DARABONBA_PTR_TO_JSON(AppId, appId_);
            DARABONBA_PTR_TO_JSON(AppName, appName_);
          };
          friend void from_json(const Darabonba::Json& j, RelatedApps& obj) { 
            DARABONBA_PTR_FROM_JSON(AppId, appId_);
            DARABONBA_PTR_FROM_JSON(AppName, appName_);
          };
          RelatedApps() = default ;
          RelatedApps(const RelatedApps &) = default ;
          RelatedApps(RelatedApps &&) = default ;
          RelatedApps(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~RelatedApps() = default ;
          RelatedApps& operator=(const RelatedApps &) = default ;
          RelatedApps& operator=(RelatedApps &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->appId_ == nullptr
        && this->appName_ == nullptr; };
          // appId Field Functions 
          bool hasAppId() const { return this->appId_ != nullptr;};
          void deleteAppId() { this->appId_ = nullptr;};
          inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
          inline RelatedApps& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


          // appName Field Functions 
          bool hasAppName() const { return this->appName_ != nullptr;};
          void deleteAppName() { this->appName_ = nullptr;};
          inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
          inline RelatedApps& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


        protected:
          // The ID of the application.
          shared_ptr<string> appId_ {};
          // The name of the application.
          shared_ptr<string> appName_ {};
        };

        class Data : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Data& obj) { 
            DARABONBA_PTR_TO_JSON(Key, key_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, Data& obj) { 
            DARABONBA_PTR_FROM_JSON(Key, key_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
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
          virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
          // key Field Functions 
          bool hasKey() const { return this->key_ != nullptr;};
          void deleteKey() { this->key_ = nullptr;};
          inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
          inline Data& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline Data& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          // The user-defined key that is stored in the ConfigMap.
          shared_ptr<string> key_ {};
          // The user-defined value that is stored in the ConfigMap.
          shared_ptr<string> value_ {};
        };

        virtual bool empty() const override { return this->clusterId_ == nullptr
        && this->clusterName_ == nullptr && this->creationTime_ == nullptr && this->data_ == nullptr && this->name_ == nullptr && this->namespace_ == nullptr
        && this->relatedApps_ == nullptr; };
        // clusterId Field Functions 
        bool hasClusterId() const { return this->clusterId_ != nullptr;};
        void deleteClusterId() { this->clusterId_ = nullptr;};
        inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
        inline ConfigMaps& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


        // clusterName Field Functions 
        bool hasClusterName() const { return this->clusterName_ != nullptr;};
        void deleteClusterName() { this->clusterName_ = nullptr;};
        inline string getClusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
        inline ConfigMaps& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


        // creationTime Field Functions 
        bool hasCreationTime() const { return this->creationTime_ != nullptr;};
        void deleteCreationTime() { this->creationTime_ = nullptr;};
        inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
        inline ConfigMaps& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


        // data Field Functions 
        bool hasData() const { return this->data_ != nullptr;};
        void deleteData() { this->data_ = nullptr;};
        inline const vector<ConfigMaps::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ConfigMaps::Data>) };
        inline vector<ConfigMaps::Data> getData() { DARABONBA_PTR_GET(data_, vector<ConfigMaps::Data>) };
        inline ConfigMaps& setData(const vector<ConfigMaps::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
        inline ConfigMaps& setData(vector<ConfigMaps::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline ConfigMaps& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // namespace Field Functions 
        bool hasNamespace() const { return this->namespace_ != nullptr;};
        void deleteNamespace() { this->namespace_ = nullptr;};
        inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
        inline ConfigMaps& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


        // relatedApps Field Functions 
        bool hasRelatedApps() const { return this->relatedApps_ != nullptr;};
        void deleteRelatedApps() { this->relatedApps_ = nullptr;};
        inline const vector<ConfigMaps::RelatedApps> & getRelatedApps() const { DARABONBA_PTR_GET_CONST(relatedApps_, vector<ConfigMaps::RelatedApps>) };
        inline vector<ConfigMaps::RelatedApps> getRelatedApps() { DARABONBA_PTR_GET(relatedApps_, vector<ConfigMaps::RelatedApps>) };
        inline ConfigMaps& setRelatedApps(const vector<ConfigMaps::RelatedApps> & relatedApps) { DARABONBA_PTR_SET_VALUE(relatedApps_, relatedApps) };
        inline ConfigMaps& setRelatedApps(vector<ConfigMaps::RelatedApps> && relatedApps) { DARABONBA_PTR_SET_RVALUE(relatedApps_, relatedApps) };


      protected:
        // The ID of the Kubernetes cluster. You can obtain the cluster ID by calling the GetK8sCluster operation. For more information, see [GetK8sCluster](https://help.aliyun.com/document_detail/181437.html).
        shared_ptr<string> clusterId_ {};
        // The name of the cluster.
        shared_ptr<string> clusterName_ {};
        // The time when the ConfigMaps were created. The time follows the ISO 8601 standard in the yyyy-MM-ddThh:mm:ssZ format. The time is displayed in UTC.
        shared_ptr<string> creationTime_ {};
        // The information about ConfigMaps.
        shared_ptr<vector<ConfigMaps::Data>> data_ {};
        // The name of the ConfigMap.
        shared_ptr<string> name_ {};
        // The namespace of the Kubernetes cluster.
        shared_ptr<string> namespace_ {};
        // The related applications.
        shared_ptr<vector<ConfigMaps::RelatedApps>> relatedApps_ {};
      };

      virtual bool empty() const override { return this->configMaps_ == nullptr
        && this->total_ == nullptr; };
      // configMaps Field Functions 
      bool hasConfigMaps() const { return this->configMaps_ != nullptr;};
      void deleteConfigMaps() { this->configMaps_ = nullptr;};
      inline const vector<Result::ConfigMaps> & getConfigMaps() const { DARABONBA_PTR_GET_CONST(configMaps_, vector<Result::ConfigMaps>) };
      inline vector<Result::ConfigMaps> getConfigMaps() { DARABONBA_PTR_GET(configMaps_, vector<Result::ConfigMaps>) };
      inline Result& setConfigMaps(const vector<Result::ConfigMaps> & configMaps) { DARABONBA_PTR_SET_VALUE(configMaps_, configMaps) };
      inline Result& setConfigMaps(vector<Result::ConfigMaps> && configMaps) { DARABONBA_PTR_SET_RVALUE(configMaps_, configMaps) };


      // total Field Functions 
      bool hasTotal() const { return this->total_ != nullptr;};
      void deleteTotal() { this->total_ = nullptr;};
      inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
      inline Result& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    protected:
      // The information about ConfigMaps.
      shared_ptr<vector<Result::ConfigMaps>> configMaps_ {};
      // The total number of entries that are returned.
      shared_ptr<int32_t> total_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->result_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline ListK8sConfigMapsResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListK8sConfigMapsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListK8sConfigMapsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const ListK8sConfigMapsResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, ListK8sConfigMapsResponseBody::Result) };
    inline ListK8sConfigMapsResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, ListK8sConfigMapsResponseBody::Result) };
    inline ListK8sConfigMapsResponseBody& setResult(const ListK8sConfigMapsResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline ListK8sConfigMapsResponseBody& setResult(ListK8sConfigMapsResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // The HTTP status code.
    shared_ptr<int32_t> code_ {};
    // The additional information that is returned.
    shared_ptr<string> message_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The query results that are returned.
    shared_ptr<ListK8sConfigMapsResponseBody::Result> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
