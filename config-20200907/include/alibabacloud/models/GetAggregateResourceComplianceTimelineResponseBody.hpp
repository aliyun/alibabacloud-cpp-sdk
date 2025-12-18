// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAGGREGATERESOURCECOMPLIANCETIMELINERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAGGREGATERESOURCECOMPLIANCETIMELINERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetAggregateResourceComplianceTimelineResponseBodyResourceComplianceTimeline.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class GetAggregateResourceComplianceTimelineResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAggregateResourceComplianceTimelineResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceComplianceTimeline, resourceComplianceTimeline_);
    };
    friend void from_json(const Darabonba::Json& j, GetAggregateResourceComplianceTimelineResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceComplianceTimeline, resourceComplianceTimeline_);
    };
    GetAggregateResourceComplianceTimelineResponseBody() = default ;
    GetAggregateResourceComplianceTimelineResponseBody(const GetAggregateResourceComplianceTimelineResponseBody &) = default ;
    GetAggregateResourceComplianceTimelineResponseBody(GetAggregateResourceComplianceTimelineResponseBody &&) = default ;
    GetAggregateResourceComplianceTimelineResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAggregateResourceComplianceTimelineResponseBody() = default ;
    GetAggregateResourceComplianceTimelineResponseBody& operator=(const GetAggregateResourceComplianceTimelineResponseBody &) = default ;
    GetAggregateResourceComplianceTimelineResponseBody& operator=(GetAggregateResourceComplianceTimelineResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->resourceComplianceTimeline_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAggregateResourceComplianceTimelineResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceComplianceTimeline Field Functions 
    bool hasResourceComplianceTimeline() const { return this->resourceComplianceTimeline_ != nullptr;};
    void deleteResourceComplianceTimeline() { this->resourceComplianceTimeline_ = nullptr;};
    inline const GetAggregateResourceComplianceTimelineResponseBodyResourceComplianceTimeline & resourceComplianceTimeline() const { DARABONBA_PTR_GET_CONST(resourceComplianceTimeline_, GetAggregateResourceComplianceTimelineResponseBodyResourceComplianceTimeline) };
    inline GetAggregateResourceComplianceTimelineResponseBodyResourceComplianceTimeline resourceComplianceTimeline() { DARABONBA_PTR_GET(resourceComplianceTimeline_, GetAggregateResourceComplianceTimelineResponseBodyResourceComplianceTimeline) };
    inline GetAggregateResourceComplianceTimelineResponseBody& setResourceComplianceTimeline(const GetAggregateResourceComplianceTimelineResponseBodyResourceComplianceTimeline & resourceComplianceTimeline) { DARABONBA_PTR_SET_VALUE(resourceComplianceTimeline_, resourceComplianceTimeline) };
    inline GetAggregateResourceComplianceTimelineResponseBody& setResourceComplianceTimeline(GetAggregateResourceComplianceTimelineResponseBodyResourceComplianceTimeline && resourceComplianceTimeline) { DARABONBA_PTR_SET_RVALUE(resourceComplianceTimeline_, resourceComplianceTimeline) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The information about the compliance timeline.
    std::shared_ptr<GetAggregateResourceComplianceTimelineResponseBodyResourceComplianceTimeline> resourceComplianceTimeline_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
