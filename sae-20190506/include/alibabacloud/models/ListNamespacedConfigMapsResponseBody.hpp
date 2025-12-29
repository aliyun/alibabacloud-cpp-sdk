// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNAMESPACEDCONFIGMAPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTNAMESPACEDCONFIGMAPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class ListNamespacedConfigMapsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNamespacedConfigMapsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TraceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, ListNamespacedConfigMapsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TraceId, traceId_);
    };
    ListNamespacedConfigMapsResponseBody() = default ;
    ListNamespacedConfigMapsResponseBody(const ListNamespacedConfigMapsResponseBody &) = default ;
    ListNamespacedConfigMapsResponseBody(ListNamespacedConfigMapsResponseBody &&) = default ;
    ListNamespacedConfigMapsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNamespacedConfigMapsResponseBody() = default ;
    ListNamespacedConfigMapsResponseBody& operator=(const ListNamespacedConfigMapsResponseBody &) = default ;
    ListNamespacedConfigMapsResponseBody& operator=(ListNamespacedConfigMapsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ConfigMaps, configMaps_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ConfigMaps, configMaps_);
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
      class ConfigMaps : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ConfigMaps& obj) { 
          DARABONBA_PTR_TO_JSON(ConfigMapId, configMapId_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_ANY_TO_JSON(Data, data_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(NamespaceId, namespaceId_);
          DARABONBA_PTR_TO_JSON(RelateApps, relateApps_);
          DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
        };
        friend void from_json(const Darabonba::Json& j, ConfigMaps& obj) { 
          DARABONBA_PTR_FROM_JSON(ConfigMapId, configMapId_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_ANY_FROM_JSON(Data, data_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(NamespaceId, namespaceId_);
          DARABONBA_PTR_FROM_JSON(RelateApps, relateApps_);
          DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
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
        class RelateApps : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const RelateApps& obj) { 
            DARABONBA_PTR_TO_JSON(AppId, appId_);
            DARABONBA_PTR_TO_JSON(AppName, appName_);
          };
          friend void from_json(const Darabonba::Json& j, RelateApps& obj) { 
            DARABONBA_PTR_FROM_JSON(AppId, appId_);
            DARABONBA_PTR_FROM_JSON(AppName, appName_);
          };
          RelateApps() = default ;
          RelateApps(const RelateApps &) = default ;
          RelateApps(RelateApps &&) = default ;
          RelateApps(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~RelateApps() = default ;
          RelateApps& operator=(const RelateApps &) = default ;
          RelateApps& operator=(RelateApps &&) = default ;
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
          inline RelateApps& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


          // appName Field Functions 
          bool hasAppName() const { return this->appName_ != nullptr;};
          void deleteAppName() { this->appName_ = nullptr;};
          inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
          inline RelateApps& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


        protected:
          // The ID of the application.
          shared_ptr<string> appId_ {};
          // The name of the application.
          shared_ptr<string> appName_ {};
        };

        virtual bool empty() const override { return this->configMapId_ == nullptr
        && this->createTime_ == nullptr && this->data_ == nullptr && this->description_ == nullptr && this->name_ == nullptr && this->namespaceId_ == nullptr
        && this->relateApps_ == nullptr && this->updateTime_ == nullptr; };
        // configMapId Field Functions 
        bool hasConfigMapId() const { return this->configMapId_ != nullptr;};
        void deleteConfigMapId() { this->configMapId_ = nullptr;};
        inline int64_t getConfigMapId() const { DARABONBA_PTR_GET_DEFAULT(configMapId_, 0L) };
        inline ConfigMaps& setConfigMapId(int64_t configMapId) { DARABONBA_PTR_SET_VALUE(configMapId_, configMapId) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
        inline ConfigMaps& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // data Field Functions 
        bool hasData() const { return this->data_ != nullptr;};
        void deleteData() { this->data_ = nullptr;};
        inline         const Darabonba::Json & getData() const { DARABONBA_GET(data_) };
        Darabonba::Json & getData() { DARABONBA_GET(data_) };
        inline ConfigMaps& setData(const Darabonba::Json & data) { DARABONBA_SET_VALUE(data_, data) };
        inline ConfigMaps& setData(Darabonba::Json && data) { DARABONBA_SET_RVALUE(data_, data) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline ConfigMaps& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline ConfigMaps& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // namespaceId Field Functions 
        bool hasNamespaceId() const { return this->namespaceId_ != nullptr;};
        void deleteNamespaceId() { this->namespaceId_ = nullptr;};
        inline string getNamespaceId() const { DARABONBA_PTR_GET_DEFAULT(namespaceId_, "") };
        inline ConfigMaps& setNamespaceId(string namespaceId) { DARABONBA_PTR_SET_VALUE(namespaceId_, namespaceId) };


        // relateApps Field Functions 
        bool hasRelateApps() const { return this->relateApps_ != nullptr;};
        void deleteRelateApps() { this->relateApps_ = nullptr;};
        inline const vector<ConfigMaps::RelateApps> & getRelateApps() const { DARABONBA_PTR_GET_CONST(relateApps_, vector<ConfigMaps::RelateApps>) };
        inline vector<ConfigMaps::RelateApps> getRelateApps() { DARABONBA_PTR_GET(relateApps_, vector<ConfigMaps::RelateApps>) };
        inline ConfigMaps& setRelateApps(const vector<ConfigMaps::RelateApps> & relateApps) { DARABONBA_PTR_SET_VALUE(relateApps_, relateApps) };
        inline ConfigMaps& setRelateApps(vector<ConfigMaps::RelateApps> && relateApps) { DARABONBA_PTR_SET_RVALUE(relateApps_, relateApps) };


        // updateTime Field Functions 
        bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
        void deleteUpdateTime() { this->updateTime_ = nullptr;};
        inline int64_t getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
        inline ConfigMaps& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


      protected:
        // The ID of the ConfigMap instance.
        shared_ptr<int64_t> configMapId_ {};
        // The time when the instance was created.
        shared_ptr<int64_t> createTime_ {};
        // The data of ConfigMap key-value pairs. Format:
        // 
        // {"k1":"v1", "k2":"v2"}
        // 
        // k specifies a key and v specifies a value. For more information, see [Manage and use configurations](https://help.aliyun.com/document_detail/171326.html).
        Darabonba::Json data_ {};
        // The description of the instance.
        shared_ptr<string> description_ {};
        // The name of the ConfigMap instance.
        shared_ptr<string> name_ {};
        // The ID of the namespace.
        shared_ptr<string> namespaceId_ {};
        // The application that is associated with the instance.
        shared_ptr<vector<ConfigMaps::RelateApps>> relateApps_ {};
        // The time when the instance was last modified.
        shared_ptr<int64_t> updateTime_ {};
      };

      virtual bool empty() const override { return this->configMaps_ == nullptr; };
      // configMaps Field Functions 
      bool hasConfigMaps() const { return this->configMaps_ != nullptr;};
      void deleteConfigMaps() { this->configMaps_ = nullptr;};
      inline const vector<Data::ConfigMaps> & getConfigMaps() const { DARABONBA_PTR_GET_CONST(configMaps_, vector<Data::ConfigMaps>) };
      inline vector<Data::ConfigMaps> getConfigMaps() { DARABONBA_PTR_GET(configMaps_, vector<Data::ConfigMaps>) };
      inline Data& setConfigMaps(const vector<Data::ConfigMaps> & configMaps) { DARABONBA_PTR_SET_VALUE(configMaps_, configMaps) };
      inline Data& setConfigMaps(vector<Data::ConfigMaps> && configMaps) { DARABONBA_PTR_SET_RVALUE(configMaps_, configMaps) };


    protected:
      // The ConfigMap instances.
      shared_ptr<vector<Data::ConfigMaps>> configMaps_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->errorCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr
        && this->traceId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListNamespacedConfigMapsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListNamespacedConfigMapsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListNamespacedConfigMapsResponseBody::Data) };
    inline ListNamespacedConfigMapsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListNamespacedConfigMapsResponseBody::Data) };
    inline ListNamespacedConfigMapsResponseBody& setData(const ListNamespacedConfigMapsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListNamespacedConfigMapsResponseBody& setData(ListNamespacedConfigMapsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ListNamespacedConfigMapsResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListNamespacedConfigMapsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListNamespacedConfigMapsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListNamespacedConfigMapsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline ListNamespacedConfigMapsResponseBody& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    // The HTTP status code. Valid values:
    // 
    // *   **2xx**: indicates that the call was successful.
    // *   **3xx**: indicates that the call was redirected.
    // *   **4xx**: indicates that the call failed.
    // *   **5xx**: indicates that a server error occurred.
    shared_ptr<string> code_ {};
    // The returned result.
    shared_ptr<ListNamespacedConfigMapsResponseBody::Data> data_ {};
    // The returned error code. Valid values:
    // 
    // - If the call is successful, the **ErrorCode** parameter is not returned.
    // - If the call fails, the **ErrorCode** parameter is returned. For more information, see the "**Error codes**" section of this topic.
    shared_ptr<string> errorCode_ {};
    // The returned information. Valid values:
    // 
    // *   If the call is successful, **success** is returned.
    // *   If the call fails, an error code is returned.
    shared_ptr<string> message_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the ConfigMap instances were obtained. Valid values:
    // 
    // *   **true**: The instances were obtained.
    // *   **false**: The instances failed to be obtained.
    shared_ptr<bool> success_ {};
    // The ID of the trace. The ID is used to query the details of a request.
    shared_ptr<string> traceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
