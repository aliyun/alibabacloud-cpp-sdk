// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESTREAMBATCHJOBMAPPINGRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_CREATESTREAMBATCHJOBMAPPINGRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class CreateStreamBatchJobMappingResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateStreamBatchJobMappingResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(FileId, fileId_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(Url, url_);
    };
    friend void from_json(const Darabonba::Json& j, CreateStreamBatchJobMappingResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(FileId, fileId_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
    };
    CreateStreamBatchJobMappingResponseBodyData() = default ;
    CreateStreamBatchJobMappingResponseBodyData(const CreateStreamBatchJobMappingResponseBodyData &) = default ;
    CreateStreamBatchJobMappingResponseBodyData(CreateStreamBatchJobMappingResponseBodyData &&) = default ;
    CreateStreamBatchJobMappingResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateStreamBatchJobMappingResponseBodyData() = default ;
    CreateStreamBatchJobMappingResponseBodyData& operator=(const CreateStreamBatchJobMappingResponseBodyData &) = default ;
    CreateStreamBatchJobMappingResponseBodyData& operator=(CreateStreamBatchJobMappingResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fileId_ == nullptr
        && return this->jobId_ == nullptr && return this->url_ == nullptr; };
    // fileId Field Functions 
    bool hasFileId() const { return this->fileId_ != nullptr;};
    void deleteFileId() { this->fileId_ = nullptr;};
    inline string fileId() const { DARABONBA_PTR_GET_DEFAULT(fileId_, "") };
    inline CreateStreamBatchJobMappingResponseBodyData& setFileId(string fileId) { DARABONBA_PTR_SET_VALUE(fileId_, fileId) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline int64_t jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, 0L) };
    inline CreateStreamBatchJobMappingResponseBodyData& setJobId(int64_t jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline CreateStreamBatchJobMappingResponseBodyData& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    std::shared_ptr<string> fileId_ = nullptr;
    std::shared_ptr<int64_t> jobId_ = nullptr;
    std::shared_ptr<string> url_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
