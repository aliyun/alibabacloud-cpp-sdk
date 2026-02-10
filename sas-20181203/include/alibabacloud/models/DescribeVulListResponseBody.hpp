// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVULLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVULLISTRESPONSEBODY_HPP_
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
  class DescribeVulListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVulListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(VulRecords, vulRecords_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVulListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(VulRecords, vulRecords_);
    };
    DescribeVulListResponseBody() = default ;
    DescribeVulListResponseBody(const DescribeVulListResponseBody &) = default ;
    DescribeVulListResponseBody(DescribeVulListResponseBody &&) = default ;
    DescribeVulListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVulListResponseBody() = default ;
    DescribeVulListResponseBody& operator=(const DescribeVulListResponseBody &) = default ;
    DescribeVulListResponseBody& operator=(DescribeVulListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class VulRecords : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const VulRecords& obj) { 
        DARABONBA_PTR_TO_JSON(AliasName, aliasName_);
        DARABONBA_PTR_TO_JSON(AuthVersion, authVersion_);
        DARABONBA_PTR_TO_JSON(Bind, bind_);
        DARABONBA_PTR_TO_JSON(ContainerId, containerId_);
        DARABONBA_PTR_TO_JSON(ExtendContentJson, extendContentJson_);
        DARABONBA_PTR_TO_JSON(FirstTs, firstTs_);
        DARABONBA_PTR_TO_JSON(GroupId, groupId_);
        DARABONBA_PTR_TO_JSON(Image, image_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_TO_JSON(InternetIp, internetIp_);
        DARABONBA_PTR_TO_JSON(IntranetIp, intranetIp_);
        DARABONBA_PTR_TO_JSON(K8sClusterId, k8sClusterId_);
        DARABONBA_PTR_TO_JSON(K8sNamespace, k8sNamespace_);
        DARABONBA_PTR_TO_JSON(K8sNodeId, k8sNodeId_);
        DARABONBA_PTR_TO_JSON(K8sNodeName, k8sNodeName_);
        DARABONBA_PTR_TO_JSON(K8sPodName, k8sPodName_);
        DARABONBA_PTR_TO_JSON(LastTs, lastTs_);
        DARABONBA_PTR_TO_JSON(ModifyTs, modifyTs_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Namespace, namespace_);
        DARABONBA_PTR_TO_JSON(Necessity, necessity_);
        DARABONBA_PTR_TO_JSON(Online, online_);
        DARABONBA_PTR_TO_JSON(OsName, osName_);
        DARABONBA_PTR_TO_JSON(OsVersion, osVersion_);
        DARABONBA_PTR_TO_JSON(PrimaryId, primaryId_);
        DARABONBA_PTR_TO_JSON(Progress, progress_);
        DARABONBA_PTR_TO_JSON(RaspDefend, raspDefend_);
        DARABONBA_PTR_TO_JSON(RaspStatus, raspStatus_);
        DARABONBA_PTR_TO_JSON(RealRisk, realRisk_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(Related, related_);
        DARABONBA_PTR_TO_JSON(RepairTs, repairTs_);
        DARABONBA_PTR_TO_JSON(ResultCode, resultCode_);
        DARABONBA_PTR_TO_JSON(ResultMessage, resultMessage_);
        DARABONBA_PTR_TO_JSON(RuleTag, ruleTag_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Tag, tag_);
        DARABONBA_PTR_TO_JSON(Type, type_);
        DARABONBA_PTR_TO_JSON(Uuid, uuid_);
      };
      friend void from_json(const Darabonba::Json& j, VulRecords& obj) { 
        DARABONBA_PTR_FROM_JSON(AliasName, aliasName_);
        DARABONBA_PTR_FROM_JSON(AuthVersion, authVersion_);
        DARABONBA_PTR_FROM_JSON(Bind, bind_);
        DARABONBA_PTR_FROM_JSON(ContainerId, containerId_);
        DARABONBA_PTR_FROM_JSON(ExtendContentJson, extendContentJson_);
        DARABONBA_PTR_FROM_JSON(FirstTs, firstTs_);
        DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
        DARABONBA_PTR_FROM_JSON(Image, image_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_FROM_JSON(InternetIp, internetIp_);
        DARABONBA_PTR_FROM_JSON(IntranetIp, intranetIp_);
        DARABONBA_PTR_FROM_JSON(K8sClusterId, k8sClusterId_);
        DARABONBA_PTR_FROM_JSON(K8sNamespace, k8sNamespace_);
        DARABONBA_PTR_FROM_JSON(K8sNodeId, k8sNodeId_);
        DARABONBA_PTR_FROM_JSON(K8sNodeName, k8sNodeName_);
        DARABONBA_PTR_FROM_JSON(K8sPodName, k8sPodName_);
        DARABONBA_PTR_FROM_JSON(LastTs, lastTs_);
        DARABONBA_PTR_FROM_JSON(ModifyTs, modifyTs_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
        DARABONBA_PTR_FROM_JSON(Necessity, necessity_);
        DARABONBA_PTR_FROM_JSON(Online, online_);
        DARABONBA_PTR_FROM_JSON(OsName, osName_);
        DARABONBA_PTR_FROM_JSON(OsVersion, osVersion_);
        DARABONBA_PTR_FROM_JSON(PrimaryId, primaryId_);
        DARABONBA_PTR_FROM_JSON(Progress, progress_);
        DARABONBA_PTR_FROM_JSON(RaspDefend, raspDefend_);
        DARABONBA_PTR_FROM_JSON(RaspStatus, raspStatus_);
        DARABONBA_PTR_FROM_JSON(RealRisk, realRisk_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(Related, related_);
        DARABONBA_PTR_FROM_JSON(RepairTs, repairTs_);
        DARABONBA_PTR_FROM_JSON(ResultCode, resultCode_);
        DARABONBA_PTR_FROM_JSON(ResultMessage, resultMessage_);
        DARABONBA_PTR_FROM_JSON(RuleTag, ruleTag_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Tag, tag_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
        DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
      };
      VulRecords() = default ;
      VulRecords(const VulRecords &) = default ;
      VulRecords(VulRecords &&) = default ;
      VulRecords(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~VulRecords() = default ;
      VulRecords& operator=(const VulRecords &) = default ;
      VulRecords& operator=(VulRecords &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ExtendContentJson : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ExtendContentJson& obj) { 
          DARABONBA_PTR_TO_JSON(AbsolutePath, absolutePath_);
          DARABONBA_PTR_TO_JSON(AliasName, aliasName_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(EmgProof, emgProof_);
          DARABONBA_PTR_TO_JSON(Ip, ip_);
          DARABONBA_PTR_TO_JSON(LastTs, lastTs_);
          DARABONBA_PTR_TO_JSON(Necessity, necessity_);
          DARABONBA_PTR_TO_JSON(Os, os_);
          DARABONBA_PTR_TO_JSON(OsRelease, osRelease_);
          DARABONBA_PTR_TO_JSON(PrimaryId, primaryId_);
          DARABONBA_PTR_TO_JSON(RpmEntityList, rpmEntityList_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(Tag, tag_);
          DARABONBA_PTR_TO_JSON(Target, target_);
          DARABONBA_PTR_TO_JSON(cveList, cveList_);
        };
        friend void from_json(const Darabonba::Json& j, ExtendContentJson& obj) { 
          DARABONBA_PTR_FROM_JSON(AbsolutePath, absolutePath_);
          DARABONBA_PTR_FROM_JSON(AliasName, aliasName_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(EmgProof, emgProof_);
          DARABONBA_PTR_FROM_JSON(Ip, ip_);
          DARABONBA_PTR_FROM_JSON(LastTs, lastTs_);
          DARABONBA_PTR_FROM_JSON(Necessity, necessity_);
          DARABONBA_PTR_FROM_JSON(Os, os_);
          DARABONBA_PTR_FROM_JSON(OsRelease, osRelease_);
          DARABONBA_PTR_FROM_JSON(PrimaryId, primaryId_);
          DARABONBA_PTR_FROM_JSON(RpmEntityList, rpmEntityList_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(Tag, tag_);
          DARABONBA_PTR_FROM_JSON(Target, target_);
          DARABONBA_PTR_FROM_JSON(cveList, cveList_);
        };
        ExtendContentJson() = default ;
        ExtendContentJson(const ExtendContentJson &) = default ;
        ExtendContentJson(ExtendContentJson &&) = default ;
        ExtendContentJson(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ExtendContentJson() = default ;
        ExtendContentJson& operator=(const ExtendContentJson &) = default ;
        ExtendContentJson& operator=(ExtendContentJson &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class RpmEntityList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const RpmEntityList& obj) { 
            DARABONBA_PTR_TO_JSON(ContainerName, containerName_);
            DARABONBA_PTR_TO_JSON(ExtendField, extendField_);
            DARABONBA_PTR_TO_JSON(FullVersion, fullVersion_);
            DARABONBA_PTR_TO_JSON(ImageName, imageName_);
            DARABONBA_PTR_TO_JSON(MatchDetail, matchDetail_);
            DARABONBA_PTR_TO_JSON(MatchList, matchList_);
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(Path, path_);
            DARABONBA_PTR_TO_JSON(Pid, pid_);
            DARABONBA_PTR_TO_JSON(UpdateCmd, updateCmd_);
            DARABONBA_PTR_TO_JSON(Version, version_);
          };
          friend void from_json(const Darabonba::Json& j, RpmEntityList& obj) { 
            DARABONBA_PTR_FROM_JSON(ContainerName, containerName_);
            DARABONBA_PTR_FROM_JSON(ExtendField, extendField_);
            DARABONBA_PTR_FROM_JSON(FullVersion, fullVersion_);
            DARABONBA_PTR_FROM_JSON(ImageName, imageName_);
            DARABONBA_PTR_FROM_JSON(MatchDetail, matchDetail_);
            DARABONBA_PTR_FROM_JSON(MatchList, matchList_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(Path, path_);
            DARABONBA_PTR_FROM_JSON(Pid, pid_);
            DARABONBA_PTR_FROM_JSON(UpdateCmd, updateCmd_);
            DARABONBA_PTR_FROM_JSON(Version, version_);
          };
          RpmEntityList() = default ;
          RpmEntityList(const RpmEntityList &) = default ;
          RpmEntityList(RpmEntityList &&) = default ;
          RpmEntityList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~RpmEntityList() = default ;
          RpmEntityList& operator=(const RpmEntityList &) = default ;
          RpmEntityList& operator=(RpmEntityList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->containerName_ == nullptr
        && this->extendField_ == nullptr && this->fullVersion_ == nullptr && this->imageName_ == nullptr && this->matchDetail_ == nullptr && this->matchList_ == nullptr
        && this->name_ == nullptr && this->path_ == nullptr && this->pid_ == nullptr && this->updateCmd_ == nullptr && this->version_ == nullptr; };
          // containerName Field Functions 
          bool hasContainerName() const { return this->containerName_ != nullptr;};
          void deleteContainerName() { this->containerName_ = nullptr;};
          inline string getContainerName() const { DARABONBA_PTR_GET_DEFAULT(containerName_, "") };
          inline RpmEntityList& setContainerName(string containerName) { DARABONBA_PTR_SET_VALUE(containerName_, containerName) };


          // extendField Field Functions 
          bool hasExtendField() const { return this->extendField_ != nullptr;};
          void deleteExtendField() { this->extendField_ = nullptr;};
          inline string getExtendField() const { DARABONBA_PTR_GET_DEFAULT(extendField_, "") };
          inline RpmEntityList& setExtendField(string extendField) { DARABONBA_PTR_SET_VALUE(extendField_, extendField) };


          // fullVersion Field Functions 
          bool hasFullVersion() const { return this->fullVersion_ != nullptr;};
          void deleteFullVersion() { this->fullVersion_ = nullptr;};
          inline string getFullVersion() const { DARABONBA_PTR_GET_DEFAULT(fullVersion_, "") };
          inline RpmEntityList& setFullVersion(string fullVersion) { DARABONBA_PTR_SET_VALUE(fullVersion_, fullVersion) };


          // imageName Field Functions 
          bool hasImageName() const { return this->imageName_ != nullptr;};
          void deleteImageName() { this->imageName_ = nullptr;};
          inline string getImageName() const { DARABONBA_PTR_GET_DEFAULT(imageName_, "") };
          inline RpmEntityList& setImageName(string imageName) { DARABONBA_PTR_SET_VALUE(imageName_, imageName) };


          // matchDetail Field Functions 
          bool hasMatchDetail() const { return this->matchDetail_ != nullptr;};
          void deleteMatchDetail() { this->matchDetail_ = nullptr;};
          inline string getMatchDetail() const { DARABONBA_PTR_GET_DEFAULT(matchDetail_, "") };
          inline RpmEntityList& setMatchDetail(string matchDetail) { DARABONBA_PTR_SET_VALUE(matchDetail_, matchDetail) };


          // matchList Field Functions 
          bool hasMatchList() const { return this->matchList_ != nullptr;};
          void deleteMatchList() { this->matchList_ = nullptr;};
          inline const vector<string> & getMatchList() const { DARABONBA_PTR_GET_CONST(matchList_, vector<string>) };
          inline vector<string> getMatchList() { DARABONBA_PTR_GET(matchList_, vector<string>) };
          inline RpmEntityList& setMatchList(const vector<string> & matchList) { DARABONBA_PTR_SET_VALUE(matchList_, matchList) };
          inline RpmEntityList& setMatchList(vector<string> && matchList) { DARABONBA_PTR_SET_RVALUE(matchList_, matchList) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline RpmEntityList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // path Field Functions 
          bool hasPath() const { return this->path_ != nullptr;};
          void deletePath() { this->path_ = nullptr;};
          inline string getPath() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
          inline RpmEntityList& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


          // pid Field Functions 
          bool hasPid() const { return this->pid_ != nullptr;};
          void deletePid() { this->pid_ = nullptr;};
          inline string getPid() const { DARABONBA_PTR_GET_DEFAULT(pid_, "") };
          inline RpmEntityList& setPid(string pid) { DARABONBA_PTR_SET_VALUE(pid_, pid) };


          // updateCmd Field Functions 
          bool hasUpdateCmd() const { return this->updateCmd_ != nullptr;};
          void deleteUpdateCmd() { this->updateCmd_ = nullptr;};
          inline string getUpdateCmd() const { DARABONBA_PTR_GET_DEFAULT(updateCmd_, "") };
          inline RpmEntityList& setUpdateCmd(string updateCmd) { DARABONBA_PTR_SET_VALUE(updateCmd_, updateCmd) };


          // version Field Functions 
          bool hasVersion() const { return this->version_ != nullptr;};
          void deleteVersion() { this->version_ = nullptr;};
          inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
          inline RpmEntityList& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


        protected:
          // The name of the container.
          shared_ptr<string> containerName_ {};
          // The extended information about the software package that has the vulnerability.
          shared_ptr<string> extendField_ {};
          // The complete version number.
          shared_ptr<string> fullVersion_ {};
          // The name of the image.
          shared_ptr<string> imageName_ {};
          // The reason why the vulnerability is detected.
          shared_ptr<string> matchDetail_ {};
          // The rules that are used to detect the vulnerability.
          shared_ptr<vector<string>> matchList_ {};
          // The name of the RPM package.
          shared_ptr<string> name_ {};
          // The path to the software that has the vulnerability.
          shared_ptr<string> path_ {};
          // The process ID.
          shared_ptr<string> pid_ {};
          // The command that is used to fix the vulnerability.
          shared_ptr<string> updateCmd_ {};
          // The version number of the package of the software that has the vulnerability.
          shared_ptr<string> version_ {};
        };

        class Necessity : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Necessity& obj) { 
            DARABONBA_PTR_TO_JSON(Assets_factor, assetsFactor_);
            DARABONBA_PTR_TO_JSON(Cvss_factor, cvssFactor_);
            DARABONBA_PTR_TO_JSON(Enviroment_factor, enviromentFactor_);
            DARABONBA_PTR_TO_JSON(Is_calc, isCalc_);
            DARABONBA_PTR_TO_JSON(Status, status_);
            DARABONBA_PTR_TO_JSON(Time_factor, timeFactor_);
            DARABONBA_PTR_TO_JSON(Total_score, totalScore_);
          };
          friend void from_json(const Darabonba::Json& j, Necessity& obj) { 
            DARABONBA_PTR_FROM_JSON(Assets_factor, assetsFactor_);
            DARABONBA_PTR_FROM_JSON(Cvss_factor, cvssFactor_);
            DARABONBA_PTR_FROM_JSON(Enviroment_factor, enviromentFactor_);
            DARABONBA_PTR_FROM_JSON(Is_calc, isCalc_);
            DARABONBA_PTR_FROM_JSON(Status, status_);
            DARABONBA_PTR_FROM_JSON(Time_factor, timeFactor_);
            DARABONBA_PTR_FROM_JSON(Total_score, totalScore_);
          };
          Necessity() = default ;
          Necessity(const Necessity &) = default ;
          Necessity(Necessity &&) = default ;
          Necessity(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Necessity() = default ;
          Necessity& operator=(const Necessity &) = default ;
          Necessity& operator=(Necessity &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->assetsFactor_ == nullptr
        && this->cvssFactor_ == nullptr && this->enviromentFactor_ == nullptr && this->isCalc_ == nullptr && this->status_ == nullptr && this->timeFactor_ == nullptr
        && this->totalScore_ == nullptr; };
          // assetsFactor Field Functions 
          bool hasAssetsFactor() const { return this->assetsFactor_ != nullptr;};
          void deleteAssetsFactor() { this->assetsFactor_ = nullptr;};
          inline string getAssetsFactor() const { DARABONBA_PTR_GET_DEFAULT(assetsFactor_, "") };
          inline Necessity& setAssetsFactor(string assetsFactor) { DARABONBA_PTR_SET_VALUE(assetsFactor_, assetsFactor) };


          // cvssFactor Field Functions 
          bool hasCvssFactor() const { return this->cvssFactor_ != nullptr;};
          void deleteCvssFactor() { this->cvssFactor_ = nullptr;};
          inline string getCvssFactor() const { DARABONBA_PTR_GET_DEFAULT(cvssFactor_, "") };
          inline Necessity& setCvssFactor(string cvssFactor) { DARABONBA_PTR_SET_VALUE(cvssFactor_, cvssFactor) };


          // enviromentFactor Field Functions 
          bool hasEnviromentFactor() const { return this->enviromentFactor_ != nullptr;};
          void deleteEnviromentFactor() { this->enviromentFactor_ = nullptr;};
          inline string getEnviromentFactor() const { DARABONBA_PTR_GET_DEFAULT(enviromentFactor_, "") };
          inline Necessity& setEnviromentFactor(string enviromentFactor) { DARABONBA_PTR_SET_VALUE(enviromentFactor_, enviromentFactor) };


          // isCalc Field Functions 
          bool hasIsCalc() const { return this->isCalc_ != nullptr;};
          void deleteIsCalc() { this->isCalc_ = nullptr;};
          inline string getIsCalc() const { DARABONBA_PTR_GET_DEFAULT(isCalc_, "") };
          inline Necessity& setIsCalc(string isCalc) { DARABONBA_PTR_SET_VALUE(isCalc_, isCalc) };


          // status Field Functions 
          bool hasStatus() const { return this->status_ != nullptr;};
          void deleteStatus() { this->status_ = nullptr;};
          inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
          inline Necessity& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


          // timeFactor Field Functions 
          bool hasTimeFactor() const { return this->timeFactor_ != nullptr;};
          void deleteTimeFactor() { this->timeFactor_ = nullptr;};
          inline string getTimeFactor() const { DARABONBA_PTR_GET_DEFAULT(timeFactor_, "") };
          inline Necessity& setTimeFactor(string timeFactor) { DARABONBA_PTR_SET_VALUE(timeFactor_, timeFactor) };


          // totalScore Field Functions 
          bool hasTotalScore() const { return this->totalScore_ != nullptr;};
          void deleteTotalScore() { this->totalScore_ = nullptr;};
          inline string getTotalScore() const { DARABONBA_PTR_GET_DEFAULT(totalScore_, "") };
          inline Necessity& setTotalScore(string totalScore) { DARABONBA_PTR_SET_VALUE(totalScore_, totalScore) };


        protected:
          // The asset importance score. Valid values:
          // 
          // *   **2**: important asset.
          // *   **1**: common asset.
          // *   **0**: test asset.
          shared_ptr<string> assetsFactor_ {};
          // The Common Vulnerability Scoring System (CVSS) score.
          shared_ptr<string> cvssFactor_ {};
          // The environment score.
          shared_ptr<string> enviromentFactor_ {};
          // Indicates whether the vulnerability priority score is calculated. Valid values:
          // 
          // *   **0**: no.
          // *   **1**: yes.
          shared_ptr<string> isCalc_ {};
          // The status of the vulnerability priority score. Valid values:
          // 
          // *   **none**: No score is generated.
          // *   **pending**: The score is pending calculation.
          // *   **normal**: The calculation is normal.
          shared_ptr<string> status_ {};
          // The time score.
          shared_ptr<string> timeFactor_ {};
          // The vulnerability priority score.
          // 
          // The following list describes scores and related fixing suggestions:
          // 
          // *   If the score is from **13.5 to 15**, the vulnerability is a high-risk vulnerability. You must fix the vulnerability at the earliest opportunity.
          // *   If the score is **greater than or equal to 7 but less than 13.5**, the vulnerability is a medium-risk vulnerability. You can fix the vulnerability at your convenience.
          // *   If the score is **less than 7**, the vulnerability is a low-risk vulnerability. You can ignore the vulnerability.
          shared_ptr<string> totalScore_ {};
        };

        virtual bool empty() const override { return this->absolutePath_ == nullptr
        && this->aliasName_ == nullptr && this->description_ == nullptr && this->emgProof_ == nullptr && this->ip_ == nullptr && this->lastTs_ == nullptr
        && this->necessity_ == nullptr && this->os_ == nullptr && this->osRelease_ == nullptr && this->primaryId_ == nullptr && this->rpmEntityList_ == nullptr
        && this->status_ == nullptr && this->tag_ == nullptr && this->target_ == nullptr && this->cveList_ == nullptr; };
        // absolutePath Field Functions 
        bool hasAbsolutePath() const { return this->absolutePath_ != nullptr;};
        void deleteAbsolutePath() { this->absolutePath_ = nullptr;};
        inline string getAbsolutePath() const { DARABONBA_PTR_GET_DEFAULT(absolutePath_, "") };
        inline ExtendContentJson& setAbsolutePath(string absolutePath) { DARABONBA_PTR_SET_VALUE(absolutePath_, absolutePath) };


        // aliasName Field Functions 
        bool hasAliasName() const { return this->aliasName_ != nullptr;};
        void deleteAliasName() { this->aliasName_ = nullptr;};
        inline string getAliasName() const { DARABONBA_PTR_GET_DEFAULT(aliasName_, "") };
        inline ExtendContentJson& setAliasName(string aliasName) { DARABONBA_PTR_SET_VALUE(aliasName_, aliasName) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline ExtendContentJson& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // emgProof Field Functions 
        bool hasEmgProof() const { return this->emgProof_ != nullptr;};
        void deleteEmgProof() { this->emgProof_ = nullptr;};
        inline string getEmgProof() const { DARABONBA_PTR_GET_DEFAULT(emgProof_, "") };
        inline ExtendContentJson& setEmgProof(string emgProof) { DARABONBA_PTR_SET_VALUE(emgProof_, emgProof) };


        // ip Field Functions 
        bool hasIp() const { return this->ip_ != nullptr;};
        void deleteIp() { this->ip_ = nullptr;};
        inline string getIp() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
        inline ExtendContentJson& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


        // lastTs Field Functions 
        bool hasLastTs() const { return this->lastTs_ != nullptr;};
        void deleteLastTs() { this->lastTs_ = nullptr;};
        inline int64_t getLastTs() const { DARABONBA_PTR_GET_DEFAULT(lastTs_, 0L) };
        inline ExtendContentJson& setLastTs(int64_t lastTs) { DARABONBA_PTR_SET_VALUE(lastTs_, lastTs) };


        // necessity Field Functions 
        bool hasNecessity() const { return this->necessity_ != nullptr;};
        void deleteNecessity() { this->necessity_ = nullptr;};
        inline const ExtendContentJson::Necessity & getNecessity() const { DARABONBA_PTR_GET_CONST(necessity_, ExtendContentJson::Necessity) };
        inline ExtendContentJson::Necessity getNecessity() { DARABONBA_PTR_GET(necessity_, ExtendContentJson::Necessity) };
        inline ExtendContentJson& setNecessity(const ExtendContentJson::Necessity & necessity) { DARABONBA_PTR_SET_VALUE(necessity_, necessity) };
        inline ExtendContentJson& setNecessity(ExtendContentJson::Necessity && necessity) { DARABONBA_PTR_SET_RVALUE(necessity_, necessity) };


        // os Field Functions 
        bool hasOs() const { return this->os_ != nullptr;};
        void deleteOs() { this->os_ = nullptr;};
        inline string getOs() const { DARABONBA_PTR_GET_DEFAULT(os_, "") };
        inline ExtendContentJson& setOs(string os) { DARABONBA_PTR_SET_VALUE(os_, os) };


        // osRelease Field Functions 
        bool hasOsRelease() const { return this->osRelease_ != nullptr;};
        void deleteOsRelease() { this->osRelease_ = nullptr;};
        inline string getOsRelease() const { DARABONBA_PTR_GET_DEFAULT(osRelease_, "") };
        inline ExtendContentJson& setOsRelease(string osRelease) { DARABONBA_PTR_SET_VALUE(osRelease_, osRelease) };


        // primaryId Field Functions 
        bool hasPrimaryId() const { return this->primaryId_ != nullptr;};
        void deletePrimaryId() { this->primaryId_ = nullptr;};
        inline int64_t getPrimaryId() const { DARABONBA_PTR_GET_DEFAULT(primaryId_, 0L) };
        inline ExtendContentJson& setPrimaryId(int64_t primaryId) { DARABONBA_PTR_SET_VALUE(primaryId_, primaryId) };


        // rpmEntityList Field Functions 
        bool hasRpmEntityList() const { return this->rpmEntityList_ != nullptr;};
        void deleteRpmEntityList() { this->rpmEntityList_ = nullptr;};
        inline const vector<ExtendContentJson::RpmEntityList> & getRpmEntityList() const { DARABONBA_PTR_GET_CONST(rpmEntityList_, vector<ExtendContentJson::RpmEntityList>) };
        inline vector<ExtendContentJson::RpmEntityList> getRpmEntityList() { DARABONBA_PTR_GET(rpmEntityList_, vector<ExtendContentJson::RpmEntityList>) };
        inline ExtendContentJson& setRpmEntityList(const vector<ExtendContentJson::RpmEntityList> & rpmEntityList) { DARABONBA_PTR_SET_VALUE(rpmEntityList_, rpmEntityList) };
        inline ExtendContentJson& setRpmEntityList(vector<ExtendContentJson::RpmEntityList> && rpmEntityList) { DARABONBA_PTR_SET_RVALUE(rpmEntityList_, rpmEntityList) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline ExtendContentJson& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // tag Field Functions 
        bool hasTag() const { return this->tag_ != nullptr;};
        void deleteTag() { this->tag_ = nullptr;};
        inline string getTag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
        inline ExtendContentJson& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


        // target Field Functions 
        bool hasTarget() const { return this->target_ != nullptr;};
        void deleteTarget() { this->target_ = nullptr;};
        inline string getTarget() const { DARABONBA_PTR_GET_DEFAULT(target_, "") };
        inline ExtendContentJson& setTarget(string target) { DARABONBA_PTR_SET_VALUE(target_, target) };


        // cveList Field Functions 
        bool hasCveList() const { return this->cveList_ != nullptr;};
        void deleteCveList() { this->cveList_ = nullptr;};
        inline const vector<string> & getCveList() const { DARABONBA_PTR_GET_CONST(cveList_, vector<string>) };
        inline vector<string> getCveList() { DARABONBA_PTR_GET(cveList_, vector<string>) };
        inline ExtendContentJson& setCveList(const vector<string> & cveList) { DARABONBA_PTR_SET_VALUE(cveList_, cveList) };
        inline ExtendContentJson& setCveList(vector<string> && cveList) { DARABONBA_PTR_SET_RVALUE(cveList_, cveList) };


      protected:
        // The path to the package of the software that has the vulnerability.
        shared_ptr<string> absolutePath_ {};
        // The name of the vulnerability.
        shared_ptr<string> aliasName_ {};
        // The description of the vulnerability.
        shared_ptr<string> description_ {};
        // The returned message that indicates the urgent vulnerability.
        shared_ptr<string> emgProof_ {};
        // The public IP address of the asset that is associated with the vulnerability.
        shared_ptr<string> ip_ {};
        // The timestamp when the vulnerability was last detected. Unit: milliseconds.
        shared_ptr<int64_t> lastTs_ {};
        // Indicates whether the vulnerability needs to be fixed.
        shared_ptr<ExtendContentJson::Necessity> necessity_ {};
        // The name of the operating system.
        shared_ptr<string> os_ {};
        // The information about the operating system version.
        shared_ptr<string> osRelease_ {};
        // The ID of the vulnerability.
        shared_ptr<int64_t> primaryId_ {};
        // The information about RPM Package Manager (RPM) packages.
        shared_ptr<vector<ExtendContentJson::RpmEntityList>> rpmEntityList_ {};
        // The status of the vulnerability. Valid values:
        // 
        // *   **1**: unfixed.
        // *   **2**: fix failed.
        // *   3: rollback failed.
        // *   **4**: being fixed.
        // *   **5**: being rolled back.
        // *   **6**: being verified.
        // *   **7**: fixed.
        // *   **8**: fixed and to be restarted.
        // *   **9**: rolled back.
        // *   **10**: ignored.
        // *   **11**: rolled back and to be restarted.
        // *   **12**: not found.
        // *   **20**: expired.
        shared_ptr<string> status_ {};
        // The tag that is added to the vulnerability.
        shared_ptr<string> tag_ {};
        // The URL of the vulnerability.
        shared_ptr<string> target_ {};
        // The CVE list.
        shared_ptr<vector<string>> cveList_ {};
      };

      virtual bool empty() const override { return this->aliasName_ == nullptr
        && this->authVersion_ == nullptr && this->bind_ == nullptr && this->containerId_ == nullptr && this->extendContentJson_ == nullptr && this->firstTs_ == nullptr
        && this->groupId_ == nullptr && this->image_ == nullptr && this->instanceId_ == nullptr && this->instanceName_ == nullptr && this->internetIp_ == nullptr
        && this->intranetIp_ == nullptr && this->k8sClusterId_ == nullptr && this->k8sNamespace_ == nullptr && this->k8sNodeId_ == nullptr && this->k8sNodeName_ == nullptr
        && this->k8sPodName_ == nullptr && this->lastTs_ == nullptr && this->modifyTs_ == nullptr && this->name_ == nullptr && this->namespace_ == nullptr
        && this->necessity_ == nullptr && this->online_ == nullptr && this->osName_ == nullptr && this->osVersion_ == nullptr && this->primaryId_ == nullptr
        && this->progress_ == nullptr && this->raspDefend_ == nullptr && this->raspStatus_ == nullptr && this->realRisk_ == nullptr && this->regionId_ == nullptr
        && this->related_ == nullptr && this->repairTs_ == nullptr && this->resultCode_ == nullptr && this->resultMessage_ == nullptr && this->ruleTag_ == nullptr
        && this->status_ == nullptr && this->tag_ == nullptr && this->type_ == nullptr && this->uuid_ == nullptr; };
      // aliasName Field Functions 
      bool hasAliasName() const { return this->aliasName_ != nullptr;};
      void deleteAliasName() { this->aliasName_ = nullptr;};
      inline string getAliasName() const { DARABONBA_PTR_GET_DEFAULT(aliasName_, "") };
      inline VulRecords& setAliasName(string aliasName) { DARABONBA_PTR_SET_VALUE(aliasName_, aliasName) };


      // authVersion Field Functions 
      bool hasAuthVersion() const { return this->authVersion_ != nullptr;};
      void deleteAuthVersion() { this->authVersion_ = nullptr;};
      inline string getAuthVersion() const { DARABONBA_PTR_GET_DEFAULT(authVersion_, "") };
      inline VulRecords& setAuthVersion(string authVersion) { DARABONBA_PTR_SET_VALUE(authVersion_, authVersion) };


      // bind Field Functions 
      bool hasBind() const { return this->bind_ != nullptr;};
      void deleteBind() { this->bind_ = nullptr;};
      inline bool getBind() const { DARABONBA_PTR_GET_DEFAULT(bind_, false) };
      inline VulRecords& setBind(bool bind) { DARABONBA_PTR_SET_VALUE(bind_, bind) };


      // containerId Field Functions 
      bool hasContainerId() const { return this->containerId_ != nullptr;};
      void deleteContainerId() { this->containerId_ = nullptr;};
      inline string getContainerId() const { DARABONBA_PTR_GET_DEFAULT(containerId_, "") };
      inline VulRecords& setContainerId(string containerId) { DARABONBA_PTR_SET_VALUE(containerId_, containerId) };


      // extendContentJson Field Functions 
      bool hasExtendContentJson() const { return this->extendContentJson_ != nullptr;};
      void deleteExtendContentJson() { this->extendContentJson_ = nullptr;};
      inline const VulRecords::ExtendContentJson & getExtendContentJson() const { DARABONBA_PTR_GET_CONST(extendContentJson_, VulRecords::ExtendContentJson) };
      inline VulRecords::ExtendContentJson getExtendContentJson() { DARABONBA_PTR_GET(extendContentJson_, VulRecords::ExtendContentJson) };
      inline VulRecords& setExtendContentJson(const VulRecords::ExtendContentJson & extendContentJson) { DARABONBA_PTR_SET_VALUE(extendContentJson_, extendContentJson) };
      inline VulRecords& setExtendContentJson(VulRecords::ExtendContentJson && extendContentJson) { DARABONBA_PTR_SET_RVALUE(extendContentJson_, extendContentJson) };


      // firstTs Field Functions 
      bool hasFirstTs() const { return this->firstTs_ != nullptr;};
      void deleteFirstTs() { this->firstTs_ = nullptr;};
      inline int64_t getFirstTs() const { DARABONBA_PTR_GET_DEFAULT(firstTs_, 0L) };
      inline VulRecords& setFirstTs(int64_t firstTs) { DARABONBA_PTR_SET_VALUE(firstTs_, firstTs) };


      // groupId Field Functions 
      bool hasGroupId() const { return this->groupId_ != nullptr;};
      void deleteGroupId() { this->groupId_ = nullptr;};
      inline int64_t getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, 0L) };
      inline VulRecords& setGroupId(int64_t groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


      // image Field Functions 
      bool hasImage() const { return this->image_ != nullptr;};
      void deleteImage() { this->image_ = nullptr;};
      inline string getImage() const { DARABONBA_PTR_GET_DEFAULT(image_, "") };
      inline VulRecords& setImage(string image) { DARABONBA_PTR_SET_VALUE(image_, image) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline VulRecords& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // instanceName Field Functions 
      bool hasInstanceName() const { return this->instanceName_ != nullptr;};
      void deleteInstanceName() { this->instanceName_ = nullptr;};
      inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
      inline VulRecords& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


      // internetIp Field Functions 
      bool hasInternetIp() const { return this->internetIp_ != nullptr;};
      void deleteInternetIp() { this->internetIp_ = nullptr;};
      inline string getInternetIp() const { DARABONBA_PTR_GET_DEFAULT(internetIp_, "") };
      inline VulRecords& setInternetIp(string internetIp) { DARABONBA_PTR_SET_VALUE(internetIp_, internetIp) };


      // intranetIp Field Functions 
      bool hasIntranetIp() const { return this->intranetIp_ != nullptr;};
      void deleteIntranetIp() { this->intranetIp_ = nullptr;};
      inline string getIntranetIp() const { DARABONBA_PTR_GET_DEFAULT(intranetIp_, "") };
      inline VulRecords& setIntranetIp(string intranetIp) { DARABONBA_PTR_SET_VALUE(intranetIp_, intranetIp) };


      // k8sClusterId Field Functions 
      bool hasK8sClusterId() const { return this->k8sClusterId_ != nullptr;};
      void deleteK8sClusterId() { this->k8sClusterId_ = nullptr;};
      inline string getK8sClusterId() const { DARABONBA_PTR_GET_DEFAULT(k8sClusterId_, "") };
      inline VulRecords& setK8sClusterId(string k8sClusterId) { DARABONBA_PTR_SET_VALUE(k8sClusterId_, k8sClusterId) };


      // k8sNamespace Field Functions 
      bool hasK8sNamespace() const { return this->k8sNamespace_ != nullptr;};
      void deleteK8sNamespace() { this->k8sNamespace_ = nullptr;};
      inline string getK8sNamespace() const { DARABONBA_PTR_GET_DEFAULT(k8sNamespace_, "") };
      inline VulRecords& setK8sNamespace(string k8sNamespace) { DARABONBA_PTR_SET_VALUE(k8sNamespace_, k8sNamespace) };


      // k8sNodeId Field Functions 
      bool hasK8sNodeId() const { return this->k8sNodeId_ != nullptr;};
      void deleteK8sNodeId() { this->k8sNodeId_ = nullptr;};
      inline string getK8sNodeId() const { DARABONBA_PTR_GET_DEFAULT(k8sNodeId_, "") };
      inline VulRecords& setK8sNodeId(string k8sNodeId) { DARABONBA_PTR_SET_VALUE(k8sNodeId_, k8sNodeId) };


      // k8sNodeName Field Functions 
      bool hasK8sNodeName() const { return this->k8sNodeName_ != nullptr;};
      void deleteK8sNodeName() { this->k8sNodeName_ = nullptr;};
      inline string getK8sNodeName() const { DARABONBA_PTR_GET_DEFAULT(k8sNodeName_, "") };
      inline VulRecords& setK8sNodeName(string k8sNodeName) { DARABONBA_PTR_SET_VALUE(k8sNodeName_, k8sNodeName) };


      // k8sPodName Field Functions 
      bool hasK8sPodName() const { return this->k8sPodName_ != nullptr;};
      void deleteK8sPodName() { this->k8sPodName_ = nullptr;};
      inline string getK8sPodName() const { DARABONBA_PTR_GET_DEFAULT(k8sPodName_, "") };
      inline VulRecords& setK8sPodName(string k8sPodName) { DARABONBA_PTR_SET_VALUE(k8sPodName_, k8sPodName) };


      // lastTs Field Functions 
      bool hasLastTs() const { return this->lastTs_ != nullptr;};
      void deleteLastTs() { this->lastTs_ = nullptr;};
      inline int64_t getLastTs() const { DARABONBA_PTR_GET_DEFAULT(lastTs_, 0L) };
      inline VulRecords& setLastTs(int64_t lastTs) { DARABONBA_PTR_SET_VALUE(lastTs_, lastTs) };


      // modifyTs Field Functions 
      bool hasModifyTs() const { return this->modifyTs_ != nullptr;};
      void deleteModifyTs() { this->modifyTs_ = nullptr;};
      inline int64_t getModifyTs() const { DARABONBA_PTR_GET_DEFAULT(modifyTs_, 0L) };
      inline VulRecords& setModifyTs(int64_t modifyTs) { DARABONBA_PTR_SET_VALUE(modifyTs_, modifyTs) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline VulRecords& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // namespace Field Functions 
      bool hasNamespace() const { return this->namespace_ != nullptr;};
      void deleteNamespace() { this->namespace_ = nullptr;};
      inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
      inline VulRecords& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


      // necessity Field Functions 
      bool hasNecessity() const { return this->necessity_ != nullptr;};
      void deleteNecessity() { this->necessity_ = nullptr;};
      inline string getNecessity() const { DARABONBA_PTR_GET_DEFAULT(necessity_, "") };
      inline VulRecords& setNecessity(string necessity) { DARABONBA_PTR_SET_VALUE(necessity_, necessity) };


      // online Field Functions 
      bool hasOnline() const { return this->online_ != nullptr;};
      void deleteOnline() { this->online_ = nullptr;};
      inline bool getOnline() const { DARABONBA_PTR_GET_DEFAULT(online_, false) };
      inline VulRecords& setOnline(bool online) { DARABONBA_PTR_SET_VALUE(online_, online) };


      // osName Field Functions 
      bool hasOsName() const { return this->osName_ != nullptr;};
      void deleteOsName() { this->osName_ = nullptr;};
      inline string getOsName() const { DARABONBA_PTR_GET_DEFAULT(osName_, "") };
      inline VulRecords& setOsName(string osName) { DARABONBA_PTR_SET_VALUE(osName_, osName) };


      // osVersion Field Functions 
      bool hasOsVersion() const { return this->osVersion_ != nullptr;};
      void deleteOsVersion() { this->osVersion_ = nullptr;};
      inline string getOsVersion() const { DARABONBA_PTR_GET_DEFAULT(osVersion_, "") };
      inline VulRecords& setOsVersion(string osVersion) { DARABONBA_PTR_SET_VALUE(osVersion_, osVersion) };


      // primaryId Field Functions 
      bool hasPrimaryId() const { return this->primaryId_ != nullptr;};
      void deletePrimaryId() { this->primaryId_ = nullptr;};
      inline int64_t getPrimaryId() const { DARABONBA_PTR_GET_DEFAULT(primaryId_, 0L) };
      inline VulRecords& setPrimaryId(int64_t primaryId) { DARABONBA_PTR_SET_VALUE(primaryId_, primaryId) };


      // progress Field Functions 
      bool hasProgress() const { return this->progress_ != nullptr;};
      void deleteProgress() { this->progress_ = nullptr;};
      inline int32_t getProgress() const { DARABONBA_PTR_GET_DEFAULT(progress_, 0) };
      inline VulRecords& setProgress(int32_t progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


      // raspDefend Field Functions 
      bool hasRaspDefend() const { return this->raspDefend_ != nullptr;};
      void deleteRaspDefend() { this->raspDefend_ = nullptr;};
      inline int32_t getRaspDefend() const { DARABONBA_PTR_GET_DEFAULT(raspDefend_, 0) };
      inline VulRecords& setRaspDefend(int32_t raspDefend) { DARABONBA_PTR_SET_VALUE(raspDefend_, raspDefend) };


      // raspStatus Field Functions 
      bool hasRaspStatus() const { return this->raspStatus_ != nullptr;};
      void deleteRaspStatus() { this->raspStatus_ = nullptr;};
      inline int32_t getRaspStatus() const { DARABONBA_PTR_GET_DEFAULT(raspStatus_, 0) };
      inline VulRecords& setRaspStatus(int32_t raspStatus) { DARABONBA_PTR_SET_VALUE(raspStatus_, raspStatus) };


      // realRisk Field Functions 
      bool hasRealRisk() const { return this->realRisk_ != nullptr;};
      void deleteRealRisk() { this->realRisk_ = nullptr;};
      inline bool getRealRisk() const { DARABONBA_PTR_GET_DEFAULT(realRisk_, false) };
      inline VulRecords& setRealRisk(bool realRisk) { DARABONBA_PTR_SET_VALUE(realRisk_, realRisk) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline VulRecords& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // related Field Functions 
      bool hasRelated() const { return this->related_ != nullptr;};
      void deleteRelated() { this->related_ = nullptr;};
      inline string getRelated() const { DARABONBA_PTR_GET_DEFAULT(related_, "") };
      inline VulRecords& setRelated(string related) { DARABONBA_PTR_SET_VALUE(related_, related) };


      // repairTs Field Functions 
      bool hasRepairTs() const { return this->repairTs_ != nullptr;};
      void deleteRepairTs() { this->repairTs_ = nullptr;};
      inline int64_t getRepairTs() const { DARABONBA_PTR_GET_DEFAULT(repairTs_, 0L) };
      inline VulRecords& setRepairTs(int64_t repairTs) { DARABONBA_PTR_SET_VALUE(repairTs_, repairTs) };


      // resultCode Field Functions 
      bool hasResultCode() const { return this->resultCode_ != nullptr;};
      void deleteResultCode() { this->resultCode_ = nullptr;};
      inline string getResultCode() const { DARABONBA_PTR_GET_DEFAULT(resultCode_, "") };
      inline VulRecords& setResultCode(string resultCode) { DARABONBA_PTR_SET_VALUE(resultCode_, resultCode) };


      // resultMessage Field Functions 
      bool hasResultMessage() const { return this->resultMessage_ != nullptr;};
      void deleteResultMessage() { this->resultMessage_ = nullptr;};
      inline string getResultMessage() const { DARABONBA_PTR_GET_DEFAULT(resultMessage_, "") };
      inline VulRecords& setResultMessage(string resultMessage) { DARABONBA_PTR_SET_VALUE(resultMessage_, resultMessage) };


      // ruleTag Field Functions 
      bool hasRuleTag() const { return this->ruleTag_ != nullptr;};
      void deleteRuleTag() { this->ruleTag_ = nullptr;};
      inline string getRuleTag() const { DARABONBA_PTR_GET_DEFAULT(ruleTag_, "") };
      inline VulRecords& setRuleTag(string ruleTag) { DARABONBA_PTR_SET_VALUE(ruleTag_, ruleTag) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
      inline VulRecords& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // tag Field Functions 
      bool hasTag() const { return this->tag_ != nullptr;};
      void deleteTag() { this->tag_ = nullptr;};
      inline string getTag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
      inline VulRecords& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline VulRecords& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // uuid Field Functions 
      bool hasUuid() const { return this->uuid_ != nullptr;};
      void deleteUuid() { this->uuid_ = nullptr;};
      inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
      inline VulRecords& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


    protected:
      // The name of the vulnerability.
      shared_ptr<string> aliasName_ {};
      // The edition of Security Center that is authorized to scan the asset. Valid values:
      // 
      // *   **1**: Basic.
      // *   **6**: Anti-virus.
      // *   **5**: Advanced.
      // *   **3**: Enterprise.
      // *   **7**: Ultimate.
      // *   **10**: Value-added Plan.
      shared_ptr<string> authVersion_ {};
      // Indicates whether Security Center is authorized to scan the asset. Valid values:
      // 
      // *   **true**
      // *   **false**
      shared_ptr<bool> bind_ {};
      // The container ID.
      shared_ptr<string> containerId_ {};
      // The extended information about the vulnerability.
      shared_ptr<VulRecords::ExtendContentJson> extendContentJson_ {};
      // The timestamp when the vulnerability was first detected. Unit: milliseconds.
      shared_ptr<int64_t> firstTs_ {};
      // The ID of the asset group.
      shared_ptr<int64_t> groupId_ {};
      // The name of the image.
      shared_ptr<string> image_ {};
      // The ID of the asset.
      shared_ptr<string> instanceId_ {};
      // The name of the asset.
      shared_ptr<string> instanceName_ {};
      // The public IP address of the asset.
      shared_ptr<string> internetIp_ {};
      // The private IP address of the asset.
      shared_ptr<string> intranetIp_ {};
      // The ID of the cluster.
      // 
      // >  The value of this parameter is returned only if you use the Ultimate edition of Security Center that can protect container assets.
      shared_ptr<string> k8sClusterId_ {};
      // The namespace.
      // 
      // >  If you use the Ultimate edition of Security Center, the value of this parameter is queried from container assets. If you do not use the Ultimate edition, the value of this parameter is queried from the Security Center agent.
      shared_ptr<string> k8sNamespace_ {};
      // The ID of the node.
      // 
      // >  The value of this parameter is returned only if you use the Ultimate edition of Security Center that can protect container assets.
      shared_ptr<string> k8sNodeId_ {};
      // The name of the node.
      // 
      // >  The value of this parameter is returned only if you use the Ultimate edition of Security Center that can protect container assets.
      shared_ptr<string> k8sNodeName_ {};
      // The name of the pod.
      // 
      // >  The value of this parameter is returned only if you use the Ultimate edition of Security Center that can protect container assets.
      shared_ptr<string> k8sPodName_ {};
      // The timestamp when the vulnerability was last detected. Unit: milliseconds.
      shared_ptr<int64_t> lastTs_ {};
      // The timestamp when the vulnerability status was modified. Unit: milliseconds.
      shared_ptr<int64_t> modifyTs_ {};
      // The name of the vulnerability.
      shared_ptr<string> name_ {};
      // The namespace.
      shared_ptr<string> namespace_ {};
      // The priority to fix the vulnerability. Valid values:
      // 
      // *   **asap**: high.
      // *   **later**: medium.
      // *   **nntf**: low.
      // 
      // >  We recommend that you fix **high-risk** vulnerabilities at the earliest opportunity.
      shared_ptr<string> necessity_ {};
      // Indicates whether the Security Center agent on the asset is online. Valid values:
      // 
      // *   **true**
      // *   **false**
      shared_ptr<bool> online_ {};
      // The name of the operating system for your asset.
      shared_ptr<string> osName_ {};
      // The name of the operating system for your asset.
      shared_ptr<string> osVersion_ {};
      // The ID of the vulnerability.
      shared_ptr<int64_t> primaryId_ {};
      // The progress of the vulnerability fixing.
      shared_ptr<int32_t> progress_ {};
      // Indicates whether the application protection feature is supported. Valid values:
      // 
      // *   **0**: no.
      // *   **1**: yes.
      // 
      // >  If this parameter is not returned, the application protection feature is not supported.
      shared_ptr<int32_t> raspDefend_ {};
      // The protection mode of the application protection feature. Valid values:
      // 
      // *   **0**: unprotected.
      // *   **1**: the Monitor mode.
      // *   **2**: the Block mode.
      // *   **3**: disabled.
      shared_ptr<int32_t> raspStatus_ {};
      // Indicates whether the vulnerability is easily exploited. Valid values:
      // 
      // *   **true**
      // *   **false**
      shared_ptr<bool> realRisk_ {};
      // The region ID of the asset.
      shared_ptr<string> regionId_ {};
      // The Common Vulnerabilities and Exposures (CVE) IDs related to the vulnerability. Multiple CVE IDs are separated by commas (,).
      shared_ptr<string> related_ {};
      // The timestamp when the vulnerability was fixed. Unit: milliseconds. This parameter is returned only if you fix vulnerabilities in the Security Center console.
      shared_ptr<int64_t> repairTs_ {};
      // The code that indicates the vulnerability fixing result.
      shared_ptr<string> resultCode_ {};
      // The message that indicates the vulnerability fixing result.
      shared_ptr<string> resultMessage_ {};
      // The tag of this vulnerability. Valid values:
      // 
      // *   **AI**: AI-related components.
      shared_ptr<string> ruleTag_ {};
      // The status of the vulnerability. Valid values:
      // 
      // *   **1**: unfixed.
      // *   **2**: fix failed.
      // *   **3**: rollback failed.
      // *   **4**: being fixed.
      // *   **5**: being rolled back.
      // *   **6**: being verified.
      // *   **7**: fixed.
      // *   **8**: fixed and to be restarted.
      // *   **9**: rolled back.
      // *   **10**: ignored.
      // *   **11**: rolled back and to be restarted.
      // *   **12**: not found.
      // *   **20**: expired.
      shared_ptr<int32_t> status_ {};
      // The tag that is added to the vulnerability.
      shared_ptr<string> tag_ {};
      // The type of the vulnerability. Valid values:
      // 
      // *   **cve**: Linux software vulnerability.
      // *   **sys**: Windows system vulnerability.
      // *   **cms**: Web-CMS vulnerability.
      // *   **emg**: urgent vulnerability.
      // *   **app**: application vulnerability.
      // *   **sca**: application vulnerability that is detected by using software component analysis.
      shared_ptr<string> type_ {};
      // The UUID of the asset.
      shared_ptr<string> uuid_ {};
    };

    virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->nextToken_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr && this->vulRecords_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeVulListResponseBody& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeVulListResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeVulListResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVulListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeVulListResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // vulRecords Field Functions 
    bool hasVulRecords() const { return this->vulRecords_ != nullptr;};
    void deleteVulRecords() { this->vulRecords_ = nullptr;};
    inline const vector<DescribeVulListResponseBody::VulRecords> & getVulRecords() const { DARABONBA_PTR_GET_CONST(vulRecords_, vector<DescribeVulListResponseBody::VulRecords>) };
    inline vector<DescribeVulListResponseBody::VulRecords> getVulRecords() { DARABONBA_PTR_GET(vulRecords_, vector<DescribeVulListResponseBody::VulRecords>) };
    inline DescribeVulListResponseBody& setVulRecords(const vector<DescribeVulListResponseBody::VulRecords> & vulRecords) { DARABONBA_PTR_SET_VALUE(vulRecords_, vulRecords) };
    inline DescribeVulListResponseBody& setVulRecords(vector<DescribeVulListResponseBody::VulRecords> && vulRecords) { DARABONBA_PTR_SET_RVALUE(vulRecords_, vulRecords) };


  protected:
    // The page number of the returned page.
    shared_ptr<int32_t> currentPage_ {};
    // The value of NextToken that is returned when the NextToken method is used.
    shared_ptr<string> nextToken_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // The total number of vulnerabilities returned.
    shared_ptr<int32_t> totalCount_ {};
    // The information about the vulnerability.
    shared_ptr<vector<DescribeVulListResponseBody::VulRecords>> vulRecords_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
