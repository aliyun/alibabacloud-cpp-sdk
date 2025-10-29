// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATAQUALITYEVALUATIONTASKINSTANCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDATAQUALITYEVALUATIONTASKINSTANCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetDataQualityEvaluationTaskInstanceResponseBodyDataQualityEvaluationTaskInstance.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetDataQualityEvaluationTaskInstanceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataQualityEvaluationTaskInstanceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataQualityEvaluationTaskInstance, dataQualityEvaluationTaskInstance_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataQualityEvaluationTaskInstanceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataQualityEvaluationTaskInstance, dataQualityEvaluationTaskInstance_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetDataQualityEvaluationTaskInstanceResponseBody() = default ;
    GetDataQualityEvaluationTaskInstanceResponseBody(const GetDataQualityEvaluationTaskInstanceResponseBody &) = default ;
    GetDataQualityEvaluationTaskInstanceResponseBody(GetDataQualityEvaluationTaskInstanceResponseBody &&) = default ;
    GetDataQualityEvaluationTaskInstanceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataQualityEvaluationTaskInstanceResponseBody() = default ;
    GetDataQualityEvaluationTaskInstanceResponseBody& operator=(const GetDataQualityEvaluationTaskInstanceResponseBody &) = default ;
    GetDataQualityEvaluationTaskInstanceResponseBody& operator=(GetDataQualityEvaluationTaskInstanceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataQualityEvaluationTaskInstance_ == nullptr
        && return this->requestId_ == nullptr; };
    // dataQualityEvaluationTaskInstance Field Functions 
    bool hasDataQualityEvaluationTaskInstance() const { return this->dataQualityEvaluationTaskInstance_ != nullptr;};
    void deleteDataQualityEvaluationTaskInstance() { this->dataQualityEvaluationTaskInstance_ = nullptr;};
    inline const GetDataQualityEvaluationTaskInstanceResponseBodyDataQualityEvaluationTaskInstance & dataQualityEvaluationTaskInstance() const { DARABONBA_PTR_GET_CONST(dataQualityEvaluationTaskInstance_, GetDataQualityEvaluationTaskInstanceResponseBodyDataQualityEvaluationTaskInstance) };
    inline GetDataQualityEvaluationTaskInstanceResponseBodyDataQualityEvaluationTaskInstance dataQualityEvaluationTaskInstance() { DARABONBA_PTR_GET(dataQualityEvaluationTaskInstance_, GetDataQualityEvaluationTaskInstanceResponseBodyDataQualityEvaluationTaskInstance) };
    inline GetDataQualityEvaluationTaskInstanceResponseBody& setDataQualityEvaluationTaskInstance(const GetDataQualityEvaluationTaskInstanceResponseBodyDataQualityEvaluationTaskInstance & dataQualityEvaluationTaskInstance) { DARABONBA_PTR_SET_VALUE(dataQualityEvaluationTaskInstance_, dataQualityEvaluationTaskInstance) };
    inline GetDataQualityEvaluationTaskInstanceResponseBody& setDataQualityEvaluationTaskInstance(GetDataQualityEvaluationTaskInstanceResponseBodyDataQualityEvaluationTaskInstance && dataQualityEvaluationTaskInstance) { DARABONBA_PTR_SET_RVALUE(dataQualityEvaluationTaskInstance_, dataQualityEvaluationTaskInstance) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDataQualityEvaluationTaskInstanceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of the monitor instance.
    std::shared_ptr<GetDataQualityEvaluationTaskInstanceResponseBodyDataQualityEvaluationTaskInstance> dataQualityEvaluationTaskInstance_ = nullptr;
    // The request ID. You can locate logs and troubleshoot issues based on the ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
