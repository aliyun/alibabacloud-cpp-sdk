// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYAPSDATASOUREREQUESTPOLARDBMYSQLINFO_HPP_
#define ALIBABACLOUD_MODELS_MODIFYAPSDATASOUREREQUESTPOLARDBMYSQLINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class ModifyApsDatasoureRequestPolarDBMysqlInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyApsDatasoureRequestPolarDBMysqlInfo& obj) { 
      DARABONBA_PTR_TO_JSON(ConnectUrl, connectUrl_);
      DARABONBA_PTR_TO_JSON(Password, password_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(UserName, userName_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyApsDatasoureRequestPolarDBMysqlInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(ConnectUrl, connectUrl_);
      DARABONBA_PTR_FROM_JSON(Password, password_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(UserName, userName_);
    };
    ModifyApsDatasoureRequestPolarDBMysqlInfo() = default ;
    ModifyApsDatasoureRequestPolarDBMysqlInfo(const ModifyApsDatasoureRequestPolarDBMysqlInfo &) = default ;
    ModifyApsDatasoureRequestPolarDBMysqlInfo(ModifyApsDatasoureRequestPolarDBMysqlInfo &&) = default ;
    ModifyApsDatasoureRequestPolarDBMysqlInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyApsDatasoureRequestPolarDBMysqlInfo() = default ;
    ModifyApsDatasoureRequestPolarDBMysqlInfo& operator=(const ModifyApsDatasoureRequestPolarDBMysqlInfo &) = default ;
    ModifyApsDatasoureRequestPolarDBMysqlInfo& operator=(ModifyApsDatasoureRequestPolarDBMysqlInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->connectUrl_ == nullptr
        && return this->password_ == nullptr && return this->regionId_ == nullptr && return this->userName_ == nullptr; };
    // connectUrl Field Functions 
    bool hasConnectUrl() const { return this->connectUrl_ != nullptr;};
    void deleteConnectUrl() { this->connectUrl_ = nullptr;};
    inline string connectUrl() const { DARABONBA_PTR_GET_DEFAULT(connectUrl_, "") };
    inline ModifyApsDatasoureRequestPolarDBMysqlInfo& setConnectUrl(string connectUrl) { DARABONBA_PTR_SET_VALUE(connectUrl_, connectUrl) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string password() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline ModifyApsDatasoureRequestPolarDBMysqlInfo& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyApsDatasoureRequestPolarDBMysqlInfo& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string userName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline ModifyApsDatasoureRequestPolarDBMysqlInfo& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


  protected:
    // The parameter is no longer supported.
    std::shared_ptr<string> connectUrl_ = nullptr;
    // The parameter is no longer supported.
    std::shared_ptr<string> password_ = nullptr;
    // The parameter is no longer supported.
    std::shared_ptr<string> regionId_ = nullptr;
    // The parameter is no longer supported.
    std::shared_ptr<string> userName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
