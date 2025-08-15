// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRELEASEVERSIONSRESPONSEBODYRELEASEVERSIONS_HPP_
#define ALIBABACLOUD_MODELS_LISTRELEASEVERSIONSRESPONSEBODYRELEASEVERSIONS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrServerlessSpark20230808
{
namespace Models
{
  class ListReleaseVersionsResponseBodyReleaseVersions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListReleaseVersionsResponseBodyReleaseVersions& obj) { 
      DARABONBA_PTR_TO_JSON(communityVersion, communityVersion_);
      DARABONBA_PTR_TO_JSON(cpuArchitectures, cpuArchitectures_);
      DARABONBA_PTR_TO_JSON(displayReleaseVersion, displayReleaseVersion_);
      DARABONBA_PTR_TO_JSON(fusion, fusion_);
      DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(iaasType, iaasType_);
      DARABONBA_PTR_TO_JSON(releaseVersion, releaseVersion_);
      DARABONBA_PTR_TO_JSON(scalaVersion, scalaVersion_);
      DARABONBA_PTR_TO_JSON(state, state_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListReleaseVersionsResponseBodyReleaseVersions& obj) { 
      DARABONBA_PTR_FROM_JSON(communityVersion, communityVersion_);
      DARABONBA_PTR_FROM_JSON(cpuArchitectures, cpuArchitectures_);
      DARABONBA_PTR_FROM_JSON(displayReleaseVersion, displayReleaseVersion_);
      DARABONBA_PTR_FROM_JSON(fusion, fusion_);
      DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(iaasType, iaasType_);
      DARABONBA_PTR_FROM_JSON(releaseVersion, releaseVersion_);
      DARABONBA_PTR_FROM_JSON(scalaVersion, scalaVersion_);
      DARABONBA_PTR_FROM_JSON(state, state_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    ListReleaseVersionsResponseBodyReleaseVersions() = default ;
    ListReleaseVersionsResponseBodyReleaseVersions(const ListReleaseVersionsResponseBodyReleaseVersions &) = default ;
    ListReleaseVersionsResponseBodyReleaseVersions(ListReleaseVersionsResponseBodyReleaseVersions &&) = default ;
    ListReleaseVersionsResponseBodyReleaseVersions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListReleaseVersionsResponseBodyReleaseVersions() = default ;
    ListReleaseVersionsResponseBodyReleaseVersions& operator=(const ListReleaseVersionsResponseBodyReleaseVersions &) = default ;
    ListReleaseVersionsResponseBodyReleaseVersions& operator=(ListReleaseVersionsResponseBodyReleaseVersions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->communityVersion_ != nullptr
        && this->cpuArchitectures_ != nullptr && this->displayReleaseVersion_ != nullptr && this->fusion_ != nullptr && this->gmtCreate_ != nullptr && this->iaasType_ != nullptr
        && this->releaseVersion_ != nullptr && this->scalaVersion_ != nullptr && this->state_ != nullptr && this->type_ != nullptr; };
    // communityVersion Field Functions 
    bool hasCommunityVersion() const { return this->communityVersion_ != nullptr;};
    void deleteCommunityVersion() { this->communityVersion_ = nullptr;};
    inline string communityVersion() const { DARABONBA_PTR_GET_DEFAULT(communityVersion_, "") };
    inline ListReleaseVersionsResponseBodyReleaseVersions& setCommunityVersion(string communityVersion) { DARABONBA_PTR_SET_VALUE(communityVersion_, communityVersion) };


    // cpuArchitectures Field Functions 
    bool hasCpuArchitectures() const { return this->cpuArchitectures_ != nullptr;};
    void deleteCpuArchitectures() { this->cpuArchitectures_ = nullptr;};
    inline const vector<string> & cpuArchitectures() const { DARABONBA_PTR_GET_CONST(cpuArchitectures_, vector<string>) };
    inline vector<string> cpuArchitectures() { DARABONBA_PTR_GET(cpuArchitectures_, vector<string>) };
    inline ListReleaseVersionsResponseBodyReleaseVersions& setCpuArchitectures(const vector<string> & cpuArchitectures) { DARABONBA_PTR_SET_VALUE(cpuArchitectures_, cpuArchitectures) };
    inline ListReleaseVersionsResponseBodyReleaseVersions& setCpuArchitectures(vector<string> && cpuArchitectures) { DARABONBA_PTR_SET_RVALUE(cpuArchitectures_, cpuArchitectures) };


    // displayReleaseVersion Field Functions 
    bool hasDisplayReleaseVersion() const { return this->displayReleaseVersion_ != nullptr;};
    void deleteDisplayReleaseVersion() { this->displayReleaseVersion_ = nullptr;};
    inline string displayReleaseVersion() const { DARABONBA_PTR_GET_DEFAULT(displayReleaseVersion_, "") };
    inline ListReleaseVersionsResponseBodyReleaseVersions& setDisplayReleaseVersion(string displayReleaseVersion) { DARABONBA_PTR_SET_VALUE(displayReleaseVersion_, displayReleaseVersion) };


    // fusion Field Functions 
    bool hasFusion() const { return this->fusion_ != nullptr;};
    void deleteFusion() { this->fusion_ = nullptr;};
    inline bool fusion() const { DARABONBA_PTR_GET_DEFAULT(fusion_, false) };
    inline ListReleaseVersionsResponseBodyReleaseVersions& setFusion(bool fusion) { DARABONBA_PTR_SET_VALUE(fusion_, fusion) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline int64_t gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
    inline ListReleaseVersionsResponseBodyReleaseVersions& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // iaasType Field Functions 
    bool hasIaasType() const { return this->iaasType_ != nullptr;};
    void deleteIaasType() { this->iaasType_ = nullptr;};
    inline string iaasType() const { DARABONBA_PTR_GET_DEFAULT(iaasType_, "") };
    inline ListReleaseVersionsResponseBodyReleaseVersions& setIaasType(string iaasType) { DARABONBA_PTR_SET_VALUE(iaasType_, iaasType) };


    // releaseVersion Field Functions 
    bool hasReleaseVersion() const { return this->releaseVersion_ != nullptr;};
    void deleteReleaseVersion() { this->releaseVersion_ = nullptr;};
    inline string releaseVersion() const { DARABONBA_PTR_GET_DEFAULT(releaseVersion_, "") };
    inline ListReleaseVersionsResponseBodyReleaseVersions& setReleaseVersion(string releaseVersion) { DARABONBA_PTR_SET_VALUE(releaseVersion_, releaseVersion) };


    // scalaVersion Field Functions 
    bool hasScalaVersion() const { return this->scalaVersion_ != nullptr;};
    void deleteScalaVersion() { this->scalaVersion_ = nullptr;};
    inline string scalaVersion() const { DARABONBA_PTR_GET_DEFAULT(scalaVersion_, "") };
    inline ListReleaseVersionsResponseBodyReleaseVersions& setScalaVersion(string scalaVersion) { DARABONBA_PTR_SET_VALUE(scalaVersion_, scalaVersion) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline ListReleaseVersionsResponseBodyReleaseVersions& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListReleaseVersionsResponseBodyReleaseVersions& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The version number of open source Spark.
    std::shared_ptr<string> communityVersion_ = nullptr;
    // The CPU architectures.
    std::shared_ptr<vector<string>> cpuArchitectures_ = nullptr;
    // The version number.
    std::shared_ptr<string> displayReleaseVersion_ = nullptr;
    // Indicates whether the Fusion engine is used for acceleration.
    std::shared_ptr<bool> fusion_ = nullptr;
    // The creation time.
    std::shared_ptr<int64_t> gmtCreate_ = nullptr;
    // The type of the Infrastructure as a Service (IaaS) layer.
    std::shared_ptr<string> iaasType_ = nullptr;
    // The version number.
    std::shared_ptr<string> releaseVersion_ = nullptr;
    // The version of Scala.
    std::shared_ptr<string> scalaVersion_ = nullptr;
    // The status of the version.
    std::shared_ptr<string> state_ = nullptr;
    // The type of the version.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
