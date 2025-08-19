// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEVENTRULESREQUESTSUBSCRIPTION_HPP_
#define ALIBABACLOUD_MODELS_LISTEVENTRULESREQUESTSUBSCRIPTION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MnsOpen20220119
{
namespace Models
{
  class ListEventRulesRequestSubscription : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEventRulesRequestSubscription& obj) { 
      DARABONBA_PTR_TO_JSON(EndpointType, endpointType_);
      DARABONBA_PTR_TO_JSON(EndpointValue, endpointValue_);
    };
    friend void from_json(const Darabonba::Json& j, ListEventRulesRequestSubscription& obj) { 
      DARABONBA_PTR_FROM_JSON(EndpointType, endpointType_);
      DARABONBA_PTR_FROM_JSON(EndpointValue, endpointValue_);
    };
    ListEventRulesRequestSubscription() = default ;
    ListEventRulesRequestSubscription(const ListEventRulesRequestSubscription &) = default ;
    ListEventRulesRequestSubscription(ListEventRulesRequestSubscription &&) = default ;
    ListEventRulesRequestSubscription(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEventRulesRequestSubscription() = default ;
    ListEventRulesRequestSubscription& operator=(const ListEventRulesRequestSubscription &) = default ;
    ListEventRulesRequestSubscription& operator=(ListEventRulesRequestSubscription &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->endpointType_ != nullptr
        && this->endpointValue_ != nullptr; };
    // endpointType Field Functions 
    bool hasEndpointType() const { return this->endpointType_ != nullptr;};
    void deleteEndpointType() { this->endpointType_ = nullptr;};
    inline string endpointType() const { DARABONBA_PTR_GET_DEFAULT(endpointType_, "") };
    inline ListEventRulesRequestSubscription& setEndpointType(string endpointType) { DARABONBA_PTR_SET_VALUE(endpointType_, endpointType) };


    // endpointValue Field Functions 
    bool hasEndpointValue() const { return this->endpointValue_ != nullptr;};
    void deleteEndpointValue() { this->endpointValue_ = nullptr;};
    inline string endpointValue() const { DARABONBA_PTR_GET_DEFAULT(endpointValue_, "") };
    inline ListEventRulesRequestSubscription& setEndpointValue(string endpointValue) { DARABONBA_PTR_SET_VALUE(endpointValue_, endpointValue) };


  protected:
    std::shared_ptr<string> endpointType_ = nullptr;
    std::shared_ptr<string> endpointValue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MnsOpen20220119
#endif
