// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDELIVERYCHANNELRESPONSEBODYRESOURCECHANGEDELIVERYSLSPROPERTIES_HPP_
#define ALIBABACLOUD_MODELS_GETDELIVERYCHANNELRESPONSEBODYRESOURCECHANGEDELIVERYSLSPROPERTIES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceCenter20221201
{
namespace Models
{
  class GetDeliveryChannelResponseBodyResourceChangeDeliverySlsProperties : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDeliveryChannelResponseBodyResourceChangeDeliverySlsProperties& obj) { 
      DARABONBA_PTR_TO_JSON(OversizedDataOssTargetArn, oversizedDataOssTargetArn_);
    };
    friend void from_json(const Darabonba::Json& j, GetDeliveryChannelResponseBodyResourceChangeDeliverySlsProperties& obj) { 
      DARABONBA_PTR_FROM_JSON(OversizedDataOssTargetArn, oversizedDataOssTargetArn_);
    };
    GetDeliveryChannelResponseBodyResourceChangeDeliverySlsProperties() = default ;
    GetDeliveryChannelResponseBodyResourceChangeDeliverySlsProperties(const GetDeliveryChannelResponseBodyResourceChangeDeliverySlsProperties &) = default ;
    GetDeliveryChannelResponseBodyResourceChangeDeliverySlsProperties(GetDeliveryChannelResponseBodyResourceChangeDeliverySlsProperties &&) = default ;
    GetDeliveryChannelResponseBodyResourceChangeDeliverySlsProperties(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDeliveryChannelResponseBodyResourceChangeDeliverySlsProperties() = default ;
    GetDeliveryChannelResponseBodyResourceChangeDeliverySlsProperties& operator=(const GetDeliveryChannelResponseBodyResourceChangeDeliverySlsProperties &) = default ;
    GetDeliveryChannelResponseBodyResourceChangeDeliverySlsProperties& operator=(GetDeliveryChannelResponseBodyResourceChangeDeliverySlsProperties &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->oversizedDataOssTargetArn_ != nullptr; };
    // oversizedDataOssTargetArn Field Functions 
    bool hasOversizedDataOssTargetArn() const { return this->oversizedDataOssTargetArn_ != nullptr;};
    void deleteOversizedDataOssTargetArn() { this->oversizedDataOssTargetArn_ = nullptr;};
    inline string oversizedDataOssTargetArn() const { DARABONBA_PTR_GET_DEFAULT(oversizedDataOssTargetArn_, "") };
    inline GetDeliveryChannelResponseBodyResourceChangeDeliverySlsProperties& setOversizedDataOssTargetArn(string oversizedDataOssTargetArn) { DARABONBA_PTR_SET_VALUE(oversizedDataOssTargetArn_, oversizedDataOssTargetArn) };


  protected:
    // The Alibaba Cloud Resource Name (ARN) of the destination to which large files are delivered.
    std::shared_ptr<string> oversizedDataOssTargetArn_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceCenter20221201
#endif
