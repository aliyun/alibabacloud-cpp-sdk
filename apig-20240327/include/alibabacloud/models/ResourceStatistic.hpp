// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESOURCESTATISTIC_HPP_
#define ALIBABACLOUD_MODELS_RESOURCESTATISTIC_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class ResourceStatistic : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ResourceStatistic& obj) { 
      DARABONBA_PTR_TO_JSON(resourceCount, resourceCount_);
      DARABONBA_PTR_TO_JSON(resourceType, resourceType_);
    };
    friend void from_json(const Darabonba::Json& j, ResourceStatistic& obj) { 
      DARABONBA_PTR_FROM_JSON(resourceCount, resourceCount_);
      DARABONBA_PTR_FROM_JSON(resourceType, resourceType_);
    };
    ResourceStatistic() = default ;
    ResourceStatistic(const ResourceStatistic &) = default ;
    ResourceStatistic(ResourceStatistic &&) = default ;
    ResourceStatistic(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ResourceStatistic() = default ;
    ResourceStatistic& operator=(const ResourceStatistic &) = default ;
    ResourceStatistic& operator=(ResourceStatistic &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->resourceCount_ == nullptr
        && this->resourceType_ == nullptr; };
    // resourceCount Field Functions 
    bool hasResourceCount() const { return this->resourceCount_ != nullptr;};
    void deleteResourceCount() { this->resourceCount_ = nullptr;};
    inline int32_t getResourceCount() const { DARABONBA_PTR_GET_DEFAULT(resourceCount_, 0) };
    inline ResourceStatistic& setResourceCount(int32_t resourceCount) { DARABONBA_PTR_SET_VALUE(resourceCount_, resourceCount) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline ResourceStatistic& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


  protected:
    // The number of online resources.
    shared_ptr<int32_t> resourceCount_ {};
    // The resource type.
    // 
    // Valid values:
    // 
    // *   HttpApi
    // *   GatewayRoute
    shared_ptr<string> resourceType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
