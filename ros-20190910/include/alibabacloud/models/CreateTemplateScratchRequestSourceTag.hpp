// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETEMPLATESCRATCHREQUESTSOURCETAG_HPP_
#define ALIBABACLOUD_MODELS_CREATETEMPLATESCRATCHREQUESTSOURCETAG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class CreateTemplateScratchRequestSourceTag : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTemplateScratchRequestSourceTag& obj) { 
      DARABONBA_ANY_TO_JSON(ResourceTags, resourceTags_);
      DARABONBA_PTR_TO_JSON(ResourceTypeFilter, resourceTypeFilter_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTemplateScratchRequestSourceTag& obj) { 
      DARABONBA_ANY_FROM_JSON(ResourceTags, resourceTags_);
      DARABONBA_PTR_FROM_JSON(ResourceTypeFilter, resourceTypeFilter_);
    };
    CreateTemplateScratchRequestSourceTag() = default ;
    CreateTemplateScratchRequestSourceTag(const CreateTemplateScratchRequestSourceTag &) = default ;
    CreateTemplateScratchRequestSourceTag(CreateTemplateScratchRequestSourceTag &&) = default ;
    CreateTemplateScratchRequestSourceTag(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTemplateScratchRequestSourceTag() = default ;
    CreateTemplateScratchRequestSourceTag& operator=(const CreateTemplateScratchRequestSourceTag &) = default ;
    CreateTemplateScratchRequestSourceTag& operator=(CreateTemplateScratchRequestSourceTag &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->resourceTags_ != nullptr
        && this->resourceTypeFilter_ != nullptr; };
    // resourceTags Field Functions 
    bool hasResourceTags() const { return this->resourceTags_ != nullptr;};
    void deleteResourceTags() { this->resourceTags_ = nullptr;};
    inline     const Darabonba::Json & resourceTags() const { DARABONBA_GET(resourceTags_) };
    Darabonba::Json & resourceTags() { DARABONBA_GET(resourceTags_) };
    inline CreateTemplateScratchRequestSourceTag& setResourceTags(const Darabonba::Json & resourceTags) { DARABONBA_SET_VALUE(resourceTags_, resourceTags) };
    inline CreateTemplateScratchRequestSourceTag& setResourceTags(Darabonba::Json & resourceTags) { DARABONBA_SET_RVALUE(resourceTags_, resourceTags) };


    // resourceTypeFilter Field Functions 
    bool hasResourceTypeFilter() const { return this->resourceTypeFilter_ != nullptr;};
    void deleteResourceTypeFilter() { this->resourceTypeFilter_ = nullptr;};
    inline const vector<string> & resourceTypeFilter() const { DARABONBA_PTR_GET_CONST(resourceTypeFilter_, vector<string>) };
    inline vector<string> resourceTypeFilter() { DARABONBA_PTR_GET(resourceTypeFilter_, vector<string>) };
    inline CreateTemplateScratchRequestSourceTag& setResourceTypeFilter(const vector<string> & resourceTypeFilter) { DARABONBA_PTR_SET_VALUE(resourceTypeFilter_, resourceTypeFilter) };
    inline CreateTemplateScratchRequestSourceTag& setResourceTypeFilter(vector<string> && resourceTypeFilter) { DARABONBA_PTR_SET_RVALUE(resourceTypeFilter_, resourceTypeFilter) };


  protected:
    // The source tags that consist of key-value pairs. If you want to specify only the tag key, you must leave the tag value empty. Example: `{"TagKey": ""}`.
    // 
    // You can add up to 10 source tags.
    // 
    // This parameter is required.
    Darabonba::Json resourceTags_ = nullptr;
    // The resource types for filtering resources.
    std::shared_ptr<vector<string>> resourceTypeFilter_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
