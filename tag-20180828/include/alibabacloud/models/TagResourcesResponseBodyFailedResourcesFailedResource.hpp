// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TAGRESOURCESRESPONSEBODYFAILEDRESOURCESFAILEDRESOURCE_HPP_
#define ALIBABACLOUD_MODELS_TAGRESOURCESRESPONSEBODYFAILEDRESOURCESFAILEDRESOURCE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/TagResourcesResponseBodyFailedResourcesFailedResourceResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Tag20180828
{
namespace Models
{
  class TagResourcesResponseBodyFailedResourcesFailedResource : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TagResourcesResponseBodyFailedResourcesFailedResource& obj) { 
      DARABONBA_PTR_TO_JSON(ResourceARN, resourceARN_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, TagResourcesResponseBodyFailedResourcesFailedResource& obj) { 
      DARABONBA_PTR_FROM_JSON(ResourceARN, resourceARN_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    TagResourcesResponseBodyFailedResourcesFailedResource() = default ;
    TagResourcesResponseBodyFailedResourcesFailedResource(const TagResourcesResponseBodyFailedResourcesFailedResource &) = default ;
    TagResourcesResponseBodyFailedResourcesFailedResource(TagResourcesResponseBodyFailedResourcesFailedResource &&) = default ;
    TagResourcesResponseBodyFailedResourcesFailedResource(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TagResourcesResponseBodyFailedResourcesFailedResource() = default ;
    TagResourcesResponseBodyFailedResourcesFailedResource& operator=(const TagResourcesResponseBodyFailedResourcesFailedResource &) = default ;
    TagResourcesResponseBodyFailedResourcesFailedResource& operator=(TagResourcesResponseBodyFailedResourcesFailedResource &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->resourceARN_ != nullptr
        && this->result_ != nullptr; };
    // resourceARN Field Functions 
    bool hasResourceARN() const { return this->resourceARN_ != nullptr;};
    void deleteResourceARN() { this->resourceARN_ = nullptr;};
    inline string resourceARN() const { DARABONBA_PTR_GET_DEFAULT(resourceARN_, "") };
    inline TagResourcesResponseBodyFailedResourcesFailedResource& setResourceARN(string resourceARN) { DARABONBA_PTR_SET_VALUE(resourceARN_, resourceARN) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const Models::TagResourcesResponseBodyFailedResourcesFailedResourceResult & result() const { DARABONBA_PTR_GET_CONST(result_, Models::TagResourcesResponseBodyFailedResourcesFailedResourceResult) };
    inline Models::TagResourcesResponseBodyFailedResourcesFailedResourceResult result() { DARABONBA_PTR_GET(result_, Models::TagResourcesResponseBodyFailedResourcesFailedResourceResult) };
    inline TagResourcesResponseBodyFailedResourcesFailedResource& setResult(const Models::TagResourcesResponseBodyFailedResourcesFailedResourceResult & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline TagResourcesResponseBodyFailedResourcesFailedResource& setResult(Models::TagResourcesResponseBodyFailedResourcesFailedResourceResult && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // The ARN of the resource.
    std::shared_ptr<string> resourceARN_ = nullptr;
    // The information about the error.
    std::shared_ptr<Models::TagResourcesResponseBodyFailedResourcesFailedResourceResult> result_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Tag20180828
#endif
