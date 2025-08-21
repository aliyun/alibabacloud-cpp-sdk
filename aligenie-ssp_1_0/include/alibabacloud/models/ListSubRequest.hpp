// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSUBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSUBREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListSubRequestDeviceInfo.hpp>
#include <alibabacloud/models/ListSubRequestPage.hpp>
#include <alibabacloud/models/ListSubRequestUserInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class ListSubRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSubRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeviceInfo, deviceInfo_);
      DARABONBA_PTR_TO_JSON(Page, page_);
      DARABONBA_PTR_TO_JSON(UserInfo, userInfo_);
    };
    friend void from_json(const Darabonba::Json& j, ListSubRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeviceInfo, deviceInfo_);
      DARABONBA_PTR_FROM_JSON(Page, page_);
      DARABONBA_PTR_FROM_JSON(UserInfo, userInfo_);
    };
    ListSubRequest() = default ;
    ListSubRequest(const ListSubRequest &) = default ;
    ListSubRequest(ListSubRequest &&) = default ;
    ListSubRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSubRequest() = default ;
    ListSubRequest& operator=(const ListSubRequest &) = default ;
    ListSubRequest& operator=(ListSubRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->deviceInfo_ != nullptr
        && this->page_ != nullptr && this->userInfo_ != nullptr; };
    // deviceInfo Field Functions 
    bool hasDeviceInfo() const { return this->deviceInfo_ != nullptr;};
    void deleteDeviceInfo() { this->deviceInfo_ = nullptr;};
    inline const ListSubRequestDeviceInfo & deviceInfo() const { DARABONBA_PTR_GET_CONST(deviceInfo_, ListSubRequestDeviceInfo) };
    inline ListSubRequestDeviceInfo deviceInfo() { DARABONBA_PTR_GET(deviceInfo_, ListSubRequestDeviceInfo) };
    inline ListSubRequest& setDeviceInfo(const ListSubRequestDeviceInfo & deviceInfo) { DARABONBA_PTR_SET_VALUE(deviceInfo_, deviceInfo) };
    inline ListSubRequest& setDeviceInfo(ListSubRequestDeviceInfo && deviceInfo) { DARABONBA_PTR_SET_RVALUE(deviceInfo_, deviceInfo) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline const ListSubRequestPage & page() const { DARABONBA_PTR_GET_CONST(page_, ListSubRequestPage) };
    inline ListSubRequestPage page() { DARABONBA_PTR_GET(page_, ListSubRequestPage) };
    inline ListSubRequest& setPage(const ListSubRequestPage & page) { DARABONBA_PTR_SET_VALUE(page_, page) };
    inline ListSubRequest& setPage(ListSubRequestPage && page) { DARABONBA_PTR_SET_RVALUE(page_, page) };


    // userInfo Field Functions 
    bool hasUserInfo() const { return this->userInfo_ != nullptr;};
    void deleteUserInfo() { this->userInfo_ = nullptr;};
    inline const ListSubRequestUserInfo & userInfo() const { DARABONBA_PTR_GET_CONST(userInfo_, ListSubRequestUserInfo) };
    inline ListSubRequestUserInfo userInfo() { DARABONBA_PTR_GET(userInfo_, ListSubRequestUserInfo) };
    inline ListSubRequest& setUserInfo(const ListSubRequestUserInfo & userInfo) { DARABONBA_PTR_SET_VALUE(userInfo_, userInfo) };
    inline ListSubRequest& setUserInfo(ListSubRequestUserInfo && userInfo) { DARABONBA_PTR_SET_RVALUE(userInfo_, userInfo) };


  protected:
    // This parameter is required.
    std::shared_ptr<ListSubRequestDeviceInfo> deviceInfo_ = nullptr;
    // This parameter is required.
    std::shared_ptr<ListSubRequestPage> page_ = nullptr;
    // This parameter is required.
    std::shared_ptr<ListSubRequestUserInfo> userInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
