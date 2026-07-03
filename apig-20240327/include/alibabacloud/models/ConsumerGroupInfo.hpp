// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONSUMERGROUPINFO_HPP_
#define ALIBABACLOUD_MODELS_CONSUMERGROUPINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class ConsumerGroupInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ConsumerGroupInfo& obj) { 
      DARABONBA_PTR_TO_JSON(consumerGroupId, consumerGroupId_);
      DARABONBA_PTR_TO_JSON(gatewayType, gatewayType_);
      DARABONBA_PTR_TO_JSON(name, name_);
    };
    friend void from_json(const Darabonba::Json& j, ConsumerGroupInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(consumerGroupId, consumerGroupId_);
      DARABONBA_PTR_FROM_JSON(gatewayType, gatewayType_);
      DARABONBA_PTR_FROM_JSON(name, name_);
    };
    ConsumerGroupInfo() = default ;
    ConsumerGroupInfo(const ConsumerGroupInfo &) = default ;
    ConsumerGroupInfo(ConsumerGroupInfo &&) = default ;
    ConsumerGroupInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ConsumerGroupInfo() = default ;
    ConsumerGroupInfo& operator=(const ConsumerGroupInfo &) = default ;
    ConsumerGroupInfo& operator=(ConsumerGroupInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->consumerGroupId_ == nullptr
        && this->gatewayType_ == nullptr && this->name_ == nullptr; };
    // consumerGroupId Field Functions 
    bool hasConsumerGroupId() const { return this->consumerGroupId_ != nullptr;};
    void deleteConsumerGroupId() { this->consumerGroupId_ = nullptr;};
    inline string getConsumerGroupId() const { DARABONBA_PTR_GET_DEFAULT(consumerGroupId_, "") };
    inline ConsumerGroupInfo& setConsumerGroupId(string consumerGroupId) { DARABONBA_PTR_SET_VALUE(consumerGroupId_, consumerGroupId) };


    // gatewayType Field Functions 
    bool hasGatewayType() const { return this->gatewayType_ != nullptr;};
    void deleteGatewayType() { this->gatewayType_ = nullptr;};
    inline string getGatewayType() const { DARABONBA_PTR_GET_DEFAULT(gatewayType_, "") };
    inline ConsumerGroupInfo& setGatewayType(string gatewayType) { DARABONBA_PTR_SET_VALUE(gatewayType_, gatewayType) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ConsumerGroupInfo& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    shared_ptr<string> consumerGroupId_ {};
    shared_ptr<string> gatewayType_ {};
    shared_ptr<string> name_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
