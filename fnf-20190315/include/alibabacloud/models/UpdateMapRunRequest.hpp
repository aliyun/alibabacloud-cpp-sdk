// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEMAPRUNREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEMAPRUNREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Fnf20190315
{
namespace Models
{
  class UpdateMapRunRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateMapRunRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Concurrency, concurrency_);
      DARABONBA_PTR_TO_JSON(ExecutionName, executionName_);
      DARABONBA_PTR_TO_JSON(FlowName, flowName_);
      DARABONBA_PTR_TO_JSON(MapRunName, mapRunName_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ToleratedFailedCount, toleratedFailedCount_);
      DARABONBA_PTR_TO_JSON(ToleratedFailedPercentage, toleratedFailedPercentage_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateMapRunRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Concurrency, concurrency_);
      DARABONBA_PTR_FROM_JSON(ExecutionName, executionName_);
      DARABONBA_PTR_FROM_JSON(FlowName, flowName_);
      DARABONBA_PTR_FROM_JSON(MapRunName, mapRunName_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ToleratedFailedCount, toleratedFailedCount_);
      DARABONBA_PTR_FROM_JSON(ToleratedFailedPercentage, toleratedFailedPercentage_);
    };
    UpdateMapRunRequest() = default ;
    UpdateMapRunRequest(const UpdateMapRunRequest &) = default ;
    UpdateMapRunRequest(UpdateMapRunRequest &&) = default ;
    UpdateMapRunRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateMapRunRequest() = default ;
    UpdateMapRunRequest& operator=(const UpdateMapRunRequest &) = default ;
    UpdateMapRunRequest& operator=(UpdateMapRunRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->concurrency_ == nullptr
        && this->executionName_ == nullptr && this->flowName_ == nullptr && this->mapRunName_ == nullptr && this->requestId_ == nullptr && this->toleratedFailedCount_ == nullptr
        && this->toleratedFailedPercentage_ == nullptr; };
    // concurrency Field Functions 
    bool hasConcurrency() const { return this->concurrency_ != nullptr;};
    void deleteConcurrency() { this->concurrency_ = nullptr;};
    inline int64_t getConcurrency() const { DARABONBA_PTR_GET_DEFAULT(concurrency_, 0L) };
    inline UpdateMapRunRequest& setConcurrency(int64_t concurrency) { DARABONBA_PTR_SET_VALUE(concurrency_, concurrency) };


    // executionName Field Functions 
    bool hasExecutionName() const { return this->executionName_ != nullptr;};
    void deleteExecutionName() { this->executionName_ = nullptr;};
    inline string getExecutionName() const { DARABONBA_PTR_GET_DEFAULT(executionName_, "") };
    inline UpdateMapRunRequest& setExecutionName(string executionName) { DARABONBA_PTR_SET_VALUE(executionName_, executionName) };


    // flowName Field Functions 
    bool hasFlowName() const { return this->flowName_ != nullptr;};
    void deleteFlowName() { this->flowName_ = nullptr;};
    inline string getFlowName() const { DARABONBA_PTR_GET_DEFAULT(flowName_, "") };
    inline UpdateMapRunRequest& setFlowName(string flowName) { DARABONBA_PTR_SET_VALUE(flowName_, flowName) };


    // mapRunName Field Functions 
    bool hasMapRunName() const { return this->mapRunName_ != nullptr;};
    void deleteMapRunName() { this->mapRunName_ = nullptr;};
    inline string getMapRunName() const { DARABONBA_PTR_GET_DEFAULT(mapRunName_, "") };
    inline UpdateMapRunRequest& setMapRunName(string mapRunName) { DARABONBA_PTR_SET_VALUE(mapRunName_, mapRunName) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateMapRunRequest& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // toleratedFailedCount Field Functions 
    bool hasToleratedFailedCount() const { return this->toleratedFailedCount_ != nullptr;};
    void deleteToleratedFailedCount() { this->toleratedFailedCount_ = nullptr;};
    inline int64_t getToleratedFailedCount() const { DARABONBA_PTR_GET_DEFAULT(toleratedFailedCount_, 0L) };
    inline UpdateMapRunRequest& setToleratedFailedCount(int64_t toleratedFailedCount) { DARABONBA_PTR_SET_VALUE(toleratedFailedCount_, toleratedFailedCount) };


    // toleratedFailedPercentage Field Functions 
    bool hasToleratedFailedPercentage() const { return this->toleratedFailedPercentage_ != nullptr;};
    void deleteToleratedFailedPercentage() { this->toleratedFailedPercentage_ = nullptr;};
    inline float getToleratedFailedPercentage() const { DARABONBA_PTR_GET_DEFAULT(toleratedFailedPercentage_, 0.0) };
    inline UpdateMapRunRequest& setToleratedFailedPercentage(float toleratedFailedPercentage) { DARABONBA_PTR_SET_VALUE(toleratedFailedPercentage_, toleratedFailedPercentage) };


  protected:
    shared_ptr<int64_t> concurrency_ {};
    // This parameter is required.
    shared_ptr<string> executionName_ {};
    // This parameter is required.
    shared_ptr<string> flowName_ {};
    // This parameter is required.
    shared_ptr<string> mapRunName_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int64_t> toleratedFailedCount_ {};
    shared_ptr<float> toleratedFailedPercentage_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Fnf20190315
#endif
