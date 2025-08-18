// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TAGCLOUDRESOURCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_TAGCLOUDRESOURCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/TagCloudResourcesResponseBodyFailedResources.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class TagCloudResourcesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TagCloudResourcesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FailedResources, failedResources_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, TagCloudResourcesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FailedResources, failedResources_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    TagCloudResourcesResponseBody() = default ;
    TagCloudResourcesResponseBody(const TagCloudResourcesResponseBody &) = default ;
    TagCloudResourcesResponseBody(TagCloudResourcesResponseBody &&) = default ;
    TagCloudResourcesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TagCloudResourcesResponseBody() = default ;
    TagCloudResourcesResponseBody& operator=(const TagCloudResourcesResponseBody &) = default ;
    TagCloudResourcesResponseBody& operator=(TagCloudResourcesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->failedResources_ != nullptr
        && this->requestId_ != nullptr; };
    // failedResources Field Functions 
    bool hasFailedResources() const { return this->failedResources_ != nullptr;};
    void deleteFailedResources() { this->failedResources_ = nullptr;};
    inline const vector<TagCloudResourcesResponseBodyFailedResources> & failedResources() const { DARABONBA_PTR_GET_CONST(failedResources_, vector<TagCloudResourcesResponseBodyFailedResources>) };
    inline vector<TagCloudResourcesResponseBodyFailedResources> failedResources() { DARABONBA_PTR_GET(failedResources_, vector<TagCloudResourcesResponseBodyFailedResources>) };
    inline TagCloudResourcesResponseBody& setFailedResources(const vector<TagCloudResourcesResponseBodyFailedResources> & failedResources) { DARABONBA_PTR_SET_VALUE(failedResources_, failedResources) };
    inline TagCloudResourcesResponseBody& setFailedResources(vector<TagCloudResourcesResponseBodyFailedResources> && failedResources) { DARABONBA_PTR_SET_RVALUE(failedResources_, failedResources) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline TagCloudResourcesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<TagCloudResourcesResponseBodyFailedResources>> failedResources_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
