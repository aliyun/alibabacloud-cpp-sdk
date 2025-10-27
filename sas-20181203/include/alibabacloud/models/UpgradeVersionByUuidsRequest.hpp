// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPGRADEVERSIONBYUUIDSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPGRADEVERSIONBYUUIDSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class UpgradeVersionByUuidsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpgradeVersionByUuidsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(UpgradeVersion, upgradeVersion_);
      DARABONBA_PTR_TO_JSON(UuidList, uuidList_);
    };
    friend void from_json(const Darabonba::Json& j, UpgradeVersionByUuidsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(UpgradeVersion, upgradeVersion_);
      DARABONBA_PTR_FROM_JSON(UuidList, uuidList_);
    };
    UpgradeVersionByUuidsRequest() = default ;
    UpgradeVersionByUuidsRequest(const UpgradeVersionByUuidsRequest &) = default ;
    UpgradeVersionByUuidsRequest(UpgradeVersionByUuidsRequest &&) = default ;
    UpgradeVersionByUuidsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpgradeVersionByUuidsRequest() = default ;
    UpgradeVersionByUuidsRequest& operator=(const UpgradeVersionByUuidsRequest &) = default ;
    UpgradeVersionByUuidsRequest& operator=(UpgradeVersionByUuidsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->upgradeVersion_ == nullptr
        && return this->uuidList_ == nullptr; };
    // upgradeVersion Field Functions 
    bool hasUpgradeVersion() const { return this->upgradeVersion_ != nullptr;};
    void deleteUpgradeVersion() { this->upgradeVersion_ = nullptr;};
    inline string upgradeVersion() const { DARABONBA_PTR_GET_DEFAULT(upgradeVersion_, "") };
    inline UpgradeVersionByUuidsRequest& setUpgradeVersion(string upgradeVersion) { DARABONBA_PTR_SET_VALUE(upgradeVersion_, upgradeVersion) };


    // uuidList Field Functions 
    bool hasUuidList() const { return this->uuidList_ != nullptr;};
    void deleteUuidList() { this->uuidList_ = nullptr;};
    inline const vector<string> & uuidList() const { DARABONBA_PTR_GET_CONST(uuidList_, vector<string>) };
    inline vector<string> uuidList() { DARABONBA_PTR_GET(uuidList_, vector<string>) };
    inline UpgradeVersionByUuidsRequest& setUuidList(const vector<string> & uuidList) { DARABONBA_PTR_SET_VALUE(uuidList_, uuidList) };
    inline UpgradeVersionByUuidsRequest& setUuidList(vector<string> && uuidList) { DARABONBA_PTR_SET_RVALUE(uuidList_, uuidList) };


  protected:
    // The version to which you want to upgrade the client.
    // 
    // This parameter is required.
    std::shared_ptr<string> upgradeVersion_ = nullptr;
    // The UUIDs of the assets on which you want to run the detection task.
    // 
    // This parameter is required.
    std::shared_ptr<vector<string>> uuidList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
