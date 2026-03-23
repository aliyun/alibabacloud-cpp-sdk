// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEDGEFUNCTIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEDGEFUNCTIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RdsAi20250507
{
namespace Models
{
  class DescribeEdgeFunctionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEdgeFunctionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(EdgeFunctions, edgeFunctions_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEdgeFunctionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(EdgeFunctions, edgeFunctions_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeEdgeFunctionsResponseBody() = default ;
    DescribeEdgeFunctionsResponseBody(const DescribeEdgeFunctionsResponseBody &) = default ;
    DescribeEdgeFunctionsResponseBody(DescribeEdgeFunctionsResponseBody &&) = default ;
    DescribeEdgeFunctionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEdgeFunctionsResponseBody() = default ;
    DescribeEdgeFunctionsResponseBody& operator=(const DescribeEdgeFunctionsResponseBody &) = default ;
    DescribeEdgeFunctionsResponseBody& operator=(DescribeEdgeFunctionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class EdgeFunctions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const EdgeFunctions& obj) { 
        DARABONBA_PTR_TO_JSON(Cpu, cpu_);
        DARABONBA_PTR_TO_JSON(CreatedTime, createdTime_);
        DARABONBA_PTR_TO_JSON(EdgeFunctionName, edgeFunctionName_);
        DARABONBA_PTR_TO_JSON(FunctionUrl, functionUrl_);
        DARABONBA_PTR_TO_JSON(MemorySize, memorySize_);
        DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
        DARABONBA_PTR_TO_JSON(Runtime, runtime_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(UrlInternet, urlInternet_);
        DARABONBA_PTR_TO_JSON(UrlIntranet, urlIntranet_);
      };
      friend void from_json(const Darabonba::Json& j, EdgeFunctions& obj) { 
        DARABONBA_PTR_FROM_JSON(Cpu, cpu_);
        DARABONBA_PTR_FROM_JSON(CreatedTime, createdTime_);
        DARABONBA_PTR_FROM_JSON(EdgeFunctionName, edgeFunctionName_);
        DARABONBA_PTR_FROM_JSON(FunctionUrl, functionUrl_);
        DARABONBA_PTR_FROM_JSON(MemorySize, memorySize_);
        DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
        DARABONBA_PTR_FROM_JSON(Runtime, runtime_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(UrlInternet, urlInternet_);
        DARABONBA_PTR_FROM_JSON(UrlIntranet, urlIntranet_);
      };
      EdgeFunctions() = default ;
      EdgeFunctions(const EdgeFunctions &) = default ;
      EdgeFunctions(EdgeFunctions &&) = default ;
      EdgeFunctions(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~EdgeFunctions() = default ;
      EdgeFunctions& operator=(const EdgeFunctions &) = default ;
      EdgeFunctions& operator=(EdgeFunctions &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->cpu_ == nullptr
        && this->createdTime_ == nullptr && this->edgeFunctionName_ == nullptr && this->functionUrl_ == nullptr && this->memorySize_ == nullptr && this->modifiedTime_ == nullptr
        && this->runtime_ == nullptr && this->status_ == nullptr && this->urlInternet_ == nullptr && this->urlIntranet_ == nullptr; };
      // cpu Field Functions 
      bool hasCpu() const { return this->cpu_ != nullptr;};
      void deleteCpu() { this->cpu_ = nullptr;};
      inline string getCpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, "") };
      inline EdgeFunctions& setCpu(string cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


      // createdTime Field Functions 
      bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
      void deleteCreatedTime() { this->createdTime_ = nullptr;};
      inline string getCreatedTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, "") };
      inline EdgeFunctions& setCreatedTime(string createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


      // edgeFunctionName Field Functions 
      bool hasEdgeFunctionName() const { return this->edgeFunctionName_ != nullptr;};
      void deleteEdgeFunctionName() { this->edgeFunctionName_ = nullptr;};
      inline string getEdgeFunctionName() const { DARABONBA_PTR_GET_DEFAULT(edgeFunctionName_, "") };
      inline EdgeFunctions& setEdgeFunctionName(string edgeFunctionName) { DARABONBA_PTR_SET_VALUE(edgeFunctionName_, edgeFunctionName) };


      // functionUrl Field Functions 
      bool hasFunctionUrl() const { return this->functionUrl_ != nullptr;};
      void deleteFunctionUrl() { this->functionUrl_ = nullptr;};
      inline string getFunctionUrl() const { DARABONBA_PTR_GET_DEFAULT(functionUrl_, "") };
      inline EdgeFunctions& setFunctionUrl(string functionUrl) { DARABONBA_PTR_SET_VALUE(functionUrl_, functionUrl) };


      // memorySize Field Functions 
      bool hasMemorySize() const { return this->memorySize_ != nullptr;};
      void deleteMemorySize() { this->memorySize_ = nullptr;};
      inline string getMemorySize() const { DARABONBA_PTR_GET_DEFAULT(memorySize_, "") };
      inline EdgeFunctions& setMemorySize(string memorySize) { DARABONBA_PTR_SET_VALUE(memorySize_, memorySize) };


      // modifiedTime Field Functions 
      bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
      void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
      inline string getModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, "") };
      inline EdgeFunctions& setModifiedTime(string modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


      // runtime Field Functions 
      bool hasRuntime() const { return this->runtime_ != nullptr;};
      void deleteRuntime() { this->runtime_ = nullptr;};
      inline string getRuntime() const { DARABONBA_PTR_GET_DEFAULT(runtime_, "") };
      inline EdgeFunctions& setRuntime(string runtime) { DARABONBA_PTR_SET_VALUE(runtime_, runtime) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline EdgeFunctions& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // urlInternet Field Functions 
      bool hasUrlInternet() const { return this->urlInternet_ != nullptr;};
      void deleteUrlInternet() { this->urlInternet_ = nullptr;};
      inline string getUrlInternet() const { DARABONBA_PTR_GET_DEFAULT(urlInternet_, "") };
      inline EdgeFunctions& setUrlInternet(string urlInternet) { DARABONBA_PTR_SET_VALUE(urlInternet_, urlInternet) };


      // urlIntranet Field Functions 
      bool hasUrlIntranet() const { return this->urlIntranet_ != nullptr;};
      void deleteUrlIntranet() { this->urlIntranet_ = nullptr;};
      inline string getUrlIntranet() const { DARABONBA_PTR_GET_DEFAULT(urlIntranet_, "") };
      inline EdgeFunctions& setUrlIntranet(string urlIntranet) { DARABONBA_PTR_SET_VALUE(urlIntranet_, urlIntranet) };


    protected:
      // The number of vCPUs used by the cluster.
      shared_ptr<string> cpu_ {};
      // The time when the function was created.
      shared_ptr<string> createdTime_ {};
      // The edge function name.
      shared_ptr<string> edgeFunctionName_ {};
      // The URL for accessing the function.
      shared_ptr<string> functionUrl_ {};
      // The memory size. Unit: MiB.
      shared_ptr<string> memorySize_ {};
      // The time when the function was last created. The time is displayed in UTC.
      shared_ptr<string> modifiedTime_ {};
      // The runtime environment for the function, which includes the Linux environment and the Deno version.
      shared_ptr<string> runtime_ {};
      // The instance status. For more information, see [Instance state table](https://help.aliyun.com/document_detail/2623972.html).
      shared_ptr<string> status_ {};
      // The public URL for accessing the application.
      shared_ptr<string> urlInternet_ {};
      // The internal URL for accessing the application.
      shared_ptr<string> urlIntranet_ {};
    };

    virtual bool empty() const override { return this->edgeFunctions_ == nullptr
        && this->instanceName_ == nullptr && this->requestId_ == nullptr; };
    // edgeFunctions Field Functions 
    bool hasEdgeFunctions() const { return this->edgeFunctions_ != nullptr;};
    void deleteEdgeFunctions() { this->edgeFunctions_ = nullptr;};
    inline const vector<DescribeEdgeFunctionsResponseBody::EdgeFunctions> & getEdgeFunctions() const { DARABONBA_PTR_GET_CONST(edgeFunctions_, vector<DescribeEdgeFunctionsResponseBody::EdgeFunctions>) };
    inline vector<DescribeEdgeFunctionsResponseBody::EdgeFunctions> getEdgeFunctions() { DARABONBA_PTR_GET(edgeFunctions_, vector<DescribeEdgeFunctionsResponseBody::EdgeFunctions>) };
    inline DescribeEdgeFunctionsResponseBody& setEdgeFunctions(const vector<DescribeEdgeFunctionsResponseBody::EdgeFunctions> & edgeFunctions) { DARABONBA_PTR_SET_VALUE(edgeFunctions_, edgeFunctions) };
    inline DescribeEdgeFunctionsResponseBody& setEdgeFunctions(vector<DescribeEdgeFunctionsResponseBody::EdgeFunctions> && edgeFunctions) { DARABONBA_PTR_SET_RVALUE(edgeFunctions_, edgeFunctions) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline DescribeEdgeFunctionsResponseBody& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeEdgeFunctionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The list of edge functions.
    shared_ptr<vector<DescribeEdgeFunctionsResponseBody::EdgeFunctions>> edgeFunctions_ {};
    // The ID of the RDS Supabase instance.
    shared_ptr<string> instanceName_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RdsAi20250507
#endif
