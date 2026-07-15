// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECONSUMERGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECONSUMERGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class CreateConsumerGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateConsumerGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(consumerGroupId, consumerGroupId_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(gatewayType, gatewayType_);
      DARABONBA_PTR_TO_JSON(name, name_);
    };
    friend void from_json(const Darabonba::Json& j, CreateConsumerGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(consumerGroupId, consumerGroupId_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(gatewayType, gatewayType_);
      DARABONBA_PTR_FROM_JSON(name, name_);
    };
    CreateConsumerGroupRequest() = default ;
    CreateConsumerGroupRequest(const CreateConsumerGroupRequest &) = default ;
    CreateConsumerGroupRequest(CreateConsumerGroupRequest &&) = default ;
    CreateConsumerGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateConsumerGroupRequest() = default ;
    CreateConsumerGroupRequest& operator=(const CreateConsumerGroupRequest &) = default ;
    CreateConsumerGroupRequest& operator=(CreateConsumerGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->consumerGroupId_ == nullptr
        && this->description_ == nullptr && this->gatewayType_ == nullptr && this->name_ == nullptr; };
    // consumerGroupId Field Functions 
    bool hasConsumerGroupId() const { return this->consumerGroupId_ != nullptr;};
    void deleteConsumerGroupId() { this->consumerGroupId_ = nullptr;};
    inline string getConsumerGroupId() const { DARABONBA_PTR_GET_DEFAULT(consumerGroupId_, "") };
    inline CreateConsumerGroupRequest& setConsumerGroupId(string consumerGroupId) { DARABONBA_PTR_SET_VALUE(consumerGroupId_, consumerGroupId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateConsumerGroupRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // gatewayType Field Functions 
    bool hasGatewayType() const { return this->gatewayType_ != nullptr;};
    void deleteGatewayType() { this->gatewayType_ = nullptr;};
    inline string getGatewayType() const { DARABONBA_PTR_GET_DEFAULT(gatewayType_, "") };
    inline CreateConsumerGroupRequest& setGatewayType(string gatewayType) { DARABONBA_PTR_SET_VALUE(gatewayType_, gatewayType) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateConsumerGroupRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    shared_ptr<string> consumerGroupId_ {};
    shared_ptr<string> description_ {};
    shared_ptr<string> gatewayType_ {};
    shared_ptr<string> name_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
