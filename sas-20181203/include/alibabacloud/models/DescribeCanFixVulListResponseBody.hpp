// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECANFIXVULLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECANFIXVULLISTRESPONSEBODY_HPP_
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
  class DescribeCanFixVulListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCanFixVulListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(VulRecords, vulRecords_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCanFixVulListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(VulRecords, vulRecords_);
    };
    DescribeCanFixVulListResponseBody() = default ;
    DescribeCanFixVulListResponseBody(const DescribeCanFixVulListResponseBody &) = default ;
    DescribeCanFixVulListResponseBody(DescribeCanFixVulListResponseBody &&) = default ;
    DescribeCanFixVulListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCanFixVulListResponseBody() = default ;
    DescribeCanFixVulListResponseBody& operator=(const DescribeCanFixVulListResponseBody &) = default ;
    DescribeCanFixVulListResponseBody& operator=(DescribeCanFixVulListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class VulRecords : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const VulRecords& obj) { 
        DARABONBA_PTR_TO_JSON(AliasName, aliasName_);
        DARABONBA_PTR_TO_JSON(CanFix, canFix_);
        DARABONBA_PTR_TO_JSON(CanUpdate, canUpdate_);
        DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
        DARABONBA_PTR_TO_JSON(ClusterName, clusterName_);
        DARABONBA_PTR_TO_JSON(ContainerId, containerId_);
        DARABONBA_PTR_TO_JSON(ExtendContentJson, extendContentJson_);
        DARABONBA_PTR_TO_JSON(FirstTs, firstTs_);
        DARABONBA_PTR_TO_JSON(Image, image_);
        DARABONBA_PTR_TO_JSON(ImageDigest, imageDigest_);
        DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_TO_JSON(InternetIp, internetIp_);
        DARABONBA_PTR_TO_JSON(IntranetIp, intranetIp_);
        DARABONBA_PTR_TO_JSON(LastTs, lastTs_);
        DARABONBA_PTR_TO_JSON(Layers, layers_);
        DARABONBA_PTR_TO_JSON(MaliciousSource, maliciousSource_);
        DARABONBA_PTR_TO_JSON(ModifyTs, modifyTs_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Namespace, namespace_);
        DARABONBA_PTR_TO_JSON(Necessity, necessity_);
        DARABONBA_PTR_TO_JSON(Pod, pod_);
        DARABONBA_PTR_TO_JSON(PrimaryId, primaryId_);
        DARABONBA_PTR_TO_JSON(Related, related_);
        DARABONBA_PTR_TO_JSON(RepoName, repoName_);
        DARABONBA_PTR_TO_JSON(RepoNamespace, repoNamespace_);
        DARABONBA_PTR_TO_JSON(ScanTime, scanTime_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Tag, tag_);
        DARABONBA_PTR_TO_JSON(TargetId, targetId_);
        DARABONBA_PTR_TO_JSON(TargetName, targetName_);
        DARABONBA_PTR_TO_JSON(TargetType, targetType_);
        DARABONBA_PTR_TO_JSON(Type, type_);
        DARABONBA_PTR_TO_JSON(Uuid, uuid_);
      };
      friend void from_json(const Darabonba::Json& j, VulRecords& obj) { 
        DARABONBA_PTR_FROM_JSON(AliasName, aliasName_);
        DARABONBA_PTR_FROM_JSON(CanFix, canFix_);
        DARABONBA_PTR_FROM_JSON(CanUpdate, canUpdate_);
        DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
        DARABONBA_PTR_FROM_JSON(ClusterName, clusterName_);
        DARABONBA_PTR_FROM_JSON(ContainerId, containerId_);
        DARABONBA_PTR_FROM_JSON(ExtendContentJson, extendContentJson_);
        DARABONBA_PTR_FROM_JSON(FirstTs, firstTs_);
        DARABONBA_PTR_FROM_JSON(Image, image_);
        DARABONBA_PTR_FROM_JSON(ImageDigest, imageDigest_);
        DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_FROM_JSON(InternetIp, internetIp_);
        DARABONBA_PTR_FROM_JSON(IntranetIp, intranetIp_);
        DARABONBA_PTR_FROM_JSON(LastTs, lastTs_);
        DARABONBA_PTR_FROM_JSON(Layers, layers_);
        DARABONBA_PTR_FROM_JSON(MaliciousSource, maliciousSource_);
        DARABONBA_PTR_FROM_JSON(ModifyTs, modifyTs_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
        DARABONBA_PTR_FROM_JSON(Necessity, necessity_);
        DARABONBA_PTR_FROM_JSON(Pod, pod_);
        DARABONBA_PTR_FROM_JSON(PrimaryId, primaryId_);
        DARABONBA_PTR_FROM_JSON(Related, related_);
        DARABONBA_PTR_FROM_JSON(RepoName, repoName_);
        DARABONBA_PTR_FROM_JSON(RepoNamespace, repoNamespace_);
        DARABONBA_PTR_FROM_JSON(ScanTime, scanTime_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Tag, tag_);
        DARABONBA_PTR_FROM_JSON(TargetId, targetId_);
        DARABONBA_PTR_FROM_JSON(TargetName, targetName_);
        DARABONBA_PTR_FROM_JSON(TargetType, targetType_);
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
          DARABONBA_PTR_TO_JSON(Os, os_);
          DARABONBA_PTR_TO_JSON(OsRelease, osRelease_);
          DARABONBA_PTR_TO_JSON(RpmEntityList, rpmEntityList_);
        };
        friend void from_json(const Darabonba::Json& j, ExtendContentJson& obj) { 
          DARABONBA_PTR_FROM_JSON(Os, os_);
          DARABONBA_PTR_FROM_JSON(OsRelease, osRelease_);
          DARABONBA_PTR_FROM_JSON(RpmEntityList, rpmEntityList_);
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
            DARABONBA_PTR_TO_JSON(FullVersion, fullVersion_);
            DARABONBA_PTR_TO_JSON(Layer, layer_);
            DARABONBA_PTR_TO_JSON(MatchDetail, matchDetail_);
            DARABONBA_PTR_TO_JSON(MatchList, matchList_);
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(Path, path_);
            DARABONBA_PTR_TO_JSON(UpdateCmd, updateCmd_);
            DARABONBA_PTR_TO_JSON(Version, version_);
          };
          friend void from_json(const Darabonba::Json& j, RpmEntityList& obj) { 
            DARABONBA_PTR_FROM_JSON(FullVersion, fullVersion_);
            DARABONBA_PTR_FROM_JSON(Layer, layer_);
            DARABONBA_PTR_FROM_JSON(MatchDetail, matchDetail_);
            DARABONBA_PTR_FROM_JSON(MatchList, matchList_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(Path, path_);
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
          virtual bool empty() const override { return this->fullVersion_ == nullptr
        && this->layer_ == nullptr && this->matchDetail_ == nullptr && this->matchList_ == nullptr && this->name_ == nullptr && this->path_ == nullptr
        && this->updateCmd_ == nullptr && this->version_ == nullptr; };
          // fullVersion Field Functions 
          bool hasFullVersion() const { return this->fullVersion_ != nullptr;};
          void deleteFullVersion() { this->fullVersion_ = nullptr;};
          inline string getFullVersion() const { DARABONBA_PTR_GET_DEFAULT(fullVersion_, "") };
          inline RpmEntityList& setFullVersion(string fullVersion) { DARABONBA_PTR_SET_VALUE(fullVersion_, fullVersion) };


          // layer Field Functions 
          bool hasLayer() const { return this->layer_ != nullptr;};
          void deleteLayer() { this->layer_ = nullptr;};
          inline string getLayer() const { DARABONBA_PTR_GET_DEFAULT(layer_, "") };
          inline RpmEntityList& setLayer(string layer) { DARABONBA_PTR_SET_VALUE(layer_, layer) };


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
          // The complete version number of the software package.
          shared_ptr<string> fullVersion_ {};
          // The SHA-256 value of the digest of the image layer.
          shared_ptr<string> layer_ {};
          // The information about the detected vulnerability.
          shared_ptr<string> matchDetail_ {};
          // The rule that is used to detect the vulnerability.
          shared_ptr<vector<string>> matchList_ {};
          // The name of the software package.
          shared_ptr<string> name_ {};
          // The path of the software that has the vulnerability.
          shared_ptr<string> path_ {};
          // The command that is used to fix the vulnerability.
          shared_ptr<string> updateCmd_ {};
          // The version number of the software package.
          shared_ptr<string> version_ {};
        };

        virtual bool empty() const override { return this->os_ == nullptr
        && this->osRelease_ == nullptr && this->rpmEntityList_ == nullptr; };
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


        // rpmEntityList Field Functions 
        bool hasRpmEntityList() const { return this->rpmEntityList_ != nullptr;};
        void deleteRpmEntityList() { this->rpmEntityList_ = nullptr;};
        inline const vector<ExtendContentJson::RpmEntityList> & getRpmEntityList() const { DARABONBA_PTR_GET_CONST(rpmEntityList_, vector<ExtendContentJson::RpmEntityList>) };
        inline vector<ExtendContentJson::RpmEntityList> getRpmEntityList() { DARABONBA_PTR_GET(rpmEntityList_, vector<ExtendContentJson::RpmEntityList>) };
        inline ExtendContentJson& setRpmEntityList(const vector<ExtendContentJson::RpmEntityList> & rpmEntityList) { DARABONBA_PTR_SET_VALUE(rpmEntityList_, rpmEntityList) };
        inline ExtendContentJson& setRpmEntityList(vector<ExtendContentJson::RpmEntityList> && rpmEntityList) { DARABONBA_PTR_SET_RVALUE(rpmEntityList_, rpmEntityList) };


      protected:
        // The name of the operating system.
        shared_ptr<string> os_ {};
        // The version of the operating system in the image.
        shared_ptr<string> osRelease_ {};
        // The RPM packages.
        shared_ptr<vector<ExtendContentJson::RpmEntityList>> rpmEntityList_ {};
      };

      virtual bool empty() const override { return this->aliasName_ == nullptr
        && this->canFix_ == nullptr && this->canUpdate_ == nullptr && this->clusterId_ == nullptr && this->clusterName_ == nullptr && this->containerId_ == nullptr
        && this->extendContentJson_ == nullptr && this->firstTs_ == nullptr && this->image_ == nullptr && this->imageDigest_ == nullptr && this->instanceName_ == nullptr
        && this->internetIp_ == nullptr && this->intranetIp_ == nullptr && this->lastTs_ == nullptr && this->layers_ == nullptr && this->maliciousSource_ == nullptr
        && this->modifyTs_ == nullptr && this->name_ == nullptr && this->namespace_ == nullptr && this->necessity_ == nullptr && this->pod_ == nullptr
        && this->primaryId_ == nullptr && this->related_ == nullptr && this->repoName_ == nullptr && this->repoNamespace_ == nullptr && this->scanTime_ == nullptr
        && this->status_ == nullptr && this->tag_ == nullptr && this->targetId_ == nullptr && this->targetName_ == nullptr && this->targetType_ == nullptr
        && this->type_ == nullptr && this->uuid_ == nullptr; };
      // aliasName Field Functions 
      bool hasAliasName() const { return this->aliasName_ != nullptr;};
      void deleteAliasName() { this->aliasName_ = nullptr;};
      inline string getAliasName() const { DARABONBA_PTR_GET_DEFAULT(aliasName_, "") };
      inline VulRecords& setAliasName(string aliasName) { DARABONBA_PTR_SET_VALUE(aliasName_, aliasName) };


      // canFix Field Functions 
      bool hasCanFix() const { return this->canFix_ != nullptr;};
      void deleteCanFix() { this->canFix_ = nullptr;};
      inline string getCanFix() const { DARABONBA_PTR_GET_DEFAULT(canFix_, "") };
      inline VulRecords& setCanFix(string canFix) { DARABONBA_PTR_SET_VALUE(canFix_, canFix) };


      // canUpdate Field Functions 
      bool hasCanUpdate() const { return this->canUpdate_ != nullptr;};
      void deleteCanUpdate() { this->canUpdate_ = nullptr;};
      inline bool getCanUpdate() const { DARABONBA_PTR_GET_DEFAULT(canUpdate_, false) };
      inline VulRecords& setCanUpdate(bool canUpdate) { DARABONBA_PTR_SET_VALUE(canUpdate_, canUpdate) };


      // clusterId Field Functions 
      bool hasClusterId() const { return this->clusterId_ != nullptr;};
      void deleteClusterId() { this->clusterId_ = nullptr;};
      inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
      inline VulRecords& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


      // clusterName Field Functions 
      bool hasClusterName() const { return this->clusterName_ != nullptr;};
      void deleteClusterName() { this->clusterName_ = nullptr;};
      inline string getClusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
      inline VulRecords& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


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


      // image Field Functions 
      bool hasImage() const { return this->image_ != nullptr;};
      void deleteImage() { this->image_ = nullptr;};
      inline string getImage() const { DARABONBA_PTR_GET_DEFAULT(image_, "") };
      inline VulRecords& setImage(string image) { DARABONBA_PTR_SET_VALUE(image_, image) };


      // imageDigest Field Functions 
      bool hasImageDigest() const { return this->imageDigest_ != nullptr;};
      void deleteImageDigest() { this->imageDigest_ = nullptr;};
      inline string getImageDigest() const { DARABONBA_PTR_GET_DEFAULT(imageDigest_, "") };
      inline VulRecords& setImageDigest(string imageDigest) { DARABONBA_PTR_SET_VALUE(imageDigest_, imageDigest) };


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


      // lastTs Field Functions 
      bool hasLastTs() const { return this->lastTs_ != nullptr;};
      void deleteLastTs() { this->lastTs_ = nullptr;};
      inline int64_t getLastTs() const { DARABONBA_PTR_GET_DEFAULT(lastTs_, 0L) };
      inline VulRecords& setLastTs(int64_t lastTs) { DARABONBA_PTR_SET_VALUE(lastTs_, lastTs) };


      // layers Field Functions 
      bool hasLayers() const { return this->layers_ != nullptr;};
      void deleteLayers() { this->layers_ = nullptr;};
      inline const vector<string> & getLayers() const { DARABONBA_PTR_GET_CONST(layers_, vector<string>) };
      inline vector<string> getLayers() { DARABONBA_PTR_GET(layers_, vector<string>) };
      inline VulRecords& setLayers(const vector<string> & layers) { DARABONBA_PTR_SET_VALUE(layers_, layers) };
      inline VulRecords& setLayers(vector<string> && layers) { DARABONBA_PTR_SET_RVALUE(layers_, layers) };


      // maliciousSource Field Functions 
      bool hasMaliciousSource() const { return this->maliciousSource_ != nullptr;};
      void deleteMaliciousSource() { this->maliciousSource_ = nullptr;};
      inline string getMaliciousSource() const { DARABONBA_PTR_GET_DEFAULT(maliciousSource_, "") };
      inline VulRecords& setMaliciousSource(string maliciousSource) { DARABONBA_PTR_SET_VALUE(maliciousSource_, maliciousSource) };


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


      // pod Field Functions 
      bool hasPod() const { return this->pod_ != nullptr;};
      void deletePod() { this->pod_ = nullptr;};
      inline string getPod() const { DARABONBA_PTR_GET_DEFAULT(pod_, "") };
      inline VulRecords& setPod(string pod) { DARABONBA_PTR_SET_VALUE(pod_, pod) };


      // primaryId Field Functions 
      bool hasPrimaryId() const { return this->primaryId_ != nullptr;};
      void deletePrimaryId() { this->primaryId_ = nullptr;};
      inline int64_t getPrimaryId() const { DARABONBA_PTR_GET_DEFAULT(primaryId_, 0L) };
      inline VulRecords& setPrimaryId(int64_t primaryId) { DARABONBA_PTR_SET_VALUE(primaryId_, primaryId) };


      // related Field Functions 
      bool hasRelated() const { return this->related_ != nullptr;};
      void deleteRelated() { this->related_ = nullptr;};
      inline string getRelated() const { DARABONBA_PTR_GET_DEFAULT(related_, "") };
      inline VulRecords& setRelated(string related) { DARABONBA_PTR_SET_VALUE(related_, related) };


      // repoName Field Functions 
      bool hasRepoName() const { return this->repoName_ != nullptr;};
      void deleteRepoName() { this->repoName_ = nullptr;};
      inline string getRepoName() const { DARABONBA_PTR_GET_DEFAULT(repoName_, "") };
      inline VulRecords& setRepoName(string repoName) { DARABONBA_PTR_SET_VALUE(repoName_, repoName) };


      // repoNamespace Field Functions 
      bool hasRepoNamespace() const { return this->repoNamespace_ != nullptr;};
      void deleteRepoNamespace() { this->repoNamespace_ = nullptr;};
      inline string getRepoNamespace() const { DARABONBA_PTR_GET_DEFAULT(repoNamespace_, "") };
      inline VulRecords& setRepoNamespace(string repoNamespace) { DARABONBA_PTR_SET_VALUE(repoNamespace_, repoNamespace) };


      // scanTime Field Functions 
      bool hasScanTime() const { return this->scanTime_ != nullptr;};
      void deleteScanTime() { this->scanTime_ = nullptr;};
      inline int64_t getScanTime() const { DARABONBA_PTR_GET_DEFAULT(scanTime_, 0L) };
      inline VulRecords& setScanTime(int64_t scanTime) { DARABONBA_PTR_SET_VALUE(scanTime_, scanTime) };


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


      // targetId Field Functions 
      bool hasTargetId() const { return this->targetId_ != nullptr;};
      void deleteTargetId() { this->targetId_ = nullptr;};
      inline string getTargetId() const { DARABONBA_PTR_GET_DEFAULT(targetId_, "") };
      inline VulRecords& setTargetId(string targetId) { DARABONBA_PTR_SET_VALUE(targetId_, targetId) };


      // targetName Field Functions 
      bool hasTargetName() const { return this->targetName_ != nullptr;};
      void deleteTargetName() { this->targetName_ = nullptr;};
      inline string getTargetName() const { DARABONBA_PTR_GET_DEFAULT(targetName_, "") };
      inline VulRecords& setTargetName(string targetName) { DARABONBA_PTR_SET_VALUE(targetName_, targetName) };


      // targetType Field Functions 
      bool hasTargetType() const { return this->targetType_ != nullptr;};
      void deleteTargetType() { this->targetType_ = nullptr;};
      inline string getTargetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
      inline VulRecords& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


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
      // The alias of the vulnerability.
      shared_ptr<string> aliasName_ {};
      // Indicates whether the vulnerability can be fixed in the Security Center console. Valid values:
      // 
      // *   **yes**
      // *   **no**
      shared_ptr<string> canFix_ {};
      // Indicates whether the packages of the software that has the vulnerability can be upgraded by using Security Center. Valid values:
      // 
      // *   **true**
      // *   **false**
      shared_ptr<bool> canUpdate_ {};
      // The cluster ID.
      shared_ptr<string> clusterId_ {};
      // The name of the cluster.
      shared_ptr<string> clusterName_ {};
      // The container ID.
      shared_ptr<string> containerId_ {};
      // The extended information about the vulnerability.
      shared_ptr<VulRecords::ExtendContentJson> extendContentJson_ {};
      // The timestamp generated when the vulnerability was first detected. Unit: milliseconds.
      shared_ptr<int64_t> firstTs_ {};
      // The name of the image.
      shared_ptr<string> image_ {};
      // The unique identifier of the image.
      shared_ptr<string> imageDigest_ {};
      // The name of the instance.
      // 
      // The name must be 3 to 64 characters in length and can contain letters, digits, hyphens (-), and underscores (_).
      shared_ptr<string> instanceName_ {};
      // The public IP address of the asset.
      shared_ptr<string> internetIp_ {};
      // The private IP address of the asset.
      shared_ptr<string> intranetIp_ {};
      // The timestamp generated when the vulnerability was last detected. Unit: milliseconds.
      shared_ptr<int64_t> lastTs_ {};
      // The image layers.
      shared_ptr<vector<string>> layers_ {};
      // The source of the malicious file. Valid values:
      // 
      // *   **agentless**
      // *   **image**
      // *   **container**
      shared_ptr<string> maliciousSource_ {};
      // The timestamp generated when the vulnerability status was modified. Unit: milliseconds.
      shared_ptr<int64_t> modifyTs_ {};
      // The name of the vulnerability.
      shared_ptr<string> name_ {};
      // The namespace.
      shared_ptr<string> namespace_ {};
      // The priority to fix the vulnerability. Valid values:
      // 
      // *   **asap**: high
      // *   **later**: medium
      // *   **nntf**: low
      // 
      // >  We recommend that you fix high-level vulnerabilities as soon as possible.
      shared_ptr<string> necessity_ {};
      // The name of the container group.
      shared_ptr<string> pod_ {};
      // The vulnerability ID.
      shared_ptr<int64_t> primaryId_ {};
      // The CVE IDs related to the vulnerability. Multiple CVE IDs are separated by commas (,).
      shared_ptr<string> related_ {};
      // The name of the image repository.
      shared_ptr<string> repoName_ {};
      // The namespace to which the image repository belongs.
      shared_ptr<string> repoNamespace_ {};
      // The timestamp generated when the scan task was performed. Unit: milliseconds.
      shared_ptr<int64_t> scanTime_ {};
      // The status of the vulnerability. Valid values:
      // 
      // *   **1**: The vulnerability is unfixed.
      // *   **4**: The vulnerability is being fixed.
      // *   **7**: The vulnerability is fixed.
      shared_ptr<int32_t> status_ {};
      // The tag that is added to the image.
      shared_ptr<string> tag_ {};
      // The ID of the asset that is scanned.
      shared_ptr<string> targetId_ {};
      // The name of the asset that is scanned.
      shared_ptr<string> targetName_ {};
      // The type of the asset that is scanned. Valid values:
      // 
      // *   **IMAGE**
      // *   **ECS_IMAGE**
      // *   **ECS_SNAPSHOT**
      shared_ptr<string> targetType_ {};
      // The type of the vulnerability. Valid values:
      // 
      // *   **cve**: system vulnerability
      // *   **sca**: application vulnerability
      shared_ptr<string> type_ {};
      // The UUID of the container image.
      shared_ptr<string> uuid_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->vulRecords_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCanFixVulListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // vulRecords Field Functions 
    bool hasVulRecords() const { return this->vulRecords_ != nullptr;};
    void deleteVulRecords() { this->vulRecords_ = nullptr;};
    inline const vector<DescribeCanFixVulListResponseBody::VulRecords> & getVulRecords() const { DARABONBA_PTR_GET_CONST(vulRecords_, vector<DescribeCanFixVulListResponseBody::VulRecords>) };
    inline vector<DescribeCanFixVulListResponseBody::VulRecords> getVulRecords() { DARABONBA_PTR_GET(vulRecords_, vector<DescribeCanFixVulListResponseBody::VulRecords>) };
    inline DescribeCanFixVulListResponseBody& setVulRecords(const vector<DescribeCanFixVulListResponseBody::VulRecords> & vulRecords) { DARABONBA_PTR_SET_VALUE(vulRecords_, vulRecords) };
    inline DescribeCanFixVulListResponseBody& setVulRecords(vector<DescribeCanFixVulListResponseBody::VulRecords> && vulRecords) { DARABONBA_PTR_SET_RVALUE(vulRecords_, vulRecords) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The information about the vulnerability.
    shared_ptr<vector<DescribeCanFixVulListResponseBody::VulRecords>> vulRecords_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
