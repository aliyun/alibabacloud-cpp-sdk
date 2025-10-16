// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UNTAGCLOUDRESOURCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UNTAGCLOUDRESOURCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UntagCloudResourcesResponseBodyFailedResources.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class UntagCloudResourcesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UntagCloudResourcesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FailedResources, failedResources_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, UntagCloudResourcesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FailedResources, failedResources_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    UntagCloudResourcesResponseBody() = default ;
    UntagCloudResourcesResponseBody(const UntagCloudResourcesResponseBody &) = default ;
    UntagCloudResourcesResponseBody(UntagCloudResourcesResponseBody &&) = default ;
    UntagCloudResourcesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UntagCloudResourcesResponseBody() = default ;
    UntagCloudResourcesResponseBody& operator=(const UntagCloudResourcesResponseBody &) = default ;
    UntagCloudResourcesResponseBody& operator=(UntagCloudResourcesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->failedResources_ == nullptr
        && return this->requestId_ == nullptr; };
    // failedResources Field Functions 
    bool hasFailedResources() const { return this->failedResources_ != nullptr;};
    void deleteFailedResources() { this->failedResources_ = nullptr;};
    inline const vector<UntagCloudResourcesResponseBodyFailedResources> & failedResources() const { DARABONBA_PTR_GET_CONST(failedResources_, vector<UntagCloudResourcesResponseBodyFailedResources>) };
    inline vector<UntagCloudResourcesResponseBodyFailedResources> failedResources() { DARABONBA_PTR_GET(failedResources_, vector<UntagCloudResourcesResponseBodyFailedResources>) };
    inline UntagCloudResourcesResponseBody& setFailedResources(const vector<UntagCloudResourcesResponseBodyFailedResources> & failedResources) { DARABONBA_PTR_SET_VALUE(failedResources_, failedResources) };
    inline UntagCloudResourcesResponseBody& setFailedResources(vector<UntagCloudResourcesResponseBodyFailedResources> && failedResources) { DARABONBA_PTR_SET_RVALUE(failedResources_, failedResources) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UntagCloudResourcesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The cloud resources whose tags failed to be removed and the corresponding tags.
    std::shared_ptr<vector<UntagCloudResourcesResponseBodyFailedResources>> failedResources_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
