// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPRIVATEACCESSAPPLICATIONSFORDYNAMICROUTERESPONSEBODYDYNAMICROUTESAPPLICATIONS_HPP_
#define ALIBABACLOUD_MODELS_LISTPRIVATEACCESSAPPLICATIONSFORDYNAMICROUTERESPONSEBODYDYNAMICROUTESAPPLICATIONS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListPrivateAccessApplicationsForDynamicRouteResponseBodyDynamicRoutesApplicationsPortRanges.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class ListPrivateAccessApplicationsForDynamicRouteResponseBodyDynamicRoutesApplications : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPrivateAccessApplicationsForDynamicRouteResponseBodyDynamicRoutesApplications& obj) { 
      DARABONBA_PTR_TO_JSON(Addresses, addresses_);
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PortRanges, portRanges_);
      DARABONBA_PTR_TO_JSON(Protocol, protocol_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListPrivateAccessApplicationsForDynamicRouteResponseBodyDynamicRoutesApplications& obj) { 
      DARABONBA_PTR_FROM_JSON(Addresses, addresses_);
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PortRanges, portRanges_);
      DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ListPrivateAccessApplicationsForDynamicRouteResponseBodyDynamicRoutesApplications() = default ;
    ListPrivateAccessApplicationsForDynamicRouteResponseBodyDynamicRoutesApplications(const ListPrivateAccessApplicationsForDynamicRouteResponseBodyDynamicRoutesApplications &) = default ;
    ListPrivateAccessApplicationsForDynamicRouteResponseBodyDynamicRoutesApplications(ListPrivateAccessApplicationsForDynamicRouteResponseBodyDynamicRoutesApplications &&) = default ;
    ListPrivateAccessApplicationsForDynamicRouteResponseBodyDynamicRoutesApplications(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPrivateAccessApplicationsForDynamicRouteResponseBodyDynamicRoutesApplications() = default ;
    ListPrivateAccessApplicationsForDynamicRouteResponseBodyDynamicRoutesApplications& operator=(const ListPrivateAccessApplicationsForDynamicRouteResponseBodyDynamicRoutesApplications &) = default ;
    ListPrivateAccessApplicationsForDynamicRouteResponseBodyDynamicRoutesApplications& operator=(ListPrivateAccessApplicationsForDynamicRouteResponseBodyDynamicRoutesApplications &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->addresses_ != nullptr
        && this->applicationId_ != nullptr && this->createTime_ != nullptr && this->description_ != nullptr && this->name_ != nullptr && this->portRanges_ != nullptr
        && this->protocol_ != nullptr && this->status_ != nullptr; };
    // addresses Field Functions 
    bool hasAddresses() const { return this->addresses_ != nullptr;};
    void deleteAddresses() { this->addresses_ = nullptr;};
    inline const vector<string> & addresses() const { DARABONBA_PTR_GET_CONST(addresses_, vector<string>) };
    inline vector<string> addresses() { DARABONBA_PTR_GET(addresses_, vector<string>) };
    inline ListPrivateAccessApplicationsForDynamicRouteResponseBodyDynamicRoutesApplications& setAddresses(const vector<string> & addresses) { DARABONBA_PTR_SET_VALUE(addresses_, addresses) };
    inline ListPrivateAccessApplicationsForDynamicRouteResponseBodyDynamicRoutesApplications& setAddresses(vector<string> && addresses) { DARABONBA_PTR_SET_RVALUE(addresses_, addresses) };


    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string applicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline ListPrivateAccessApplicationsForDynamicRouteResponseBodyDynamicRoutesApplications& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListPrivateAccessApplicationsForDynamicRouteResponseBodyDynamicRoutesApplications& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListPrivateAccessApplicationsForDynamicRouteResponseBodyDynamicRoutesApplications& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListPrivateAccessApplicationsForDynamicRouteResponseBodyDynamicRoutesApplications& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // portRanges Field Functions 
    bool hasPortRanges() const { return this->portRanges_ != nullptr;};
    void deletePortRanges() { this->portRanges_ = nullptr;};
    inline const vector<Models::ListPrivateAccessApplicationsForDynamicRouteResponseBodyDynamicRoutesApplicationsPortRanges> & portRanges() const { DARABONBA_PTR_GET_CONST(portRanges_, vector<Models::ListPrivateAccessApplicationsForDynamicRouteResponseBodyDynamicRoutesApplicationsPortRanges>) };
    inline vector<Models::ListPrivateAccessApplicationsForDynamicRouteResponseBodyDynamicRoutesApplicationsPortRanges> portRanges() { DARABONBA_PTR_GET(portRanges_, vector<Models::ListPrivateAccessApplicationsForDynamicRouteResponseBodyDynamicRoutesApplicationsPortRanges>) };
    inline ListPrivateAccessApplicationsForDynamicRouteResponseBodyDynamicRoutesApplications& setPortRanges(const vector<Models::ListPrivateAccessApplicationsForDynamicRouteResponseBodyDynamicRoutesApplicationsPortRanges> & portRanges) { DARABONBA_PTR_SET_VALUE(portRanges_, portRanges) };
    inline ListPrivateAccessApplicationsForDynamicRouteResponseBodyDynamicRoutesApplications& setPortRanges(vector<Models::ListPrivateAccessApplicationsForDynamicRouteResponseBodyDynamicRoutesApplicationsPortRanges> && portRanges) { DARABONBA_PTR_SET_RVALUE(portRanges_, portRanges) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string protocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline ListPrivateAccessApplicationsForDynamicRouteResponseBodyDynamicRoutesApplications& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListPrivateAccessApplicationsForDynamicRouteResponseBodyDynamicRoutesApplications& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<vector<string>> addresses_ = nullptr;
    std::shared_ptr<string> applicationId_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<vector<Models::ListPrivateAccessApplicationsForDynamicRouteResponseBodyDynamicRoutesApplicationsPortRanges>> portRanges_ = nullptr;
    std::shared_ptr<string> protocol_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
