// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCURRENTVERSIONPUBLISHRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCURRENTVERSIONPUBLISHRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetCurrentVersionPublishResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCurrentVersionPublishResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetCurrentVersionPublishResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetCurrentVersionPublishResponseBody() = default ;
    GetCurrentVersionPublishResponseBody(const GetCurrentVersionPublishResponseBody &) = default ;
    GetCurrentVersionPublishResponseBody(GetCurrentVersionPublishResponseBody &&) = default ;
    GetCurrentVersionPublishResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCurrentVersionPublishResponseBody() = default ;
    GetCurrentVersionPublishResponseBody& operator=(const GetCurrentVersionPublishResponseBody &) = default ;
    GetCurrentVersionPublishResponseBody& operator=(GetCurrentVersionPublishResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AutoUpgrade, autoUpgrade_);
        DARABONBA_PTR_TO_JSON(BigCustomer, bigCustomer_);
        DARABONBA_PTR_TO_JSON(CurVersion, curVersion_);
        DARABONBA_PTR_TO_JSON(ForceUpgradeTime, forceUpgradeTime_);
        DARABONBA_PTR_TO_JSON(GraySwitchStatus, graySwitchStatus_);
        DARABONBA_PTR_TO_JSON(LatestVersion, latestVersion_);
        DARABONBA_PTR_TO_JSON(LatestVersionCreate, latestVersionCreate_);
        DARABONBA_PTR_TO_JSON(LatestVersionDesc, latestVersionDesc_);
        DARABONBA_PTR_TO_JSON(PublishStatus, publishStatus_);
        DARABONBA_PTR_TO_JSON(UpgradeVersion, upgradeVersion_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AutoUpgrade, autoUpgrade_);
        DARABONBA_PTR_FROM_JSON(BigCustomer, bigCustomer_);
        DARABONBA_PTR_FROM_JSON(CurVersion, curVersion_);
        DARABONBA_PTR_FROM_JSON(ForceUpgradeTime, forceUpgradeTime_);
        DARABONBA_PTR_FROM_JSON(GraySwitchStatus, graySwitchStatus_);
        DARABONBA_PTR_FROM_JSON(LatestVersion, latestVersion_);
        DARABONBA_PTR_FROM_JSON(LatestVersionCreate, latestVersionCreate_);
        DARABONBA_PTR_FROM_JSON(LatestVersionDesc, latestVersionDesc_);
        DARABONBA_PTR_FROM_JSON(PublishStatus, publishStatus_);
        DARABONBA_PTR_FROM_JSON(UpgradeVersion, upgradeVersion_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->autoUpgrade_ == nullptr
        && this->bigCustomer_ == nullptr && this->curVersion_ == nullptr && this->forceUpgradeTime_ == nullptr && this->graySwitchStatus_ == nullptr && this->latestVersion_ == nullptr
        && this->latestVersionCreate_ == nullptr && this->latestVersionDesc_ == nullptr && this->publishStatus_ == nullptr && this->upgradeVersion_ == nullptr; };
      // autoUpgrade Field Functions 
      bool hasAutoUpgrade() const { return this->autoUpgrade_ != nullptr;};
      void deleteAutoUpgrade() { this->autoUpgrade_ = nullptr;};
      inline int32_t getAutoUpgrade() const { DARABONBA_PTR_GET_DEFAULT(autoUpgrade_, 0) };
      inline Data& setAutoUpgrade(int32_t autoUpgrade) { DARABONBA_PTR_SET_VALUE(autoUpgrade_, autoUpgrade) };


      // bigCustomer Field Functions 
      bool hasBigCustomer() const { return this->bigCustomer_ != nullptr;};
      void deleteBigCustomer() { this->bigCustomer_ = nullptr;};
      inline bool getBigCustomer() const { DARABONBA_PTR_GET_DEFAULT(bigCustomer_, false) };
      inline Data& setBigCustomer(bool bigCustomer) { DARABONBA_PTR_SET_VALUE(bigCustomer_, bigCustomer) };


      // curVersion Field Functions 
      bool hasCurVersion() const { return this->curVersion_ != nullptr;};
      void deleteCurVersion() { this->curVersion_ = nullptr;};
      inline string getCurVersion() const { DARABONBA_PTR_GET_DEFAULT(curVersion_, "") };
      inline Data& setCurVersion(string curVersion) { DARABONBA_PTR_SET_VALUE(curVersion_, curVersion) };


      // forceUpgradeTime Field Functions 
      bool hasForceUpgradeTime() const { return this->forceUpgradeTime_ != nullptr;};
      void deleteForceUpgradeTime() { this->forceUpgradeTime_ = nullptr;};
      inline int64_t getForceUpgradeTime() const { DARABONBA_PTR_GET_DEFAULT(forceUpgradeTime_, 0L) };
      inline Data& setForceUpgradeTime(int64_t forceUpgradeTime) { DARABONBA_PTR_SET_VALUE(forceUpgradeTime_, forceUpgradeTime) };


      // graySwitchStatus Field Functions 
      bool hasGraySwitchStatus() const { return this->graySwitchStatus_ != nullptr;};
      void deleteGraySwitchStatus() { this->graySwitchStatus_ = nullptr;};
      inline int32_t getGraySwitchStatus() const { DARABONBA_PTR_GET_DEFAULT(graySwitchStatus_, 0) };
      inline Data& setGraySwitchStatus(int32_t graySwitchStatus) { DARABONBA_PTR_SET_VALUE(graySwitchStatus_, graySwitchStatus) };


      // latestVersion Field Functions 
      bool hasLatestVersion() const { return this->latestVersion_ != nullptr;};
      void deleteLatestVersion() { this->latestVersion_ = nullptr;};
      inline string getLatestVersion() const { DARABONBA_PTR_GET_DEFAULT(latestVersion_, "") };
      inline Data& setLatestVersion(string latestVersion) { DARABONBA_PTR_SET_VALUE(latestVersion_, latestVersion) };


      // latestVersionCreate Field Functions 
      bool hasLatestVersionCreate() const { return this->latestVersionCreate_ != nullptr;};
      void deleteLatestVersionCreate() { this->latestVersionCreate_ = nullptr;};
      inline int64_t getLatestVersionCreate() const { DARABONBA_PTR_GET_DEFAULT(latestVersionCreate_, 0L) };
      inline Data& setLatestVersionCreate(int64_t latestVersionCreate) { DARABONBA_PTR_SET_VALUE(latestVersionCreate_, latestVersionCreate) };


      // latestVersionDesc Field Functions 
      bool hasLatestVersionDesc() const { return this->latestVersionDesc_ != nullptr;};
      void deleteLatestVersionDesc() { this->latestVersionDesc_ = nullptr;};
      inline string getLatestVersionDesc() const { DARABONBA_PTR_GET_DEFAULT(latestVersionDesc_, "") };
      inline Data& setLatestVersionDesc(string latestVersionDesc) { DARABONBA_PTR_SET_VALUE(latestVersionDesc_, latestVersionDesc) };


      // publishStatus Field Functions 
      bool hasPublishStatus() const { return this->publishStatus_ != nullptr;};
      void deletePublishStatus() { this->publishStatus_ = nullptr;};
      inline int32_t getPublishStatus() const { DARABONBA_PTR_GET_DEFAULT(publishStatus_, 0) };
      inline Data& setPublishStatus(int32_t publishStatus) { DARABONBA_PTR_SET_VALUE(publishStatus_, publishStatus) };


      // upgradeVersion Field Functions 
      bool hasUpgradeVersion() const { return this->upgradeVersion_ != nullptr;};
      void deleteUpgradeVersion() { this->upgradeVersion_ = nullptr;};
      inline string getUpgradeVersion() const { DARABONBA_PTR_GET_DEFAULT(upgradeVersion_, "") };
      inline Data& setUpgradeVersion(string upgradeVersion) { DARABONBA_PTR_SET_VALUE(upgradeVersion_, upgradeVersion) };


    protected:
      // Indicates whether automatic upgrade is enabled. Valid values:
      // 
      // *   **1**: yes.
      // *   **0**: no.
      shared_ptr<int32_t> autoUpgrade_ {};
      // Indicates whether you can enable custom upgrade for the Security Center agent. Valid values:
      // 
      // *   **true**
      // *   **false**
      shared_ptr<bool> bigCustomer_ {};
      // The version of the Security Center agent.
      shared_ptr<string> curVersion_ {};
      // The timestamp when the Security Center agent was forcibly upgraded.
      shared_ptr<int64_t> forceUpgradeTime_ {};
      // Indicates whether the canary release policy is enabled. Valid values:
      // 
      // *   **1**: yes.
      // *   .**0**: no.
      shared_ptr<int32_t> graySwitchStatus_ {};
      // The latest version of the Security Center agent.
      shared_ptr<string> latestVersion_ {};
      // The timestamp when the latest version of the Security Center agent was created.
      shared_ptr<int64_t> latestVersionCreate_ {};
      // The description of about the latest version.
      shared_ptr<string> latestVersionDesc_ {};
      // The publish status of the Security Center agent. Valid values:
      // 
      // *   **0**: not started.
      // *   **1**: publishing.
      // *   **2**: published.
      // *   **3**: publish suspended.
      // *   **4**: forcibly upgrading.
      shared_ptr<int32_t> publishStatus_ {};
      // The destination version of the Security Center agent.
      shared_ptr<string> upgradeVersion_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetCurrentVersionPublishResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetCurrentVersionPublishResponseBody::Data) };
    inline GetCurrentVersionPublishResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetCurrentVersionPublishResponseBody::Data) };
    inline GetCurrentVersionPublishResponseBody& setData(const GetCurrentVersionPublishResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetCurrentVersionPublishResponseBody& setData(GetCurrentVersionPublishResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetCurrentVersionPublishResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The data returned.
    shared_ptr<GetCurrentVersionPublishResponseBody::Data> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
