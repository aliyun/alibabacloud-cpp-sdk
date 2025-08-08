// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATATRACKJOBDEGREERESPONSEBODYJOBDEGREE_HPP_
#define ALIBABACLOUD_MODELS_GETDATATRACKJOBDEGREERESPONSEBODYJOBDEGREE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetDataTrackJobDegreeResponseBodyJobDegree : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataTrackJobDegreeResponseBodyJobDegree& obj) { 
      DARABONBA_PTR_TO_JSON(DownloadCompletionDegree, downloadCompletionDegree_);
      DARABONBA_PTR_TO_JSON(FilterCompletionDegree, filterCompletionDegree_);
      DARABONBA_PTR_TO_JSON(JobStatus, jobStatus_);
      DARABONBA_PTR_TO_JSON(ListCompletionDegree, listCompletionDegree_);
      DARABONBA_PTR_TO_JSON(StatusDesc, statusDesc_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataTrackJobDegreeResponseBodyJobDegree& obj) { 
      DARABONBA_PTR_FROM_JSON(DownloadCompletionDegree, downloadCompletionDegree_);
      DARABONBA_PTR_FROM_JSON(FilterCompletionDegree, filterCompletionDegree_);
      DARABONBA_PTR_FROM_JSON(JobStatus, jobStatus_);
      DARABONBA_PTR_FROM_JSON(ListCompletionDegree, listCompletionDegree_);
      DARABONBA_PTR_FROM_JSON(StatusDesc, statusDesc_);
    };
    GetDataTrackJobDegreeResponseBodyJobDegree() = default ;
    GetDataTrackJobDegreeResponseBodyJobDegree(const GetDataTrackJobDegreeResponseBodyJobDegree &) = default ;
    GetDataTrackJobDegreeResponseBodyJobDegree(GetDataTrackJobDegreeResponseBodyJobDegree &&) = default ;
    GetDataTrackJobDegreeResponseBodyJobDegree(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataTrackJobDegreeResponseBodyJobDegree() = default ;
    GetDataTrackJobDegreeResponseBodyJobDegree& operator=(const GetDataTrackJobDegreeResponseBodyJobDegree &) = default ;
    GetDataTrackJobDegreeResponseBodyJobDegree& operator=(GetDataTrackJobDegreeResponseBodyJobDegree &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->downloadCompletionDegree_ != nullptr
        && this->filterCompletionDegree_ != nullptr && this->jobStatus_ != nullptr && this->listCompletionDegree_ != nullptr && this->statusDesc_ != nullptr; };
    // downloadCompletionDegree Field Functions 
    bool hasDownloadCompletionDegree() const { return this->downloadCompletionDegree_ != nullptr;};
    void deleteDownloadCompletionDegree() { this->downloadCompletionDegree_ = nullptr;};
    inline double downloadCompletionDegree() const { DARABONBA_PTR_GET_DEFAULT(downloadCompletionDegree_, 0.0) };
    inline GetDataTrackJobDegreeResponseBodyJobDegree& setDownloadCompletionDegree(double downloadCompletionDegree) { DARABONBA_PTR_SET_VALUE(downloadCompletionDegree_, downloadCompletionDegree) };


    // filterCompletionDegree Field Functions 
    bool hasFilterCompletionDegree() const { return this->filterCompletionDegree_ != nullptr;};
    void deleteFilterCompletionDegree() { this->filterCompletionDegree_ = nullptr;};
    inline double filterCompletionDegree() const { DARABONBA_PTR_GET_DEFAULT(filterCompletionDegree_, 0.0) };
    inline GetDataTrackJobDegreeResponseBodyJobDegree& setFilterCompletionDegree(double filterCompletionDegree) { DARABONBA_PTR_SET_VALUE(filterCompletionDegree_, filterCompletionDegree) };


    // jobStatus Field Functions 
    bool hasJobStatus() const { return this->jobStatus_ != nullptr;};
    void deleteJobStatus() { this->jobStatus_ = nullptr;};
    inline string jobStatus() const { DARABONBA_PTR_GET_DEFAULT(jobStatus_, "") };
    inline GetDataTrackJobDegreeResponseBodyJobDegree& setJobStatus(string jobStatus) { DARABONBA_PTR_SET_VALUE(jobStatus_, jobStatus) };


    // listCompletionDegree Field Functions 
    bool hasListCompletionDegree() const { return this->listCompletionDegree_ != nullptr;};
    void deleteListCompletionDegree() { this->listCompletionDegree_ = nullptr;};
    inline double listCompletionDegree() const { DARABONBA_PTR_GET_DEFAULT(listCompletionDegree_, 0.0) };
    inline GetDataTrackJobDegreeResponseBodyJobDegree& setListCompletionDegree(double listCompletionDegree) { DARABONBA_PTR_SET_VALUE(listCompletionDegree_, listCompletionDegree) };


    // statusDesc Field Functions 
    bool hasStatusDesc() const { return this->statusDesc_ != nullptr;};
    void deleteStatusDesc() { this->statusDesc_ = nullptr;};
    inline string statusDesc() const { DARABONBA_PTR_GET_DEFAULT(statusDesc_, "") };
    inline GetDataTrackJobDegreeResponseBodyJobDegree& setStatusDesc(string statusDesc) { DARABONBA_PTR_SET_VALUE(statusDesc_, statusDesc) };


  protected:
    // The progress of binary log download. Valid values: 0 to 1. A value of 1 indicates that binary log download is complete.
    std::shared_ptr<double> downloadCompletionDegree_ = nullptr;
    // The progress of binary log parsing. Valid values: 0 to 1. A value of 1 indicates that binary log parsing is complete.
    std::shared_ptr<double> filterCompletionDegree_ = nullptr;
    // The status of the data tracking task. Valid values:
    // 
    // *   **INIT**: The task is being initialized.
    // *   **LISTING**: The binary logs are being obtained.
    // *   **LIST_SUCCESS**: The binary logs are successfully obtained.
    // *   **DOWNLOADING**: The binary logs are being downloaded.
    // *   **DOWNLOAD_FAIL**: The binary logs failed to be downloaded.
    // *   **DOWNLOAD_SUCCESS**: The binary logs are successfully downloaded.
    // *   **FILTERING**: The binary logs are being parsed.
    // *   **FILTER_FAIL**: The binary logs failed to be parsed.
    // *   **FILTER_SUCCESS**: The binary logs are successfully parsed.
    std::shared_ptr<string> jobStatus_ = nullptr;
    // The progress of binary log obtaining. Valid values: 0 to 1. A value of 1 indicates that binary log obtaining is complete.
    std::shared_ptr<double> listCompletionDegree_ = nullptr;
    // The description of the task status.
    std::shared_ptr<string> statusDesc_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
