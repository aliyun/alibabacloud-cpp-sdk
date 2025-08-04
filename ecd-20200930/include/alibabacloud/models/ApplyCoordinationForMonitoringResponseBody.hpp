// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APPLYCOORDINATIONFORMONITORINGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_APPLYCOORDINATIONFORMONITORINGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ApplyCoordinationForMonitoringResponseBodyCoordinateFlowModels.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class ApplyCoordinationForMonitoringResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ApplyCoordinationForMonitoringResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CoordinateFlowModels, coordinateFlowModels_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ApplyCoordinationForMonitoringResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CoordinateFlowModels, coordinateFlowModels_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ApplyCoordinationForMonitoringResponseBody() = default ;
    ApplyCoordinationForMonitoringResponseBody(const ApplyCoordinationForMonitoringResponseBody &) = default ;
    ApplyCoordinationForMonitoringResponseBody(ApplyCoordinationForMonitoringResponseBody &&) = default ;
    ApplyCoordinationForMonitoringResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ApplyCoordinationForMonitoringResponseBody() = default ;
    ApplyCoordinationForMonitoringResponseBody& operator=(const ApplyCoordinationForMonitoringResponseBody &) = default ;
    ApplyCoordinationForMonitoringResponseBody& operator=(ApplyCoordinationForMonitoringResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->coordinateFlowModels_ != nullptr
        && this->requestId_ != nullptr; };
    // coordinateFlowModels Field Functions 
    bool hasCoordinateFlowModels() const { return this->coordinateFlowModels_ != nullptr;};
    void deleteCoordinateFlowModels() { this->coordinateFlowModels_ = nullptr;};
    inline const vector<ApplyCoordinationForMonitoringResponseBodyCoordinateFlowModels> & coordinateFlowModels() const { DARABONBA_PTR_GET_CONST(coordinateFlowModels_, vector<ApplyCoordinationForMonitoringResponseBodyCoordinateFlowModels>) };
    inline vector<ApplyCoordinationForMonitoringResponseBodyCoordinateFlowModels> coordinateFlowModels() { DARABONBA_PTR_GET(coordinateFlowModels_, vector<ApplyCoordinationForMonitoringResponseBodyCoordinateFlowModels>) };
    inline ApplyCoordinationForMonitoringResponseBody& setCoordinateFlowModels(const vector<ApplyCoordinationForMonitoringResponseBodyCoordinateFlowModels> & coordinateFlowModels) { DARABONBA_PTR_SET_VALUE(coordinateFlowModels_, coordinateFlowModels) };
    inline ApplyCoordinationForMonitoringResponseBody& setCoordinateFlowModels(vector<ApplyCoordinationForMonitoringResponseBodyCoordinateFlowModels> && coordinateFlowModels) { DARABONBA_PTR_SET_RVALUE(coordinateFlowModels_, coordinateFlowModels) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ApplyCoordinationForMonitoringResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The list of stream collaboration models.
    std::shared_ptr<vector<ApplyCoordinationForMonitoringResponseBodyCoordinateFlowModels>> coordinateFlowModels_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
