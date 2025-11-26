// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEJOBGROUPRESPONSEBODYJOBGROUPEXPORTPROGRESS_HPP_
#define ALIBABACLOUD_MODELS_CREATEJOBGROUPRESPONSEBODYJOBGROUPEXPORTPROGRESS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class CreateJobGroupResponseBodyJobGroupExportProgress : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateJobGroupResponseBodyJobGroupExportProgress& obj) { 
      DARABONBA_PTR_TO_JSON(FileHttpUrl, fileHttpUrl_);
      DARABONBA_PTR_TO_JSON(Progress, progress_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, CreateJobGroupResponseBodyJobGroupExportProgress& obj) { 
      DARABONBA_PTR_FROM_JSON(FileHttpUrl, fileHttpUrl_);
      DARABONBA_PTR_FROM_JSON(Progress, progress_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    CreateJobGroupResponseBodyJobGroupExportProgress() = default ;
    CreateJobGroupResponseBodyJobGroupExportProgress(const CreateJobGroupResponseBodyJobGroupExportProgress &) = default ;
    CreateJobGroupResponseBodyJobGroupExportProgress(CreateJobGroupResponseBodyJobGroupExportProgress &&) = default ;
    CreateJobGroupResponseBodyJobGroupExportProgress(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateJobGroupResponseBodyJobGroupExportProgress() = default ;
    CreateJobGroupResponseBodyJobGroupExportProgress& operator=(const CreateJobGroupResponseBodyJobGroupExportProgress &) = default ;
    CreateJobGroupResponseBodyJobGroupExportProgress& operator=(CreateJobGroupResponseBodyJobGroupExportProgress &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fileHttpUrl_ == nullptr
        && return this->progress_ == nullptr && return this->status_ == nullptr; };
    // fileHttpUrl Field Functions 
    bool hasFileHttpUrl() const { return this->fileHttpUrl_ != nullptr;};
    void deleteFileHttpUrl() { this->fileHttpUrl_ = nullptr;};
    inline string fileHttpUrl() const { DARABONBA_PTR_GET_DEFAULT(fileHttpUrl_, "") };
    inline CreateJobGroupResponseBodyJobGroupExportProgress& setFileHttpUrl(string fileHttpUrl) { DARABONBA_PTR_SET_VALUE(fileHttpUrl_, fileHttpUrl) };


    // progress Field Functions 
    bool hasProgress() const { return this->progress_ != nullptr;};
    void deleteProgress() { this->progress_ = nullptr;};
    inline string progress() const { DARABONBA_PTR_GET_DEFAULT(progress_, "") };
    inline CreateJobGroupResponseBodyJobGroupExportProgress& setProgress(string progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline CreateJobGroupResponseBodyJobGroupExportProgress& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<string> fileHttpUrl_ = nullptr;
    std::shared_ptr<string> progress_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
