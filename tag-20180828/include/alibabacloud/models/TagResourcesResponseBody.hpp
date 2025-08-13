// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TAGRESOURCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_TAGRESOURCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/TagResourcesResponseBodyFailedResources.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Tag20180828
{
namespace Models
{
  class TagResourcesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TagResourcesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FailedResources, failedResources_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, TagResourcesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FailedResources, failedResources_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    TagResourcesResponseBody() = default ;
    TagResourcesResponseBody(const TagResourcesResponseBody &) = default ;
    TagResourcesResponseBody(TagResourcesResponseBody &&) = default ;
    TagResourcesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TagResourcesResponseBody() = default ;
    TagResourcesResponseBody& operator=(const TagResourcesResponseBody &) = default ;
    TagResourcesResponseBody& operator=(TagResourcesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->failedResources_ != nullptr
        && this->requestId_ != nullptr; };
    // failedResources Field Functions 
    bool hasFailedResources() const { return this->failedResources_ != nullptr;};
    void deleteFailedResources() { this->failedResources_ = nullptr;};
    inline const TagResourcesResponseBodyFailedResources & failedResources() const { DARABONBA_PTR_GET_CONST(failedResources_, TagResourcesResponseBodyFailedResources) };
    inline TagResourcesResponseBodyFailedResources failedResources() { DARABONBA_PTR_GET(failedResources_, TagResourcesResponseBodyFailedResources) };
    inline TagResourcesResponseBody& setFailedResources(const TagResourcesResponseBodyFailedResources & failedResources) { DARABONBA_PTR_SET_VALUE(failedResources_, failedResources) };
    inline TagResourcesResponseBody& setFailedResources(TagResourcesResponseBodyFailedResources && failedResources) { DARABONBA_PTR_SET_RVALUE(failedResources_, failedResources) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline TagResourcesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the resources to which tags fail to be added.
    // 
    // > 
    // 
    // *   If tags are added to all resources, the value of `FailedResources` is empty.
    // 
    // *   If tags fail to be added to some or all resources, the value of `FailedResources` contains the detailed information about the resources.
    std::shared_ptr<TagResourcesResponseBodyFailedResources> failedResources_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Tag20180828
#endif
