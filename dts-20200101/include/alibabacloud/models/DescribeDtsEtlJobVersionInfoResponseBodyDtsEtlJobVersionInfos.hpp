// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDTSETLJOBVERSIONINFORESPONSEBODYDTSETLJOBVERSIONINFOS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDTSETLJOBVERSIONINFORESPONSEBODYDTSETLJOBVERSIONINFOS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class DescribeDtsEtlJobVersionInfoResponseBodyDtsEtlJobVersionInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDtsEtlJobVersionInfoResponseBodyDtsEtlJobVersionInfos& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Creator, creator_);
      DARABONBA_PTR_TO_JSON(CreatorName, creatorName_);
      DARABONBA_PTR_TO_JSON(DtsInstanceId, dtsInstanceId_);
      DARABONBA_PTR_TO_JSON(DtsJobId, dtsJobId_);
      DARABONBA_PTR_TO_JSON(DtsJobName, dtsJobName_);
      DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_TO_JSON(SafeCheckpoint, safeCheckpoint_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Version, version_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDtsEtlJobVersionInfoResponseBodyDtsEtlJobVersionInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Creator, creator_);
      DARABONBA_PTR_FROM_JSON(CreatorName, creatorName_);
      DARABONBA_PTR_FROM_JSON(DtsInstanceId, dtsInstanceId_);
      DARABONBA_PTR_FROM_JSON(DtsJobId, dtsJobId_);
      DARABONBA_PTR_FROM_JSON(DtsJobName, dtsJobName_);
      DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_FROM_JSON(SafeCheckpoint, safeCheckpoint_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
    };
    DescribeDtsEtlJobVersionInfoResponseBodyDtsEtlJobVersionInfos() = default ;
    DescribeDtsEtlJobVersionInfoResponseBodyDtsEtlJobVersionInfos(const DescribeDtsEtlJobVersionInfoResponseBodyDtsEtlJobVersionInfos &) = default ;
    DescribeDtsEtlJobVersionInfoResponseBodyDtsEtlJobVersionInfos(DescribeDtsEtlJobVersionInfoResponseBodyDtsEtlJobVersionInfos &&) = default ;
    DescribeDtsEtlJobVersionInfoResponseBodyDtsEtlJobVersionInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDtsEtlJobVersionInfoResponseBodyDtsEtlJobVersionInfos() = default ;
    DescribeDtsEtlJobVersionInfoResponseBodyDtsEtlJobVersionInfos& operator=(const DescribeDtsEtlJobVersionInfoResponseBodyDtsEtlJobVersionInfos &) = default ;
    DescribeDtsEtlJobVersionInfoResponseBodyDtsEtlJobVersionInfos& operator=(DescribeDtsEtlJobVersionInfoResponseBodyDtsEtlJobVersionInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createTime_ != nullptr
        && this->creator_ != nullptr && this->creatorName_ != nullptr && this->dtsInstanceId_ != nullptr && this->dtsJobId_ != nullptr && this->dtsJobName_ != nullptr
        && this->modifyTime_ != nullptr && this->safeCheckpoint_ != nullptr && this->status_ != nullptr && this->version_ != nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeDtsEtlJobVersionInfoResponseBodyDtsEtlJobVersionInfos& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // creator Field Functions 
    bool hasCreator() const { return this->creator_ != nullptr;};
    void deleteCreator() { this->creator_ = nullptr;};
    inline string creator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
    inline DescribeDtsEtlJobVersionInfoResponseBodyDtsEtlJobVersionInfos& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


    // creatorName Field Functions 
    bool hasCreatorName() const { return this->creatorName_ != nullptr;};
    void deleteCreatorName() { this->creatorName_ = nullptr;};
    inline string creatorName() const { DARABONBA_PTR_GET_DEFAULT(creatorName_, "") };
    inline DescribeDtsEtlJobVersionInfoResponseBodyDtsEtlJobVersionInfos& setCreatorName(string creatorName) { DARABONBA_PTR_SET_VALUE(creatorName_, creatorName) };


    // dtsInstanceId Field Functions 
    bool hasDtsInstanceId() const { return this->dtsInstanceId_ != nullptr;};
    void deleteDtsInstanceId() { this->dtsInstanceId_ = nullptr;};
    inline string dtsInstanceId() const { DARABONBA_PTR_GET_DEFAULT(dtsInstanceId_, "") };
    inline DescribeDtsEtlJobVersionInfoResponseBodyDtsEtlJobVersionInfos& setDtsInstanceId(string dtsInstanceId) { DARABONBA_PTR_SET_VALUE(dtsInstanceId_, dtsInstanceId) };


    // dtsJobId Field Functions 
    bool hasDtsJobId() const { return this->dtsJobId_ != nullptr;};
    void deleteDtsJobId() { this->dtsJobId_ = nullptr;};
    inline string dtsJobId() const { DARABONBA_PTR_GET_DEFAULT(dtsJobId_, "") };
    inline DescribeDtsEtlJobVersionInfoResponseBodyDtsEtlJobVersionInfos& setDtsJobId(string dtsJobId) { DARABONBA_PTR_SET_VALUE(dtsJobId_, dtsJobId) };


    // dtsJobName Field Functions 
    bool hasDtsJobName() const { return this->dtsJobName_ != nullptr;};
    void deleteDtsJobName() { this->dtsJobName_ = nullptr;};
    inline string dtsJobName() const { DARABONBA_PTR_GET_DEFAULT(dtsJobName_, "") };
    inline DescribeDtsEtlJobVersionInfoResponseBodyDtsEtlJobVersionInfos& setDtsJobName(string dtsJobName) { DARABONBA_PTR_SET_VALUE(dtsJobName_, dtsJobName) };


    // modifyTime Field Functions 
    bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
    void deleteModifyTime() { this->modifyTime_ = nullptr;};
    inline string modifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, "") };
    inline DescribeDtsEtlJobVersionInfoResponseBodyDtsEtlJobVersionInfos& setModifyTime(string modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


    // safeCheckpoint Field Functions 
    bool hasSafeCheckpoint() const { return this->safeCheckpoint_ != nullptr;};
    void deleteSafeCheckpoint() { this->safeCheckpoint_ = nullptr;};
    inline string safeCheckpoint() const { DARABONBA_PTR_GET_DEFAULT(safeCheckpoint_, "") };
    inline DescribeDtsEtlJobVersionInfoResponseBodyDtsEtlJobVersionInfos& setSafeCheckpoint(string safeCheckpoint) { DARABONBA_PTR_SET_VALUE(safeCheckpoint_, safeCheckpoint) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeDtsEtlJobVersionInfoResponseBodyDtsEtlJobVersionInfos& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline int32_t version() const { DARABONBA_PTR_GET_DEFAULT(version_, 0) };
    inline DescribeDtsEtlJobVersionInfoResponseBodyDtsEtlJobVersionInfos& setVersion(int32_t version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // The time when the ETL task was created. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<string> createTime_ = nullptr;
    // The ID of the creator.
    std::shared_ptr<string> creator_ = nullptr;
    // The username of the creator.
    std::shared_ptr<string> creatorName_ = nullptr;
    // The ID of the DTS instance.
    std::shared_ptr<string> dtsInstanceId_ = nullptr;
    // The ID of the ETL task.
    std::shared_ptr<string> dtsJobId_ = nullptr;
    // The name of the ETL task.
    std::shared_ptr<string> dtsJobName_ = nullptr;
    // The time when the ETL task was last modified. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<string> modifyTime_ = nullptr;
    // The safe checkpoint of the ETL task.
    std::shared_ptr<string> safeCheckpoint_ = nullptr;
    // The log level. Valid values: ERROR, WARN, INFO, and DEBUG.
    std::shared_ptr<string> status_ = nullptr;
    // The version number of the ETL task.
    std::shared_ptr<int32_t> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
