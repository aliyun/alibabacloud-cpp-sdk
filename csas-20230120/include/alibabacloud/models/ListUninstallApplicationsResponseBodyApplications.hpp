// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUNINSTALLAPPLICATIONSRESPONSEBODYAPPLICATIONS_HPP_
#define ALIBABACLOUD_MODELS_LISTUNINSTALLAPPLICATIONSRESPONSEBODYAPPLICATIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class ListUninstallApplicationsResponseBodyApplications : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUninstallApplicationsResponseBodyApplications& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Department, department_);
      DARABONBA_PTR_TO_JSON(DevTag, devTag_);
      DARABONBA_PTR_TO_JSON(DevType, devType_);
      DARABONBA_PTR_TO_JSON(Hostname, hostname_);
      DARABONBA_PTR_TO_JSON(IdpName, idpName_);
      DARABONBA_PTR_TO_JSON(IsUninstall, isUninstall_);
      DARABONBA_PTR_TO_JSON(Mac, mac_);
      DARABONBA_PTR_TO_JSON(Reason, reason_);
      DARABONBA_PTR_TO_JSON(SaseUserId, saseUserId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Username, username_);
    };
    friend void from_json(const Darabonba::Json& j, ListUninstallApplicationsResponseBodyApplications& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Department, department_);
      DARABONBA_PTR_FROM_JSON(DevTag, devTag_);
      DARABONBA_PTR_FROM_JSON(DevType, devType_);
      DARABONBA_PTR_FROM_JSON(Hostname, hostname_);
      DARABONBA_PTR_FROM_JSON(IdpName, idpName_);
      DARABONBA_PTR_FROM_JSON(IsUninstall, isUninstall_);
      DARABONBA_PTR_FROM_JSON(Mac, mac_);
      DARABONBA_PTR_FROM_JSON(Reason, reason_);
      DARABONBA_PTR_FROM_JSON(SaseUserId, saseUserId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Username, username_);
    };
    ListUninstallApplicationsResponseBodyApplications() = default ;
    ListUninstallApplicationsResponseBodyApplications(const ListUninstallApplicationsResponseBodyApplications &) = default ;
    ListUninstallApplicationsResponseBodyApplications(ListUninstallApplicationsResponseBodyApplications &&) = default ;
    ListUninstallApplicationsResponseBodyApplications(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUninstallApplicationsResponseBodyApplications() = default ;
    ListUninstallApplicationsResponseBodyApplications& operator=(const ListUninstallApplicationsResponseBodyApplications &) = default ;
    ListUninstallApplicationsResponseBodyApplications& operator=(ListUninstallApplicationsResponseBodyApplications &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->applicationId_ != nullptr
        && this->createTime_ != nullptr && this->department_ != nullptr && this->devTag_ != nullptr && this->devType_ != nullptr && this->hostname_ != nullptr
        && this->idpName_ != nullptr && this->isUninstall_ != nullptr && this->mac_ != nullptr && this->reason_ != nullptr && this->saseUserId_ != nullptr
        && this->status_ != nullptr && this->username_ != nullptr; };
    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string applicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline ListUninstallApplicationsResponseBodyApplications& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListUninstallApplicationsResponseBodyApplications& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // department Field Functions 
    bool hasDepartment() const { return this->department_ != nullptr;};
    void deleteDepartment() { this->department_ = nullptr;};
    inline string department() const { DARABONBA_PTR_GET_DEFAULT(department_, "") };
    inline ListUninstallApplicationsResponseBodyApplications& setDepartment(string department) { DARABONBA_PTR_SET_VALUE(department_, department) };


    // devTag Field Functions 
    bool hasDevTag() const { return this->devTag_ != nullptr;};
    void deleteDevTag() { this->devTag_ = nullptr;};
    inline string devTag() const { DARABONBA_PTR_GET_DEFAULT(devTag_, "") };
    inline ListUninstallApplicationsResponseBodyApplications& setDevTag(string devTag) { DARABONBA_PTR_SET_VALUE(devTag_, devTag) };


    // devType Field Functions 
    bool hasDevType() const { return this->devType_ != nullptr;};
    void deleteDevType() { this->devType_ = nullptr;};
    inline string devType() const { DARABONBA_PTR_GET_DEFAULT(devType_, "") };
    inline ListUninstallApplicationsResponseBodyApplications& setDevType(string devType) { DARABONBA_PTR_SET_VALUE(devType_, devType) };


    // hostname Field Functions 
    bool hasHostname() const { return this->hostname_ != nullptr;};
    void deleteHostname() { this->hostname_ = nullptr;};
    inline string hostname() const { DARABONBA_PTR_GET_DEFAULT(hostname_, "") };
    inline ListUninstallApplicationsResponseBodyApplications& setHostname(string hostname) { DARABONBA_PTR_SET_VALUE(hostname_, hostname) };


    // idpName Field Functions 
    bool hasIdpName() const { return this->idpName_ != nullptr;};
    void deleteIdpName() { this->idpName_ = nullptr;};
    inline string idpName() const { DARABONBA_PTR_GET_DEFAULT(idpName_, "") };
    inline ListUninstallApplicationsResponseBodyApplications& setIdpName(string idpName) { DARABONBA_PTR_SET_VALUE(idpName_, idpName) };


    // isUninstall Field Functions 
    bool hasIsUninstall() const { return this->isUninstall_ != nullptr;};
    void deleteIsUninstall() { this->isUninstall_ = nullptr;};
    inline bool isUninstall() const { DARABONBA_PTR_GET_DEFAULT(isUninstall_, false) };
    inline ListUninstallApplicationsResponseBodyApplications& setIsUninstall(bool isUninstall) { DARABONBA_PTR_SET_VALUE(isUninstall_, isUninstall) };


    // mac Field Functions 
    bool hasMac() const { return this->mac_ != nullptr;};
    void deleteMac() { this->mac_ = nullptr;};
    inline string mac() const { DARABONBA_PTR_GET_DEFAULT(mac_, "") };
    inline ListUninstallApplicationsResponseBodyApplications& setMac(string mac) { DARABONBA_PTR_SET_VALUE(mac_, mac) };


    // reason Field Functions 
    bool hasReason() const { return this->reason_ != nullptr;};
    void deleteReason() { this->reason_ = nullptr;};
    inline string reason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
    inline ListUninstallApplicationsResponseBodyApplications& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


    // saseUserId Field Functions 
    bool hasSaseUserId() const { return this->saseUserId_ != nullptr;};
    void deleteSaseUserId() { this->saseUserId_ = nullptr;};
    inline string saseUserId() const { DARABONBA_PTR_GET_DEFAULT(saseUserId_, "") };
    inline ListUninstallApplicationsResponseBodyApplications& setSaseUserId(string saseUserId) { DARABONBA_PTR_SET_VALUE(saseUserId_, saseUserId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListUninstallApplicationsResponseBodyApplications& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // username Field Functions 
    bool hasUsername() const { return this->username_ != nullptr;};
    void deleteUsername() { this->username_ = nullptr;};
    inline string username() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
    inline ListUninstallApplicationsResponseBodyApplications& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


  protected:
    std::shared_ptr<string> applicationId_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> department_ = nullptr;
    std::shared_ptr<string> devTag_ = nullptr;
    std::shared_ptr<string> devType_ = nullptr;
    std::shared_ptr<string> hostname_ = nullptr;
    std::shared_ptr<string> idpName_ = nullptr;
    std::shared_ptr<bool> isUninstall_ = nullptr;
    std::shared_ptr<string> mac_ = nullptr;
    std::shared_ptr<string> reason_ = nullptr;
    std::shared_ptr<string> saseUserId_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> username_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
