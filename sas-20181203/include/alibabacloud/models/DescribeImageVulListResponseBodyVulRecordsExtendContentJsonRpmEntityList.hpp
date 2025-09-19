// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMAGEVULLISTRESPONSEBODYVULRECORDSEXTENDCONTENTJSONRPMENTITYLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMAGEVULLISTRESPONSEBODYVULRECORDSEXTENDCONTENTJSONRPMENTITYLIST_HPP_
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
  class DescribeImageVulListResponseBodyVulRecordsExtendContentJsonRpmEntityList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImageVulListResponseBodyVulRecordsExtendContentJsonRpmEntityList& obj) { 
      DARABONBA_PTR_TO_JSON(FullVersion, fullVersion_);
      DARABONBA_PTR_TO_JSON(Layer, layer_);
      DARABONBA_PTR_TO_JSON(MatchDetail, matchDetail_);
      DARABONBA_PTR_TO_JSON(MatchList, matchList_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Path, path_);
      DARABONBA_PTR_TO_JSON(UpdateCmd, updateCmd_);
      DARABONBA_PTR_TO_JSON(Version, version_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImageVulListResponseBodyVulRecordsExtendContentJsonRpmEntityList& obj) { 
      DARABONBA_PTR_FROM_JSON(FullVersion, fullVersion_);
      DARABONBA_PTR_FROM_JSON(Layer, layer_);
      DARABONBA_PTR_FROM_JSON(MatchDetail, matchDetail_);
      DARABONBA_PTR_FROM_JSON(MatchList, matchList_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Path, path_);
      DARABONBA_PTR_FROM_JSON(UpdateCmd, updateCmd_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
    };
    DescribeImageVulListResponseBodyVulRecordsExtendContentJsonRpmEntityList() = default ;
    DescribeImageVulListResponseBodyVulRecordsExtendContentJsonRpmEntityList(const DescribeImageVulListResponseBodyVulRecordsExtendContentJsonRpmEntityList &) = default ;
    DescribeImageVulListResponseBodyVulRecordsExtendContentJsonRpmEntityList(DescribeImageVulListResponseBodyVulRecordsExtendContentJsonRpmEntityList &&) = default ;
    DescribeImageVulListResponseBodyVulRecordsExtendContentJsonRpmEntityList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeImageVulListResponseBodyVulRecordsExtendContentJsonRpmEntityList() = default ;
    DescribeImageVulListResponseBodyVulRecordsExtendContentJsonRpmEntityList& operator=(const DescribeImageVulListResponseBodyVulRecordsExtendContentJsonRpmEntityList &) = default ;
    DescribeImageVulListResponseBodyVulRecordsExtendContentJsonRpmEntityList& operator=(DescribeImageVulListResponseBodyVulRecordsExtendContentJsonRpmEntityList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->fullVersion_ != nullptr
        && this->layer_ != nullptr && this->matchDetail_ != nullptr && this->matchList_ != nullptr && this->name_ != nullptr && this->path_ != nullptr
        && this->updateCmd_ != nullptr && this->version_ != nullptr; };
    // fullVersion Field Functions 
    bool hasFullVersion() const { return this->fullVersion_ != nullptr;};
    void deleteFullVersion() { this->fullVersion_ = nullptr;};
    inline string fullVersion() const { DARABONBA_PTR_GET_DEFAULT(fullVersion_, "") };
    inline DescribeImageVulListResponseBodyVulRecordsExtendContentJsonRpmEntityList& setFullVersion(string fullVersion) { DARABONBA_PTR_SET_VALUE(fullVersion_, fullVersion) };


    // layer Field Functions 
    bool hasLayer() const { return this->layer_ != nullptr;};
    void deleteLayer() { this->layer_ = nullptr;};
    inline string layer() const { DARABONBA_PTR_GET_DEFAULT(layer_, "") };
    inline DescribeImageVulListResponseBodyVulRecordsExtendContentJsonRpmEntityList& setLayer(string layer) { DARABONBA_PTR_SET_VALUE(layer_, layer) };


    // matchDetail Field Functions 
    bool hasMatchDetail() const { return this->matchDetail_ != nullptr;};
    void deleteMatchDetail() { this->matchDetail_ = nullptr;};
    inline string matchDetail() const { DARABONBA_PTR_GET_DEFAULT(matchDetail_, "") };
    inline DescribeImageVulListResponseBodyVulRecordsExtendContentJsonRpmEntityList& setMatchDetail(string matchDetail) { DARABONBA_PTR_SET_VALUE(matchDetail_, matchDetail) };


    // matchList Field Functions 
    bool hasMatchList() const { return this->matchList_ != nullptr;};
    void deleteMatchList() { this->matchList_ = nullptr;};
    inline const vector<string> & matchList() const { DARABONBA_PTR_GET_CONST(matchList_, vector<string>) };
    inline vector<string> matchList() { DARABONBA_PTR_GET(matchList_, vector<string>) };
    inline DescribeImageVulListResponseBodyVulRecordsExtendContentJsonRpmEntityList& setMatchList(const vector<string> & matchList) { DARABONBA_PTR_SET_VALUE(matchList_, matchList) };
    inline DescribeImageVulListResponseBodyVulRecordsExtendContentJsonRpmEntityList& setMatchList(vector<string> && matchList) { DARABONBA_PTR_SET_RVALUE(matchList_, matchList) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeImageVulListResponseBodyVulRecordsExtendContentJsonRpmEntityList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string path() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline DescribeImageVulListResponseBodyVulRecordsExtendContentJsonRpmEntityList& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


    // updateCmd Field Functions 
    bool hasUpdateCmd() const { return this->updateCmd_ != nullptr;};
    void deleteUpdateCmd() { this->updateCmd_ = nullptr;};
    inline string updateCmd() const { DARABONBA_PTR_GET_DEFAULT(updateCmd_, "") };
    inline DescribeImageVulListResponseBodyVulRecordsExtendContentJsonRpmEntityList& setUpdateCmd(string updateCmd) { DARABONBA_PTR_SET_VALUE(updateCmd_, updateCmd) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline DescribeImageVulListResponseBodyVulRecordsExtendContentJsonRpmEntityList& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // The complete version number of the package.
    std::shared_ptr<string> fullVersion_ = nullptr;
    // The SHA-256 value of the digest of the image layer.
    std::shared_ptr<string> layer_ = nullptr;
    // The reason why the vulnerability is detected.
    std::shared_ptr<string> matchDetail_ = nullptr;
    // The details of the rule that is used to detect the vulnerability.
    std::shared_ptr<vector<string>> matchList_ = nullptr;
    // The name of the software package.
    std::shared_ptr<string> name_ = nullptr;
    // The path of the software that has the vulnerability.
    std::shared_ptr<string> path_ = nullptr;
    // The command that is used to fix the vulnerability.
    std::shared_ptr<string> updateCmd_ = nullptr;
    // The version number of the package.
    std::shared_ptr<string> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
