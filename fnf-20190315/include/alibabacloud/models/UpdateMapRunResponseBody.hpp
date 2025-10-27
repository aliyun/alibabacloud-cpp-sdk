// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEMAPRUNRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATEMAPRUNRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Fnf20190315
{
namespace Models
{
  class UpdateMapRunResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateMapRunResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Concurrency, concurrency_);
      DARABONBA_PTR_TO_JSON(ExecutionName, executionName_);
      DARABONBA_PTR_TO_JSON(FlowName, flowName_);
      DARABONBA_PTR_TO_JSON(MapRunName, mapRunName_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ToleratedFailedCount, toleratedFailedCount_);
      DARABONBA_PTR_TO_JSON(ToleratedFailedPercentage, toleratedFailedPercentage_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateMapRunResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Concurrency, concurrency_);
      DARABONBA_PTR_FROM_JSON(ExecutionName, executionName_);
      DARABONBA_PTR_FROM_JSON(FlowName, flowName_);
      DARABONBA_PTR_FROM_JSON(MapRunName, mapRunName_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ToleratedFailedCount, toleratedFailedCount_);
      DARABONBA_PTR_FROM_JSON(ToleratedFailedPercentage, toleratedFailedPercentage_);
    };
    UpdateMapRunResponseBody() = default ;
    UpdateMapRunResponseBody(const UpdateMapRunResponseBody &) = default ;
    UpdateMapRunResponseBody(UpdateMapRunResponseBody &&) = default ;
    UpdateMapRunResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateMapRunResponseBody() = default ;
    UpdateMapRunResponseBody& operator=(const UpdateMapRunResponseBody &) = default ;
    UpdateMapRunResponseBody& operator=(UpdateMapRunResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->concurrency_ == nullptr
        && return this->executionName_ == nullptr && return this->flowName_ == nullptr && return this->mapRunName_ == nullptr && return this->requestId_ == nullptr && return this->toleratedFailedCount_ == nullptr
        && return this->toleratedFailedPercentage_ == nullptr; };
    // concurrency Field Functions 
    bool hasConcurrency() const { return this->concurrency_ != nullptr;};
    void deleteConcurrency() { this->concurrency_ = nullptr;};
    inline int64_t concurrency() const { DARABONBA_PTR_GET_DEFAULT(concurrency_, 0L) };
    inline UpdateMapRunResponseBody& setConcurrency(int64_t concurrency) { DARABONBA_PTR_SET_VALUE(concurrency_, concurrency) };


    // executionName Field Functions 
    bool hasExecutionName() const { return this->executionName_ != nullptr;};
    void deleteExecutionName() { this->executionName_ = nullptr;};
    inline string executionName() const { DARABONBA_PTR_GET_DEFAULT(executionName_, "") };
    inline UpdateMapRunResponseBody& setExecutionName(string executionName) { DARABONBA_PTR_SET_VALUE(executionName_, executionName) };


    // flowName Field Functions 
    bool hasFlowName() const { return this->flowName_ != nullptr;};
    void deleteFlowName() { this->flowName_ = nullptr;};
    inline string flowName() const { DARABONBA_PTR_GET_DEFAULT(flowName_, "") };
    inline UpdateMapRunResponseBody& setFlowName(string flowName) { DARABONBA_PTR_SET_VALUE(flowName_, flowName) };


    // mapRunName Field Functions 
    bool hasMapRunName() const { return this->mapRunName_ != nullptr;};
    void deleteMapRunName() { this->mapRunName_ = nullptr;};
    inline string mapRunName() const { DARABONBA_PTR_GET_DEFAULT(mapRunName_, "") };
    inline UpdateMapRunResponseBody& setMapRunName(string mapRunName) { DARABONBA_PTR_SET_VALUE(mapRunName_, mapRunName) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateMapRunResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // toleratedFailedCount Field Functions 
    bool hasToleratedFailedCount() const { return this->toleratedFailedCount_ != nullptr;};
    void deleteToleratedFailedCount() { this->toleratedFailedCount_ = nullptr;};
    inline int64_t toleratedFailedCount() const { DARABONBA_PTR_GET_DEFAULT(toleratedFailedCount_, 0L) };
    inline UpdateMapRunResponseBody& setToleratedFailedCount(int64_t toleratedFailedCount) { DARABONBA_PTR_SET_VALUE(toleratedFailedCount_, toleratedFailedCount) };


    // toleratedFailedPercentage Field Functions 
    bool hasToleratedFailedPercentage() const { return this->toleratedFailedPercentage_ != nullptr;};
    void deleteToleratedFailedPercentage() { this->toleratedFailedPercentage_ = nullptr;};
    inline float toleratedFailedPercentage() const { DARABONBA_PTR_GET_DEFAULT(toleratedFailedPercentage_, 0.0) };
    inline UpdateMapRunResponseBody& setToleratedFailedPercentage(float toleratedFailedPercentage) { DARABONBA_PTR_SET_VALUE(toleratedFailedPercentage_, toleratedFailedPercentage) };


  protected:
    std::shared_ptr<int64_t> concurrency_ = nullptr;
    std::shared_ptr<string> executionName_ = nullptr;
    std::shared_ptr<string> flowName_ = nullptr;
    std::shared_ptr<string> mapRunName_ = nullptr;
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int64_t> toleratedFailedCount_ = nullptr;
    std::shared_ptr<float> toleratedFailedPercentage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Fnf20190315
#endif
