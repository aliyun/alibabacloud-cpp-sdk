// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUSERCONFIGRESPONSEBODYUSER_HPP_
#define ALIBABACLOUD_MODELS_GETUSERCONFIGRESPONSEBODYUSER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20241212
{
namespace Models
{
  class GetUserConfigResponseBodyUser : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUserConfigResponseBodyUser& obj) { 
      DARABONBA_PTR_TO_JSON(CtdrVersion, ctdrVersion_);
      DARABONBA_PTR_TO_JSON(DataStorageVersion, dataStorageVersion_);
      DARABONBA_PTR_TO_JSON(UpgradeCtdrVersion, upgradeCtdrVersion_);
      DARABONBA_PTR_TO_JSON(UpgradeStatus, upgradeStatus_);
    };
    friend void from_json(const Darabonba::Json& j, GetUserConfigResponseBodyUser& obj) { 
      DARABONBA_PTR_FROM_JSON(CtdrVersion, ctdrVersion_);
      DARABONBA_PTR_FROM_JSON(DataStorageVersion, dataStorageVersion_);
      DARABONBA_PTR_FROM_JSON(UpgradeCtdrVersion, upgradeCtdrVersion_);
      DARABONBA_PTR_FROM_JSON(UpgradeStatus, upgradeStatus_);
    };
    GetUserConfigResponseBodyUser() = default ;
    GetUserConfigResponseBodyUser(const GetUserConfigResponseBodyUser &) = default ;
    GetUserConfigResponseBodyUser(GetUserConfigResponseBodyUser &&) = default ;
    GetUserConfigResponseBodyUser(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUserConfigResponseBodyUser() = default ;
    GetUserConfigResponseBodyUser& operator=(const GetUserConfigResponseBodyUser &) = default ;
    GetUserConfigResponseBodyUser& operator=(GetUserConfigResponseBodyUser &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ctdrVersion_ == nullptr
        && return this->dataStorageVersion_ == nullptr && return this->upgradeCtdrVersion_ == nullptr && return this->upgradeStatus_ == nullptr; };
    // ctdrVersion Field Functions 
    bool hasCtdrVersion() const { return this->ctdrVersion_ != nullptr;};
    void deleteCtdrVersion() { this->ctdrVersion_ = nullptr;};
    inline string ctdrVersion() const { DARABONBA_PTR_GET_DEFAULT(ctdrVersion_, "") };
    inline GetUserConfigResponseBodyUser& setCtdrVersion(string ctdrVersion) { DARABONBA_PTR_SET_VALUE(ctdrVersion_, ctdrVersion) };


    // dataStorageVersion Field Functions 
    bool hasDataStorageVersion() const { return this->dataStorageVersion_ != nullptr;};
    void deleteDataStorageVersion() { this->dataStorageVersion_ = nullptr;};
    inline string dataStorageVersion() const { DARABONBA_PTR_GET_DEFAULT(dataStorageVersion_, "") };
    inline GetUserConfigResponseBodyUser& setDataStorageVersion(string dataStorageVersion) { DARABONBA_PTR_SET_VALUE(dataStorageVersion_, dataStorageVersion) };


    // upgradeCtdrVersion Field Functions 
    bool hasUpgradeCtdrVersion() const { return this->upgradeCtdrVersion_ != nullptr;};
    void deleteUpgradeCtdrVersion() { this->upgradeCtdrVersion_ = nullptr;};
    inline string upgradeCtdrVersion() const { DARABONBA_PTR_GET_DEFAULT(upgradeCtdrVersion_, "") };
    inline GetUserConfigResponseBodyUser& setUpgradeCtdrVersion(string upgradeCtdrVersion) { DARABONBA_PTR_SET_VALUE(upgradeCtdrVersion_, upgradeCtdrVersion) };


    // upgradeStatus Field Functions 
    bool hasUpgradeStatus() const { return this->upgradeStatus_ != nullptr;};
    void deleteUpgradeStatus() { this->upgradeStatus_ = nullptr;};
    inline string upgradeStatus() const { DARABONBA_PTR_GET_DEFAULT(upgradeStatus_, "") };
    inline GetUserConfigResponseBodyUser& setUpgradeStatus(string upgradeStatus) { DARABONBA_PTR_SET_VALUE(upgradeStatus_, upgradeStatus) };


  protected:
    std::shared_ptr<string> ctdrVersion_ = nullptr;
    std::shared_ptr<string> dataStorageVersion_ = nullptr;
    std::shared_ptr<string> upgradeCtdrVersion_ = nullptr;
    std::shared_ptr<string> upgradeStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20241212
#endif
