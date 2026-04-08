// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATASERVICEAPITESTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDATASERVICEAPITESTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class GetDataServiceApiTestResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataServiceApiTestResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataServiceApiTestResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetDataServiceApiTestResponseBody() = default ;
    GetDataServiceApiTestResponseBody(const GetDataServiceApiTestResponseBody &) = default ;
    GetDataServiceApiTestResponseBody(GetDataServiceApiTestResponseBody &&) = default ;
    GetDataServiceApiTestResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataServiceApiTestResponseBody() = default ;
    GetDataServiceApiTestResponseBody& operator=(const GetDataServiceApiTestResponseBody &) = default ;
    GetDataServiceApiTestResponseBody& operator=(GetDataServiceApiTestResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ApiId, apiId_);
        DARABONBA_PTR_TO_JSON(CostTime, costTime_);
        DARABONBA_PTR_TO_JSON(DebugInfo, debugInfo_);
        DARABONBA_PTR_TO_JSON(NodesDebugInfo, nodesDebugInfo_);
        DARABONBA_PTR_TO_JSON(ParamMap, paramMap_);
        DARABONBA_PTR_TO_JSON(RetCode, retCode_);
        DARABONBA_PTR_TO_JSON(RetResult, retResult_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ApiId, apiId_);
        DARABONBA_PTR_FROM_JSON(CostTime, costTime_);
        DARABONBA_PTR_FROM_JSON(DebugInfo, debugInfo_);
        DARABONBA_PTR_FROM_JSON(NodesDebugInfo, nodesDebugInfo_);
        DARABONBA_PTR_FROM_JSON(ParamMap, paramMap_);
        DARABONBA_PTR_FROM_JSON(RetCode, retCode_);
        DARABONBA_PTR_FROM_JSON(RetResult, retResult_);
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
      virtual bool empty() const override { return this->apiId_ == nullptr
        && this->costTime_ == nullptr && this->debugInfo_ == nullptr && this->nodesDebugInfo_ == nullptr && this->paramMap_ == nullptr && this->retCode_ == nullptr
        && this->retResult_ == nullptr && this->status_ == nullptr; };
      // apiId Field Functions 
      bool hasApiId() const { return this->apiId_ != nullptr;};
      void deleteApiId() { this->apiId_ = nullptr;};
      inline int64_t getApiId() const { DARABONBA_PTR_GET_DEFAULT(apiId_, 0L) };
      inline Data& setApiId(int64_t apiId) { DARABONBA_PTR_SET_VALUE(apiId_, apiId) };


      // costTime Field Functions 
      bool hasCostTime() const { return this->costTime_ != nullptr;};
      void deleteCostTime() { this->costTime_ = nullptr;};
      inline string getCostTime() const { DARABONBA_PTR_GET_DEFAULT(costTime_, "") };
      inline Data& setCostTime(string costTime) { DARABONBA_PTR_SET_VALUE(costTime_, costTime) };


      // debugInfo Field Functions 
      bool hasDebugInfo() const { return this->debugInfo_ != nullptr;};
      void deleteDebugInfo() { this->debugInfo_ = nullptr;};
      inline string getDebugInfo() const { DARABONBA_PTR_GET_DEFAULT(debugInfo_, "") };
      inline Data& setDebugInfo(string debugInfo) { DARABONBA_PTR_SET_VALUE(debugInfo_, debugInfo) };


      // nodesDebugInfo Field Functions 
      bool hasNodesDebugInfo() const { return this->nodesDebugInfo_ != nullptr;};
      void deleteNodesDebugInfo() { this->nodesDebugInfo_ = nullptr;};
      inline string getNodesDebugInfo() const { DARABONBA_PTR_GET_DEFAULT(nodesDebugInfo_, "") };
      inline Data& setNodesDebugInfo(string nodesDebugInfo) { DARABONBA_PTR_SET_VALUE(nodesDebugInfo_, nodesDebugInfo) };


      // paramMap Field Functions 
      bool hasParamMap() const { return this->paramMap_ != nullptr;};
      void deleteParamMap() { this->paramMap_ = nullptr;};
      inline string getParamMap() const { DARABONBA_PTR_GET_DEFAULT(paramMap_, "") };
      inline Data& setParamMap(string paramMap) { DARABONBA_PTR_SET_VALUE(paramMap_, paramMap) };


      // retCode Field Functions 
      bool hasRetCode() const { return this->retCode_ != nullptr;};
      void deleteRetCode() { this->retCode_ = nullptr;};
      inline int64_t getRetCode() const { DARABONBA_PTR_GET_DEFAULT(retCode_, 0L) };
      inline Data& setRetCode(int64_t retCode) { DARABONBA_PTR_SET_VALUE(retCode_, retCode) };


      // retResult Field Functions 
      bool hasRetResult() const { return this->retResult_ != nullptr;};
      void deleteRetResult() { this->retResult_ = nullptr;};
      inline string getRetResult() const { DARABONBA_PTR_GET_DEFAULT(retResult_, "") };
      inline Data& setRetResult(string retResult) { DARABONBA_PTR_SET_VALUE(retResult_, retResult) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // Test API Id
      shared_ptr<int64_t> apiId_ {};
      // Time consuming
      shared_ptr<string> costTime_ {};
      // Debug information
      shared_ptr<string> debugInfo_ {};
      // Node Debug information
      shared_ptr<string> nodesDebugInfo_ {};
      // Test API request parameters
      shared_ptr<string> paramMap_ {};
      // The test API returns the code. If it is not completed, the data is empty.
      shared_ptr<int64_t> retCode_ {};
      // Return data
      shared_ptr<string> retResult_ {};
      // Whether the task has been completed, including: RUNNING,FINISHED
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetDataServiceApiTestResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetDataServiceApiTestResponseBody::Data) };
    inline GetDataServiceApiTestResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetDataServiceApiTestResponseBody::Data) };
    inline GetDataServiceApiTestResponseBody& setData(const GetDataServiceApiTestResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetDataServiceApiTestResponseBody& setData(GetDataServiceApiTestResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDataServiceApiTestResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Return object
    shared_ptr<GetDataServiceApiTestResponseBody::Data> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
