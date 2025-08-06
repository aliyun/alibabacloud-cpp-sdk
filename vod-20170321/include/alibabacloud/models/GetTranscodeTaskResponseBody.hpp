// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTRANSCODETASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETTRANSCODETASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetTranscodeTaskResponseBodyTranscodeJobInfoList.hpp>
#include <alibabacloud/models/GetTranscodeTaskResponseBodyTranscodeTask.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetTranscodeTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTranscodeTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NonExistJobIds, nonExistJobIds_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TranscodeJobInfoList, transcodeJobInfoList_);
      DARABONBA_PTR_TO_JSON(TranscodeTask, transcodeTask_);
    };
    friend void from_json(const Darabonba::Json& j, GetTranscodeTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NonExistJobIds, nonExistJobIds_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TranscodeJobInfoList, transcodeJobInfoList_);
      DARABONBA_PTR_FROM_JSON(TranscodeTask, transcodeTask_);
    };
    GetTranscodeTaskResponseBody() = default ;
    GetTranscodeTaskResponseBody(const GetTranscodeTaskResponseBody &) = default ;
    GetTranscodeTaskResponseBody(GetTranscodeTaskResponseBody &&) = default ;
    GetTranscodeTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTranscodeTaskResponseBody() = default ;
    GetTranscodeTaskResponseBody& operator=(const GetTranscodeTaskResponseBody &) = default ;
    GetTranscodeTaskResponseBody& operator=(GetTranscodeTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->nonExistJobIds_ != nullptr
        && this->requestId_ != nullptr && this->transcodeJobInfoList_ != nullptr && this->transcodeTask_ != nullptr; };
    // nonExistJobIds Field Functions 
    bool hasNonExistJobIds() const { return this->nonExistJobIds_ != nullptr;};
    void deleteNonExistJobIds() { this->nonExistJobIds_ = nullptr;};
    inline const vector<string> & nonExistJobIds() const { DARABONBA_PTR_GET_CONST(nonExistJobIds_, vector<string>) };
    inline vector<string> nonExistJobIds() { DARABONBA_PTR_GET(nonExistJobIds_, vector<string>) };
    inline GetTranscodeTaskResponseBody& setNonExistJobIds(const vector<string> & nonExistJobIds) { DARABONBA_PTR_SET_VALUE(nonExistJobIds_, nonExistJobIds) };
    inline GetTranscodeTaskResponseBody& setNonExistJobIds(vector<string> && nonExistJobIds) { DARABONBA_PTR_SET_RVALUE(nonExistJobIds_, nonExistJobIds) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetTranscodeTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // transcodeJobInfoList Field Functions 
    bool hasTranscodeJobInfoList() const { return this->transcodeJobInfoList_ != nullptr;};
    void deleteTranscodeJobInfoList() { this->transcodeJobInfoList_ = nullptr;};
    inline const vector<GetTranscodeTaskResponseBodyTranscodeJobInfoList> & transcodeJobInfoList() const { DARABONBA_PTR_GET_CONST(transcodeJobInfoList_, vector<GetTranscodeTaskResponseBodyTranscodeJobInfoList>) };
    inline vector<GetTranscodeTaskResponseBodyTranscodeJobInfoList> transcodeJobInfoList() { DARABONBA_PTR_GET(transcodeJobInfoList_, vector<GetTranscodeTaskResponseBodyTranscodeJobInfoList>) };
    inline GetTranscodeTaskResponseBody& setTranscodeJobInfoList(const vector<GetTranscodeTaskResponseBodyTranscodeJobInfoList> & transcodeJobInfoList) { DARABONBA_PTR_SET_VALUE(transcodeJobInfoList_, transcodeJobInfoList) };
    inline GetTranscodeTaskResponseBody& setTranscodeJobInfoList(vector<GetTranscodeTaskResponseBodyTranscodeJobInfoList> && transcodeJobInfoList) { DARABONBA_PTR_SET_RVALUE(transcodeJobInfoList_, transcodeJobInfoList) };


    // transcodeTask Field Functions 
    bool hasTranscodeTask() const { return this->transcodeTask_ != nullptr;};
    void deleteTranscodeTask() { this->transcodeTask_ = nullptr;};
    inline const GetTranscodeTaskResponseBodyTranscodeTask & transcodeTask() const { DARABONBA_PTR_GET_CONST(transcodeTask_, GetTranscodeTaskResponseBodyTranscodeTask) };
    inline GetTranscodeTaskResponseBodyTranscodeTask transcodeTask() { DARABONBA_PTR_GET(transcodeTask_, GetTranscodeTaskResponseBodyTranscodeTask) };
    inline GetTranscodeTaskResponseBody& setTranscodeTask(const GetTranscodeTaskResponseBodyTranscodeTask & transcodeTask) { DARABONBA_PTR_SET_VALUE(transcodeTask_, transcodeTask) };
    inline GetTranscodeTaskResponseBody& setTranscodeTask(GetTranscodeTaskResponseBodyTranscodeTask && transcodeTask) { DARABONBA_PTR_SET_RVALUE(transcodeTask_, transcodeTask) };


  protected:
    // The nonexistent job ID.
    std::shared_ptr<vector<string>> nonExistJobIds_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // List of transcode job information.
    std::shared_ptr<vector<GetTranscodeTaskResponseBodyTranscodeJobInfoList>> transcodeJobInfoList_ = nullptr;
    // Details about transcoding tasks.
    std::shared_ptr<GetTranscodeTaskResponseBodyTranscodeTask> transcodeTask_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
