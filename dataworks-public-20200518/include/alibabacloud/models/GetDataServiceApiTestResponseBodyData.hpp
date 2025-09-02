// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATASERVICEAPITESTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETDATASERVICEAPITESTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class GetDataServiceApiTestResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataServiceApiTestResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ApiId, apiId_);
      DARABONBA_PTR_TO_JSON(CostTime, costTime_);
      DARABONBA_PTR_TO_JSON(DebugInfo, debugInfo_);
      DARABONBA_PTR_TO_JSON(NodesDebugInfo, nodesDebugInfo_);
      DARABONBA_PTR_TO_JSON(ParamMap, paramMap_);
      DARABONBA_PTR_TO_JSON(RetCode, retCode_);
      DARABONBA_PTR_TO_JSON(RetResult, retResult_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataServiceApiTestResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiId, apiId_);
      DARABONBA_PTR_FROM_JSON(CostTime, costTime_);
      DARABONBA_PTR_FROM_JSON(DebugInfo, debugInfo_);
      DARABONBA_PTR_FROM_JSON(NodesDebugInfo, nodesDebugInfo_);
      DARABONBA_PTR_FROM_JSON(ParamMap, paramMap_);
      DARABONBA_PTR_FROM_JSON(RetCode, retCode_);
      DARABONBA_PTR_FROM_JSON(RetResult, retResult_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    GetDataServiceApiTestResponseBodyData() = default ;
    GetDataServiceApiTestResponseBodyData(const GetDataServiceApiTestResponseBodyData &) = default ;
    GetDataServiceApiTestResponseBodyData(GetDataServiceApiTestResponseBodyData &&) = default ;
    GetDataServiceApiTestResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataServiceApiTestResponseBodyData() = default ;
    GetDataServiceApiTestResponseBodyData& operator=(const GetDataServiceApiTestResponseBodyData &) = default ;
    GetDataServiceApiTestResponseBodyData& operator=(GetDataServiceApiTestResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->apiId_ != nullptr
        && this->costTime_ != nullptr && this->debugInfo_ != nullptr && this->nodesDebugInfo_ != nullptr && this->paramMap_ != nullptr && this->retCode_ != nullptr
        && this->retResult_ != nullptr && this->status_ != nullptr; };
    // apiId Field Functions 
    bool hasApiId() const { return this->apiId_ != nullptr;};
    void deleteApiId() { this->apiId_ = nullptr;};
    inline int64_t apiId() const { DARABONBA_PTR_GET_DEFAULT(apiId_, 0L) };
    inline GetDataServiceApiTestResponseBodyData& setApiId(int64_t apiId) { DARABONBA_PTR_SET_VALUE(apiId_, apiId) };


    // costTime Field Functions 
    bool hasCostTime() const { return this->costTime_ != nullptr;};
    void deleteCostTime() { this->costTime_ = nullptr;};
    inline string costTime() const { DARABONBA_PTR_GET_DEFAULT(costTime_, "") };
    inline GetDataServiceApiTestResponseBodyData& setCostTime(string costTime) { DARABONBA_PTR_SET_VALUE(costTime_, costTime) };


    // debugInfo Field Functions 
    bool hasDebugInfo() const { return this->debugInfo_ != nullptr;};
    void deleteDebugInfo() { this->debugInfo_ = nullptr;};
    inline string debugInfo() const { DARABONBA_PTR_GET_DEFAULT(debugInfo_, "") };
    inline GetDataServiceApiTestResponseBodyData& setDebugInfo(string debugInfo) { DARABONBA_PTR_SET_VALUE(debugInfo_, debugInfo) };


    // nodesDebugInfo Field Functions 
    bool hasNodesDebugInfo() const { return this->nodesDebugInfo_ != nullptr;};
    void deleteNodesDebugInfo() { this->nodesDebugInfo_ = nullptr;};
    inline string nodesDebugInfo() const { DARABONBA_PTR_GET_DEFAULT(nodesDebugInfo_, "") };
    inline GetDataServiceApiTestResponseBodyData& setNodesDebugInfo(string nodesDebugInfo) { DARABONBA_PTR_SET_VALUE(nodesDebugInfo_, nodesDebugInfo) };


    // paramMap Field Functions 
    bool hasParamMap() const { return this->paramMap_ != nullptr;};
    void deleteParamMap() { this->paramMap_ = nullptr;};
    inline string paramMap() const { DARABONBA_PTR_GET_DEFAULT(paramMap_, "") };
    inline GetDataServiceApiTestResponseBodyData& setParamMap(string paramMap) { DARABONBA_PTR_SET_VALUE(paramMap_, paramMap) };


    // retCode Field Functions 
    bool hasRetCode() const { return this->retCode_ != nullptr;};
    void deleteRetCode() { this->retCode_ = nullptr;};
    inline int64_t retCode() const { DARABONBA_PTR_GET_DEFAULT(retCode_, 0L) };
    inline GetDataServiceApiTestResponseBodyData& setRetCode(int64_t retCode) { DARABONBA_PTR_SET_VALUE(retCode_, retCode) };


    // retResult Field Functions 
    bool hasRetResult() const { return this->retResult_ != nullptr;};
    void deleteRetResult() { this->retResult_ = nullptr;};
    inline string retResult() const { DARABONBA_PTR_GET_DEFAULT(retResult_, "") };
    inline GetDataServiceApiTestResponseBodyData& setRetResult(string retResult) { DARABONBA_PTR_SET_VALUE(retResult_, retResult) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetDataServiceApiTestResponseBodyData& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // Test API Id
    std::shared_ptr<int64_t> apiId_ = nullptr;
    // Time consuming
    std::shared_ptr<string> costTime_ = nullptr;
    // Debug information
    std::shared_ptr<string> debugInfo_ = nullptr;
    // Node Debug information
    std::shared_ptr<string> nodesDebugInfo_ = nullptr;
    // Test API request parameters
    std::shared_ptr<string> paramMap_ = nullptr;
    // The test API returns the code. If it is not completed, the data is empty.
    std::shared_ptr<int64_t> retCode_ = nullptr;
    // Return data
    std::shared_ptr<string> retResult_ = nullptr;
    // Whether the task has been completed, including: RUNNING,FINISHED
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
