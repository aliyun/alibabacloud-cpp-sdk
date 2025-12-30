// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDIAGNOSTICRESULTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDIAGNOSTICRESULTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EfloController20221215
{
namespace Models
{
  class DescribeDiagnosticResultResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDiagnosticResultResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(CreatedTime, createdTime_);
      DARABONBA_PTR_TO_JSON(DiagnosticId, diagnosticId_);
      DARABONBA_PTR_TO_JSON(DiagnosticResults, diagnosticResults_);
      DARABONBA_PTR_TO_JSON(DiagnosticState, diagnosticState_);
      DARABONBA_PTR_TO_JSON(DiagnosticType, diagnosticType_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(NodeIds, nodeIds_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDiagnosticResultResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(CreatedTime, createdTime_);
      DARABONBA_PTR_FROM_JSON(DiagnosticId, diagnosticId_);
      DARABONBA_PTR_FROM_JSON(DiagnosticResults, diagnosticResults_);
      DARABONBA_PTR_FROM_JSON(DiagnosticState, diagnosticState_);
      DARABONBA_PTR_FROM_JSON(DiagnosticType, diagnosticType_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(NodeIds, nodeIds_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDiagnosticResultResponseBody() = default ;
    DescribeDiagnosticResultResponseBody(const DescribeDiagnosticResultResponseBody &) = default ;
    DescribeDiagnosticResultResponseBody(DescribeDiagnosticResultResponseBody &&) = default ;
    DescribeDiagnosticResultResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDiagnosticResultResponseBody() = default ;
    DescribeDiagnosticResultResponseBody& operator=(const DescribeDiagnosticResultResponseBody &) = default ;
    DescribeDiagnosticResultResponseBody& operator=(DescribeDiagnosticResultResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && this->createdTime_ == nullptr && this->diagnosticId_ == nullptr && this->diagnosticResults_ == nullptr && this->diagnosticState_ == nullptr && this->diagnosticType_ == nullptr
        && this->endTime_ == nullptr && this->nodeIds_ == nullptr && this->requestId_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline DescribeDiagnosticResultResponseBody& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // createdTime Field Functions 
    bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
    void deleteCreatedTime() { this->createdTime_ = nullptr;};
    inline string getCreatedTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, "") };
    inline DescribeDiagnosticResultResponseBody& setCreatedTime(string createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


    // diagnosticId Field Functions 
    bool hasDiagnosticId() const { return this->diagnosticId_ != nullptr;};
    void deleteDiagnosticId() { this->diagnosticId_ = nullptr;};
    inline string getDiagnosticId() const { DARABONBA_PTR_GET_DEFAULT(diagnosticId_, "") };
    inline DescribeDiagnosticResultResponseBody& setDiagnosticId(string diagnosticId) { DARABONBA_PTR_SET_VALUE(diagnosticId_, diagnosticId) };


    // diagnosticResults Field Functions 
    bool hasDiagnosticResults() const { return this->diagnosticResults_ != nullptr;};
    void deleteDiagnosticResults() { this->diagnosticResults_ = nullptr;};
    inline const vector<Darabonba::Json> & getDiagnosticResults() const { DARABONBA_PTR_GET_CONST(diagnosticResults_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> getDiagnosticResults() { DARABONBA_PTR_GET(diagnosticResults_, vector<Darabonba::Json>) };
    inline DescribeDiagnosticResultResponseBody& setDiagnosticResults(const vector<Darabonba::Json> & diagnosticResults) { DARABONBA_PTR_SET_VALUE(diagnosticResults_, diagnosticResults) };
    inline DescribeDiagnosticResultResponseBody& setDiagnosticResults(vector<Darabonba::Json> && diagnosticResults) { DARABONBA_PTR_SET_RVALUE(diagnosticResults_, diagnosticResults) };


    // diagnosticState Field Functions 
    bool hasDiagnosticState() const { return this->diagnosticState_ != nullptr;};
    void deleteDiagnosticState() { this->diagnosticState_ = nullptr;};
    inline string getDiagnosticState() const { DARABONBA_PTR_GET_DEFAULT(diagnosticState_, "") };
    inline DescribeDiagnosticResultResponseBody& setDiagnosticState(string diagnosticState) { DARABONBA_PTR_SET_VALUE(diagnosticState_, diagnosticState) };


    // diagnosticType Field Functions 
    bool hasDiagnosticType() const { return this->diagnosticType_ != nullptr;};
    void deleteDiagnosticType() { this->diagnosticType_ = nullptr;};
    inline string getDiagnosticType() const { DARABONBA_PTR_GET_DEFAULT(diagnosticType_, "") };
    inline DescribeDiagnosticResultResponseBody& setDiagnosticType(string diagnosticType) { DARABONBA_PTR_SET_VALUE(diagnosticType_, diagnosticType) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeDiagnosticResultResponseBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // nodeIds Field Functions 
    bool hasNodeIds() const { return this->nodeIds_ != nullptr;};
    void deleteNodeIds() { this->nodeIds_ = nullptr;};
    inline const vector<string> & getNodeIds() const { DARABONBA_PTR_GET_CONST(nodeIds_, vector<string>) };
    inline vector<string> getNodeIds() { DARABONBA_PTR_GET(nodeIds_, vector<string>) };
    inline DescribeDiagnosticResultResponseBody& setNodeIds(const vector<string> & nodeIds) { DARABONBA_PTR_SET_VALUE(nodeIds_, nodeIds) };
    inline DescribeDiagnosticResultResponseBody& setNodeIds(vector<string> && nodeIds) { DARABONBA_PTR_SET_RVALUE(nodeIds_, nodeIds) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDiagnosticResultResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The cluster ID.
    shared_ptr<string> clusterId_ {};
    // The creation time.
    shared_ptr<string> createdTime_ {};
    // The diagnostic task ID.
    shared_ptr<string> diagnosticId_ {};
    // The diagnostic information.
    shared_ptr<vector<Darabonba::Json>> diagnosticResults_ {};
    // The diagnostic status.
    shared_ptr<string> diagnosticState_ {};
    // The type of the diagnostic task.
    shared_ptr<string> diagnosticType_ {};
    // The end time of the instance exception. The time format with time zone based on the ISO8601 standard. The format is yyyy-MM-ddTHH:mm:ss +0800.
    shared_ptr<string> endTime_ {};
    // The node IDs.
    shared_ptr<vector<string>> nodeIds_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EfloController20221215
#endif
