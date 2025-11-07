// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNISINSPECTIONRESOURCETYPERESPONSEBODYRESOURCETYPELIST_HPP_
#define ALIBABACLOUD_MODELS_LISTNISINSPECTIONRESOURCETYPERESPONSEBODYRESOURCETYPELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Nis20211216
{
namespace Models
{
  class ListNisInspectionResourceTypeResponseBodyResourceTypeList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNisInspectionResourceTypeResponseBodyResourceTypeList& obj) { 
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
    };
    friend void from_json(const Darabonba::Json& j, ListNisInspectionResourceTypeResponseBodyResourceTypeList& obj) { 
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
    };
    ListNisInspectionResourceTypeResponseBodyResourceTypeList() = default ;
    ListNisInspectionResourceTypeResponseBodyResourceTypeList(const ListNisInspectionResourceTypeResponseBodyResourceTypeList &) = default ;
    ListNisInspectionResourceTypeResponseBodyResourceTypeList(ListNisInspectionResourceTypeResponseBodyResourceTypeList &&) = default ;
    ListNisInspectionResourceTypeResponseBodyResourceTypeList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNisInspectionResourceTypeResponseBodyResourceTypeList() = default ;
    ListNisInspectionResourceTypeResponseBodyResourceTypeList& operator=(const ListNisInspectionResourceTypeResponseBodyResourceTypeList &) = default ;
    ListNisInspectionResourceTypeResponseBodyResourceTypeList& operator=(ListNisInspectionResourceTypeResponseBodyResourceTypeList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->resourceType_ == nullptr; };
    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline ListNisInspectionResourceTypeResponseBodyResourceTypeList& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


  protected:
    std::shared_ptr<string> resourceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Nis20211216
#endif
