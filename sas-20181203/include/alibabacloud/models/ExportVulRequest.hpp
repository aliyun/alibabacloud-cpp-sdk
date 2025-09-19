// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXPORTVULREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EXPORTVULREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ExportVulRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExportVulRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AliasName, aliasName_);
      DARABONBA_PTR_TO_JSON(AttachTypes, attachTypes_);
      DARABONBA_PTR_TO_JSON(ContainerName, containerName_);
      DARABONBA_PTR_TO_JSON(CreateTsEnd, createTsEnd_);
      DARABONBA_PTR_TO_JSON(CreateTsStart, createTsStart_);
      DARABONBA_PTR_TO_JSON(CveId, cveId_);
      DARABONBA_PTR_TO_JSON(Dealed, dealed_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(ImageName, imageName_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(Necessity, necessity_);
      DARABONBA_PTR_TO_JSON(Path, path_);
      DARABONBA_PTR_TO_JSON(RaspDefend, raspDefend_);
      DARABONBA_PTR_TO_JSON(SearchTags, searchTags_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Uuids, uuids_);
      DARABONBA_PTR_TO_JSON(VpcInstanceIds, vpcInstanceIds_);
    };
    friend void from_json(const Darabonba::Json& j, ExportVulRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AliasName, aliasName_);
      DARABONBA_PTR_FROM_JSON(AttachTypes, attachTypes_);
      DARABONBA_PTR_FROM_JSON(ContainerName, containerName_);
      DARABONBA_PTR_FROM_JSON(CreateTsEnd, createTsEnd_);
      DARABONBA_PTR_FROM_JSON(CreateTsStart, createTsStart_);
      DARABONBA_PTR_FROM_JSON(CveId, cveId_);
      DARABONBA_PTR_FROM_JSON(Dealed, dealed_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(ImageName, imageName_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(Necessity, necessity_);
      DARABONBA_PTR_FROM_JSON(Path, path_);
      DARABONBA_PTR_FROM_JSON(RaspDefend, raspDefend_);
      DARABONBA_PTR_FROM_JSON(SearchTags, searchTags_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Uuids, uuids_);
      DARABONBA_PTR_FROM_JSON(VpcInstanceIds, vpcInstanceIds_);
    };
    ExportVulRequest() = default ;
    ExportVulRequest(const ExportVulRequest &) = default ;
    ExportVulRequest(ExportVulRequest &&) = default ;
    ExportVulRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExportVulRequest() = default ;
    ExportVulRequest& operator=(const ExportVulRequest &) = default ;
    ExportVulRequest& operator=(ExportVulRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->aliasName_ != nullptr
        && this->attachTypes_ != nullptr && this->containerName_ != nullptr && this->createTsEnd_ != nullptr && this->createTsStart_ != nullptr && this->cveId_ != nullptr
        && this->dealed_ != nullptr && this->groupId_ != nullptr && this->imageName_ != nullptr && this->lang_ != nullptr && this->necessity_ != nullptr
        && this->path_ != nullptr && this->raspDefend_ != nullptr && this->searchTags_ != nullptr && this->type_ != nullptr && this->uuids_ != nullptr
        && this->vpcInstanceIds_ != nullptr; };
    // aliasName Field Functions 
    bool hasAliasName() const { return this->aliasName_ != nullptr;};
    void deleteAliasName() { this->aliasName_ = nullptr;};
    inline string aliasName() const { DARABONBA_PTR_GET_DEFAULT(aliasName_, "") };
    inline ExportVulRequest& setAliasName(string aliasName) { DARABONBA_PTR_SET_VALUE(aliasName_, aliasName) };


    // attachTypes Field Functions 
    bool hasAttachTypes() const { return this->attachTypes_ != nullptr;};
    void deleteAttachTypes() { this->attachTypes_ = nullptr;};
    inline string attachTypes() const { DARABONBA_PTR_GET_DEFAULT(attachTypes_, "") };
    inline ExportVulRequest& setAttachTypes(string attachTypes) { DARABONBA_PTR_SET_VALUE(attachTypes_, attachTypes) };


    // containerName Field Functions 
    bool hasContainerName() const { return this->containerName_ != nullptr;};
    void deleteContainerName() { this->containerName_ = nullptr;};
    inline string containerName() const { DARABONBA_PTR_GET_DEFAULT(containerName_, "") };
    inline ExportVulRequest& setContainerName(string containerName) { DARABONBA_PTR_SET_VALUE(containerName_, containerName) };


    // createTsEnd Field Functions 
    bool hasCreateTsEnd() const { return this->createTsEnd_ != nullptr;};
    void deleteCreateTsEnd() { this->createTsEnd_ = nullptr;};
    inline int64_t createTsEnd() const { DARABONBA_PTR_GET_DEFAULT(createTsEnd_, 0L) };
    inline ExportVulRequest& setCreateTsEnd(int64_t createTsEnd) { DARABONBA_PTR_SET_VALUE(createTsEnd_, createTsEnd) };


    // createTsStart Field Functions 
    bool hasCreateTsStart() const { return this->createTsStart_ != nullptr;};
    void deleteCreateTsStart() { this->createTsStart_ = nullptr;};
    inline int64_t createTsStart() const { DARABONBA_PTR_GET_DEFAULT(createTsStart_, 0L) };
    inline ExportVulRequest& setCreateTsStart(int64_t createTsStart) { DARABONBA_PTR_SET_VALUE(createTsStart_, createTsStart) };


    // cveId Field Functions 
    bool hasCveId() const { return this->cveId_ != nullptr;};
    void deleteCveId() { this->cveId_ = nullptr;};
    inline string cveId() const { DARABONBA_PTR_GET_DEFAULT(cveId_, "") };
    inline ExportVulRequest& setCveId(string cveId) { DARABONBA_PTR_SET_VALUE(cveId_, cveId) };


    // dealed Field Functions 
    bool hasDealed() const { return this->dealed_ != nullptr;};
    void deleteDealed() { this->dealed_ = nullptr;};
    inline string dealed() const { DARABONBA_PTR_GET_DEFAULT(dealed_, "") };
    inline ExportVulRequest& setDealed(string dealed) { DARABONBA_PTR_SET_VALUE(dealed_, dealed) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline ExportVulRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // imageName Field Functions 
    bool hasImageName() const { return this->imageName_ != nullptr;};
    void deleteImageName() { this->imageName_ = nullptr;};
    inline string imageName() const { DARABONBA_PTR_GET_DEFAULT(imageName_, "") };
    inline ExportVulRequest& setImageName(string imageName) { DARABONBA_PTR_SET_VALUE(imageName_, imageName) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline ExportVulRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // necessity Field Functions 
    bool hasNecessity() const { return this->necessity_ != nullptr;};
    void deleteNecessity() { this->necessity_ = nullptr;};
    inline string necessity() const { DARABONBA_PTR_GET_DEFAULT(necessity_, "") };
    inline ExportVulRequest& setNecessity(string necessity) { DARABONBA_PTR_SET_VALUE(necessity_, necessity) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string path() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline ExportVulRequest& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


    // raspDefend Field Functions 
    bool hasRaspDefend() const { return this->raspDefend_ != nullptr;};
    void deleteRaspDefend() { this->raspDefend_ = nullptr;};
    inline int32_t raspDefend() const { DARABONBA_PTR_GET_DEFAULT(raspDefend_, 0) };
    inline ExportVulRequest& setRaspDefend(int32_t raspDefend) { DARABONBA_PTR_SET_VALUE(raspDefend_, raspDefend) };


    // searchTags Field Functions 
    bool hasSearchTags() const { return this->searchTags_ != nullptr;};
    void deleteSearchTags() { this->searchTags_ = nullptr;};
    inline string searchTags() const { DARABONBA_PTR_GET_DEFAULT(searchTags_, "") };
    inline ExportVulRequest& setSearchTags(string searchTags) { DARABONBA_PTR_SET_VALUE(searchTags_, searchTags) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ExportVulRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // uuids Field Functions 
    bool hasUuids() const { return this->uuids_ != nullptr;};
    void deleteUuids() { this->uuids_ = nullptr;};
    inline string uuids() const { DARABONBA_PTR_GET_DEFAULT(uuids_, "") };
    inline ExportVulRequest& setUuids(string uuids) { DARABONBA_PTR_SET_VALUE(uuids_, uuids) };


    // vpcInstanceIds Field Functions 
    bool hasVpcInstanceIds() const { return this->vpcInstanceIds_ != nullptr;};
    void deleteVpcInstanceIds() { this->vpcInstanceIds_ = nullptr;};
    inline string vpcInstanceIds() const { DARABONBA_PTR_GET_DEFAULT(vpcInstanceIds_, "") };
    inline ExportVulRequest& setVpcInstanceIds(string vpcInstanceIds) { DARABONBA_PTR_SET_VALUE(vpcInstanceIds_, vpcInstanceIds) };


  protected:
    // The name of the vulnerability.
    std::shared_ptr<string> aliasName_ = nullptr;
    // The additional type of the vulnerabilities. You need to specify this parameter when you query application vulnerabilities. If you set the Type parameter to app, you must specify this parameter. Set the value to **sca**.
    // 
    // > If this parameter is set to **sca**, **application vulnerabilities** and the **vulnerabilities that are detected based on software component analysis** are queried. If you do not specify this parameter, only application vulnerabilities are queried.
    std::shared_ptr<string> attachTypes_ = nullptr;
    // The name of the container that is affected by the vulnerability.
    std::shared_ptr<string> containerName_ = nullptr;
    // The end time of the first scan.
    // 
    // >  This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<int64_t> createTsEnd_ = nullptr;
    // The start time of the first scan.
    // 
    // >  This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<int64_t> createTsStart_ = nullptr;
    // The Common Vulnerabilities and Exposures (CVE) ID of the vulnerability.
    std::shared_ptr<string> cveId_ = nullptr;
    // Specifies whether the vulnerability is fixed. Valid values:
    // 
    // *   **y**: The vulnerability is fixed.
    // *   **n**: The vulnerability is not fixed.
    std::shared_ptr<string> dealed_ = nullptr;
    // The server group ID of the server on which the vulnerabilities are detected.
    // 
    // > You can call the [DescribeAllGroups](~~DescribeAllGroups~~) operation to query the IDs of server groups.
    std::shared_ptr<string> groupId_ = nullptr;
    // The name of the image that is affected by the vulnerability.
    std::shared_ptr<string> imageName_ = nullptr;
    // The language of the content within the request and response. Default value: **zh**. Valid values:
    // 
    // *   zh: Chinese
    // *   en: English
    std::shared_ptr<string> lang_ = nullptr;
    // The priority to fix the vulnerability. Separate multiple priorities with commas (,). Valid values:
    // 
    // *   **asap**: high
    // *   **later**: medium
    // *   **nntf**: low
    std::shared_ptr<string> necessity_ = nullptr;
    // The path of the process that is affected by the vulnerability.
    std::shared_ptr<string> path_ = nullptr;
    std::shared_ptr<int32_t> raspDefend_ = nullptr;
    // The tag that is used to search for the vulnerabilities. Valid values:
    // 
    // *   Restart required
    // *   Remote exploitation
    // *   Exploit exists
    // *   Exploitable
    // *   Privilege escalation
    // *   Code execution
    std::shared_ptr<string> searchTags_ = nullptr;
    // The type of the vulnerability that you want to export. Valid values:
    // 
    // *   **cve**: Linux software vulnerability
    // *   **sys**: Windows system vulnerability
    // *   **cms**: Web-CMS vulnerability
    // *   **app**: application vulnerability
    // *   **emg**: urgent vulnerability
    // 
    // This parameter is required.
    std::shared_ptr<string> type_ = nullptr;
    // The UUID of the server on which the vulnerabilities are detected. Separate multiple UUIDs with commas (,).
    std::shared_ptr<string> uuids_ = nullptr;
    // The ID of the virtual private cloud (VPC) in which the vulnerabilities are detected. Separate multiple IDs with commas (,).
    // 
    // > You can call the [DescribeVpcList](~~DescribeVpcList~~) operation to query the IDs of VPCs.
    std::shared_ptr<string> vpcInstanceIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
