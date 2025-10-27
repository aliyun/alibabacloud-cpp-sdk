// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVULLISTRESPONSEBODYVULRECORDSEXTENDCONTENTJSON_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVULLISTRESPONSEBODYVULRECORDSEXTENDCONTENTJSON_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeVulListResponseBodyVulRecordsExtendContentJsonNecessity.hpp>
#include <vector>
#include <alibabacloud/models/DescribeVulListResponseBodyVulRecordsExtendContentJsonRpmEntityList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeVulListResponseBodyVulRecordsExtendContentJson : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVulListResponseBodyVulRecordsExtendContentJson& obj) { 
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
    friend void from_json(const Darabonba::Json& j, DescribeVulListResponseBodyVulRecordsExtendContentJson& obj) { 
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
    DescribeVulListResponseBodyVulRecordsExtendContentJson() = default ;
    DescribeVulListResponseBodyVulRecordsExtendContentJson(const DescribeVulListResponseBodyVulRecordsExtendContentJson &) = default ;
    DescribeVulListResponseBodyVulRecordsExtendContentJson(DescribeVulListResponseBodyVulRecordsExtendContentJson &&) = default ;
    DescribeVulListResponseBodyVulRecordsExtendContentJson(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVulListResponseBodyVulRecordsExtendContentJson() = default ;
    DescribeVulListResponseBodyVulRecordsExtendContentJson& operator=(const DescribeVulListResponseBodyVulRecordsExtendContentJson &) = default ;
    DescribeVulListResponseBodyVulRecordsExtendContentJson& operator=(DescribeVulListResponseBodyVulRecordsExtendContentJson &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->absolutePath_ == nullptr
        && return this->aliasName_ == nullptr && return this->description_ == nullptr && return this->emgProof_ == nullptr && return this->ip_ == nullptr && return this->lastTs_ == nullptr
        && return this->necessity_ == nullptr && return this->os_ == nullptr && return this->osRelease_ == nullptr && return this->primaryId_ == nullptr && return this->rpmEntityList_ == nullptr
        && return this->status_ == nullptr && return this->tag_ == nullptr && return this->target_ == nullptr && return this->cveList_ == nullptr; };
    // absolutePath Field Functions 
    bool hasAbsolutePath() const { return this->absolutePath_ != nullptr;};
    void deleteAbsolutePath() { this->absolutePath_ = nullptr;};
    inline string absolutePath() const { DARABONBA_PTR_GET_DEFAULT(absolutePath_, "") };
    inline DescribeVulListResponseBodyVulRecordsExtendContentJson& setAbsolutePath(string absolutePath) { DARABONBA_PTR_SET_VALUE(absolutePath_, absolutePath) };


    // aliasName Field Functions 
    bool hasAliasName() const { return this->aliasName_ != nullptr;};
    void deleteAliasName() { this->aliasName_ = nullptr;};
    inline string aliasName() const { DARABONBA_PTR_GET_DEFAULT(aliasName_, "") };
    inline DescribeVulListResponseBodyVulRecordsExtendContentJson& setAliasName(string aliasName) { DARABONBA_PTR_SET_VALUE(aliasName_, aliasName) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeVulListResponseBodyVulRecordsExtendContentJson& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // emgProof Field Functions 
    bool hasEmgProof() const { return this->emgProof_ != nullptr;};
    void deleteEmgProof() { this->emgProof_ = nullptr;};
    inline string emgProof() const { DARABONBA_PTR_GET_DEFAULT(emgProof_, "") };
    inline DescribeVulListResponseBodyVulRecordsExtendContentJson& setEmgProof(string emgProof) { DARABONBA_PTR_SET_VALUE(emgProof_, emgProof) };


    // ip Field Functions 
    bool hasIp() const { return this->ip_ != nullptr;};
    void deleteIp() { this->ip_ = nullptr;};
    inline string ip() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
    inline DescribeVulListResponseBodyVulRecordsExtendContentJson& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


    // lastTs Field Functions 
    bool hasLastTs() const { return this->lastTs_ != nullptr;};
    void deleteLastTs() { this->lastTs_ = nullptr;};
    inline int64_t lastTs() const { DARABONBA_PTR_GET_DEFAULT(lastTs_, 0L) };
    inline DescribeVulListResponseBodyVulRecordsExtendContentJson& setLastTs(int64_t lastTs) { DARABONBA_PTR_SET_VALUE(lastTs_, lastTs) };


    // necessity Field Functions 
    bool hasNecessity() const { return this->necessity_ != nullptr;};
    void deleteNecessity() { this->necessity_ = nullptr;};
    inline const Models::DescribeVulListResponseBodyVulRecordsExtendContentJsonNecessity & necessity() const { DARABONBA_PTR_GET_CONST(necessity_, Models::DescribeVulListResponseBodyVulRecordsExtendContentJsonNecessity) };
    inline Models::DescribeVulListResponseBodyVulRecordsExtendContentJsonNecessity necessity() { DARABONBA_PTR_GET(necessity_, Models::DescribeVulListResponseBodyVulRecordsExtendContentJsonNecessity) };
    inline DescribeVulListResponseBodyVulRecordsExtendContentJson& setNecessity(const Models::DescribeVulListResponseBodyVulRecordsExtendContentJsonNecessity & necessity) { DARABONBA_PTR_SET_VALUE(necessity_, necessity) };
    inline DescribeVulListResponseBodyVulRecordsExtendContentJson& setNecessity(Models::DescribeVulListResponseBodyVulRecordsExtendContentJsonNecessity && necessity) { DARABONBA_PTR_SET_RVALUE(necessity_, necessity) };


    // os Field Functions 
    bool hasOs() const { return this->os_ != nullptr;};
    void deleteOs() { this->os_ = nullptr;};
    inline string os() const { DARABONBA_PTR_GET_DEFAULT(os_, "") };
    inline DescribeVulListResponseBodyVulRecordsExtendContentJson& setOs(string os) { DARABONBA_PTR_SET_VALUE(os_, os) };


    // osRelease Field Functions 
    bool hasOsRelease() const { return this->osRelease_ != nullptr;};
    void deleteOsRelease() { this->osRelease_ = nullptr;};
    inline string osRelease() const { DARABONBA_PTR_GET_DEFAULT(osRelease_, "") };
    inline DescribeVulListResponseBodyVulRecordsExtendContentJson& setOsRelease(string osRelease) { DARABONBA_PTR_SET_VALUE(osRelease_, osRelease) };


    // primaryId Field Functions 
    bool hasPrimaryId() const { return this->primaryId_ != nullptr;};
    void deletePrimaryId() { this->primaryId_ = nullptr;};
    inline int64_t primaryId() const { DARABONBA_PTR_GET_DEFAULT(primaryId_, 0L) };
    inline DescribeVulListResponseBodyVulRecordsExtendContentJson& setPrimaryId(int64_t primaryId) { DARABONBA_PTR_SET_VALUE(primaryId_, primaryId) };


    // rpmEntityList Field Functions 
    bool hasRpmEntityList() const { return this->rpmEntityList_ != nullptr;};
    void deleteRpmEntityList() { this->rpmEntityList_ = nullptr;};
    inline const vector<Models::DescribeVulListResponseBodyVulRecordsExtendContentJsonRpmEntityList> & rpmEntityList() const { DARABONBA_PTR_GET_CONST(rpmEntityList_, vector<Models::DescribeVulListResponseBodyVulRecordsExtendContentJsonRpmEntityList>) };
    inline vector<Models::DescribeVulListResponseBodyVulRecordsExtendContentJsonRpmEntityList> rpmEntityList() { DARABONBA_PTR_GET(rpmEntityList_, vector<Models::DescribeVulListResponseBodyVulRecordsExtendContentJsonRpmEntityList>) };
    inline DescribeVulListResponseBodyVulRecordsExtendContentJson& setRpmEntityList(const vector<Models::DescribeVulListResponseBodyVulRecordsExtendContentJsonRpmEntityList> & rpmEntityList) { DARABONBA_PTR_SET_VALUE(rpmEntityList_, rpmEntityList) };
    inline DescribeVulListResponseBodyVulRecordsExtendContentJson& setRpmEntityList(vector<Models::DescribeVulListResponseBodyVulRecordsExtendContentJsonRpmEntityList> && rpmEntityList) { DARABONBA_PTR_SET_RVALUE(rpmEntityList_, rpmEntityList) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeVulListResponseBodyVulRecordsExtendContentJson& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline string tag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
    inline DescribeVulListResponseBodyVulRecordsExtendContentJson& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


    // target Field Functions 
    bool hasTarget() const { return this->target_ != nullptr;};
    void deleteTarget() { this->target_ = nullptr;};
    inline string target() const { DARABONBA_PTR_GET_DEFAULT(target_, "") };
    inline DescribeVulListResponseBodyVulRecordsExtendContentJson& setTarget(string target) { DARABONBA_PTR_SET_VALUE(target_, target) };


    // cveList Field Functions 
    bool hasCveList() const { return this->cveList_ != nullptr;};
    void deleteCveList() { this->cveList_ = nullptr;};
    inline const vector<string> & cveList() const { DARABONBA_PTR_GET_CONST(cveList_, vector<string>) };
    inline vector<string> cveList() { DARABONBA_PTR_GET(cveList_, vector<string>) };
    inline DescribeVulListResponseBodyVulRecordsExtendContentJson& setCveList(const vector<string> & cveList) { DARABONBA_PTR_SET_VALUE(cveList_, cveList) };
    inline DescribeVulListResponseBodyVulRecordsExtendContentJson& setCveList(vector<string> && cveList) { DARABONBA_PTR_SET_RVALUE(cveList_, cveList) };


  protected:
    // The path to the package of the software that has the vulnerability.
    std::shared_ptr<string> absolutePath_ = nullptr;
    // The name of the vulnerability.
    std::shared_ptr<string> aliasName_ = nullptr;
    // The description of the vulnerability.
    std::shared_ptr<string> description_ = nullptr;
    // The returned message that indicates the urgent vulnerability.
    std::shared_ptr<string> emgProof_ = nullptr;
    // The public IP address of the asset that is associated with the vulnerability.
    std::shared_ptr<string> ip_ = nullptr;
    // The timestamp when the vulnerability was last detected. Unit: milliseconds.
    std::shared_ptr<int64_t> lastTs_ = nullptr;
    // Indicates whether the vulnerability needs to be fixed.
    std::shared_ptr<Models::DescribeVulListResponseBodyVulRecordsExtendContentJsonNecessity> necessity_ = nullptr;
    // The name of the operating system.
    std::shared_ptr<string> os_ = nullptr;
    // The information about the operating system version.
    std::shared_ptr<string> osRelease_ = nullptr;
    // The ID of the vulnerability.
    std::shared_ptr<int64_t> primaryId_ = nullptr;
    // The information about RPM Package Manager (RPM) packages.
    std::shared_ptr<vector<Models::DescribeVulListResponseBodyVulRecordsExtendContentJsonRpmEntityList>> rpmEntityList_ = nullptr;
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
    std::shared_ptr<string> status_ = nullptr;
    // The tag that is added to the vulnerability.
    std::shared_ptr<string> tag_ = nullptr;
    // The URL of the vulnerability.
    std::shared_ptr<string> target_ = nullptr;
    // The CVE list.
    std::shared_ptr<vector<string>> cveList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
