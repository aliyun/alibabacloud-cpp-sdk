// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETENGINEDEFAULTAUTHRESPONSEBODYAUTHINFOS_HPP_
#define ALIBABACLOUD_MODELS_GETENGINEDEFAULTAUTHRESPONSEBODYAUTHINFOS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hitsdb20200615
{
namespace Models
{
  class GetEngineDefaultAuthResponseBodyAuthInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetEngineDefaultAuthResponseBodyAuthInfos& obj) { 
      DARABONBA_PTR_TO_JSON(Engine, engine_);
      DARABONBA_PTR_TO_JSON(Password, password_);
      DARABONBA_PTR_TO_JSON(Username, username_);
    };
    friend void from_json(const Darabonba::Json& j, GetEngineDefaultAuthResponseBodyAuthInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(Engine, engine_);
      DARABONBA_PTR_FROM_JSON(Password, password_);
      DARABONBA_PTR_FROM_JSON(Username, username_);
    };
    GetEngineDefaultAuthResponseBodyAuthInfos() = default ;
    GetEngineDefaultAuthResponseBodyAuthInfos(const GetEngineDefaultAuthResponseBodyAuthInfos &) = default ;
    GetEngineDefaultAuthResponseBodyAuthInfos(GetEngineDefaultAuthResponseBodyAuthInfos &&) = default ;
    GetEngineDefaultAuthResponseBodyAuthInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetEngineDefaultAuthResponseBodyAuthInfos() = default ;
    GetEngineDefaultAuthResponseBodyAuthInfos& operator=(const GetEngineDefaultAuthResponseBodyAuthInfos &) = default ;
    GetEngineDefaultAuthResponseBodyAuthInfos& operator=(GetEngineDefaultAuthResponseBodyAuthInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->engine_ == nullptr
        && return this->password_ == nullptr && return this->username_ == nullptr; };
    // engine Field Functions 
    bool hasEngine() const { return this->engine_ != nullptr;};
    void deleteEngine() { this->engine_ = nullptr;};
    inline string engine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
    inline GetEngineDefaultAuthResponseBodyAuthInfos& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string password() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline GetEngineDefaultAuthResponseBodyAuthInfos& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // username Field Functions 
    bool hasUsername() const { return this->username_ != nullptr;};
    void deleteUsername() { this->username_ = nullptr;};
    inline string username() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
    inline GetEngineDefaultAuthResponseBodyAuthInfos& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


  protected:
    std::shared_ptr<string> engine_ = nullptr;
    std::shared_ptr<string> password_ = nullptr;
    std::shared_ptr<string> username_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hitsdb20200615
#endif
