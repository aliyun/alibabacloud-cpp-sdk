// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCERESPONSEBODYDATAACCOUNTINFO_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCERESPONSEBODYDATAACCOUNTINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RocketMQ20220801
{
namespace Models
{
  class GetInstanceResponseBodyDataAccountInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstanceResponseBodyDataAccountInfo& obj) { 
      DARABONBA_PTR_TO_JSON(username, username_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstanceResponseBodyDataAccountInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(username, username_);
    };
    GetInstanceResponseBodyDataAccountInfo() = default ;
    GetInstanceResponseBodyDataAccountInfo(const GetInstanceResponseBodyDataAccountInfo &) = default ;
    GetInstanceResponseBodyDataAccountInfo(GetInstanceResponseBodyDataAccountInfo &&) = default ;
    GetInstanceResponseBodyDataAccountInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstanceResponseBodyDataAccountInfo() = default ;
    GetInstanceResponseBodyDataAccountInfo& operator=(const GetInstanceResponseBodyDataAccountInfo &) = default ;
    GetInstanceResponseBodyDataAccountInfo& operator=(GetInstanceResponseBodyDataAccountInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->username_ != nullptr; };
    // username Field Functions 
    bool hasUsername() const { return this->username_ != nullptr;};
    void deleteUsername() { this->username_ = nullptr;};
    inline string username() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
    inline GetInstanceResponseBodyDataAccountInfo& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


  protected:
    // The username of the instance. If you access a ApsaraMQ for RocketMQ instance over the Internet, you must configure the username and password of the instance in the SDK code for authentication.
    std::shared_ptr<string> username_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RocketMQ20220801
#endif
