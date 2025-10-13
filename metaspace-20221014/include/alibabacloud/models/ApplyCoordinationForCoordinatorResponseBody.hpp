// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APPLYCOORDINATIONFORCOORDINATORRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_APPLYCOORDINATIONFORCOORDINATORRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ApplyCoordinationForCoordinatorResponseBodyCoordinateFlowModels.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Metaspace20221014
{
namespace Models
{
  class ApplyCoordinationForCoordinatorResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ApplyCoordinationForCoordinatorResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CoordinateFlowModels, coordinateFlowModels_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ApplyCoordinationForCoordinatorResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CoordinateFlowModels, coordinateFlowModels_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ApplyCoordinationForCoordinatorResponseBody() = default ;
    ApplyCoordinationForCoordinatorResponseBody(const ApplyCoordinationForCoordinatorResponseBody &) = default ;
    ApplyCoordinationForCoordinatorResponseBody(ApplyCoordinationForCoordinatorResponseBody &&) = default ;
    ApplyCoordinationForCoordinatorResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ApplyCoordinationForCoordinatorResponseBody() = default ;
    ApplyCoordinationForCoordinatorResponseBody& operator=(const ApplyCoordinationForCoordinatorResponseBody &) = default ;
    ApplyCoordinationForCoordinatorResponseBody& operator=(ApplyCoordinationForCoordinatorResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->coordinateFlowModels_ != nullptr
        && this->requestId_ != nullptr; };
    // coordinateFlowModels Field Functions 
    bool hasCoordinateFlowModels() const { return this->coordinateFlowModels_ != nullptr;};
    void deleteCoordinateFlowModels() { this->coordinateFlowModels_ = nullptr;};
    inline const vector<ApplyCoordinationForCoordinatorResponseBodyCoordinateFlowModels> & coordinateFlowModels() const { DARABONBA_PTR_GET_CONST(coordinateFlowModels_, vector<ApplyCoordinationForCoordinatorResponseBodyCoordinateFlowModels>) };
    inline vector<ApplyCoordinationForCoordinatorResponseBodyCoordinateFlowModels> coordinateFlowModels() { DARABONBA_PTR_GET(coordinateFlowModels_, vector<ApplyCoordinationForCoordinatorResponseBodyCoordinateFlowModels>) };
    inline ApplyCoordinationForCoordinatorResponseBody& setCoordinateFlowModels(const vector<ApplyCoordinationForCoordinatorResponseBodyCoordinateFlowModels> & coordinateFlowModels) { DARABONBA_PTR_SET_VALUE(coordinateFlowModels_, coordinateFlowModels) };
    inline ApplyCoordinationForCoordinatorResponseBody& setCoordinateFlowModels(vector<ApplyCoordinationForCoordinatorResponseBodyCoordinateFlowModels> && coordinateFlowModels) { DARABONBA_PTR_SET_RVALUE(coordinateFlowModels_, coordinateFlowModels) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ApplyCoordinationForCoordinatorResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<ApplyCoordinationForCoordinatorResponseBodyCoordinateFlowModels>> coordinateFlowModels_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Metaspace20221014
#endif
