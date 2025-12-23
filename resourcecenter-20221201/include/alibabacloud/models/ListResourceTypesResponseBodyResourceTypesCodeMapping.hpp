// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRESOURCETYPESRESPONSEBODYRESOURCETYPESCODEMAPPING_HPP_
#define ALIBABACLOUD_MODELS_LISTRESOURCETYPESRESPONSEBODYRESOURCETYPESCODEMAPPING_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceCenter20221201
{
namespace Models
{
  class ListResourceTypesResponseBodyResourceTypesCodeMapping : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListResourceTypesResponseBodyResourceTypesCodeMapping& obj) { 
      DARABONBA_PTR_TO_JSON(ResourceGroup, resourceGroup_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, ListResourceTypesResponseBodyResourceTypesCodeMapping& obj) { 
      DARABONBA_PTR_FROM_JSON(ResourceGroup, resourceGroup_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    ListResourceTypesResponseBodyResourceTypesCodeMapping() = default ;
    ListResourceTypesResponseBodyResourceTypesCodeMapping(const ListResourceTypesResponseBodyResourceTypesCodeMapping &) = default ;
    ListResourceTypesResponseBodyResourceTypesCodeMapping(ListResourceTypesResponseBodyResourceTypesCodeMapping &&) = default ;
    ListResourceTypesResponseBodyResourceTypesCodeMapping(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListResourceTypesResponseBodyResourceTypesCodeMapping() = default ;
    ListResourceTypesResponseBodyResourceTypesCodeMapping& operator=(const ListResourceTypesResponseBodyResourceTypesCodeMapping &) = default ;
    ListResourceTypesResponseBodyResourceTypesCodeMapping& operator=(ListResourceTypesResponseBodyResourceTypesCodeMapping &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->resourceGroup_ == nullptr
        && return this->tag_ == nullptr; };
    // resourceGroup Field Functions 
    bool hasResourceGroup() const { return this->resourceGroup_ != nullptr;};
    void deleteResourceGroup() { this->resourceGroup_ = nullptr;};
    inline string resourceGroup() const { DARABONBA_PTR_GET_DEFAULT(resourceGroup_, "") };
    inline ListResourceTypesResponseBodyResourceTypesCodeMapping& setResourceGroup(string resourceGroup) { DARABONBA_PTR_SET_VALUE(resourceGroup_, resourceGroup) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline string tag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
    inline ListResourceTypesResponseBodyResourceTypesCodeMapping& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


  protected:
    // The resource group.
    std::shared_ptr<string> resourceGroup_ = nullptr;
    // The tag.
    std::shared_ptr<string> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceCenter20221201
#endif
