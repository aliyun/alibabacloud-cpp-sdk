// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPODLOGSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETPODLOGSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDlc20201203
{
namespace Models
{
  class GetPodLogsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPodLogsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DownloadToFile, downloadToFile_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(MaxLines, maxLines_);
      DARABONBA_PTR_TO_JSON(PodUid, podUid_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, GetPodLogsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DownloadToFile, downloadToFile_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(MaxLines, maxLines_);
      DARABONBA_PTR_FROM_JSON(PodUid, podUid_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    GetPodLogsRequest() = default ;
    GetPodLogsRequest(const GetPodLogsRequest &) = default ;
    GetPodLogsRequest(GetPodLogsRequest &&) = default ;
    GetPodLogsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPodLogsRequest() = default ;
    GetPodLogsRequest& operator=(const GetPodLogsRequest &) = default ;
    GetPodLogsRequest& operator=(GetPodLogsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->downloadToFile_ == nullptr
        && this->endTime_ == nullptr && this->maxLines_ == nullptr && this->podUid_ == nullptr && this->startTime_ == nullptr; };
    // downloadToFile Field Functions 
    bool hasDownloadToFile() const { return this->downloadToFile_ != nullptr;};
    void deleteDownloadToFile() { this->downloadToFile_ = nullptr;};
    inline bool getDownloadToFile() const { DARABONBA_PTR_GET_DEFAULT(downloadToFile_, false) };
    inline GetPodLogsRequest& setDownloadToFile(bool downloadToFile) { DARABONBA_PTR_SET_VALUE(downloadToFile_, downloadToFile) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline GetPodLogsRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // maxLines Field Functions 
    bool hasMaxLines() const { return this->maxLines_ != nullptr;};
    void deleteMaxLines() { this->maxLines_ = nullptr;};
    inline int32_t getMaxLines() const { DARABONBA_PTR_GET_DEFAULT(maxLines_, 0) };
    inline GetPodLogsRequest& setMaxLines(int32_t maxLines) { DARABONBA_PTR_SET_VALUE(maxLines_, maxLines) };


    // podUid Field Functions 
    bool hasPodUid() const { return this->podUid_ != nullptr;};
    void deletePodUid() { this->podUid_ = nullptr;};
    inline string getPodUid() const { DARABONBA_PTR_GET_DEFAULT(podUid_, "") };
    inline GetPodLogsRequest& setPodUid(string podUid) { DARABONBA_PTR_SET_VALUE(podUid_, podUid) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline GetPodLogsRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // Specifies whether to download the log file. Default value: false. Valid values:
    // 
    // *   false
    // *   true
    shared_ptr<bool> downloadToFile_ {};
    // The end time of the query. Default value: current time.
    shared_ptr<string> endTime_ {};
    // The maximum number of log entries. Default value: 2000.
    shared_ptr<int32_t> maxLines_ {};
    // The node UID. For more information about how to obtain a node UID, see [GetJob](https://help.aliyun.com/document_detail/459677.html).
    shared_ptr<string> podUid_ {};
    // The start time of the query. Default value: 7 days ago.
    shared_ptr<string> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDlc20201203
#endif
