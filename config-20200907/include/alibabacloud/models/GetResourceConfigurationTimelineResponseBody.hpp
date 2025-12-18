// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRESOURCECONFIGURATIONTIMELINERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETRESOURCECONFIGURATIONTIMELINERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetResourceConfigurationTimelineResponseBodyResourceConfigurationTimeline.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class GetResourceConfigurationTimelineResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetResourceConfigurationTimelineResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceConfigurationTimeline, resourceConfigurationTimeline_);
    };
    friend void from_json(const Darabonba::Json& j, GetResourceConfigurationTimelineResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceConfigurationTimeline, resourceConfigurationTimeline_);
    };
    GetResourceConfigurationTimelineResponseBody() = default ;
    GetResourceConfigurationTimelineResponseBody(const GetResourceConfigurationTimelineResponseBody &) = default ;
    GetResourceConfigurationTimelineResponseBody(GetResourceConfigurationTimelineResponseBody &&) = default ;
    GetResourceConfigurationTimelineResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetResourceConfigurationTimelineResponseBody() = default ;
    GetResourceConfigurationTimelineResponseBody& operator=(const GetResourceConfigurationTimelineResponseBody &) = default ;
    GetResourceConfigurationTimelineResponseBody& operator=(GetResourceConfigurationTimelineResponseBody &&) = default ;
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
    inline GetResourceConfigurationTimelineResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceConfigurationTimeline Field Functions 
    bool hasResourceConfigurationTimeline() const { return this->resourceConfigurationTimeline_ != nullptr;};
    void deleteResourceConfigurationTimeline() { this->resourceConfigurationTimeline_ = nullptr;};
    inline const GetResourceConfigurationTimelineResponseBodyResourceConfigurationTimeline & resourceConfigurationTimeline() const { DARABONBA_PTR_GET_CONST(resourceConfigurationTimeline_, GetResourceConfigurationTimelineResponseBodyResourceConfigurationTimeline) };
    inline GetResourceConfigurationTimelineResponseBodyResourceConfigurationTimeline resourceConfigurationTimeline() { DARABONBA_PTR_GET(resourceConfigurationTimeline_, GetResourceConfigurationTimelineResponseBodyResourceConfigurationTimeline) };
    inline GetResourceConfigurationTimelineResponseBody& setResourceConfigurationTimeline(const GetResourceConfigurationTimelineResponseBodyResourceConfigurationTimeline & resourceConfigurationTimeline) { DARABONBA_PTR_SET_VALUE(resourceConfigurationTimeline_, resourceConfigurationTimeline) };
    inline GetResourceConfigurationTimelineResponseBody& setResourceConfigurationTimeline(GetResourceConfigurationTimelineResponseBodyResourceConfigurationTimeline && resourceConfigurationTimeline) { DARABONBA_PTR_SET_RVALUE(resourceConfigurationTimeline_, resourceConfigurationTimeline) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The configuration timeline of the resource.
    std::shared_ptr<GetResourceConfigurationTimelineResponseBodyResourceConfigurationTimeline> resourceConfigurationTimeline_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
