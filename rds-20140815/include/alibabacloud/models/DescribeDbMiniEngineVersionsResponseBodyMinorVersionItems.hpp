// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBMINIENGINEVERSIONSRESPONSEBODYMINORVERSIONITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBMINIENGINEVERSIONSRESPONSEBODYMINORVERSIONITEMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeDBMiniEngineVersionsResponseBodyMinorVersionItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBMiniEngineVersionsResponseBodyMinorVersionItems& obj) { 
      DARABONBA_PTR_TO_JSON(CommunityMinorVersion, communityMinorVersion_);
      DARABONBA_PTR_TO_JSON(Engine, engine_);
      DARABONBA_PTR_TO_JSON(EngineVersion, engineVersion_);
      DARABONBA_PTR_TO_JSON(ExpireDate, expireDate_);
      DARABONBA_PTR_TO_JSON(ExpireStatus, expireStatus_);
      DARABONBA_PTR_TO_JSON(IsHotfixVersion, isHotfixVersion_);
      DARABONBA_PTR_TO_JSON(MinorVersion, minorVersion_);
      DARABONBA_PTR_TO_JSON(NodeType, nodeType_);
      DARABONBA_PTR_TO_JSON(ReleaseNote, releaseNote_);
      DARABONBA_PTR_TO_JSON(ReleaseType, releaseType_);
      DARABONBA_PTR_TO_JSON(StatusDesc, statusDesc_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBMiniEngineVersionsResponseBodyMinorVersionItems& obj) { 
      DARABONBA_PTR_FROM_JSON(CommunityMinorVersion, communityMinorVersion_);
      DARABONBA_PTR_FROM_JSON(Engine, engine_);
      DARABONBA_PTR_FROM_JSON(EngineVersion, engineVersion_);
      DARABONBA_PTR_FROM_JSON(ExpireDate, expireDate_);
      DARABONBA_PTR_FROM_JSON(ExpireStatus, expireStatus_);
      DARABONBA_PTR_FROM_JSON(IsHotfixVersion, isHotfixVersion_);
      DARABONBA_PTR_FROM_JSON(MinorVersion, minorVersion_);
      DARABONBA_PTR_FROM_JSON(NodeType, nodeType_);
      DARABONBA_PTR_FROM_JSON(ReleaseNote, releaseNote_);
      DARABONBA_PTR_FROM_JSON(ReleaseType, releaseType_);
      DARABONBA_PTR_FROM_JSON(StatusDesc, statusDesc_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    DescribeDBMiniEngineVersionsResponseBodyMinorVersionItems() = default ;
    DescribeDBMiniEngineVersionsResponseBodyMinorVersionItems(const DescribeDBMiniEngineVersionsResponseBodyMinorVersionItems &) = default ;
    DescribeDBMiniEngineVersionsResponseBodyMinorVersionItems(DescribeDBMiniEngineVersionsResponseBodyMinorVersionItems &&) = default ;
    DescribeDBMiniEngineVersionsResponseBodyMinorVersionItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBMiniEngineVersionsResponseBodyMinorVersionItems() = default ;
    DescribeDBMiniEngineVersionsResponseBodyMinorVersionItems& operator=(const DescribeDBMiniEngineVersionsResponseBodyMinorVersionItems &) = default ;
    DescribeDBMiniEngineVersionsResponseBodyMinorVersionItems& operator=(DescribeDBMiniEngineVersionsResponseBodyMinorVersionItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->communityMinorVersion_ == nullptr
        && return this->engine_ == nullptr && return this->engineVersion_ == nullptr && return this->expireDate_ == nullptr && return this->expireStatus_ == nullptr && return this->isHotfixVersion_ == nullptr
        && return this->minorVersion_ == nullptr && return this->nodeType_ == nullptr && return this->releaseNote_ == nullptr && return this->releaseType_ == nullptr && return this->statusDesc_ == nullptr
        && return this->tag_ == nullptr; };
    // communityMinorVersion Field Functions 
    bool hasCommunityMinorVersion() const { return this->communityMinorVersion_ != nullptr;};
    void deleteCommunityMinorVersion() { this->communityMinorVersion_ = nullptr;};
    inline string communityMinorVersion() const { DARABONBA_PTR_GET_DEFAULT(communityMinorVersion_, "") };
    inline DescribeDBMiniEngineVersionsResponseBodyMinorVersionItems& setCommunityMinorVersion(string communityMinorVersion) { DARABONBA_PTR_SET_VALUE(communityMinorVersion_, communityMinorVersion) };


    // engine Field Functions 
    bool hasEngine() const { return this->engine_ != nullptr;};
    void deleteEngine() { this->engine_ = nullptr;};
    inline string engine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
    inline DescribeDBMiniEngineVersionsResponseBodyMinorVersionItems& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


    // engineVersion Field Functions 
    bool hasEngineVersion() const { return this->engineVersion_ != nullptr;};
    void deleteEngineVersion() { this->engineVersion_ = nullptr;};
    inline string engineVersion() const { DARABONBA_PTR_GET_DEFAULT(engineVersion_, "") };
    inline DescribeDBMiniEngineVersionsResponseBodyMinorVersionItems& setEngineVersion(string engineVersion) { DARABONBA_PTR_SET_VALUE(engineVersion_, engineVersion) };


    // expireDate Field Functions 
    bool hasExpireDate() const { return this->expireDate_ != nullptr;};
    void deleteExpireDate() { this->expireDate_ = nullptr;};
    inline string expireDate() const { DARABONBA_PTR_GET_DEFAULT(expireDate_, "") };
    inline DescribeDBMiniEngineVersionsResponseBodyMinorVersionItems& setExpireDate(string expireDate) { DARABONBA_PTR_SET_VALUE(expireDate_, expireDate) };


    // expireStatus Field Functions 
    bool hasExpireStatus() const { return this->expireStatus_ != nullptr;};
    void deleteExpireStatus() { this->expireStatus_ = nullptr;};
    inline string expireStatus() const { DARABONBA_PTR_GET_DEFAULT(expireStatus_, "") };
    inline DescribeDBMiniEngineVersionsResponseBodyMinorVersionItems& setExpireStatus(string expireStatus) { DARABONBA_PTR_SET_VALUE(expireStatus_, expireStatus) };


    // isHotfixVersion Field Functions 
    bool hasIsHotfixVersion() const { return this->isHotfixVersion_ != nullptr;};
    void deleteIsHotfixVersion() { this->isHotfixVersion_ = nullptr;};
    inline bool isHotfixVersion() const { DARABONBA_PTR_GET_DEFAULT(isHotfixVersion_, false) };
    inline DescribeDBMiniEngineVersionsResponseBodyMinorVersionItems& setIsHotfixVersion(bool isHotfixVersion) { DARABONBA_PTR_SET_VALUE(isHotfixVersion_, isHotfixVersion) };


    // minorVersion Field Functions 
    bool hasMinorVersion() const { return this->minorVersion_ != nullptr;};
    void deleteMinorVersion() { this->minorVersion_ = nullptr;};
    inline string minorVersion() const { DARABONBA_PTR_GET_DEFAULT(minorVersion_, "") };
    inline DescribeDBMiniEngineVersionsResponseBodyMinorVersionItems& setMinorVersion(string minorVersion) { DARABONBA_PTR_SET_VALUE(minorVersion_, minorVersion) };


    // nodeType Field Functions 
    bool hasNodeType() const { return this->nodeType_ != nullptr;};
    void deleteNodeType() { this->nodeType_ = nullptr;};
    inline string nodeType() const { DARABONBA_PTR_GET_DEFAULT(nodeType_, "") };
    inline DescribeDBMiniEngineVersionsResponseBodyMinorVersionItems& setNodeType(string nodeType) { DARABONBA_PTR_SET_VALUE(nodeType_, nodeType) };


    // releaseNote Field Functions 
    bool hasReleaseNote() const { return this->releaseNote_ != nullptr;};
    void deleteReleaseNote() { this->releaseNote_ = nullptr;};
    inline string releaseNote() const { DARABONBA_PTR_GET_DEFAULT(releaseNote_, "") };
    inline DescribeDBMiniEngineVersionsResponseBodyMinorVersionItems& setReleaseNote(string releaseNote) { DARABONBA_PTR_SET_VALUE(releaseNote_, releaseNote) };


    // releaseType Field Functions 
    bool hasReleaseType() const { return this->releaseType_ != nullptr;};
    void deleteReleaseType() { this->releaseType_ = nullptr;};
    inline string releaseType() const { DARABONBA_PTR_GET_DEFAULT(releaseType_, "") };
    inline DescribeDBMiniEngineVersionsResponseBodyMinorVersionItems& setReleaseType(string releaseType) { DARABONBA_PTR_SET_VALUE(releaseType_, releaseType) };


    // statusDesc Field Functions 
    bool hasStatusDesc() const { return this->statusDesc_ != nullptr;};
    void deleteStatusDesc() { this->statusDesc_ = nullptr;};
    inline string statusDesc() const { DARABONBA_PTR_GET_DEFAULT(statusDesc_, "") };
    inline DescribeDBMiniEngineVersionsResponseBodyMinorVersionItems& setStatusDesc(string statusDesc) { DARABONBA_PTR_SET_VALUE(statusDesc_, statusDesc) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline string tag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
    inline DescribeDBMiniEngineVersionsResponseBodyMinorVersionItems& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


  protected:
    // The PostgreSQL version to which the minor engine version corresponds. For more information, see [Release notes for AliPG](https://help.aliyun.com/document_detail/126002.html).
    // 
    // >  This parameter is available only for instances that run **PostgreSQL**.
    std::shared_ptr<string> communityMinorVersion_ = nullptr;
    // The database engine that corresponds to the minor engine version.
    std::shared_ptr<string> engine_ = nullptr;
    // The database engine version that corresponds to the minor engine version.
    std::shared_ptr<string> engineVersion_ = nullptr;
    // The expiration time of the minor engine version.
    std::shared_ptr<string> expireDate_ = nullptr;
    // The expiration status of the minor engine version. Valid values:
    // 
    // *   **vaild**
    // *   **expired**
    // 
    // >  If the minor engine version is in the Offline state, the minor engine version is discontinued. In this case, ignore the expiration status. If the minor engine version is in the Online state and the expiration state is expired, the minor engine version expires. If the expiration state is vaild, the minor engine version is still in its lifecycle.
    std::shared_ptr<string> expireStatus_ = nullptr;
    // An internal parameter. You do not need to specify this parameter.
    std::shared_ptr<bool> isHotfixVersion_ = nullptr;
    // The minor engine version.
    std::shared_ptr<string> minorVersion_ = nullptr;
    // The RDS edition of the instance that runs the minor engine version. Valid values:
    // 
    // *   **Basic**: RDS Basic Edition
    // *   **HighAvailability**: RDS High-availability Edition
    // *   **Finance**: RDS Enterprise Edition
    std::shared_ptr<string> nodeType_ = nullptr;
    // The URL of the release notes for the minor engine version.
    std::shared_ptr<string> releaseNote_ = nullptr;
    // The release type. Valid values:
    // 
    // *   **LTS**: a long-term version
    // *   **BETA**: a preview version
    std::shared_ptr<string> releaseType_ = nullptr;
    // The status of the minor engine version. Valid values:
    // 
    // *   **Offline**: discontinued
    // *   **Online**: available
    // 
    // >  If the minor engine version is in the Offline state, the minor engine version is discontinued. In this case, ignore the expiration status. If the minor engine version is in the Online state and the expiration state is expired, the minor engine version expires. If the expiration state is vaild, the minor engine version is still in its lifecycle.
    std::shared_ptr<string> statusDesc_ = nullptr;
    // The tag that corresponds to the minor engine version. Valid values:
    // 
    // *   **pgsql_docker_image**: tag of common instances
    // *   **pgsql_babelfish_image**: tag of instances for which Babelfish is enabled
    // 
    // >  This parameter is available only for instances that run **PostgreSQL**.
    std::shared_ptr<string> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
