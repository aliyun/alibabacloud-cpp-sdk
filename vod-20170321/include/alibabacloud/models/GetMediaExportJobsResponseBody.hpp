// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMEDIAEXPORTJOBSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETMEDIAEXPORTJOBSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetMediaExportJobsResponseBodyMediaExportJobList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetMediaExportJobsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMediaExportJobsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FailedJobIds, failedJobIds_);
      DARABONBA_PTR_TO_JSON(MediaExportJobList, mediaExportJobList_);
      DARABONBA_PTR_TO_JSON(NonExistJobIds, nonExistJobIds_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetMediaExportJobsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FailedJobIds, failedJobIds_);
      DARABONBA_PTR_FROM_JSON(MediaExportJobList, mediaExportJobList_);
      DARABONBA_PTR_FROM_JSON(NonExistJobIds, nonExistJobIds_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetMediaExportJobsResponseBody() = default ;
    GetMediaExportJobsResponseBody(const GetMediaExportJobsResponseBody &) = default ;
    GetMediaExportJobsResponseBody(GetMediaExportJobsResponseBody &&) = default ;
    GetMediaExportJobsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMediaExportJobsResponseBody() = default ;
    GetMediaExportJobsResponseBody& operator=(const GetMediaExportJobsResponseBody &) = default ;
    GetMediaExportJobsResponseBody& operator=(GetMediaExportJobsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->failedJobIds_ != nullptr
        && this->mediaExportJobList_ != nullptr && this->nonExistJobIds_ != nullptr && this->requestId_ != nullptr; };
    // failedJobIds Field Functions 
    bool hasFailedJobIds() const { return this->failedJobIds_ != nullptr;};
    void deleteFailedJobIds() { this->failedJobIds_ = nullptr;};
    inline const vector<string> & failedJobIds() const { DARABONBA_PTR_GET_CONST(failedJobIds_, vector<string>) };
    inline vector<string> failedJobIds() { DARABONBA_PTR_GET(failedJobIds_, vector<string>) };
    inline GetMediaExportJobsResponseBody& setFailedJobIds(const vector<string> & failedJobIds) { DARABONBA_PTR_SET_VALUE(failedJobIds_, failedJobIds) };
    inline GetMediaExportJobsResponseBody& setFailedJobIds(vector<string> && failedJobIds) { DARABONBA_PTR_SET_RVALUE(failedJobIds_, failedJobIds) };


    // mediaExportJobList Field Functions 
    bool hasMediaExportJobList() const { return this->mediaExportJobList_ != nullptr;};
    void deleteMediaExportJobList() { this->mediaExportJobList_ = nullptr;};
    inline const vector<GetMediaExportJobsResponseBodyMediaExportJobList> & mediaExportJobList() const { DARABONBA_PTR_GET_CONST(mediaExportJobList_, vector<GetMediaExportJobsResponseBodyMediaExportJobList>) };
    inline vector<GetMediaExportJobsResponseBodyMediaExportJobList> mediaExportJobList() { DARABONBA_PTR_GET(mediaExportJobList_, vector<GetMediaExportJobsResponseBodyMediaExportJobList>) };
    inline GetMediaExportJobsResponseBody& setMediaExportJobList(const vector<GetMediaExportJobsResponseBodyMediaExportJobList> & mediaExportJobList) { DARABONBA_PTR_SET_VALUE(mediaExportJobList_, mediaExportJobList) };
    inline GetMediaExportJobsResponseBody& setMediaExportJobList(vector<GetMediaExportJobsResponseBodyMediaExportJobList> && mediaExportJobList) { DARABONBA_PTR_SET_RVALUE(mediaExportJobList_, mediaExportJobList) };


    // nonExistJobIds Field Functions 
    bool hasNonExistJobIds() const { return this->nonExistJobIds_ != nullptr;};
    void deleteNonExistJobIds() { this->nonExistJobIds_ = nullptr;};
    inline const vector<string> & nonExistJobIds() const { DARABONBA_PTR_GET_CONST(nonExistJobIds_, vector<string>) };
    inline vector<string> nonExistJobIds() { DARABONBA_PTR_GET(nonExistJobIds_, vector<string>) };
    inline GetMediaExportJobsResponseBody& setNonExistJobIds(const vector<string> & nonExistJobIds) { DARABONBA_PTR_SET_VALUE(nonExistJobIds_, nonExistJobIds) };
    inline GetMediaExportJobsResponseBody& setNonExistJobIds(vector<string> && nonExistJobIds) { DARABONBA_PTR_SET_RVALUE(nonExistJobIds_, nonExistJobIds) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetMediaExportJobsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<string>> failedJobIds_ = nullptr;
    std::shared_ptr<vector<GetMediaExportJobsResponseBodyMediaExportJobList>> mediaExportJobList_ = nullptr;
    std::shared_ptr<vector<string>> nonExistJobIds_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
