// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRESOURCESRESPONSEBODYRESOURCE_HPP_
#define ALIBABACLOUD_MODELS_GETRESOURCESRESPONSEBODYRESOURCE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudcontrol20220830
{
namespace Models
{
  class GetResourcesResponseBodyResource : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetResourcesResponseBodyResource& obj) { 
      DARABONBA_ANY_TO_JSON(resourceAttributes, resourceAttributes_);
      DARABONBA_PTR_TO_JSON(resourceId, resourceId_);
    };
    friend void from_json(const Darabonba::Json& j, GetResourcesResponseBodyResource& obj) { 
      DARABONBA_ANY_FROM_JSON(resourceAttributes, resourceAttributes_);
      DARABONBA_PTR_FROM_JSON(resourceId, resourceId_);
    };
    GetResourcesResponseBodyResource() = default ;
    GetResourcesResponseBodyResource(const GetResourcesResponseBodyResource &) = default ;
    GetResourcesResponseBodyResource(GetResourcesResponseBodyResource &&) = default ;
    GetResourcesResponseBodyResource(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetResourcesResponseBodyResource() = default ;
    GetResourcesResponseBodyResource& operator=(const GetResourcesResponseBodyResource &) = default ;
    GetResourcesResponseBodyResource& operator=(GetResourcesResponseBodyResource &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->resourceAttributes_ != nullptr
        && this->resourceId_ != nullptr; };
    // resourceAttributes Field Functions 
    bool hasResourceAttributes() const { return this->resourceAttributes_ != nullptr;};
    void deleteResourceAttributes() { this->resourceAttributes_ = nullptr;};
    inline     const Darabonba::Json & resourceAttributes() const { DARABONBA_GET(resourceAttributes_) };
    Darabonba::Json & resourceAttributes() { DARABONBA_GET(resourceAttributes_) };
    inline GetResourcesResponseBodyResource& setResourceAttributes(const Darabonba::Json & resourceAttributes) { DARABONBA_SET_VALUE(resourceAttributes_, resourceAttributes) };
    inline GetResourcesResponseBodyResource& setResourceAttributes(Darabonba::Json & resourceAttributes) { DARABONBA_SET_RVALUE(resourceAttributes_, resourceAttributes) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string resourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline GetResourcesResponseBodyResource& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


  protected:
    // The resource properties in the JSON format.
    Darabonba::Json resourceAttributes_ = nullptr;
    // The ID of the resource.
    std::shared_ptr<string> resourceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudcontrol20220830
#endif
