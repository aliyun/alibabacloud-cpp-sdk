// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPROJECTSRESPONSEBODYDATAPROJECTSSALETAG_HPP_
#define ALIBABACLOUD_MODELS_LISTPROJECTSRESPONSEBODYDATAPROJECTSSALETAG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class ListProjectsResponseBodyDataProjectsSaleTag : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListProjectsResponseBodyDataProjectsSaleTag& obj) { 
      DARABONBA_PTR_TO_JSON(resourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(resourceType, resourceType_);
    };
    friend void from_json(const Darabonba::Json& j, ListProjectsResponseBodyDataProjectsSaleTag& obj) { 
      DARABONBA_PTR_FROM_JSON(resourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(resourceType, resourceType_);
    };
    ListProjectsResponseBodyDataProjectsSaleTag() = default ;
    ListProjectsResponseBodyDataProjectsSaleTag(const ListProjectsResponseBodyDataProjectsSaleTag &) = default ;
    ListProjectsResponseBodyDataProjectsSaleTag(ListProjectsResponseBodyDataProjectsSaleTag &&) = default ;
    ListProjectsResponseBodyDataProjectsSaleTag(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListProjectsResponseBodyDataProjectsSaleTag() = default ;
    ListProjectsResponseBodyDataProjectsSaleTag& operator=(const ListProjectsResponseBodyDataProjectsSaleTag &) = default ;
    ListProjectsResponseBodyDataProjectsSaleTag& operator=(ListProjectsResponseBodyDataProjectsSaleTag &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->resourceId_ == nullptr
        && return this->resourceType_ == nullptr; };
    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string resourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline ListProjectsResponseBodyDataProjectsSaleTag& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline ListProjectsResponseBodyDataProjectsSaleTag& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


  protected:
    // The instance ID of the default computing quota.
    std::shared_ptr<string> resourceId_ = nullptr;
    // The billing method of the default computing quota.
    std::shared_ptr<string> resourceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
