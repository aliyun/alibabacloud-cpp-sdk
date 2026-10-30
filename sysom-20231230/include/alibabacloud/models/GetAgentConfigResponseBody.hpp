// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAGENTCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAGENTCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SysOM20231230
{
namespace Models
{
  class GetAgentConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAgentConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(total, total_);
    };
    friend void from_json(const Darabonba::Json& j, GetAgentConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(total, total_);
    };
    GetAgentConfigResponseBody() = default ;
    GetAgentConfigResponseBody(const GetAgentConfigResponseBody &) = default ;
    GetAgentConfigResponseBody(GetAgentConfigResponseBody &&) = default ;
    GetAgentConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAgentConfigResponseBody() = default ;
    GetAgentConfigResponseBody& operator=(const GetAgentConfigResponseBody &) = default ;
    GetAgentConfigResponseBody& operator=(GetAgentConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(configId, configId_);
        DARABONBA_PTR_TO_JSON(configName, configName_);
        DARABONBA_PTR_TO_JSON(configType, configType_);
        DARABONBA_PTR_TO_JSON(content, content_);
        DARABONBA_PTR_TO_JSON(createdAt, createdAt_);
        DARABONBA_PTR_TO_JSON(resource, resource_);
        DARABONBA_PTR_TO_JSON(updatedAt, updatedAt_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(configId, configId_);
        DARABONBA_PTR_FROM_JSON(configName, configName_);
        DARABONBA_PTR_FROM_JSON(configType, configType_);
        DARABONBA_PTR_FROM_JSON(content, content_);
        DARABONBA_PTR_FROM_JSON(createdAt, createdAt_);
        DARABONBA_PTR_FROM_JSON(resource, resource_);
        DARABONBA_PTR_FROM_JSON(updatedAt, updatedAt_);
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
      class Resource : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Resource& obj) { 
          DARABONBA_PTR_TO_JSON(cluster, cluster_);
          DARABONBA_PTR_TO_JSON(node, node_);
        };
        friend void from_json(const Darabonba::Json& j, Resource& obj) { 
          DARABONBA_PTR_FROM_JSON(cluster, cluster_);
          DARABONBA_PTR_FROM_JSON(node, node_);
        };
        Resource() = default ;
        Resource(const Resource &) = default ;
        Resource(Resource &&) = default ;
        Resource(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Resource() = default ;
        Resource& operator=(const Resource &) = default ;
        Resource& operator=(Resource &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->cluster_ == nullptr
        && this->node_ == nullptr; };
        // cluster Field Functions 
        bool hasCluster() const { return this->cluster_ != nullptr;};
        void deleteCluster() { this->cluster_ = nullptr;};
        inline int32_t getCluster() const { DARABONBA_PTR_GET_DEFAULT(cluster_, 0) };
        inline Resource& setCluster(int32_t cluster) { DARABONBA_PTR_SET_VALUE(cluster_, cluster) };


        // node Field Functions 
        bool hasNode() const { return this->node_ != nullptr;};
        void deleteNode() { this->node_ = nullptr;};
        inline int32_t getNode() const { DARABONBA_PTR_GET_DEFAULT(node_, 0) };
        inline Resource& setNode(int32_t node) { DARABONBA_PTR_SET_VALUE(node_, node) };


      protected:
        // The number of clusters to which the configuration is applied.
        shared_ptr<int32_t> cluster_ {};
        // The number of nodes to which the configuration is applied.
        shared_ptr<int32_t> node_ {};
      };

      virtual bool empty() const override { return this->configId_ == nullptr
        && this->configName_ == nullptr && this->configType_ == nullptr && this->content_ == nullptr && this->createdAt_ == nullptr && this->resource_ == nullptr
        && this->updatedAt_ == nullptr; };
      // configId Field Functions 
      bool hasConfigId() const { return this->configId_ != nullptr;};
      void deleteConfigId() { this->configId_ = nullptr;};
      inline string getConfigId() const { DARABONBA_PTR_GET_DEFAULT(configId_, "") };
      inline Data& setConfigId(string configId) { DARABONBA_PTR_SET_VALUE(configId_, configId) };


      // configName Field Functions 
      bool hasConfigName() const { return this->configName_ != nullptr;};
      void deleteConfigName() { this->configName_ = nullptr;};
      inline string getConfigName() const { DARABONBA_PTR_GET_DEFAULT(configName_, "") };
      inline Data& setConfigName(string configName) { DARABONBA_PTR_SET_VALUE(configName_, configName) };


      // configType Field Functions 
      bool hasConfigType() const { return this->configType_ != nullptr;};
      void deleteConfigType() { this->configType_ = nullptr;};
      inline string getConfigType() const { DARABONBA_PTR_GET_DEFAULT(configType_, "") };
      inline Data& setConfigType(string configType) { DARABONBA_PTR_SET_VALUE(configType_, configType) };


      // content Field Functions 
      bool hasContent() const { return this->content_ != nullptr;};
      void deleteContent() { this->content_ = nullptr;};
      inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
      inline Data& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


      // createdAt Field Functions 
      bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
      void deleteCreatedAt() { this->createdAt_ = nullptr;};
      inline string getCreatedAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
      inline Data& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


      // resource Field Functions 
      bool hasResource() const { return this->resource_ != nullptr;};
      void deleteResource() { this->resource_ = nullptr;};
      inline const Data::Resource & getResource() const { DARABONBA_PTR_GET_CONST(resource_, Data::Resource) };
      inline Data::Resource getResource() { DARABONBA_PTR_GET(resource_, Data::Resource) };
      inline Data& setResource(const Data::Resource & resource) { DARABONBA_PTR_SET_VALUE(resource_, resource) };
      inline Data& setResource(Data::Resource && resource) { DARABONBA_PTR_SET_RVALUE(resource_, resource) };


      // updatedAt Field Functions 
      bool hasUpdatedAt() const { return this->updatedAt_ != nullptr;};
      void deleteUpdatedAt() { this->updatedAt_ = nullptr;};
      inline string getUpdatedAt() const { DARABONBA_PTR_GET_DEFAULT(updatedAt_, "") };
      inline Data& setUpdatedAt(string updatedAt) { DARABONBA_PTR_SET_VALUE(updatedAt_, updatedAt) };


    protected:
      // The ID of the component configuration.
      shared_ptr<string> configId_ {};
      // The name of the configuration.
      shared_ptr<string> configName_ {};
      // The type of the configuration.
      shared_ptr<string> configType_ {};
      // The text of the chat content.
      shared_ptr<string> content_ {};
      // The creation time.
      shared_ptr<string> createdAt_ {};
      // The information about the resources to which the configuration is applied.
      shared_ptr<Data::Resource> resource_ {};
      // The update time.
      shared_ptr<string> updatedAt_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->total_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetAgentConfigResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<GetAgentConfigResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<GetAgentConfigResponseBody::Data>) };
    inline vector<GetAgentConfigResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<GetAgentConfigResponseBody::Data>) };
    inline GetAgentConfigResponseBody& setData(const vector<GetAgentConfigResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetAgentConfigResponseBody& setData(vector<GetAgentConfigResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetAgentConfigResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAgentConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline GetAgentConfigResponseBody& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The status code.
    shared_ptr<string> code_ {};
    // The returned data.
    shared_ptr<vector<GetAgentConfigResponseBody::Data>> data_ {};
    // The error message.
    // - If `code == Success`, this field is empty.
    // - Otherwise, this field contains the error message of the request.
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    // The total number of returned records.
    shared_ptr<int64_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SysOM20231230
#endif
