// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDEVICEBYUSERIDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTDEVICEBYUSERIDREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListDeviceByUserIdRequestUserInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class ListDeviceByUserIdRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDeviceByUserIdRequest& obj) { 
      DARABONBA_PTR_TO_JSON(UserInfo, userInfo_);
    };
    friend void from_json(const Darabonba::Json& j, ListDeviceByUserIdRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(UserInfo, userInfo_);
    };
    ListDeviceByUserIdRequest() = default ;
    ListDeviceByUserIdRequest(const ListDeviceByUserIdRequest &) = default ;
    ListDeviceByUserIdRequest(ListDeviceByUserIdRequest &&) = default ;
    ListDeviceByUserIdRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDeviceByUserIdRequest() = default ;
    ListDeviceByUserIdRequest& operator=(const ListDeviceByUserIdRequest &) = default ;
    ListDeviceByUserIdRequest& operator=(ListDeviceByUserIdRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->userInfo_ != nullptr; };
    // userInfo Field Functions 
    bool hasUserInfo() const { return this->userInfo_ != nullptr;};
    void deleteUserInfo() { this->userInfo_ = nullptr;};
    inline const ListDeviceByUserIdRequestUserInfo & userInfo() const { DARABONBA_PTR_GET_CONST(userInfo_, ListDeviceByUserIdRequestUserInfo) };
    inline ListDeviceByUserIdRequestUserInfo userInfo() { DARABONBA_PTR_GET(userInfo_, ListDeviceByUserIdRequestUserInfo) };
    inline ListDeviceByUserIdRequest& setUserInfo(const ListDeviceByUserIdRequestUserInfo & userInfo) { DARABONBA_PTR_SET_VALUE(userInfo_, userInfo) };
    inline ListDeviceByUserIdRequest& setUserInfo(ListDeviceByUserIdRequestUserInfo && userInfo) { DARABONBA_PTR_SET_RVALUE(userInfo_, userInfo) };


  protected:
    // This parameter is required.
    std::shared_ptr<ListDeviceByUserIdRequestUserInfo> userInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
