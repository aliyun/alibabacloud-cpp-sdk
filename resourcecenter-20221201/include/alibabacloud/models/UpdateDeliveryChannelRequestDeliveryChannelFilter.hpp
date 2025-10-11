// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDELIVERYCHANNELREQUESTDELIVERYCHANNELFILTER_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDELIVERYCHANNELREQUESTDELIVERYCHANNELFILTER_HPP_
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
  class UpdateDeliveryChannelRequestDeliveryChannelFilter : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateDeliveryChannelRequestDeliveryChannelFilter& obj) { 
      DARABONBA_PTR_TO_JSON(ResourceTypes, resourceTypes_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateDeliveryChannelRequestDeliveryChannelFilter& obj) { 
      DARABONBA_PTR_FROM_JSON(ResourceTypes, resourceTypes_);
    };
    UpdateDeliveryChannelRequestDeliveryChannelFilter() = default ;
    UpdateDeliveryChannelRequestDeliveryChannelFilter(const UpdateDeliveryChannelRequestDeliveryChannelFilter &) = default ;
    UpdateDeliveryChannelRequestDeliveryChannelFilter(UpdateDeliveryChannelRequestDeliveryChannelFilter &&) = default ;
    UpdateDeliveryChannelRequestDeliveryChannelFilter(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateDeliveryChannelRequestDeliveryChannelFilter() = default ;
    UpdateDeliveryChannelRequestDeliveryChannelFilter& operator=(const UpdateDeliveryChannelRequestDeliveryChannelFilter &) = default ;
    UpdateDeliveryChannelRequestDeliveryChannelFilter& operator=(UpdateDeliveryChannelRequestDeliveryChannelFilter &&) = default ;
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
    inline UpdateDeliveryChannelRequestDeliveryChannelFilter& setResourceTypes(const vector<string> & resourceTypes) { DARABONBA_PTR_SET_VALUE(resourceTypes_, resourceTypes) };
    inline UpdateDeliveryChannelRequestDeliveryChannelFilter& setResourceTypes(vector<string> && resourceTypes) { DARABONBA_PTR_SET_RVALUE(resourceTypes_, resourceTypes) };


  protected:
    // The effective resource types of the delivery channel.
    std::shared_ptr<vector<string>> resourceTypes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceCenter20221201
#endif
