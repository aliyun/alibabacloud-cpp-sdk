// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMEDIAEXPORTJOBSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTMEDIAEXPORTJOBSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListMediaExportJobsResponseBodyMediaExportJobList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class ListMediaExportJobsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMediaExportJobsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MediaExportJobList, mediaExportJobList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, ListMediaExportJobsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MediaExportJobList, mediaExportJobList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    ListMediaExportJobsResponseBody() = default ;
    ListMediaExportJobsResponseBody(const ListMediaExportJobsResponseBody &) = default ;
    ListMediaExportJobsResponseBody(ListMediaExportJobsResponseBody &&) = default ;
    ListMediaExportJobsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMediaExportJobsResponseBody() = default ;
    ListMediaExportJobsResponseBody& operator=(const ListMediaExportJobsResponseBody &) = default ;
    ListMediaExportJobsResponseBody& operator=(ListMediaExportJobsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->mediaExportJobList_ != nullptr
        && this->requestId_ != nullptr && this->total_ != nullptr; };
    // mediaExportJobList Field Functions 
    bool hasMediaExportJobList() const { return this->mediaExportJobList_ != nullptr;};
    void deleteMediaExportJobList() { this->mediaExportJobList_ = nullptr;};
    inline const vector<ListMediaExportJobsResponseBodyMediaExportJobList> & mediaExportJobList() const { DARABONBA_PTR_GET_CONST(mediaExportJobList_, vector<ListMediaExportJobsResponseBodyMediaExportJobList>) };
    inline vector<ListMediaExportJobsResponseBodyMediaExportJobList> mediaExportJobList() { DARABONBA_PTR_GET(mediaExportJobList_, vector<ListMediaExportJobsResponseBodyMediaExportJobList>) };
    inline ListMediaExportJobsResponseBody& setMediaExportJobList(const vector<ListMediaExportJobsResponseBodyMediaExportJobList> & mediaExportJobList) { DARABONBA_PTR_SET_VALUE(mediaExportJobList_, mediaExportJobList) };
    inline ListMediaExportJobsResponseBody& setMediaExportJobList(vector<ListMediaExportJobsResponseBodyMediaExportJobList> && mediaExportJobList) { DARABONBA_PTR_SET_RVALUE(mediaExportJobList_, mediaExportJobList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListMediaExportJobsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline ListMediaExportJobsResponseBody& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    std::shared_ptr<vector<ListMediaExportJobsResponseBodyMediaExportJobList>> mediaExportJobList_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int64_t> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
