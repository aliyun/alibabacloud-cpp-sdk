// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVIDEOANALYSISTASKRESPONSEBODYDATAPAYLOADOUTPUTVIDEOROLERECOGNITIONRESULTVIDEOROLESTIMEINTERVALS_HPP_
#define ALIBABACLOUD_MODELS_GETVIDEOANALYSISTASKRESPONSEBODYDATAPAYLOADOUTPUTVIDEOROLERECOGNITIONRESULTVIDEOROLESTIMEINTERVALS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuanMiaoLightApp20240801
{
namespace Models
{
  class GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoRoleRecognitionResultVideoRolesTimeIntervals : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoRoleRecognitionResultVideoRolesTimeIntervals& obj) { 
      DARABONBA_PTR_TO_JSON(endTime, endTime_);
      DARABONBA_PTR_TO_JSON(startTime, startTime_);
      DARABONBA_PTR_TO_JSON(timestamp, timestamp_);
      DARABONBA_PTR_TO_JSON(url, url_);
    };
    friend void from_json(const Darabonba::Json& j, GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoRoleRecognitionResultVideoRolesTimeIntervals& obj) { 
      DARABONBA_PTR_FROM_JSON(endTime, endTime_);
      DARABONBA_PTR_FROM_JSON(startTime, startTime_);
      DARABONBA_PTR_FROM_JSON(timestamp, timestamp_);
      DARABONBA_PTR_FROM_JSON(url, url_);
    };
    GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoRoleRecognitionResultVideoRolesTimeIntervals() = default ;
    GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoRoleRecognitionResultVideoRolesTimeIntervals(const GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoRoleRecognitionResultVideoRolesTimeIntervals &) = default ;
    GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoRoleRecognitionResultVideoRolesTimeIntervals(GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoRoleRecognitionResultVideoRolesTimeIntervals &&) = default ;
    GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoRoleRecognitionResultVideoRolesTimeIntervals(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoRoleRecognitionResultVideoRolesTimeIntervals() = default ;
    GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoRoleRecognitionResultVideoRolesTimeIntervals& operator=(const GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoRoleRecognitionResultVideoRolesTimeIntervals &) = default ;
    GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoRoleRecognitionResultVideoRolesTimeIntervals& operator=(GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoRoleRecognitionResultVideoRolesTimeIntervals &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endTime_ == nullptr
        && return this->startTime_ == nullptr && return this->timestamp_ == nullptr && return this->url_ == nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoRoleRecognitionResultVideoRolesTimeIntervals& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoRoleRecognitionResultVideoRolesTimeIntervals& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // timestamp Field Functions 
    bool hasTimestamp() const { return this->timestamp_ != nullptr;};
    void deleteTimestamp() { this->timestamp_ = nullptr;};
    inline int64_t timestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0L) };
    inline GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoRoleRecognitionResultVideoRolesTimeIntervals& setTimestamp(int64_t timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoRoleRecognitionResultVideoRolesTimeIntervals& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    std::shared_ptr<int64_t> endTime_ = nullptr;
    std::shared_ptr<int64_t> startTime_ = nullptr;
    std::shared_ptr<int64_t> timestamp_ = nullptr;
    std::shared_ptr<string> url_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuanMiaoLightApp20240801
#endif
