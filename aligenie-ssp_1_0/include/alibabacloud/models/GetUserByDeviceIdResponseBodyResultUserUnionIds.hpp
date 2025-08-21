// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUSERBYDEVICEIDRESPONSEBODYRESULTUSERUNIONIDS_HPP_
#define ALIBABACLOUD_MODELS_GETUSERBYDEVICEIDRESPONSEBODYRESULTUSERUNIONIDS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class GetUserByDeviceIdResponseBodyResultUserUnionIds : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUserByDeviceIdResponseBodyResultUserUnionIds& obj) { 
      DARABONBA_PTR_TO_JSON(OrganizationId, organizationId_);
      DARABONBA_PTR_TO_JSON(UserUnionId, userUnionId_);
    };
    friend void from_json(const Darabonba::Json& j, GetUserByDeviceIdResponseBodyResultUserUnionIds& obj) { 
      DARABONBA_PTR_FROM_JSON(OrganizationId, organizationId_);
      DARABONBA_PTR_FROM_JSON(UserUnionId, userUnionId_);
    };
    GetUserByDeviceIdResponseBodyResultUserUnionIds() = default ;
    GetUserByDeviceIdResponseBodyResultUserUnionIds(const GetUserByDeviceIdResponseBodyResultUserUnionIds &) = default ;
    GetUserByDeviceIdResponseBodyResultUserUnionIds(GetUserByDeviceIdResponseBodyResultUserUnionIds &&) = default ;
    GetUserByDeviceIdResponseBodyResultUserUnionIds(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUserByDeviceIdResponseBodyResultUserUnionIds() = default ;
    GetUserByDeviceIdResponseBodyResultUserUnionIds& operator=(const GetUserByDeviceIdResponseBodyResultUserUnionIds &) = default ;
    GetUserByDeviceIdResponseBodyResultUserUnionIds& operator=(GetUserByDeviceIdResponseBodyResultUserUnionIds &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->organizationId_ != nullptr
        && this->userUnionId_ != nullptr; };
    // organizationId Field Functions 
    bool hasOrganizationId() const { return this->organizationId_ != nullptr;};
    void deleteOrganizationId() { this->organizationId_ = nullptr;};
    inline string organizationId() const { DARABONBA_PTR_GET_DEFAULT(organizationId_, "") };
    inline GetUserByDeviceIdResponseBodyResultUserUnionIds& setOrganizationId(string organizationId) { DARABONBA_PTR_SET_VALUE(organizationId_, organizationId) };


    // userUnionId Field Functions 
    bool hasUserUnionId() const { return this->userUnionId_ != nullptr;};
    void deleteUserUnionId() { this->userUnionId_ = nullptr;};
    inline string userUnionId() const { DARABONBA_PTR_GET_DEFAULT(userUnionId_, "") };
    inline GetUserByDeviceIdResponseBodyResultUserUnionIds& setUserUnionId(string userUnionId) { DARABONBA_PTR_SET_VALUE(userUnionId_, userUnionId) };


  protected:
    std::shared_ptr<string> organizationId_ = nullptr;
    std::shared_ptr<string> userUnionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
