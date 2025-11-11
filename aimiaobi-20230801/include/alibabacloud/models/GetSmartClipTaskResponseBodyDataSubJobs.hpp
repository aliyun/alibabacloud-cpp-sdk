// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSMARTCLIPTASKRESPONSEBODYDATASUBJOBS_HPP_
#define ALIBABACLOUD_MODELS_GETSMARTCLIPTASKRESPONSEBODYDATASUBJOBS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetSmartClipTaskResponseBodyDataSubJobsFileAttr.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class GetSmartClipTaskResponseBodyDataSubJobs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSmartClipTaskResponseBodyDataSubJobs& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(FileAttr, fileAttr_);
      DARABONBA_PTR_TO_JSON(FileKey, fileKey_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(SubJobId, subJobId_);
    };
    friend void from_json(const Darabonba::Json& j, GetSmartClipTaskResponseBodyDataSubJobs& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(FileAttr, fileAttr_);
      DARABONBA_PTR_FROM_JSON(FileKey, fileKey_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(SubJobId, subJobId_);
    };
    GetSmartClipTaskResponseBodyDataSubJobs() = default ;
    GetSmartClipTaskResponseBodyDataSubJobs(const GetSmartClipTaskResponseBodyDataSubJobs &) = default ;
    GetSmartClipTaskResponseBodyDataSubJobs(GetSmartClipTaskResponseBodyDataSubJobs &&) = default ;
    GetSmartClipTaskResponseBodyDataSubJobs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSmartClipTaskResponseBodyDataSubJobs() = default ;
    GetSmartClipTaskResponseBodyDataSubJobs& operator=(const GetSmartClipTaskResponseBodyDataSubJobs &) = default ;
    GetSmartClipTaskResponseBodyDataSubJobs& operator=(GetSmartClipTaskResponseBodyDataSubJobs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->errorMessage_ == nullptr
        && return this->fileAttr_ == nullptr && return this->fileKey_ == nullptr && return this->status_ == nullptr && return this->subJobId_ == nullptr; };
    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline GetSmartClipTaskResponseBodyDataSubJobs& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // fileAttr Field Functions 
    bool hasFileAttr() const { return this->fileAttr_ != nullptr;};
    void deleteFileAttr() { this->fileAttr_ = nullptr;};
    inline const Models::GetSmartClipTaskResponseBodyDataSubJobsFileAttr & fileAttr() const { DARABONBA_PTR_GET_CONST(fileAttr_, Models::GetSmartClipTaskResponseBodyDataSubJobsFileAttr) };
    inline Models::GetSmartClipTaskResponseBodyDataSubJobsFileAttr fileAttr() { DARABONBA_PTR_GET(fileAttr_, Models::GetSmartClipTaskResponseBodyDataSubJobsFileAttr) };
    inline GetSmartClipTaskResponseBodyDataSubJobs& setFileAttr(const Models::GetSmartClipTaskResponseBodyDataSubJobsFileAttr & fileAttr) { DARABONBA_PTR_SET_VALUE(fileAttr_, fileAttr) };
    inline GetSmartClipTaskResponseBodyDataSubJobs& setFileAttr(Models::GetSmartClipTaskResponseBodyDataSubJobsFileAttr && fileAttr) { DARABONBA_PTR_SET_RVALUE(fileAttr_, fileAttr) };


    // fileKey Field Functions 
    bool hasFileKey() const { return this->fileKey_ != nullptr;};
    void deleteFileKey() { this->fileKey_ = nullptr;};
    inline string fileKey() const { DARABONBA_PTR_GET_DEFAULT(fileKey_, "") };
    inline GetSmartClipTaskResponseBodyDataSubJobs& setFileKey(string fileKey) { DARABONBA_PTR_SET_VALUE(fileKey_, fileKey) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetSmartClipTaskResponseBodyDataSubJobs& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // subJobId Field Functions 
    bool hasSubJobId() const { return this->subJobId_ != nullptr;};
    void deleteSubJobId() { this->subJobId_ = nullptr;};
    inline string subJobId() const { DARABONBA_PTR_GET_DEFAULT(subJobId_, "") };
    inline GetSmartClipTaskResponseBodyDataSubJobs& setSubJobId(string subJobId) { DARABONBA_PTR_SET_VALUE(subJobId_, subJobId) };


  protected:
    std::shared_ptr<string> errorMessage_ = nullptr;
    std::shared_ptr<Models::GetSmartClipTaskResponseBodyDataSubJobsFileAttr> fileAttr_ = nullptr;
    std::shared_ptr<string> fileKey_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> subJobId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
