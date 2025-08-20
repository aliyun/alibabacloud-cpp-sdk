// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERAPPLICATIONSRESPONSEBODYAPPLICATIONS_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERAPPLICATIONSRESPONSEBODYAPPLICATIONS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListUserApplicationsResponseBodyApplicationsPortRanges.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class ListUserApplicationsResponseBodyApplications : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUserApplicationsResponseBodyApplications& obj) { 
      DARABONBA_PTR_TO_JSON(Action, action_);
      DARABONBA_PTR_TO_JSON(Addresses, addresses_);
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PortRanges, portRanges_);
      DARABONBA_PTR_TO_JSON(Protocol, protocol_);
    };
    friend void from_json(const Darabonba::Json& j, ListUserApplicationsResponseBodyApplications& obj) { 
      DARABONBA_PTR_FROM_JSON(Action, action_);
      DARABONBA_PTR_FROM_JSON(Addresses, addresses_);
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PortRanges, portRanges_);
      DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
    };
    ListUserApplicationsResponseBodyApplications() = default ;
    ListUserApplicationsResponseBodyApplications(const ListUserApplicationsResponseBodyApplications &) = default ;
    ListUserApplicationsResponseBodyApplications(ListUserApplicationsResponseBodyApplications &&) = default ;
    ListUserApplicationsResponseBodyApplications(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUserApplicationsResponseBodyApplications() = default ;
    ListUserApplicationsResponseBodyApplications& operator=(const ListUserApplicationsResponseBodyApplications &) = default ;
    ListUserApplicationsResponseBodyApplications& operator=(ListUserApplicationsResponseBodyApplications &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->action_ != nullptr
        && this->addresses_ != nullptr && this->applicationId_ != nullptr && this->name_ != nullptr && this->portRanges_ != nullptr && this->protocol_ != nullptr; };
    // action Field Functions 
    bool hasAction() const { return this->action_ != nullptr;};
    void deleteAction() { this->action_ = nullptr;};
    inline string action() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
    inline ListUserApplicationsResponseBodyApplications& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


    // addresses Field Functions 
    bool hasAddresses() const { return this->addresses_ != nullptr;};
    void deleteAddresses() { this->addresses_ = nullptr;};
    inline const vector<string> & addresses() const { DARABONBA_PTR_GET_CONST(addresses_, vector<string>) };
    inline vector<string> addresses() { DARABONBA_PTR_GET(addresses_, vector<string>) };
    inline ListUserApplicationsResponseBodyApplications& setAddresses(const vector<string> & addresses) { DARABONBA_PTR_SET_VALUE(addresses_, addresses) };
    inline ListUserApplicationsResponseBodyApplications& setAddresses(vector<string> && addresses) { DARABONBA_PTR_SET_RVALUE(addresses_, addresses) };


    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string applicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline ListUserApplicationsResponseBodyApplications& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListUserApplicationsResponseBodyApplications& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // portRanges Field Functions 
    bool hasPortRanges() const { return this->portRanges_ != nullptr;};
    void deletePortRanges() { this->portRanges_ = nullptr;};
    inline const vector<Models::ListUserApplicationsResponseBodyApplicationsPortRanges> & portRanges() const { DARABONBA_PTR_GET_CONST(portRanges_, vector<Models::ListUserApplicationsResponseBodyApplicationsPortRanges>) };
    inline vector<Models::ListUserApplicationsResponseBodyApplicationsPortRanges> portRanges() { DARABONBA_PTR_GET(portRanges_, vector<Models::ListUserApplicationsResponseBodyApplicationsPortRanges>) };
    inline ListUserApplicationsResponseBodyApplications& setPortRanges(const vector<Models::ListUserApplicationsResponseBodyApplicationsPortRanges> & portRanges) { DARABONBA_PTR_SET_VALUE(portRanges_, portRanges) };
    inline ListUserApplicationsResponseBodyApplications& setPortRanges(vector<Models::ListUserApplicationsResponseBodyApplicationsPortRanges> && portRanges) { DARABONBA_PTR_SET_RVALUE(portRanges_, portRanges) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string protocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline ListUserApplicationsResponseBodyApplications& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


  protected:
    std::shared_ptr<string> action_ = nullptr;
    std::shared_ptr<vector<string>> addresses_ = nullptr;
    std::shared_ptr<string> applicationId_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<vector<Models::ListUserApplicationsResponseBodyApplicationsPortRanges>> portRanges_ = nullptr;
    std::shared_ptr<string> protocol_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
