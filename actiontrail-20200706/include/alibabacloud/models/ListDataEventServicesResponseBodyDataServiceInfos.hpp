// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATAEVENTSERVICESRESPONSEBODYDATASERVICEINFOS_HPP_
#define ALIBABACLOUD_MODELS_LISTDATAEVENTSERVICESRESPONSEBODYDATASERVICEINFOS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Actiontrail20200706
{
namespace Models
{
  class ListDataEventServicesResponseBodyDataServiceInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataEventServicesResponseBodyDataServiceInfos& obj) { 
      DARABONBA_PTR_TO_JSON(EventNames, eventNames_);
      DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataEventServicesResponseBodyDataServiceInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(EventNames, eventNames_);
      DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
    };
    ListDataEventServicesResponseBodyDataServiceInfos() = default ;
    ListDataEventServicesResponseBodyDataServiceInfos(const ListDataEventServicesResponseBodyDataServiceInfos &) = default ;
    ListDataEventServicesResponseBodyDataServiceInfos(ListDataEventServicesResponseBodyDataServiceInfos &&) = default ;
    ListDataEventServicesResponseBodyDataServiceInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataEventServicesResponseBodyDataServiceInfos() = default ;
    ListDataEventServicesResponseBodyDataServiceInfos& operator=(const ListDataEventServicesResponseBodyDataServiceInfos &) = default ;
    ListDataEventServicesResponseBodyDataServiceInfos& operator=(ListDataEventServicesResponseBodyDataServiceInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->eventNames_ != nullptr
        && this->serviceName_ != nullptr; };
    // eventNames Field Functions 
    bool hasEventNames() const { return this->eventNames_ != nullptr;};
    void deleteEventNames() { this->eventNames_ = nullptr;};
    inline const vector<string> & eventNames() const { DARABONBA_PTR_GET_CONST(eventNames_, vector<string>) };
    inline vector<string> eventNames() { DARABONBA_PTR_GET(eventNames_, vector<string>) };
    inline ListDataEventServicesResponseBodyDataServiceInfos& setEventNames(const vector<string> & eventNames) { DARABONBA_PTR_SET_VALUE(eventNames_, eventNames) };
    inline ListDataEventServicesResponseBodyDataServiceInfos& setEventNames(vector<string> && eventNames) { DARABONBA_PTR_SET_RVALUE(eventNames_, eventNames) };


    // serviceName Field Functions 
    bool hasServiceName() const { return this->serviceName_ != nullptr;};
    void deleteServiceName() { this->serviceName_ = nullptr;};
    inline string serviceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
    inline ListDataEventServicesResponseBodyDataServiceInfos& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


  protected:
    std::shared_ptr<vector<string>> eventNames_ = nullptr;
    std::shared_ptr<string> serviceName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Actiontrail20200706
#endif
