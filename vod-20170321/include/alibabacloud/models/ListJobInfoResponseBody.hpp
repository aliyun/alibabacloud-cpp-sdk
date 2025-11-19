// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTJOBINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTJOBINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListJobInfoResponseBodyJobInfoList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class ListJobInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListJobInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(JobInfoList, jobInfoList_);
      DARABONBA_PTR_TO_JSON(JobType, jobType_);
      DARABONBA_PTR_TO_JSON(MediaId, mediaId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListJobInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(JobInfoList, jobInfoList_);
      DARABONBA_PTR_FROM_JSON(JobType, jobType_);
      DARABONBA_PTR_FROM_JSON(MediaId, mediaId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListJobInfoResponseBody() = default ;
    ListJobInfoResponseBody(const ListJobInfoResponseBody &) = default ;
    ListJobInfoResponseBody(ListJobInfoResponseBody &&) = default ;
    ListJobInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListJobInfoResponseBody() = default ;
    ListJobInfoResponseBody& operator=(const ListJobInfoResponseBody &) = default ;
    ListJobInfoResponseBody& operator=(ListJobInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->jobInfoList_ == nullptr
        && return this->jobType_ == nullptr && return this->mediaId_ == nullptr && return this->requestId_ == nullptr; };
    // jobInfoList Field Functions 
    bool hasJobInfoList() const { return this->jobInfoList_ != nullptr;};
    void deleteJobInfoList() { this->jobInfoList_ = nullptr;};
    inline const vector<ListJobInfoResponseBodyJobInfoList> & jobInfoList() const { DARABONBA_PTR_GET_CONST(jobInfoList_, vector<ListJobInfoResponseBodyJobInfoList>) };
    inline vector<ListJobInfoResponseBodyJobInfoList> jobInfoList() { DARABONBA_PTR_GET(jobInfoList_, vector<ListJobInfoResponseBodyJobInfoList>) };
    inline ListJobInfoResponseBody& setJobInfoList(const vector<ListJobInfoResponseBodyJobInfoList> & jobInfoList) { DARABONBA_PTR_SET_VALUE(jobInfoList_, jobInfoList) };
    inline ListJobInfoResponseBody& setJobInfoList(vector<ListJobInfoResponseBodyJobInfoList> && jobInfoList) { DARABONBA_PTR_SET_RVALUE(jobInfoList_, jobInfoList) };


    // jobType Field Functions 
    bool hasJobType() const { return this->jobType_ != nullptr;};
    void deleteJobType() { this->jobType_ = nullptr;};
    inline string jobType() const { DARABONBA_PTR_GET_DEFAULT(jobType_, "") };
    inline ListJobInfoResponseBody& setJobType(string jobType) { DARABONBA_PTR_SET_VALUE(jobType_, jobType) };


    // mediaId Field Functions 
    bool hasMediaId() const { return this->mediaId_ != nullptr;};
    void deleteMediaId() { this->mediaId_ = nullptr;};
    inline string mediaId() const { DARABONBA_PTR_GET_DEFAULT(mediaId_, "") };
    inline ListJobInfoResponseBody& setMediaId(string mediaId) { DARABONBA_PTR_SET_VALUE(mediaId_, mediaId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListJobInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The historical tasks of the last 6 months.
    std::shared_ptr<vector<ListJobInfoResponseBodyJobInfoList>> jobInfoList_ = nullptr;
    // The type of the task. Valid values:
    // 
    // *   transcode
    // *   snapshot
    // *   ai
    std::shared_ptr<string> jobType_ = nullptr;
    // The ID of the media asset.
    std::shared_ptr<string> mediaId_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
