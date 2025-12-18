// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAGGREGATERESOURCECONFIGURATIONTIMELINERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAGGREGATERESOURCECONFIGURATIONTIMELINERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetAggregateResourceConfigurationTimelineResponseBodyResourceConfigurationTimeline.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class GetAggregateResourceConfigurationTimelineResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAggregateResourceConfigurationTimelineResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceConfigurationTimeline, resourceConfigurationTimeline_);
    };
    friend void from_json(const Darabonba::Json& j, GetAggregateResourceConfigurationTimelineResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceConfigurationTimeline, resourceConfigurationTimeline_);
    };
    GetAggregateResourceConfigurationTimelineResponseBody() = default ;
    GetAggregateResourceConfigurationTimelineResponseBody(const GetAggregateResourceConfigurationTimelineResponseBody &) = default ;
    GetAggregateResourceConfigurationTimelineResponseBody(GetAggregateResourceConfigurationTimelineResponseBody &&) = default ;
    GetAggregateResourceConfigurationTimelineResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAggregateResourceConfigurationTimelineResponseBody() = default ;
    GetAggregateResourceConfigurationTimelineResponseBody& operator=(const GetAggregateResourceConfigurationTimelineResponseBody &) = default ;
    GetAggregateResourceConfigurationTimelineResponseBody& operator=(GetAggregateResourceConfigurationTimelineResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->resourceConfigurationTimeline_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAggregateResourceConfigurationTimelineResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceConfigurationTimeline Field Functions 
    bool hasResourceConfigurationTimeline() const { return this->resourceConfigurationTimeline_ != nullptr;};
    void deleteResourceConfigurationTimeline() { this->resourceConfigurationTimeline_ = nullptr;};
    inline const GetAggregateResourceConfigurationTimelineResponseBodyResourceConfigurationTimeline & resourceConfigurationTimeline() const { DARABONBA_PTR_GET_CONST(resourceConfigurationTimeline_, GetAggregateResourceConfigurationTimelineResponseBodyResourceConfigurationTimeline) };
    inline GetAggregateResourceConfigurationTimelineResponseBodyResourceConfigurationTimeline resourceConfigurationTimeline() { DARABONBA_PTR_GET(resourceConfigurationTimeline_, GetAggregateResourceConfigurationTimelineResponseBodyResourceConfigurationTimeline) };
    inline GetAggregateResourceConfigurationTimelineResponseBody& setResourceConfigurationTimeline(const GetAggregateResourceConfigurationTimelineResponseBodyResourceConfigurationTimeline & resourceConfigurationTimeline) { DARABONBA_PTR_SET_VALUE(resourceConfigurationTimeline_, resourceConfigurationTimeline) };
    inline GetAggregateResourceConfigurationTimelineResponseBody& setResourceConfigurationTimeline(GetAggregateResourceConfigurationTimelineResponseBodyResourceConfigurationTimeline && resourceConfigurationTimeline) { DARABONBA_PTR_SET_RVALUE(resourceConfigurationTimeline_, resourceConfigurationTimeline) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The configuration timeline of the resource.
    std::shared_ptr<GetAggregateResourceConfigurationTimelineResponseBodyResourceConfigurationTimeline> resourceConfigurationTimeline_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
