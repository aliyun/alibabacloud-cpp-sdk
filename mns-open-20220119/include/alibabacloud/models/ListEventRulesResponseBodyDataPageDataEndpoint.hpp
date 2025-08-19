// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEVENTRULESRESPONSEBODYDATAPAGEDATAENDPOINT_HPP_
#define ALIBABACLOUD_MODELS_LISTEVENTRULESRESPONSEBODYDATAPAGEDATAENDPOINT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MnsOpen20220119
{
namespace Models
{
  class ListEventRulesResponseBodyDataPageDataEndpoint : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEventRulesResponseBodyDataPageDataEndpoint& obj) { 
      DARABONBA_PTR_TO_JSON(EndpointType, endpointType_);
      DARABONBA_PTR_TO_JSON(EndpointValue, endpointValue_);
    };
    friend void from_json(const Darabonba::Json& j, ListEventRulesResponseBodyDataPageDataEndpoint& obj) { 
      DARABONBA_PTR_FROM_JSON(EndpointType, endpointType_);
      DARABONBA_PTR_FROM_JSON(EndpointValue, endpointValue_);
    };
    ListEventRulesResponseBodyDataPageDataEndpoint() = default ;
    ListEventRulesResponseBodyDataPageDataEndpoint(const ListEventRulesResponseBodyDataPageDataEndpoint &) = default ;
    ListEventRulesResponseBodyDataPageDataEndpoint(ListEventRulesResponseBodyDataPageDataEndpoint &&) = default ;
    ListEventRulesResponseBodyDataPageDataEndpoint(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEventRulesResponseBodyDataPageDataEndpoint() = default ;
    ListEventRulesResponseBodyDataPageDataEndpoint& operator=(const ListEventRulesResponseBodyDataPageDataEndpoint &) = default ;
    ListEventRulesResponseBodyDataPageDataEndpoint& operator=(ListEventRulesResponseBodyDataPageDataEndpoint &&) = default ;
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
    inline ListEventRulesResponseBodyDataPageDataEndpoint& setEndpointType(string endpointType) { DARABONBA_PTR_SET_VALUE(endpointType_, endpointType) };


    // endpointValue Field Functions 
    bool hasEndpointValue() const { return this->endpointValue_ != nullptr;};
    void deleteEndpointValue() { this->endpointValue_ = nullptr;};
    inline string endpointValue() const { DARABONBA_PTR_GET_DEFAULT(endpointValue_, "") };
    inline ListEventRulesResponseBodyDataPageDataEndpoint& setEndpointValue(string endpointValue) { DARABONBA_PTR_SET_VALUE(endpointValue_, endpointValue) };


  protected:
    std::shared_ptr<string> endpointType_ = nullptr;
    std::shared_ptr<string> endpointValue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MnsOpen20220119
#endif
