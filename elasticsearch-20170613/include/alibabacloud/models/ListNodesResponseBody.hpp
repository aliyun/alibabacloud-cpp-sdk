// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNODESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTNODESRESPONSEBODY_HPP_
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
  class ListNodesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNodesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Headers, headers_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, ListNodesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Headers, headers_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    ListNodesResponseBody() = default ;
    ListNodesResponseBody(const ListNodesResponseBody &) = default ;
    ListNodesResponseBody(ListNodesResponseBody &&) = default ;
    ListNodesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNodesResponseBody() = default ;
    ListNodesResponseBody& operator=(const ListNodesResponseBody &) = default ;
    ListNodesResponseBody& operator=(ListNodesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(agentStatus, agentStatus_);
        DARABONBA_PTR_TO_JSON(cloudAssistantStatus, cloudAssistantStatus_);
        DARABONBA_PTR_TO_JSON(ecsInstanceId, ecsInstanceId_);
        DARABONBA_PTR_TO_JSON(ecsInstanceName, ecsInstanceName_);
        DARABONBA_PTR_TO_JSON(ipAddress, ipAddress_);
        DARABONBA_PTR_TO_JSON(osType, osType_);
        DARABONBA_PTR_TO_JSON(status, status_);
        DARABONBA_PTR_TO_JSON(tags, tags_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(agentStatus, agentStatus_);
        DARABONBA_PTR_FROM_JSON(cloudAssistantStatus, cloudAssistantStatus_);
        DARABONBA_PTR_FROM_JSON(ecsInstanceId, ecsInstanceId_);
        DARABONBA_PTR_FROM_JSON(ecsInstanceName, ecsInstanceName_);
        DARABONBA_PTR_FROM_JSON(ipAddress, ipAddress_);
        DARABONBA_PTR_FROM_JSON(osType, osType_);
        DARABONBA_PTR_FROM_JSON(status, status_);
        DARABONBA_PTR_FROM_JSON(tags, tags_);
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
      class Tags : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Tags& obj) { 
          DARABONBA_PTR_TO_JSON(tagKey, tagKey_);
          DARABONBA_PTR_TO_JSON(tagValue, tagValue_);
        };
        friend void from_json(const Darabonba::Json& j, Tags& obj) { 
          DARABONBA_PTR_FROM_JSON(tagKey, tagKey_);
          DARABONBA_PTR_FROM_JSON(tagValue, tagValue_);
        };
        Tags() = default ;
        Tags(const Tags &) = default ;
        Tags(Tags &&) = default ;
        Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Tags() = default ;
        Tags& operator=(const Tags &) = default ;
        Tags& operator=(Tags &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->tagKey_ == nullptr
        && this->tagValue_ == nullptr; };
        // tagKey Field Functions 
        bool hasTagKey() const { return this->tagKey_ != nullptr;};
        void deleteTagKey() { this->tagKey_ = nullptr;};
        inline string getTagKey() const { DARABONBA_PTR_GET_DEFAULT(tagKey_, "") };
        inline Tags& setTagKey(string tagKey) { DARABONBA_PTR_SET_VALUE(tagKey_, tagKey) };


        // tagValue Field Functions 
        bool hasTagValue() const { return this->tagValue_ != nullptr;};
        void deleteTagValue() { this->tagValue_ = nullptr;};
        inline string getTagValue() const { DARABONBA_PTR_GET_DEFAULT(tagValue_, "") };
        inline Tags& setTagValue(string tagValue) { DARABONBA_PTR_SET_VALUE(tagValue_, tagValue) };


      protected:
        // The key of the tag.
        shared_ptr<string> tagKey_ {};
        // The value of the tag.
        shared_ptr<string> tagValue_ {};
      };

      class IpAddress : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const IpAddress& obj) { 
          DARABONBA_PTR_TO_JSON(host, host_);
          DARABONBA_PTR_TO_JSON(ipType, ipType_);
        };
        friend void from_json(const Darabonba::Json& j, IpAddress& obj) { 
          DARABONBA_PTR_FROM_JSON(host, host_);
          DARABONBA_PTR_FROM_JSON(ipType, ipType_);
        };
        IpAddress() = default ;
        IpAddress(const IpAddress &) = default ;
        IpAddress(IpAddress &&) = default ;
        IpAddress(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~IpAddress() = default ;
        IpAddress& operator=(const IpAddress &) = default ;
        IpAddress& operator=(IpAddress &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->host_ == nullptr
        && this->ipType_ == nullptr; };
        // host Field Functions 
        bool hasHost() const { return this->host_ != nullptr;};
        void deleteHost() { this->host_ = nullptr;};
        inline string getHost() const { DARABONBA_PTR_GET_DEFAULT(host_, "") };
        inline IpAddress& setHost(string host) { DARABONBA_PTR_SET_VALUE(host_, host) };


        // ipType Field Functions 
        bool hasIpType() const { return this->ipType_ != nullptr;};
        void deleteIpType() { this->ipType_ = nullptr;};
        inline string getIpType() const { DARABONBA_PTR_GET_DEFAULT(ipType_, "") };
        inline IpAddress& setIpType(string ipType) { DARABONBA_PTR_SET_VALUE(ipType_, ipType) };


      protected:
        // The IP address.
        shared_ptr<string> host_ {};
        // The type of the IP address. Valid values:
        // 
        // *   public: public IP address
        // *   private: private IP address
        shared_ptr<string> ipType_ {};
      };

      virtual bool empty() const override { return this->agentStatus_ == nullptr
        && this->cloudAssistantStatus_ == nullptr && this->ecsInstanceId_ == nullptr && this->ecsInstanceName_ == nullptr && this->ipAddress_ == nullptr && this->osType_ == nullptr
        && this->status_ == nullptr && this->tags_ == nullptr; };
      // agentStatus Field Functions 
      bool hasAgentStatus() const { return this->agentStatus_ != nullptr;};
      void deleteAgentStatus() { this->agentStatus_ = nullptr;};
      inline string getAgentStatus() const { DARABONBA_PTR_GET_DEFAULT(agentStatus_, "") };
      inline Result& setAgentStatus(string agentStatus) { DARABONBA_PTR_SET_VALUE(agentStatus_, agentStatus) };


      // cloudAssistantStatus Field Functions 
      bool hasCloudAssistantStatus() const { return this->cloudAssistantStatus_ != nullptr;};
      void deleteCloudAssistantStatus() { this->cloudAssistantStatus_ = nullptr;};
      inline string getCloudAssistantStatus() const { DARABONBA_PTR_GET_DEFAULT(cloudAssistantStatus_, "") };
      inline Result& setCloudAssistantStatus(string cloudAssistantStatus) { DARABONBA_PTR_SET_VALUE(cloudAssistantStatus_, cloudAssistantStatus) };


      // ecsInstanceId Field Functions 
      bool hasEcsInstanceId() const { return this->ecsInstanceId_ != nullptr;};
      void deleteEcsInstanceId() { this->ecsInstanceId_ = nullptr;};
      inline string getEcsInstanceId() const { DARABONBA_PTR_GET_DEFAULT(ecsInstanceId_, "") };
      inline Result& setEcsInstanceId(string ecsInstanceId) { DARABONBA_PTR_SET_VALUE(ecsInstanceId_, ecsInstanceId) };


      // ecsInstanceName Field Functions 
      bool hasEcsInstanceName() const { return this->ecsInstanceName_ != nullptr;};
      void deleteEcsInstanceName() { this->ecsInstanceName_ = nullptr;};
      inline string getEcsInstanceName() const { DARABONBA_PTR_GET_DEFAULT(ecsInstanceName_, "") };
      inline Result& setEcsInstanceName(string ecsInstanceName) { DARABONBA_PTR_SET_VALUE(ecsInstanceName_, ecsInstanceName) };


      // ipAddress Field Functions 
      bool hasIpAddress() const { return this->ipAddress_ != nullptr;};
      void deleteIpAddress() { this->ipAddress_ = nullptr;};
      inline const vector<Result::IpAddress> & getIpAddress() const { DARABONBA_PTR_GET_CONST(ipAddress_, vector<Result::IpAddress>) };
      inline vector<Result::IpAddress> getIpAddress() { DARABONBA_PTR_GET(ipAddress_, vector<Result::IpAddress>) };
      inline Result& setIpAddress(const vector<Result::IpAddress> & ipAddress) { DARABONBA_PTR_SET_VALUE(ipAddress_, ipAddress) };
      inline Result& setIpAddress(vector<Result::IpAddress> && ipAddress) { DARABONBA_PTR_SET_RVALUE(ipAddress_, ipAddress) };


      // osType Field Functions 
      bool hasOsType() const { return this->osType_ != nullptr;};
      void deleteOsType() { this->osType_ = nullptr;};
      inline string getOsType() const { DARABONBA_PTR_GET_DEFAULT(osType_, "") };
      inline Result& setOsType(string osType) { DARABONBA_PTR_SET_VALUE(osType_, osType) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Result& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<Result::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Result::Tags>) };
      inline vector<Result::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<Result::Tags>) };
      inline Result& setTags(const vector<Result::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline Result& setTags(vector<Result::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    protected:
      // The status of the shipper on the ECS instance. Valid values:
      // 
      // *   heartOk: The heartbeat is normal.
      // *   heartLost: The heartbeat is abnormal.
      // *   uninstalled: The shipper is not installed.
      // *   failed: The shipper fails to be installed.
      shared_ptr<string> agentStatus_ {};
      // Indicates whether the Cloud Assistant client is installed. Valid values:
      // 
      // *   true: installed
      // *   false: not installed
      shared_ptr<string> cloudAssistantStatus_ {};
      // The ID of the ECS instance.
      shared_ptr<string> ecsInstanceId_ {};
      // The name of the ECS instance.
      shared_ptr<string> ecsInstanceName_ {};
      // The IP addresses of the ECS instance.
      shared_ptr<vector<Result::IpAddress>> ipAddress_ {};
      // The operating system type of the ECS instance. Valid values:
      // 
      // *   windows: Windows Server
      // *   linux: Linux
      shared_ptr<string> osType_ {};
      // The status of the ECS instance. Valid values:
      // 
      // *   running: The instance is running.
      // *   starting: The instance is being started.
      // *   stopping: The instance is being stopped.
      // *   stopped: The instance is stopped.
      shared_ptr<string> status_ {};
      // The tags of the ECS instance.
      shared_ptr<vector<Result::Tags>> tags_ {};
    };

    class Headers : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Headers& obj) { 
        DARABONBA_PTR_TO_JSON(X-Total-Count, xTotalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Headers& obj) { 
        DARABONBA_PTR_FROM_JSON(X-Total-Count, xTotalCount_);
      };
      Headers() = default ;
      Headers(const Headers &) = default ;
      Headers(Headers &&) = default ;
      Headers(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Headers() = default ;
      Headers& operator=(const Headers &) = default ;
      Headers& operator=(Headers &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->xTotalCount_ == nullptr; };
      // xTotalCount Field Functions 
      bool hasXTotalCount() const { return this->xTotalCount_ != nullptr;};
      void deleteXTotalCount() { this->xTotalCount_ = nullptr;};
      inline int32_t getXTotalCount() const { DARABONBA_PTR_GET_DEFAULT(xTotalCount_, 0) };
      inline Headers& setXTotalCount(int32_t xTotalCount) { DARABONBA_PTR_SET_VALUE(xTotalCount_, xTotalCount) };


    protected:
      // The number of entries returned.
      shared_ptr<int32_t> xTotalCount_ {};
    };

    virtual bool empty() const override { return this->headers_ == nullptr
        && this->requestId_ == nullptr && this->result_ == nullptr; };
    // headers Field Functions 
    bool hasHeaders() const { return this->headers_ != nullptr;};
    void deleteHeaders() { this->headers_ = nullptr;};
    inline const ListNodesResponseBody::Headers & getHeaders() const { DARABONBA_PTR_GET_CONST(headers_, ListNodesResponseBody::Headers) };
    inline ListNodesResponseBody::Headers getHeaders() { DARABONBA_PTR_GET(headers_, ListNodesResponseBody::Headers) };
    inline ListNodesResponseBody& setHeaders(const ListNodesResponseBody::Headers & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline ListNodesResponseBody& setHeaders(ListNodesResponseBody::Headers && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListNodesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<ListNodesResponseBody::Result> & getResult() const { DARABONBA_PTR_GET_CONST(result_, vector<ListNodesResponseBody::Result>) };
    inline vector<ListNodesResponseBody::Result> getResult() { DARABONBA_PTR_GET(result_, vector<ListNodesResponseBody::Result>) };
    inline ListNodesResponseBody& setResult(const vector<ListNodesResponseBody::Result> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline ListNodesResponseBody& setResult(vector<ListNodesResponseBody::Result> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // The header of the response.
    shared_ptr<ListNodesResponseBody::Headers> headers_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The returned result.
    shared_ptr<vector<ListNodesResponseBody::Result>> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
