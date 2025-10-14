// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBINARYLOGLISTRESPONSEBODYLOGLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBINARYLOGLISTRESPONSEBODYLOGLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class DescribeBinaryLogListResponseBodyLogList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBinaryLogListResponseBodyLogList& obj) { 
      DARABONBA_PTR_TO_JSON(BeginTime, beginTime_);
      DARABONBA_PTR_TO_JSON(CreatedTime, createdTime_);
      DARABONBA_PTR_TO_JSON(DownloadLink, downloadLink_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(FileName, fileName_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(LogSize, logSize_);
      DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
      DARABONBA_PTR_TO_JSON(PurgeStatus, purgeStatus_);
      DARABONBA_PTR_TO_JSON(UploadHost, uploadHost_);
      DARABONBA_PTR_TO_JSON(UploadStatus, uploadStatus_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBinaryLogListResponseBodyLogList& obj) { 
      DARABONBA_PTR_FROM_JSON(BeginTime, beginTime_);
      DARABONBA_PTR_FROM_JSON(CreatedTime, createdTime_);
      DARABONBA_PTR_FROM_JSON(DownloadLink, downloadLink_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(FileName, fileName_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(LogSize, logSize_);
      DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
      DARABONBA_PTR_FROM_JSON(PurgeStatus, purgeStatus_);
      DARABONBA_PTR_FROM_JSON(UploadHost, uploadHost_);
      DARABONBA_PTR_FROM_JSON(UploadStatus, uploadStatus_);
    };
    DescribeBinaryLogListResponseBodyLogList() = default ;
    DescribeBinaryLogListResponseBodyLogList(const DescribeBinaryLogListResponseBodyLogList &) = default ;
    DescribeBinaryLogListResponseBodyLogList(DescribeBinaryLogListResponseBodyLogList &&) = default ;
    DescribeBinaryLogListResponseBodyLogList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBinaryLogListResponseBodyLogList() = default ;
    DescribeBinaryLogListResponseBodyLogList& operator=(const DescribeBinaryLogListResponseBodyLogList &) = default ;
    DescribeBinaryLogListResponseBodyLogList& operator=(DescribeBinaryLogListResponseBodyLogList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->beginTime_ == nullptr
        && return this->createdTime_ == nullptr && return this->downloadLink_ == nullptr && return this->endTime_ == nullptr && return this->fileName_ == nullptr && return this->id_ == nullptr
        && return this->logSize_ == nullptr && return this->modifiedTime_ == nullptr && return this->purgeStatus_ == nullptr && return this->uploadHost_ == nullptr && return this->uploadStatus_ == nullptr; };
    // beginTime Field Functions 
    bool hasBeginTime() const { return this->beginTime_ != nullptr;};
    void deleteBeginTime() { this->beginTime_ = nullptr;};
    inline string beginTime() const { DARABONBA_PTR_GET_DEFAULT(beginTime_, "") };
    inline DescribeBinaryLogListResponseBodyLogList& setBeginTime(string beginTime) { DARABONBA_PTR_SET_VALUE(beginTime_, beginTime) };


    // createdTime Field Functions 
    bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
    void deleteCreatedTime() { this->createdTime_ = nullptr;};
    inline string createdTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, "") };
    inline DescribeBinaryLogListResponseBodyLogList& setCreatedTime(string createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


    // downloadLink Field Functions 
    bool hasDownloadLink() const { return this->downloadLink_ != nullptr;};
    void deleteDownloadLink() { this->downloadLink_ = nullptr;};
    inline string downloadLink() const { DARABONBA_PTR_GET_DEFAULT(downloadLink_, "") };
    inline DescribeBinaryLogListResponseBodyLogList& setDownloadLink(string downloadLink) { DARABONBA_PTR_SET_VALUE(downloadLink_, downloadLink) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeBinaryLogListResponseBodyLogList& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string fileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline DescribeBinaryLogListResponseBodyLogList& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline DescribeBinaryLogListResponseBodyLogList& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // logSize Field Functions 
    bool hasLogSize() const { return this->logSize_ != nullptr;};
    void deleteLogSize() { this->logSize_ = nullptr;};
    inline int64_t logSize() const { DARABONBA_PTR_GET_DEFAULT(logSize_, 0L) };
    inline DescribeBinaryLogListResponseBodyLogList& setLogSize(int64_t logSize) { DARABONBA_PTR_SET_VALUE(logSize_, logSize) };


    // modifiedTime Field Functions 
    bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
    void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
    inline string modifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, "") };
    inline DescribeBinaryLogListResponseBodyLogList& setModifiedTime(string modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


    // purgeStatus Field Functions 
    bool hasPurgeStatus() const { return this->purgeStatus_ != nullptr;};
    void deletePurgeStatus() { this->purgeStatus_ = nullptr;};
    inline int32_t purgeStatus() const { DARABONBA_PTR_GET_DEFAULT(purgeStatus_, 0) };
    inline DescribeBinaryLogListResponseBodyLogList& setPurgeStatus(int32_t purgeStatus) { DARABONBA_PTR_SET_VALUE(purgeStatus_, purgeStatus) };


    // uploadHost Field Functions 
    bool hasUploadHost() const { return this->uploadHost_ != nullptr;};
    void deleteUploadHost() { this->uploadHost_ = nullptr;};
    inline string uploadHost() const { DARABONBA_PTR_GET_DEFAULT(uploadHost_, "") };
    inline DescribeBinaryLogListResponseBodyLogList& setUploadHost(string uploadHost) { DARABONBA_PTR_SET_VALUE(uploadHost_, uploadHost) };


    // uploadStatus Field Functions 
    bool hasUploadStatus() const { return this->uploadStatus_ != nullptr;};
    void deleteUploadStatus() { this->uploadStatus_ = nullptr;};
    inline int32_t uploadStatus() const { DARABONBA_PTR_GET_DEFAULT(uploadStatus_, 0) };
    inline DescribeBinaryLogListResponseBodyLogList& setUploadStatus(int32_t uploadStatus) { DARABONBA_PTR_SET_VALUE(uploadStatus_, uploadStatus) };


  protected:
    std::shared_ptr<string> beginTime_ = nullptr;
    std::shared_ptr<string> createdTime_ = nullptr;
    std::shared_ptr<string> downloadLink_ = nullptr;
    std::shared_ptr<string> endTime_ = nullptr;
    std::shared_ptr<string> fileName_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<int64_t> logSize_ = nullptr;
    std::shared_ptr<string> modifiedTime_ = nullptr;
    std::shared_ptr<int32_t> purgeStatus_ = nullptr;
    std::shared_ptr<string> uploadHost_ = nullptr;
    std::shared_ptr<int32_t> uploadStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
