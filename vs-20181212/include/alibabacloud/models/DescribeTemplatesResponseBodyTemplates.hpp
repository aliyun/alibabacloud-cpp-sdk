// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETEMPLATESRESPONSEBODYTEMPLATES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETEMPLATESRESPONSEBODYTEMPLATES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeTemplatesResponseBodyTemplatesTransConfigs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class DescribeTemplatesResponseBodyTemplates : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTemplatesResponseBodyTemplates& obj) { 
      DARABONBA_PTR_TO_JSON(Callback, callback_);
      DARABONBA_PTR_TO_JSON(CreatedTime, createdTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(FileFormat, fileFormat_);
      DARABONBA_PTR_TO_JSON(Flv, flv_);
      DARABONBA_PTR_TO_JSON(HlsM3u8, hlsM3u8_);
      DARABONBA_PTR_TO_JSON(HlsTs, hlsTs_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Interval, interval_);
      DARABONBA_PTR_TO_JSON(JpgOnDemand, jpgOnDemand_);
      DARABONBA_PTR_TO_JSON(JpgOverwrite, jpgOverwrite_);
      DARABONBA_PTR_TO_JSON(JpgSequence, jpgSequence_);
      DARABONBA_PTR_TO_JSON(Mp4, mp4_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OssBucket, ossBucket_);
      DARABONBA_PTR_TO_JSON(OssEndpoint, ossEndpoint_);
      DARABONBA_PTR_TO_JSON(OssFilePrefix, ossFilePrefix_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(Retention, retention_);
      DARABONBA_PTR_TO_JSON(TransConfigs, transConfigs_);
      DARABONBA_PTR_TO_JSON(Trigger, trigger_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTemplatesResponseBodyTemplates& obj) { 
      DARABONBA_PTR_FROM_JSON(Callback, callback_);
      DARABONBA_PTR_FROM_JSON(CreatedTime, createdTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(FileFormat, fileFormat_);
      DARABONBA_PTR_FROM_JSON(Flv, flv_);
      DARABONBA_PTR_FROM_JSON(HlsM3u8, hlsM3u8_);
      DARABONBA_PTR_FROM_JSON(HlsTs, hlsTs_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Interval, interval_);
      DARABONBA_PTR_FROM_JSON(JpgOnDemand, jpgOnDemand_);
      DARABONBA_PTR_FROM_JSON(JpgOverwrite, jpgOverwrite_);
      DARABONBA_PTR_FROM_JSON(JpgSequence, jpgSequence_);
      DARABONBA_PTR_FROM_JSON(Mp4, mp4_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OssBucket, ossBucket_);
      DARABONBA_PTR_FROM_JSON(OssEndpoint, ossEndpoint_);
      DARABONBA_PTR_FROM_JSON(OssFilePrefix, ossFilePrefix_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(Retention, retention_);
      DARABONBA_PTR_FROM_JSON(TransConfigs, transConfigs_);
      DARABONBA_PTR_FROM_JSON(Trigger, trigger_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DescribeTemplatesResponseBodyTemplates() = default ;
    DescribeTemplatesResponseBodyTemplates(const DescribeTemplatesResponseBodyTemplates &) = default ;
    DescribeTemplatesResponseBodyTemplates(DescribeTemplatesResponseBodyTemplates &&) = default ;
    DescribeTemplatesResponseBodyTemplates(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTemplatesResponseBodyTemplates() = default ;
    DescribeTemplatesResponseBodyTemplates& operator=(const DescribeTemplatesResponseBodyTemplates &) = default ;
    DescribeTemplatesResponseBodyTemplates& operator=(DescribeTemplatesResponseBodyTemplates &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->callback_ != nullptr
        && this->createdTime_ != nullptr && this->description_ != nullptr && this->fileFormat_ != nullptr && this->flv_ != nullptr && this->hlsM3u8_ != nullptr
        && this->hlsTs_ != nullptr && this->id_ != nullptr && this->interval_ != nullptr && this->jpgOnDemand_ != nullptr && this->jpgOverwrite_ != nullptr
        && this->jpgSequence_ != nullptr && this->mp4_ != nullptr && this->name_ != nullptr && this->ossBucket_ != nullptr && this->ossEndpoint_ != nullptr
        && this->ossFilePrefix_ != nullptr && this->region_ != nullptr && this->retention_ != nullptr && this->transConfigs_ != nullptr && this->trigger_ != nullptr
        && this->type_ != nullptr; };
    // callback Field Functions 
    bool hasCallback() const { return this->callback_ != nullptr;};
    void deleteCallback() { this->callback_ = nullptr;};
    inline string callback() const { DARABONBA_PTR_GET_DEFAULT(callback_, "") };
    inline DescribeTemplatesResponseBodyTemplates& setCallback(string callback) { DARABONBA_PTR_SET_VALUE(callback_, callback) };


    // createdTime Field Functions 
    bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
    void deleteCreatedTime() { this->createdTime_ = nullptr;};
    inline string createdTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, "") };
    inline DescribeTemplatesResponseBodyTemplates& setCreatedTime(string createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeTemplatesResponseBodyTemplates& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // fileFormat Field Functions 
    bool hasFileFormat() const { return this->fileFormat_ != nullptr;};
    void deleteFileFormat() { this->fileFormat_ = nullptr;};
    inline string fileFormat() const { DARABONBA_PTR_GET_DEFAULT(fileFormat_, "") };
    inline DescribeTemplatesResponseBodyTemplates& setFileFormat(string fileFormat) { DARABONBA_PTR_SET_VALUE(fileFormat_, fileFormat) };


    // flv Field Functions 
    bool hasFlv() const { return this->flv_ != nullptr;};
    void deleteFlv() { this->flv_ = nullptr;};
    inline string flv() const { DARABONBA_PTR_GET_DEFAULT(flv_, "") };
    inline DescribeTemplatesResponseBodyTemplates& setFlv(string flv) { DARABONBA_PTR_SET_VALUE(flv_, flv) };


    // hlsM3u8 Field Functions 
    bool hasHlsM3u8() const { return this->hlsM3u8_ != nullptr;};
    void deleteHlsM3u8() { this->hlsM3u8_ = nullptr;};
    inline string hlsM3u8() const { DARABONBA_PTR_GET_DEFAULT(hlsM3u8_, "") };
    inline DescribeTemplatesResponseBodyTemplates& setHlsM3u8(string hlsM3u8) { DARABONBA_PTR_SET_VALUE(hlsM3u8_, hlsM3u8) };


    // hlsTs Field Functions 
    bool hasHlsTs() const { return this->hlsTs_ != nullptr;};
    void deleteHlsTs() { this->hlsTs_ = nullptr;};
    inline string hlsTs() const { DARABONBA_PTR_GET_DEFAULT(hlsTs_, "") };
    inline DescribeTemplatesResponseBodyTemplates& setHlsTs(string hlsTs) { DARABONBA_PTR_SET_VALUE(hlsTs_, hlsTs) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline DescribeTemplatesResponseBodyTemplates& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // interval Field Functions 
    bool hasInterval() const { return this->interval_ != nullptr;};
    void deleteInterval() { this->interval_ = nullptr;};
    inline int64_t interval() const { DARABONBA_PTR_GET_DEFAULT(interval_, 0L) };
    inline DescribeTemplatesResponseBodyTemplates& setInterval(int64_t interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


    // jpgOnDemand Field Functions 
    bool hasJpgOnDemand() const { return this->jpgOnDemand_ != nullptr;};
    void deleteJpgOnDemand() { this->jpgOnDemand_ = nullptr;};
    inline string jpgOnDemand() const { DARABONBA_PTR_GET_DEFAULT(jpgOnDemand_, "") };
    inline DescribeTemplatesResponseBodyTemplates& setJpgOnDemand(string jpgOnDemand) { DARABONBA_PTR_SET_VALUE(jpgOnDemand_, jpgOnDemand) };


    // jpgOverwrite Field Functions 
    bool hasJpgOverwrite() const { return this->jpgOverwrite_ != nullptr;};
    void deleteJpgOverwrite() { this->jpgOverwrite_ = nullptr;};
    inline string jpgOverwrite() const { DARABONBA_PTR_GET_DEFAULT(jpgOverwrite_, "") };
    inline DescribeTemplatesResponseBodyTemplates& setJpgOverwrite(string jpgOverwrite) { DARABONBA_PTR_SET_VALUE(jpgOverwrite_, jpgOverwrite) };


    // jpgSequence Field Functions 
    bool hasJpgSequence() const { return this->jpgSequence_ != nullptr;};
    void deleteJpgSequence() { this->jpgSequence_ = nullptr;};
    inline string jpgSequence() const { DARABONBA_PTR_GET_DEFAULT(jpgSequence_, "") };
    inline DescribeTemplatesResponseBodyTemplates& setJpgSequence(string jpgSequence) { DARABONBA_PTR_SET_VALUE(jpgSequence_, jpgSequence) };


    // mp4 Field Functions 
    bool hasMp4() const { return this->mp4_ != nullptr;};
    void deleteMp4() { this->mp4_ = nullptr;};
    inline string mp4() const { DARABONBA_PTR_GET_DEFAULT(mp4_, "") };
    inline DescribeTemplatesResponseBodyTemplates& setMp4(string mp4) { DARABONBA_PTR_SET_VALUE(mp4_, mp4) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeTemplatesResponseBodyTemplates& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // ossBucket Field Functions 
    bool hasOssBucket() const { return this->ossBucket_ != nullptr;};
    void deleteOssBucket() { this->ossBucket_ = nullptr;};
    inline string ossBucket() const { DARABONBA_PTR_GET_DEFAULT(ossBucket_, "") };
    inline DescribeTemplatesResponseBodyTemplates& setOssBucket(string ossBucket) { DARABONBA_PTR_SET_VALUE(ossBucket_, ossBucket) };


    // ossEndpoint Field Functions 
    bool hasOssEndpoint() const { return this->ossEndpoint_ != nullptr;};
    void deleteOssEndpoint() { this->ossEndpoint_ = nullptr;};
    inline string ossEndpoint() const { DARABONBA_PTR_GET_DEFAULT(ossEndpoint_, "") };
    inline DescribeTemplatesResponseBodyTemplates& setOssEndpoint(string ossEndpoint) { DARABONBA_PTR_SET_VALUE(ossEndpoint_, ossEndpoint) };


    // ossFilePrefix Field Functions 
    bool hasOssFilePrefix() const { return this->ossFilePrefix_ != nullptr;};
    void deleteOssFilePrefix() { this->ossFilePrefix_ = nullptr;};
    inline string ossFilePrefix() const { DARABONBA_PTR_GET_DEFAULT(ossFilePrefix_, "") };
    inline DescribeTemplatesResponseBodyTemplates& setOssFilePrefix(string ossFilePrefix) { DARABONBA_PTR_SET_VALUE(ossFilePrefix_, ossFilePrefix) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline DescribeTemplatesResponseBodyTemplates& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // retention Field Functions 
    bool hasRetention() const { return this->retention_ != nullptr;};
    void deleteRetention() { this->retention_ = nullptr;};
    inline int64_t retention() const { DARABONBA_PTR_GET_DEFAULT(retention_, 0L) };
    inline DescribeTemplatesResponseBodyTemplates& setRetention(int64_t retention) { DARABONBA_PTR_SET_VALUE(retention_, retention) };


    // transConfigs Field Functions 
    bool hasTransConfigs() const { return this->transConfigs_ != nullptr;};
    void deleteTransConfigs() { this->transConfigs_ = nullptr;};
    inline const vector<Models::DescribeTemplatesResponseBodyTemplatesTransConfigs> & transConfigs() const { DARABONBA_PTR_GET_CONST(transConfigs_, vector<Models::DescribeTemplatesResponseBodyTemplatesTransConfigs>) };
    inline vector<Models::DescribeTemplatesResponseBodyTemplatesTransConfigs> transConfigs() { DARABONBA_PTR_GET(transConfigs_, vector<Models::DescribeTemplatesResponseBodyTemplatesTransConfigs>) };
    inline DescribeTemplatesResponseBodyTemplates& setTransConfigs(const vector<Models::DescribeTemplatesResponseBodyTemplatesTransConfigs> & transConfigs) { DARABONBA_PTR_SET_VALUE(transConfigs_, transConfigs) };
    inline DescribeTemplatesResponseBodyTemplates& setTransConfigs(vector<Models::DescribeTemplatesResponseBodyTemplatesTransConfigs> && transConfigs) { DARABONBA_PTR_SET_RVALUE(transConfigs_, transConfigs) };


    // trigger Field Functions 
    bool hasTrigger() const { return this->trigger_ != nullptr;};
    void deleteTrigger() { this->trigger_ = nullptr;};
    inline string trigger() const { DARABONBA_PTR_GET_DEFAULT(trigger_, "") };
    inline DescribeTemplatesResponseBodyTemplates& setTrigger(string trigger) { DARABONBA_PTR_SET_VALUE(trigger_, trigger) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeTemplatesResponseBodyTemplates& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> callback_ = nullptr;
    std::shared_ptr<string> createdTime_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> fileFormat_ = nullptr;
    std::shared_ptr<string> flv_ = nullptr;
    std::shared_ptr<string> hlsM3u8_ = nullptr;
    std::shared_ptr<string> hlsTs_ = nullptr;
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<int64_t> interval_ = nullptr;
    std::shared_ptr<string> jpgOnDemand_ = nullptr;
    std::shared_ptr<string> jpgOverwrite_ = nullptr;
    std::shared_ptr<string> jpgSequence_ = nullptr;
    std::shared_ptr<string> mp4_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> ossBucket_ = nullptr;
    std::shared_ptr<string> ossEndpoint_ = nullptr;
    std::shared_ptr<string> ossFilePrefix_ = nullptr;
    std::shared_ptr<string> region_ = nullptr;
    std::shared_ptr<int64_t> retention_ = nullptr;
    std::shared_ptr<vector<Models::DescribeTemplatesResponseBodyTemplatesTransConfigs>> transConfigs_ = nullptr;
    std::shared_ptr<string> trigger_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
