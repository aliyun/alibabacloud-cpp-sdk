// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMULTIACCOUNTDELIVERYCHANNELREQUESTDELIVERYCHANNELFILTER_HPP_
#define ALIBABACLOUD_MODELS_CREATEMULTIACCOUNTDELIVERYCHANNELREQUESTDELIVERYCHANNELFILTER_HPP_
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
  class CreateMultiAccountDeliveryChannelRequestDeliveryChannelFilter : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMultiAccountDeliveryChannelRequestDeliveryChannelFilter& obj) { 
      DARABONBA_PTR_TO_JSON(AccountScopes, accountScopes_);
      DARABONBA_PTR_TO_JSON(ResourceTypes, resourceTypes_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMultiAccountDeliveryChannelRequestDeliveryChannelFilter& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountScopes, accountScopes_);
      DARABONBA_PTR_FROM_JSON(ResourceTypes, resourceTypes_);
    };
    CreateMultiAccountDeliveryChannelRequestDeliveryChannelFilter() = default ;
    CreateMultiAccountDeliveryChannelRequestDeliveryChannelFilter(const CreateMultiAccountDeliveryChannelRequestDeliveryChannelFilter &) = default ;
    CreateMultiAccountDeliveryChannelRequestDeliveryChannelFilter(CreateMultiAccountDeliveryChannelRequestDeliveryChannelFilter &&) = default ;
    CreateMultiAccountDeliveryChannelRequestDeliveryChannelFilter(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMultiAccountDeliveryChannelRequestDeliveryChannelFilter() = default ;
    CreateMultiAccountDeliveryChannelRequestDeliveryChannelFilter& operator=(const CreateMultiAccountDeliveryChannelRequestDeliveryChannelFilter &) = default ;
    CreateMultiAccountDeliveryChannelRequestDeliveryChannelFilter& operator=(CreateMultiAccountDeliveryChannelRequestDeliveryChannelFilter &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accountScopes_ != nullptr
        && this->resourceTypes_ != nullptr; };
    // accountScopes Field Functions 
    bool hasAccountScopes() const { return this->accountScopes_ != nullptr;};
    void deleteAccountScopes() { this->accountScopes_ = nullptr;};
    inline const vector<string> & accountScopes() const { DARABONBA_PTR_GET_CONST(accountScopes_, vector<string>) };
    inline vector<string> accountScopes() { DARABONBA_PTR_GET(accountScopes_, vector<string>) };
    inline CreateMultiAccountDeliveryChannelRequestDeliveryChannelFilter& setAccountScopes(const vector<string> & accountScopes) { DARABONBA_PTR_SET_VALUE(accountScopes_, accountScopes) };
    inline CreateMultiAccountDeliveryChannelRequestDeliveryChannelFilter& setAccountScopes(vector<string> && accountScopes) { DARABONBA_PTR_SET_RVALUE(accountScopes_, accountScopes) };


    // resourceTypes Field Functions 
    bool hasResourceTypes() const { return this->resourceTypes_ != nullptr;};
    void deleteResourceTypes() { this->resourceTypes_ = nullptr;};
    inline const vector<string> & resourceTypes() const { DARABONBA_PTR_GET_CONST(resourceTypes_, vector<string>) };
    inline vector<string> resourceTypes() { DARABONBA_PTR_GET(resourceTypes_, vector<string>) };
    inline CreateMultiAccountDeliveryChannelRequestDeliveryChannelFilter& setResourceTypes(const vector<string> & resourceTypes) { DARABONBA_PTR_SET_VALUE(resourceTypes_, resourceTypes) };
    inline CreateMultiAccountDeliveryChannelRequestDeliveryChannelFilter& setResourceTypes(vector<string> && resourceTypes) { DARABONBA_PTR_SET_RVALUE(resourceTypes_, resourceTypes) };


  protected:
    // An array of effective account scopes for the delivery channel.
    // 
    // This parameter is required.
    std::shared_ptr<vector<string>> accountScopes_ = nullptr;
    // The effective resource types of the delivery channel.
    std::shared_ptr<vector<string>> resourceTypes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceCenter20221201
#endif
