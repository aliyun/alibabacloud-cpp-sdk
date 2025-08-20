// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUSERDEVICERESPONSEBODYDEVICEHISTORYUSERS_HPP_
#define ALIBABACLOUD_MODELS_GETUSERDEVICERESPONSEBODYDEVICEHISTORYUSERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class GetUserDeviceResponseBodyDeviceHistoryUsers : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUserDeviceResponseBodyDeviceHistoryUsers& obj) { 
      DARABONBA_PTR_TO_JSON(SaseUserId, saseUserId_);
      DARABONBA_PTR_TO_JSON(Username, username_);
    };
    friend void from_json(const Darabonba::Json& j, GetUserDeviceResponseBodyDeviceHistoryUsers& obj) { 
      DARABONBA_PTR_FROM_JSON(SaseUserId, saseUserId_);
      DARABONBA_PTR_FROM_JSON(Username, username_);
    };
    GetUserDeviceResponseBodyDeviceHistoryUsers() = default ;
    GetUserDeviceResponseBodyDeviceHistoryUsers(const GetUserDeviceResponseBodyDeviceHistoryUsers &) = default ;
    GetUserDeviceResponseBodyDeviceHistoryUsers(GetUserDeviceResponseBodyDeviceHistoryUsers &&) = default ;
    GetUserDeviceResponseBodyDeviceHistoryUsers(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUserDeviceResponseBodyDeviceHistoryUsers() = default ;
    GetUserDeviceResponseBodyDeviceHistoryUsers& operator=(const GetUserDeviceResponseBodyDeviceHistoryUsers &) = default ;
    GetUserDeviceResponseBodyDeviceHistoryUsers& operator=(GetUserDeviceResponseBodyDeviceHistoryUsers &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->saseUserId_ != nullptr
        && this->username_ != nullptr; };
    // saseUserId Field Functions 
    bool hasSaseUserId() const { return this->saseUserId_ != nullptr;};
    void deleteSaseUserId() { this->saseUserId_ = nullptr;};
    inline string saseUserId() const { DARABONBA_PTR_GET_DEFAULT(saseUserId_, "") };
    inline GetUserDeviceResponseBodyDeviceHistoryUsers& setSaseUserId(string saseUserId) { DARABONBA_PTR_SET_VALUE(saseUserId_, saseUserId) };


    // username Field Functions 
    bool hasUsername() const { return this->username_ != nullptr;};
    void deleteUsername() { this->username_ = nullptr;};
    inline string username() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
    inline GetUserDeviceResponseBodyDeviceHistoryUsers& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


  protected:
    std::shared_ptr<string> saseUserId_ = nullptr;
    std::shared_ptr<string> username_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
