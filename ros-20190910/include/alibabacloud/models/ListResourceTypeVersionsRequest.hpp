// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRESOURCETYPEVERSIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTRESOURCETYPEVERSIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class ListResourceTypeVersionsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListResourceTypeVersionsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
    };
    friend void from_json(const Darabonba::Json& j, ListResourceTypeVersionsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
    };
    ListResourceTypeVersionsRequest() = default ;
    ListResourceTypeVersionsRequest(const ListResourceTypeVersionsRequest &) = default ;
    ListResourceTypeVersionsRequest(ListResourceTypeVersionsRequest &&) = default ;
    ListResourceTypeVersionsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListResourceTypeVersionsRequest() = default ;
    ListResourceTypeVersionsRequest& operator=(const ListResourceTypeVersionsRequest &) = default ;
    ListResourceTypeVersionsRequest& operator=(ListResourceTypeVersionsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->resourceType_ != nullptr; };
    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline ListResourceTypeVersionsRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


  protected:
    // The resource type.
    // 
    // This parameter is required.
    std::shared_ptr<string> resourceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
