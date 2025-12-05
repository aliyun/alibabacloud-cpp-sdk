// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPLICATIONACCESSPOINTSRESPONSEBODYAPPLICATIONACCESSPOINTSAPPLICATIONACCESSPOINT_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPLICATIONACCESSPOINTSRESPONSEBODYAPPLICATIONACCESSPOINTSAPPLICATIONACCESSPOINT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Kms20160120
{
namespace Models
{
  class ListApplicationAccessPointsResponseBodyApplicationAccessPointsApplicationAccessPoint : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListApplicationAccessPointsResponseBodyApplicationAccessPointsApplicationAccessPoint& obj) { 
      DARABONBA_PTR_TO_JSON(AuthenticationMethod, authenticationMethod_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, ListApplicationAccessPointsResponseBodyApplicationAccessPointsApplicationAccessPoint& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthenticationMethod, authenticationMethod_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    ListApplicationAccessPointsResponseBodyApplicationAccessPointsApplicationAccessPoint() = default ;
    ListApplicationAccessPointsResponseBodyApplicationAccessPointsApplicationAccessPoint(const ListApplicationAccessPointsResponseBodyApplicationAccessPointsApplicationAccessPoint &) = default ;
    ListApplicationAccessPointsResponseBodyApplicationAccessPointsApplicationAccessPoint(ListApplicationAccessPointsResponseBodyApplicationAccessPointsApplicationAccessPoint &&) = default ;
    ListApplicationAccessPointsResponseBodyApplicationAccessPointsApplicationAccessPoint(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListApplicationAccessPointsResponseBodyApplicationAccessPointsApplicationAccessPoint() = default ;
    ListApplicationAccessPointsResponseBodyApplicationAccessPointsApplicationAccessPoint& operator=(const ListApplicationAccessPointsResponseBodyApplicationAccessPointsApplicationAccessPoint &) = default ;
    ListApplicationAccessPointsResponseBodyApplicationAccessPointsApplicationAccessPoint& operator=(ListApplicationAccessPointsResponseBodyApplicationAccessPointsApplicationAccessPoint &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authenticationMethod_ == nullptr
        && return this->name_ == nullptr; };
    // authenticationMethod Field Functions 
    bool hasAuthenticationMethod() const { return this->authenticationMethod_ != nullptr;};
    void deleteAuthenticationMethod() { this->authenticationMethod_ = nullptr;};
    inline string authenticationMethod() const { DARABONBA_PTR_GET_DEFAULT(authenticationMethod_, "") };
    inline ListApplicationAccessPointsResponseBodyApplicationAccessPointsApplicationAccessPoint& setAuthenticationMethod(string authenticationMethod) { DARABONBA_PTR_SET_VALUE(authenticationMethod_, authenticationMethod) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListApplicationAccessPointsResponseBodyApplicationAccessPointsApplicationAccessPoint& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // The authentication method.
    std::shared_ptr<string> authenticationMethod_ = nullptr;
    // The name of the AAP.
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kms20160120
#endif
