// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUNINSTALLAPPLICATIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTUNINSTALLAPPLICATIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class ListUninstallApplicationsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUninstallApplicationsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Applications, applications_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalNum, totalNum_);
    };
    friend void from_json(const Darabonba::Json& j, ListUninstallApplicationsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Applications, applications_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalNum, totalNum_);
    };
    ListUninstallApplicationsResponseBody() = default ;
    ListUninstallApplicationsResponseBody(const ListUninstallApplicationsResponseBody &) = default ;
    ListUninstallApplicationsResponseBody(ListUninstallApplicationsResponseBody &&) = default ;
    ListUninstallApplicationsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUninstallApplicationsResponseBody() = default ;
    ListUninstallApplicationsResponseBody& operator=(const ListUninstallApplicationsResponseBody &) = default ;
    ListUninstallApplicationsResponseBody& operator=(ListUninstallApplicationsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Applications : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Applications& obj) { 
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
      friend void from_json(const Darabonba::Json& j, Applications& obj) { 
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
      Applications() = default ;
      Applications(const Applications &) = default ;
      Applications(Applications &&) = default ;
      Applications(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Applications() = default ;
      Applications& operator=(const Applications &) = default ;
      Applications& operator=(Applications &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->applicationId_ == nullptr
        && this->createTime_ == nullptr && this->department_ == nullptr && this->devTag_ == nullptr && this->devType_ == nullptr && this->hostname_ == nullptr
        && this->idpName_ == nullptr && this->isUninstall_ == nullptr && this->mac_ == nullptr && this->reason_ == nullptr && this->saseUserId_ == nullptr
        && this->status_ == nullptr && this->username_ == nullptr; };
      // applicationId Field Functions 
      bool hasApplicationId() const { return this->applicationId_ != nullptr;};
      void deleteApplicationId() { this->applicationId_ = nullptr;};
      inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
      inline Applications& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Applications& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // department Field Functions 
      bool hasDepartment() const { return this->department_ != nullptr;};
      void deleteDepartment() { this->department_ = nullptr;};
      inline string getDepartment() const { DARABONBA_PTR_GET_DEFAULT(department_, "") };
      inline Applications& setDepartment(string department) { DARABONBA_PTR_SET_VALUE(department_, department) };


      // devTag Field Functions 
      bool hasDevTag() const { return this->devTag_ != nullptr;};
      void deleteDevTag() { this->devTag_ = nullptr;};
      inline string getDevTag() const { DARABONBA_PTR_GET_DEFAULT(devTag_, "") };
      inline Applications& setDevTag(string devTag) { DARABONBA_PTR_SET_VALUE(devTag_, devTag) };


      // devType Field Functions 
      bool hasDevType() const { return this->devType_ != nullptr;};
      void deleteDevType() { this->devType_ = nullptr;};
      inline string getDevType() const { DARABONBA_PTR_GET_DEFAULT(devType_, "") };
      inline Applications& setDevType(string devType) { DARABONBA_PTR_SET_VALUE(devType_, devType) };


      // hostname Field Functions 
      bool hasHostname() const { return this->hostname_ != nullptr;};
      void deleteHostname() { this->hostname_ = nullptr;};
      inline string getHostname() const { DARABONBA_PTR_GET_DEFAULT(hostname_, "") };
      inline Applications& setHostname(string hostname) { DARABONBA_PTR_SET_VALUE(hostname_, hostname) };


      // idpName Field Functions 
      bool hasIdpName() const { return this->idpName_ != nullptr;};
      void deleteIdpName() { this->idpName_ = nullptr;};
      inline string getIdpName() const { DARABONBA_PTR_GET_DEFAULT(idpName_, "") };
      inline Applications& setIdpName(string idpName) { DARABONBA_PTR_SET_VALUE(idpName_, idpName) };


      // isUninstall Field Functions 
      bool hasIsUninstall() const { return this->isUninstall_ != nullptr;};
      void deleteIsUninstall() { this->isUninstall_ = nullptr;};
      inline bool getIsUninstall() const { DARABONBA_PTR_GET_DEFAULT(isUninstall_, false) };
      inline Applications& setIsUninstall(bool isUninstall) { DARABONBA_PTR_SET_VALUE(isUninstall_, isUninstall) };


      // mac Field Functions 
      bool hasMac() const { return this->mac_ != nullptr;};
      void deleteMac() { this->mac_ = nullptr;};
      inline string getMac() const { DARABONBA_PTR_GET_DEFAULT(mac_, "") };
      inline Applications& setMac(string mac) { DARABONBA_PTR_SET_VALUE(mac_, mac) };


      // reason Field Functions 
      bool hasReason() const { return this->reason_ != nullptr;};
      void deleteReason() { this->reason_ = nullptr;};
      inline string getReason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
      inline Applications& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


      // saseUserId Field Functions 
      bool hasSaseUserId() const { return this->saseUserId_ != nullptr;};
      void deleteSaseUserId() { this->saseUserId_ = nullptr;};
      inline string getSaseUserId() const { DARABONBA_PTR_GET_DEFAULT(saseUserId_, "") };
      inline Applications& setSaseUserId(string saseUserId) { DARABONBA_PTR_SET_VALUE(saseUserId_, saseUserId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Applications& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // username Field Functions 
      bool hasUsername() const { return this->username_ != nullptr;};
      void deleteUsername() { this->username_ = nullptr;};
      inline string getUsername() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
      inline Applications& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


    protected:
      shared_ptr<string> applicationId_ {};
      shared_ptr<string> createTime_ {};
      shared_ptr<string> department_ {};
      shared_ptr<string> devTag_ {};
      shared_ptr<string> devType_ {};
      shared_ptr<string> hostname_ {};
      shared_ptr<string> idpName_ {};
      shared_ptr<bool> isUninstall_ {};
      shared_ptr<string> mac_ {};
      shared_ptr<string> reason_ {};
      shared_ptr<string> saseUserId_ {};
      shared_ptr<string> status_ {};
      shared_ptr<string> username_ {};
    };

    virtual bool empty() const override { return this->applications_ == nullptr
        && this->requestId_ == nullptr && this->totalNum_ == nullptr; };
    // applications Field Functions 
    bool hasApplications() const { return this->applications_ != nullptr;};
    void deleteApplications() { this->applications_ = nullptr;};
    inline const vector<ListUninstallApplicationsResponseBody::Applications> & getApplications() const { DARABONBA_PTR_GET_CONST(applications_, vector<ListUninstallApplicationsResponseBody::Applications>) };
    inline vector<ListUninstallApplicationsResponseBody::Applications> getApplications() { DARABONBA_PTR_GET(applications_, vector<ListUninstallApplicationsResponseBody::Applications>) };
    inline ListUninstallApplicationsResponseBody& setApplications(const vector<ListUninstallApplicationsResponseBody::Applications> & applications) { DARABONBA_PTR_SET_VALUE(applications_, applications) };
    inline ListUninstallApplicationsResponseBody& setApplications(vector<ListUninstallApplicationsResponseBody::Applications> && applications) { DARABONBA_PTR_SET_RVALUE(applications_, applications) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListUninstallApplicationsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalNum Field Functions 
    bool hasTotalNum() const { return this->totalNum_ != nullptr;};
    void deleteTotalNum() { this->totalNum_ = nullptr;};
    inline int64_t getTotalNum() const { DARABONBA_PTR_GET_DEFAULT(totalNum_, 0L) };
    inline ListUninstallApplicationsResponseBody& setTotalNum(int64_t totalNum) { DARABONBA_PTR_SET_VALUE(totalNum_, totalNum) };


  protected:
    shared_ptr<vector<ListUninstallApplicationsResponseBody::Applications>> applications_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int64_t> totalNum_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
