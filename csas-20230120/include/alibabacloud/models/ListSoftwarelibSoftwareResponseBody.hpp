// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSOFTWARELIBSOFTWARERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSOFTWARELIBSOFTWARERESPONSEBODY_HPP_
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
  class ListSoftwarelibSoftwareResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSoftwarelibSoftwareResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataList, dataList_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListSoftwarelibSoftwareResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataList, dataList_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListSoftwarelibSoftwareResponseBody() = default ;
    ListSoftwarelibSoftwareResponseBody(const ListSoftwarelibSoftwareResponseBody &) = default ;
    ListSoftwarelibSoftwareResponseBody(ListSoftwarelibSoftwareResponseBody &&) = default ;
    ListSoftwarelibSoftwareResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSoftwarelibSoftwareResponseBody() = default ;
    ListSoftwarelibSoftwareResponseBody& operator=(const ListSoftwarelibSoftwareResponseBody &) = default ;
    ListSoftwarelibSoftwareResponseBody& operator=(ListSoftwarelibSoftwareResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DataList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DataList& obj) { 
        DARABONBA_PTR_TO_JSON(BuiltinSoftwareId, builtinSoftwareId_);
        DARABONBA_PTR_TO_JSON(CheckBundleId, checkBundleId_);
        DARABONBA_PTR_TO_JSON(CheckSoftwareName, checkSoftwareName_);
        DARABONBA_PTR_TO_JSON(ClassifyId, classifyId_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(DevTags, devTags_);
        DARABONBA_PTR_TO_JSON(DeviceGroupIds, deviceGroupIds_);
        DARABONBA_PTR_TO_JSON(DownloadTimes, downloadTimes_);
        DARABONBA_PTR_TO_JSON(HasNewVersion, hasNewVersion_);
        DARABONBA_PTR_TO_JSON(LogoUrl, logoUrl_);
        DARABONBA_PTR_TO_JSON(MacAppleVersion, macAppleVersion_);
        DARABONBA_PTR_TO_JSON(MacIntelVersion, macIntelVersion_);
        DARABONBA_PTR_TO_JSON(MatchMode, matchMode_);
        DARABONBA_PTR_TO_JSON(OfficialDownloadUrl, officialDownloadUrl_);
        DARABONBA_PTR_TO_JSON(RunAsAccount, runAsAccount_);
        DARABONBA_PTR_TO_JSON(SoftwareId, softwareId_);
        DARABONBA_PTR_TO_JSON(SoftwareName, softwareName_);
        DARABONBA_PTR_TO_JSON(SourceRemoved, sourceRemoved_);
        DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
        DARABONBA_PTR_TO_JSON(UserGroupIds, userGroupIds_);
        DARABONBA_PTR_TO_JSON(Versions, versions_);
        DARABONBA_PTR_TO_JSON(WindowsVersion, windowsVersion_);
      };
      friend void from_json(const Darabonba::Json& j, DataList& obj) { 
        DARABONBA_PTR_FROM_JSON(BuiltinSoftwareId, builtinSoftwareId_);
        DARABONBA_PTR_FROM_JSON(CheckBundleId, checkBundleId_);
        DARABONBA_PTR_FROM_JSON(CheckSoftwareName, checkSoftwareName_);
        DARABONBA_PTR_FROM_JSON(ClassifyId, classifyId_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(DevTags, devTags_);
        DARABONBA_PTR_FROM_JSON(DeviceGroupIds, deviceGroupIds_);
        DARABONBA_PTR_FROM_JSON(DownloadTimes, downloadTimes_);
        DARABONBA_PTR_FROM_JSON(HasNewVersion, hasNewVersion_);
        DARABONBA_PTR_FROM_JSON(LogoUrl, logoUrl_);
        DARABONBA_PTR_FROM_JSON(MacAppleVersion, macAppleVersion_);
        DARABONBA_PTR_FROM_JSON(MacIntelVersion, macIntelVersion_);
        DARABONBA_PTR_FROM_JSON(MatchMode, matchMode_);
        DARABONBA_PTR_FROM_JSON(OfficialDownloadUrl, officialDownloadUrl_);
        DARABONBA_PTR_FROM_JSON(RunAsAccount, runAsAccount_);
        DARABONBA_PTR_FROM_JSON(SoftwareId, softwareId_);
        DARABONBA_PTR_FROM_JSON(SoftwareName, softwareName_);
        DARABONBA_PTR_FROM_JSON(SourceRemoved, sourceRemoved_);
        DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
        DARABONBA_PTR_FROM_JSON(UserGroupIds, userGroupIds_);
        DARABONBA_PTR_FROM_JSON(Versions, versions_);
        DARABONBA_PTR_FROM_JSON(WindowsVersion, windowsVersion_);
      };
      DataList() = default ;
      DataList(const DataList &) = default ;
      DataList(DataList &&) = default ;
      DataList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DataList() = default ;
      DataList& operator=(const DataList &) = default ;
      DataList& operator=(DataList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Versions : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Versions& obj) { 
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(DownloadTimes, downloadTimes_);
          DARABONBA_PTR_TO_JSON(Md5, md5_);
          DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
          DARABONBA_PTR_TO_JSON(Os, os_);
          DARABONBA_PTR_TO_JSON(PublisherType, publisherType_);
          DARABONBA_PTR_TO_JSON(SoftwareId, softwareId_);
          DARABONBA_PTR_TO_JSON(SoftwarePkgName, softwarePkgName_);
          DARABONBA_PTR_TO_JSON(SoftwarePkgSize, softwarePkgSize_);
          DARABONBA_PTR_TO_JSON(SoftwareUrl, softwareUrl_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(Version, version_);
          DARABONBA_PTR_TO_JSON(VersionId, versionId_);
        };
        friend void from_json(const Darabonba::Json& j, Versions& obj) { 
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(DownloadTimes, downloadTimes_);
          DARABONBA_PTR_FROM_JSON(Md5, md5_);
          DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
          DARABONBA_PTR_FROM_JSON(Os, os_);
          DARABONBA_PTR_FROM_JSON(PublisherType, publisherType_);
          DARABONBA_PTR_FROM_JSON(SoftwareId, softwareId_);
          DARABONBA_PTR_FROM_JSON(SoftwarePkgName, softwarePkgName_);
          DARABONBA_PTR_FROM_JSON(SoftwarePkgSize, softwarePkgSize_);
          DARABONBA_PTR_FROM_JSON(SoftwareUrl, softwareUrl_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(Version, version_);
          DARABONBA_PTR_FROM_JSON(VersionId, versionId_);
        };
        Versions() = default ;
        Versions(const Versions &) = default ;
        Versions(Versions &&) = default ;
        Versions(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Versions() = default ;
        Versions& operator=(const Versions &) = default ;
        Versions& operator=(Versions &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->createTime_ == nullptr
        && this->downloadTimes_ == nullptr && this->md5_ == nullptr && this->modifyTime_ == nullptr && this->os_ == nullptr && this->publisherType_ == nullptr
        && this->softwareId_ == nullptr && this->softwarePkgName_ == nullptr && this->softwarePkgSize_ == nullptr && this->softwareUrl_ == nullptr && this->status_ == nullptr
        && this->version_ == nullptr && this->versionId_ == nullptr; };
        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline Versions& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // downloadTimes Field Functions 
        bool hasDownloadTimes() const { return this->downloadTimes_ != nullptr;};
        void deleteDownloadTimes() { this->downloadTimes_ = nullptr;};
        inline int64_t getDownloadTimes() const { DARABONBA_PTR_GET_DEFAULT(downloadTimes_, 0L) };
        inline Versions& setDownloadTimes(int64_t downloadTimes) { DARABONBA_PTR_SET_VALUE(downloadTimes_, downloadTimes) };


        // md5 Field Functions 
        bool hasMd5() const { return this->md5_ != nullptr;};
        void deleteMd5() { this->md5_ = nullptr;};
        inline string getMd5() const { DARABONBA_PTR_GET_DEFAULT(md5_, "") };
        inline Versions& setMd5(string md5) { DARABONBA_PTR_SET_VALUE(md5_, md5) };


        // modifyTime Field Functions 
        bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
        void deleteModifyTime() { this->modifyTime_ = nullptr;};
        inline string getModifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, "") };
        inline Versions& setModifyTime(string modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


        // os Field Functions 
        bool hasOs() const { return this->os_ != nullptr;};
        void deleteOs() { this->os_ = nullptr;};
        inline string getOs() const { DARABONBA_PTR_GET_DEFAULT(os_, "") };
        inline Versions& setOs(string os) { DARABONBA_PTR_SET_VALUE(os_, os) };


        // publisherType Field Functions 
        bool hasPublisherType() const { return this->publisherType_ != nullptr;};
        void deletePublisherType() { this->publisherType_ = nullptr;};
        inline string getPublisherType() const { DARABONBA_PTR_GET_DEFAULT(publisherType_, "") };
        inline Versions& setPublisherType(string publisherType) { DARABONBA_PTR_SET_VALUE(publisherType_, publisherType) };


        // softwareId Field Functions 
        bool hasSoftwareId() const { return this->softwareId_ != nullptr;};
        void deleteSoftwareId() { this->softwareId_ = nullptr;};
        inline string getSoftwareId() const { DARABONBA_PTR_GET_DEFAULT(softwareId_, "") };
        inline Versions& setSoftwareId(string softwareId) { DARABONBA_PTR_SET_VALUE(softwareId_, softwareId) };


        // softwarePkgName Field Functions 
        bool hasSoftwarePkgName() const { return this->softwarePkgName_ != nullptr;};
        void deleteSoftwarePkgName() { this->softwarePkgName_ = nullptr;};
        inline string getSoftwarePkgName() const { DARABONBA_PTR_GET_DEFAULT(softwarePkgName_, "") };
        inline Versions& setSoftwarePkgName(string softwarePkgName) { DARABONBA_PTR_SET_VALUE(softwarePkgName_, softwarePkgName) };


        // softwarePkgSize Field Functions 
        bool hasSoftwarePkgSize() const { return this->softwarePkgSize_ != nullptr;};
        void deleteSoftwarePkgSize() { this->softwarePkgSize_ = nullptr;};
        inline int64_t getSoftwarePkgSize() const { DARABONBA_PTR_GET_DEFAULT(softwarePkgSize_, 0L) };
        inline Versions& setSoftwarePkgSize(int64_t softwarePkgSize) { DARABONBA_PTR_SET_VALUE(softwarePkgSize_, softwarePkgSize) };


        // softwareUrl Field Functions 
        bool hasSoftwareUrl() const { return this->softwareUrl_ != nullptr;};
        void deleteSoftwareUrl() { this->softwareUrl_ = nullptr;};
        inline string getSoftwareUrl() const { DARABONBA_PTR_GET_DEFAULT(softwareUrl_, "") };
        inline Versions& setSoftwareUrl(string softwareUrl) { DARABONBA_PTR_SET_VALUE(softwareUrl_, softwareUrl) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Versions& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // version Field Functions 
        bool hasVersion() const { return this->version_ != nullptr;};
        void deleteVersion() { this->version_ = nullptr;};
        inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
        inline Versions& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


        // versionId Field Functions 
        bool hasVersionId() const { return this->versionId_ != nullptr;};
        void deleteVersionId() { this->versionId_ = nullptr;};
        inline string getVersionId() const { DARABONBA_PTR_GET_DEFAULT(versionId_, "") };
        inline Versions& setVersionId(string versionId) { DARABONBA_PTR_SET_VALUE(versionId_, versionId) };


      protected:
        // The time when the software version was created.
        shared_ptr<string> createTime_ {};
        // The number of times the software has been downloaded from the client.
        shared_ptr<int64_t> downloadTimes_ {};
        // The MD5 value of the software package.
        shared_ptr<string> md5_ {};
        // The time when the software version was last modified.
        shared_ptr<string> modifyTime_ {};
        // The operating system to which the software package applies. Valid values:
        // - **Windows**: Windows.
        // - **Mac(Apple)**: macOS with Apple silicon.
        // - **Mac(Intel)**: macOS with Intel processors.
        shared_ptr<string> os_ {};
        // The software publisher type. Valid values:
        // - **local**: locally uploaded.
        // - **thirdparty**: third-party link.
        shared_ptr<string> publisherType_ {};
        // The ID of the software to which this version belongs.
        shared_ptr<string> softwareId_ {};
        // The name of the software package.
        shared_ptr<string> softwarePkgName_ {};
        // The size of the software package.
        shared_ptr<int64_t> softwarePkgSize_ {};
        // The download URL of the software package.
        shared_ptr<string> softwareUrl_ {};
        // The version publish status. Valid values:
        // - **published**: published.
        // - **unpublished**: not published.
        shared_ptr<string> status_ {};
        // The software version number.
        shared_ptr<string> version_ {};
        // The software version ID.
        shared_ptr<string> versionId_ {};
      };

      virtual bool empty() const override { return this->builtinSoftwareId_ == nullptr
        && this->checkBundleId_ == nullptr && this->checkSoftwareName_ == nullptr && this->classifyId_ == nullptr && this->createTime_ == nullptr && this->description_ == nullptr
        && this->devTags_ == nullptr && this->deviceGroupIds_ == nullptr && this->downloadTimes_ == nullptr && this->hasNewVersion_ == nullptr && this->logoUrl_ == nullptr
        && this->macAppleVersion_ == nullptr && this->macIntelVersion_ == nullptr && this->matchMode_ == nullptr && this->officialDownloadUrl_ == nullptr && this->runAsAccount_ == nullptr
        && this->softwareId_ == nullptr && this->softwareName_ == nullptr && this->sourceRemoved_ == nullptr && this->sourceType_ == nullptr && this->userGroupIds_ == nullptr
        && this->versions_ == nullptr && this->windowsVersion_ == nullptr; };
      // builtinSoftwareId Field Functions 
      bool hasBuiltinSoftwareId() const { return this->builtinSoftwareId_ != nullptr;};
      void deleteBuiltinSoftwareId() { this->builtinSoftwareId_ = nullptr;};
      inline string getBuiltinSoftwareId() const { DARABONBA_PTR_GET_DEFAULT(builtinSoftwareId_, "") };
      inline DataList& setBuiltinSoftwareId(string builtinSoftwareId) { DARABONBA_PTR_SET_VALUE(builtinSoftwareId_, builtinSoftwareId) };


      // checkBundleId Field Functions 
      bool hasCheckBundleId() const { return this->checkBundleId_ != nullptr;};
      void deleteCheckBundleId() { this->checkBundleId_ = nullptr;};
      inline string getCheckBundleId() const { DARABONBA_PTR_GET_DEFAULT(checkBundleId_, "") };
      inline DataList& setCheckBundleId(string checkBundleId) { DARABONBA_PTR_SET_VALUE(checkBundleId_, checkBundleId) };


      // checkSoftwareName Field Functions 
      bool hasCheckSoftwareName() const { return this->checkSoftwareName_ != nullptr;};
      void deleteCheckSoftwareName() { this->checkSoftwareName_ = nullptr;};
      inline string getCheckSoftwareName() const { DARABONBA_PTR_GET_DEFAULT(checkSoftwareName_, "") };
      inline DataList& setCheckSoftwareName(string checkSoftwareName) { DARABONBA_PTR_SET_VALUE(checkSoftwareName_, checkSoftwareName) };


      // classifyId Field Functions 
      bool hasClassifyId() const { return this->classifyId_ != nullptr;};
      void deleteClassifyId() { this->classifyId_ = nullptr;};
      inline string getClassifyId() const { DARABONBA_PTR_GET_DEFAULT(classifyId_, "") };
      inline DataList& setClassifyId(string classifyId) { DARABONBA_PTR_SET_VALUE(classifyId_, classifyId) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline DataList& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline DataList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // devTags Field Functions 
      bool hasDevTags() const { return this->devTags_ != nullptr;};
      void deleteDevTags() { this->devTags_ = nullptr;};
      inline const vector<string> & getDevTags() const { DARABONBA_PTR_GET_CONST(devTags_, vector<string>) };
      inline vector<string> getDevTags() { DARABONBA_PTR_GET(devTags_, vector<string>) };
      inline DataList& setDevTags(const vector<string> & devTags) { DARABONBA_PTR_SET_VALUE(devTags_, devTags) };
      inline DataList& setDevTags(vector<string> && devTags) { DARABONBA_PTR_SET_RVALUE(devTags_, devTags) };


      // deviceGroupIds Field Functions 
      bool hasDeviceGroupIds() const { return this->deviceGroupIds_ != nullptr;};
      void deleteDeviceGroupIds() { this->deviceGroupIds_ = nullptr;};
      inline const vector<string> & getDeviceGroupIds() const { DARABONBA_PTR_GET_CONST(deviceGroupIds_, vector<string>) };
      inline vector<string> getDeviceGroupIds() { DARABONBA_PTR_GET(deviceGroupIds_, vector<string>) };
      inline DataList& setDeviceGroupIds(const vector<string> & deviceGroupIds) { DARABONBA_PTR_SET_VALUE(deviceGroupIds_, deviceGroupIds) };
      inline DataList& setDeviceGroupIds(vector<string> && deviceGroupIds) { DARABONBA_PTR_SET_RVALUE(deviceGroupIds_, deviceGroupIds) };


      // downloadTimes Field Functions 
      bool hasDownloadTimes() const { return this->downloadTimes_ != nullptr;};
      void deleteDownloadTimes() { this->downloadTimes_ = nullptr;};
      inline int64_t getDownloadTimes() const { DARABONBA_PTR_GET_DEFAULT(downloadTimes_, 0L) };
      inline DataList& setDownloadTimes(int64_t downloadTimes) { DARABONBA_PTR_SET_VALUE(downloadTimes_, downloadTimes) };


      // hasNewVersion Field Functions 
      bool hasHasNewVersion() const { return this->hasNewVersion_ != nullptr;};
      void deleteHasNewVersion() { this->hasNewVersion_ = nullptr;};
      inline bool getHasNewVersion() const { DARABONBA_PTR_GET_DEFAULT(hasNewVersion_, false) };
      inline DataList& setHasNewVersion(bool hasNewVersion) { DARABONBA_PTR_SET_VALUE(hasNewVersion_, hasNewVersion) };


      // logoUrl Field Functions 
      bool hasLogoUrl() const { return this->logoUrl_ != nullptr;};
      void deleteLogoUrl() { this->logoUrl_ = nullptr;};
      inline string getLogoUrl() const { DARABONBA_PTR_GET_DEFAULT(logoUrl_, "") };
      inline DataList& setLogoUrl(string logoUrl) { DARABONBA_PTR_SET_VALUE(logoUrl_, logoUrl) };


      // macAppleVersion Field Functions 
      bool hasMacAppleVersion() const { return this->macAppleVersion_ != nullptr;};
      void deleteMacAppleVersion() { this->macAppleVersion_ = nullptr;};
      inline string getMacAppleVersion() const { DARABONBA_PTR_GET_DEFAULT(macAppleVersion_, "") };
      inline DataList& setMacAppleVersion(string macAppleVersion) { DARABONBA_PTR_SET_VALUE(macAppleVersion_, macAppleVersion) };


      // macIntelVersion Field Functions 
      bool hasMacIntelVersion() const { return this->macIntelVersion_ != nullptr;};
      void deleteMacIntelVersion() { this->macIntelVersion_ = nullptr;};
      inline string getMacIntelVersion() const { DARABONBA_PTR_GET_DEFAULT(macIntelVersion_, "") };
      inline DataList& setMacIntelVersion(string macIntelVersion) { DARABONBA_PTR_SET_VALUE(macIntelVersion_, macIntelVersion) };


      // matchMode Field Functions 
      bool hasMatchMode() const { return this->matchMode_ != nullptr;};
      void deleteMatchMode() { this->matchMode_ = nullptr;};
      inline string getMatchMode() const { DARABONBA_PTR_GET_DEFAULT(matchMode_, "") };
      inline DataList& setMatchMode(string matchMode) { DARABONBA_PTR_SET_VALUE(matchMode_, matchMode) };


      // officialDownloadUrl Field Functions 
      bool hasOfficialDownloadUrl() const { return this->officialDownloadUrl_ != nullptr;};
      void deleteOfficialDownloadUrl() { this->officialDownloadUrl_ = nullptr;};
      inline string getOfficialDownloadUrl() const { DARABONBA_PTR_GET_DEFAULT(officialDownloadUrl_, "") };
      inline DataList& setOfficialDownloadUrl(string officialDownloadUrl) { DARABONBA_PTR_SET_VALUE(officialDownloadUrl_, officialDownloadUrl) };


      // runAsAccount Field Functions 
      bool hasRunAsAccount() const { return this->runAsAccount_ != nullptr;};
      void deleteRunAsAccount() { this->runAsAccount_ = nullptr;};
      inline string getRunAsAccount() const { DARABONBA_PTR_GET_DEFAULT(runAsAccount_, "") };
      inline DataList& setRunAsAccount(string runAsAccount) { DARABONBA_PTR_SET_VALUE(runAsAccount_, runAsAccount) };


      // softwareId Field Functions 
      bool hasSoftwareId() const { return this->softwareId_ != nullptr;};
      void deleteSoftwareId() { this->softwareId_ = nullptr;};
      inline string getSoftwareId() const { DARABONBA_PTR_GET_DEFAULT(softwareId_, "") };
      inline DataList& setSoftwareId(string softwareId) { DARABONBA_PTR_SET_VALUE(softwareId_, softwareId) };


      // softwareName Field Functions 
      bool hasSoftwareName() const { return this->softwareName_ != nullptr;};
      void deleteSoftwareName() { this->softwareName_ = nullptr;};
      inline string getSoftwareName() const { DARABONBA_PTR_GET_DEFAULT(softwareName_, "") };
      inline DataList& setSoftwareName(string softwareName) { DARABONBA_PTR_SET_VALUE(softwareName_, softwareName) };


      // sourceRemoved Field Functions 
      bool hasSourceRemoved() const { return this->sourceRemoved_ != nullptr;};
      void deleteSourceRemoved() { this->sourceRemoved_ = nullptr;};
      inline bool getSourceRemoved() const { DARABONBA_PTR_GET_DEFAULT(sourceRemoved_, false) };
      inline DataList& setSourceRemoved(bool sourceRemoved) { DARABONBA_PTR_SET_VALUE(sourceRemoved_, sourceRemoved) };


      // sourceType Field Functions 
      bool hasSourceType() const { return this->sourceType_ != nullptr;};
      void deleteSourceType() { this->sourceType_ = nullptr;};
      inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
      inline DataList& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


      // userGroupIds Field Functions 
      bool hasUserGroupIds() const { return this->userGroupIds_ != nullptr;};
      void deleteUserGroupIds() { this->userGroupIds_ = nullptr;};
      inline const vector<string> & getUserGroupIds() const { DARABONBA_PTR_GET_CONST(userGroupIds_, vector<string>) };
      inline vector<string> getUserGroupIds() { DARABONBA_PTR_GET(userGroupIds_, vector<string>) };
      inline DataList& setUserGroupIds(const vector<string> & userGroupIds) { DARABONBA_PTR_SET_VALUE(userGroupIds_, userGroupIds) };
      inline DataList& setUserGroupIds(vector<string> && userGroupIds) { DARABONBA_PTR_SET_RVALUE(userGroupIds_, userGroupIds) };


      // versions Field Functions 
      bool hasVersions() const { return this->versions_ != nullptr;};
      void deleteVersions() { this->versions_ = nullptr;};
      inline const vector<DataList::Versions> & getVersions() const { DARABONBA_PTR_GET_CONST(versions_, vector<DataList::Versions>) };
      inline vector<DataList::Versions> getVersions() { DARABONBA_PTR_GET(versions_, vector<DataList::Versions>) };
      inline DataList& setVersions(const vector<DataList::Versions> & versions) { DARABONBA_PTR_SET_VALUE(versions_, versions) };
      inline DataList& setVersions(vector<DataList::Versions> && versions) { DARABONBA_PTR_SET_RVALUE(versions_, versions) };


      // windowsVersion Field Functions 
      bool hasWindowsVersion() const { return this->windowsVersion_ != nullptr;};
      void deleteWindowsVersion() { this->windowsVersion_ = nullptr;};
      inline string getWindowsVersion() const { DARABONBA_PTR_GET_DEFAULT(windowsVersion_, "") };
      inline DataList& setWindowsVersion(string windowsVersion) { DARABONBA_PTR_SET_VALUE(windowsVersion_, windowsVersion) };


    protected:
      // The associated built-in software ID.
      shared_ptr<string> builtinSoftwareId_ {};
      // The software BundleId used for verification.
      shared_ptr<string> checkBundleId_ {};
      // The software name used for verification.
      shared_ptr<string> checkSoftwareName_ {};
      // The software classification ID.
      shared_ptr<string> classifyId_ {};
      // The time when the software was created, in seconds-level UNIX timestamp.
      shared_ptr<string> createTime_ {};
      // The software description.
      shared_ptr<string> description_ {};
      // The list of associated terminal device IDs.
      shared_ptr<vector<string>> devTags_ {};
      // The list of associated device group IDs.
      shared_ptr<vector<string>> deviceGroupIds_ {};
      // The number of times the software has been manually downloaded from the client.
      shared_ptr<int64_t> downloadTimes_ {};
      // Indicates whether a new version is available for the software.
      shared_ptr<bool> hasNewVersion_ {};
      // The URL of the software logo.
      shared_ptr<string> logoUrl_ {};
      // The latest software version number for Mac (Apple).
      shared_ptr<string> macAppleVersion_ {};
      // The latest software version number for Mac (Intel).
      shared_ptr<string> macIntelVersion_ {};
      // The policy matching target type. Valid values:
      // - **UserGroupAll**: all users.
      // - **UserGroupNormal**: specified user groups.
      // - **DevTagNormal**: specified devices.
      // - **DeviceGroupNormal**: specified device groups.
      // - **DevTagAll**: all devices.
      // - **None**: not configured.
      shared_ptr<string> matchMode_ {};
      // The official download URL of the software.
      shared_ptr<string> officialDownloadUrl_ {};
      // The execution account (only supported on Windows).
      shared_ptr<string> runAsAccount_ {};
      // The software ID.
      shared_ptr<string> softwareId_ {};
      // The software name.
      shared_ptr<string> softwareName_ {};
      // Indicates whether the built-in library source has been deleted.
      shared_ptr<bool> sourceRemoved_ {};
      // The software source. Valid values:
      // - **custom**: custom software.
      // - **builtin**: built-in software library.
      shared_ptr<string> sourceType_ {};
      // The list of associated user group IDs.
      shared_ptr<vector<string>> userGroupIds_ {};
      // The software version list. This field is not returned by this operation. Call [ListSoftwarelibVersion](~~ListSoftwarelibVersion~~) to query software versions.
      shared_ptr<vector<DataList::Versions>> versions_ {};
      // The latest software version number for Windows.
      shared_ptr<string> windowsVersion_ {};
    };

    virtual bool empty() const override { return this->dataList_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // dataList Field Functions 
    bool hasDataList() const { return this->dataList_ != nullptr;};
    void deleteDataList() { this->dataList_ = nullptr;};
    inline const vector<ListSoftwarelibSoftwareResponseBody::DataList> & getDataList() const { DARABONBA_PTR_GET_CONST(dataList_, vector<ListSoftwarelibSoftwareResponseBody::DataList>) };
    inline vector<ListSoftwarelibSoftwareResponseBody::DataList> getDataList() { DARABONBA_PTR_GET(dataList_, vector<ListSoftwarelibSoftwareResponseBody::DataList>) };
    inline ListSoftwarelibSoftwareResponseBody& setDataList(const vector<ListSoftwarelibSoftwareResponseBody::DataList> & dataList) { DARABONBA_PTR_SET_VALUE(dataList_, dataList) };
    inline ListSoftwarelibSoftwareResponseBody& setDataList(vector<ListSoftwarelibSoftwareResponseBody::DataList> && dataList) { DARABONBA_PTR_SET_RVALUE(dataList_, dataList) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListSoftwarelibSoftwareResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListSoftwarelibSoftwareResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSoftwarelibSoftwareResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListSoftwarelibSoftwareResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The software list.
    shared_ptr<vector<ListSoftwarelibSoftwareResponseBody::DataList>> dataList_ {};
    // The maximum number of entries per page. This parameter is not returned by this operation.
    shared_ptr<int32_t> maxResults_ {};
    // The pagination token. This parameter is not returned by this operation.
    shared_ptr<string> nextToken_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    // The total number of software entries that match the query conditions.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
