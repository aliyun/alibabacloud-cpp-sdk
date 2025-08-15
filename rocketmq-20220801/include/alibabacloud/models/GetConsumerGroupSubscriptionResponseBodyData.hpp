// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCONSUMERGROUPSUBSCRIPTIONRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETCONSUMERGROUPSUBSCRIPTIONRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetConsumerGroupSubscriptionResponseBodyDataConnectionDTO.hpp>
#include <alibabacloud/models/GetConsumerGroupSubscriptionResponseBodyDataSubscriptionDTO.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RocketMQ20220801
{
namespace Models
{
  class GetConsumerGroupSubscriptionResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetConsumerGroupSubscriptionResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(connectionDTO, connectionDTO_);
      DARABONBA_PTR_TO_JSON(subscriptionDTO, subscriptionDTO_);
    };
    friend void from_json(const Darabonba::Json& j, GetConsumerGroupSubscriptionResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(connectionDTO, connectionDTO_);
      DARABONBA_PTR_FROM_JSON(subscriptionDTO, subscriptionDTO_);
    };
    GetConsumerGroupSubscriptionResponseBodyData() = default ;
    GetConsumerGroupSubscriptionResponseBodyData(const GetConsumerGroupSubscriptionResponseBodyData &) = default ;
    GetConsumerGroupSubscriptionResponseBodyData(GetConsumerGroupSubscriptionResponseBodyData &&) = default ;
    GetConsumerGroupSubscriptionResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetConsumerGroupSubscriptionResponseBodyData() = default ;
    GetConsumerGroupSubscriptionResponseBodyData& operator=(const GetConsumerGroupSubscriptionResponseBodyData &) = default ;
    GetConsumerGroupSubscriptionResponseBodyData& operator=(GetConsumerGroupSubscriptionResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->connectionDTO_ != nullptr
        && this->subscriptionDTO_ != nullptr; };
    // connectionDTO Field Functions 
    bool hasConnectionDTO() const { return this->connectionDTO_ != nullptr;};
    void deleteConnectionDTO() { this->connectionDTO_ = nullptr;};
    inline const Models::GetConsumerGroupSubscriptionResponseBodyDataConnectionDTO & connectionDTO() const { DARABONBA_PTR_GET_CONST(connectionDTO_, Models::GetConsumerGroupSubscriptionResponseBodyDataConnectionDTO) };
    inline Models::GetConsumerGroupSubscriptionResponseBodyDataConnectionDTO connectionDTO() { DARABONBA_PTR_GET(connectionDTO_, Models::GetConsumerGroupSubscriptionResponseBodyDataConnectionDTO) };
    inline GetConsumerGroupSubscriptionResponseBodyData& setConnectionDTO(const Models::GetConsumerGroupSubscriptionResponseBodyDataConnectionDTO & connectionDTO) { DARABONBA_PTR_SET_VALUE(connectionDTO_, connectionDTO) };
    inline GetConsumerGroupSubscriptionResponseBodyData& setConnectionDTO(Models::GetConsumerGroupSubscriptionResponseBodyDataConnectionDTO && connectionDTO) { DARABONBA_PTR_SET_RVALUE(connectionDTO_, connectionDTO) };


    // subscriptionDTO Field Functions 
    bool hasSubscriptionDTO() const { return this->subscriptionDTO_ != nullptr;};
    void deleteSubscriptionDTO() { this->subscriptionDTO_ = nullptr;};
    inline const Models::GetConsumerGroupSubscriptionResponseBodyDataSubscriptionDTO & subscriptionDTO() const { DARABONBA_PTR_GET_CONST(subscriptionDTO_, Models::GetConsumerGroupSubscriptionResponseBodyDataSubscriptionDTO) };
    inline Models::GetConsumerGroupSubscriptionResponseBodyDataSubscriptionDTO subscriptionDTO() { DARABONBA_PTR_GET(subscriptionDTO_, Models::GetConsumerGroupSubscriptionResponseBodyDataSubscriptionDTO) };
    inline GetConsumerGroupSubscriptionResponseBodyData& setSubscriptionDTO(const Models::GetConsumerGroupSubscriptionResponseBodyDataSubscriptionDTO & subscriptionDTO) { DARABONBA_PTR_SET_VALUE(subscriptionDTO_, subscriptionDTO) };
    inline GetConsumerGroupSubscriptionResponseBodyData& setSubscriptionDTO(Models::GetConsumerGroupSubscriptionResponseBodyDataSubscriptionDTO && subscriptionDTO) { DARABONBA_PTR_SET_RVALUE(subscriptionDTO_, subscriptionDTO) };


  protected:
    // The connection details.
    std::shared_ptr<Models::GetConsumerGroupSubscriptionResponseBodyDataConnectionDTO> connectionDTO_ = nullptr;
    // The subscription details.
    std::shared_ptr<Models::GetConsumerGroupSubscriptionResponseBodyDataSubscriptionDTO> subscriptionDTO_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RocketMQ20220801
#endif
