// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDELIVERYCHANNELREQUESTDELIVERYCHANNELFILTER_HPP_
#define ALIBABACLOUD_MODELS_CREATEDELIVERYCHANNELREQUESTDELIVERYCHANNELFILTER_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceCenter20221201
{
namespace Models
{
  class CreateDeliveryChannelRequestDeliveryChannelFilter : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDeliveryChannelRequestDeliveryChannelFilter& obj) { 
      DARABONBA_PTR_TO_JSON(ResourceTypes, resourceTypes_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDeliveryChannelRequestDeliveryChannelFilter& obj) { 
      DARABONBA_PTR_FROM_JSON(ResourceTypes, resourceTypes_);
    };
    CreateDeliveryChannelRequestDeliveryChannelFilter() = default ;
    CreateDeliveryChannelRequestDeliveryChannelFilter(const CreateDeliveryChannelRequestDeliveryChannelFilter &) = default ;
    CreateDeliveryChannelRequestDeliveryChannelFilter(CreateDeliveryChannelRequestDeliveryChannelFilter &&) = default ;
    CreateDeliveryChannelRequestDeliveryChannelFilter(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDeliveryChannelRequestDeliveryChannelFilter() = default ;
    CreateDeliveryChannelRequestDeliveryChannelFilter& operator=(const CreateDeliveryChannelRequestDeliveryChannelFilter &) = default ;
    CreateDeliveryChannelRequestDeliveryChannelFilter& operator=(CreateDeliveryChannelRequestDeliveryChannelFilter &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->resourceTypes_ != nullptr; };
    // resourceTypes Field Functions 
    bool hasResourceTypes() const { return this->resourceTypes_ != nullptr;};
    void deleteResourceTypes() { this->resourceTypes_ = nullptr;};
    inline const vector<string> & resourceTypes() const { DARABONBA_PTR_GET_CONST(resourceTypes_, vector<string>) };
    inline vector<string> resourceTypes() { DARABONBA_PTR_GET(resourceTypes_, vector<string>) };
    inline CreateDeliveryChannelRequestDeliveryChannelFilter& setResourceTypes(const vector<string> & resourceTypes) { DARABONBA_PTR_SET_VALUE(resourceTypes_, resourceTypes) };
    inline CreateDeliveryChannelRequestDeliveryChannelFilter& setResourceTypes(vector<string> && resourceTypes) { DARABONBA_PTR_SET_RVALUE(resourceTypes_, resourceTypes) };


  protected:
    // An array of effective resource types for the delivery channel.
    // 
    // *   Example: ["ACS::VPC::VPC", "ACS::ECS::Instance"].
    // *   If you want to deliver items of all resource types supported by Resource Center, set this parameter to ["ALL"].
    std::shared_ptr<vector<string>> resourceTypes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceCenter20221201
#endif
