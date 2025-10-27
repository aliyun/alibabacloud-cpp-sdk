// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVULLISTRESPONSEBODYVULRECORDSEXTENDCONTENTJSONRPMENTITYLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVULLISTRESPONSEBODYVULRECORDSEXTENDCONTENTJSONRPMENTITYLIST_HPP_
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
  class DescribeVulListResponseBodyVulRecordsExtendContentJsonRpmEntityList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVulListResponseBodyVulRecordsExtendContentJsonRpmEntityList& obj) { 
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
    friend void from_json(const Darabonba::Json& j, DescribeVulListResponseBodyVulRecordsExtendContentJsonRpmEntityList& obj) { 
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
    DescribeVulListResponseBodyVulRecordsExtendContentJsonRpmEntityList() = default ;
    DescribeVulListResponseBodyVulRecordsExtendContentJsonRpmEntityList(const DescribeVulListResponseBodyVulRecordsExtendContentJsonRpmEntityList &) = default ;
    DescribeVulListResponseBodyVulRecordsExtendContentJsonRpmEntityList(DescribeVulListResponseBodyVulRecordsExtendContentJsonRpmEntityList &&) = default ;
    DescribeVulListResponseBodyVulRecordsExtendContentJsonRpmEntityList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVulListResponseBodyVulRecordsExtendContentJsonRpmEntityList() = default ;
    DescribeVulListResponseBodyVulRecordsExtendContentJsonRpmEntityList& operator=(const DescribeVulListResponseBodyVulRecordsExtendContentJsonRpmEntityList &) = default ;
    DescribeVulListResponseBodyVulRecordsExtendContentJsonRpmEntityList& operator=(DescribeVulListResponseBodyVulRecordsExtendContentJsonRpmEntityList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->containerName_ == nullptr
        && return this->extendField_ == nullptr && return this->fullVersion_ == nullptr && return this->imageName_ == nullptr && return this->matchDetail_ == nullptr && return this->matchList_ == nullptr
        && return this->name_ == nullptr && return this->path_ == nullptr && return this->pid_ == nullptr && return this->updateCmd_ == nullptr && return this->version_ == nullptr; };
    // containerName Field Functions 
    bool hasContainerName() const { return this->containerName_ != nullptr;};
    void deleteContainerName() { this->containerName_ = nullptr;};
    inline string containerName() const { DARABONBA_PTR_GET_DEFAULT(containerName_, "") };
    inline DescribeVulListResponseBodyVulRecordsExtendContentJsonRpmEntityList& setContainerName(string containerName) { DARABONBA_PTR_SET_VALUE(containerName_, containerName) };


    // extendField Field Functions 
    bool hasExtendField() const { return this->extendField_ != nullptr;};
    void deleteExtendField() { this->extendField_ = nullptr;};
    inline string extendField() const { DARABONBA_PTR_GET_DEFAULT(extendField_, "") };
    inline DescribeVulListResponseBodyVulRecordsExtendContentJsonRpmEntityList& setExtendField(string extendField) { DARABONBA_PTR_SET_VALUE(extendField_, extendField) };


    // fullVersion Field Functions 
    bool hasFullVersion() const { return this->fullVersion_ != nullptr;};
    void deleteFullVersion() { this->fullVersion_ = nullptr;};
    inline string fullVersion() const { DARABONBA_PTR_GET_DEFAULT(fullVersion_, "") };
    inline DescribeVulListResponseBodyVulRecordsExtendContentJsonRpmEntityList& setFullVersion(string fullVersion) { DARABONBA_PTR_SET_VALUE(fullVersion_, fullVersion) };


    // imageName Field Functions 
    bool hasImageName() const { return this->imageName_ != nullptr;};
    void deleteImageName() { this->imageName_ = nullptr;};
    inline string imageName() const { DARABONBA_PTR_GET_DEFAULT(imageName_, "") };
    inline DescribeVulListResponseBodyVulRecordsExtendContentJsonRpmEntityList& setImageName(string imageName) { DARABONBA_PTR_SET_VALUE(imageName_, imageName) };


    // matchDetail Field Functions 
    bool hasMatchDetail() const { return this->matchDetail_ != nullptr;};
    void deleteMatchDetail() { this->matchDetail_ = nullptr;};
    inline string matchDetail() const { DARABONBA_PTR_GET_DEFAULT(matchDetail_, "") };
    inline DescribeVulListResponseBodyVulRecordsExtendContentJsonRpmEntityList& setMatchDetail(string matchDetail) { DARABONBA_PTR_SET_VALUE(matchDetail_, matchDetail) };


    // matchList Field Functions 
    bool hasMatchList() const { return this->matchList_ != nullptr;};
    void deleteMatchList() { this->matchList_ = nullptr;};
    inline const vector<string> & matchList() const { DARABONBA_PTR_GET_CONST(matchList_, vector<string>) };
    inline vector<string> matchList() { DARABONBA_PTR_GET(matchList_, vector<string>) };
    inline DescribeVulListResponseBodyVulRecordsExtendContentJsonRpmEntityList& setMatchList(const vector<string> & matchList) { DARABONBA_PTR_SET_VALUE(matchList_, matchList) };
    inline DescribeVulListResponseBodyVulRecordsExtendContentJsonRpmEntityList& setMatchList(vector<string> && matchList) { DARABONBA_PTR_SET_RVALUE(matchList_, matchList) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeVulListResponseBodyVulRecordsExtendContentJsonRpmEntityList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string path() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline DescribeVulListResponseBodyVulRecordsExtendContentJsonRpmEntityList& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


    // pid Field Functions 
    bool hasPid() const { return this->pid_ != nullptr;};
    void deletePid() { this->pid_ = nullptr;};
    inline string pid() const { DARABONBA_PTR_GET_DEFAULT(pid_, "") };
    inline DescribeVulListResponseBodyVulRecordsExtendContentJsonRpmEntityList& setPid(string pid) { DARABONBA_PTR_SET_VALUE(pid_, pid) };


    // updateCmd Field Functions 
    bool hasUpdateCmd() const { return this->updateCmd_ != nullptr;};
    void deleteUpdateCmd() { this->updateCmd_ = nullptr;};
    inline string updateCmd() const { DARABONBA_PTR_GET_DEFAULT(updateCmd_, "") };
    inline DescribeVulListResponseBodyVulRecordsExtendContentJsonRpmEntityList& setUpdateCmd(string updateCmd) { DARABONBA_PTR_SET_VALUE(updateCmd_, updateCmd) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline DescribeVulListResponseBodyVulRecordsExtendContentJsonRpmEntityList& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // The name of the container.
    std::shared_ptr<string> containerName_ = nullptr;
    // The extended information about the software package that has the vulnerability.
    std::shared_ptr<string> extendField_ = nullptr;
    // The complete version number.
    std::shared_ptr<string> fullVersion_ = nullptr;
    // The name of the image.
    std::shared_ptr<string> imageName_ = nullptr;
    // The reason why the vulnerability is detected.
    std::shared_ptr<string> matchDetail_ = nullptr;
    // The rules that are used to detect the vulnerability.
    std::shared_ptr<vector<string>> matchList_ = nullptr;
    // The name of the RPM package.
    std::shared_ptr<string> name_ = nullptr;
    // The path to the software that has the vulnerability.
    std::shared_ptr<string> path_ = nullptr;
    // The process ID.
    std::shared_ptr<string> pid_ = nullptr;
    // The command that is used to fix the vulnerability.
    std::shared_ptr<string> updateCmd_ = nullptr;
    // The version number of the package of the software that has the vulnerability.
    std::shared_ptr<string> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
