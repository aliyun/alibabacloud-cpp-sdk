// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCLOUDRECORDVIDEORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYCLOUDRECORDVIDEORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryCloudRecordVideoResponseBodyVideoList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class QueryCloudRecordVideoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryCloudRecordVideoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(videoList, videoList_);
    };
    friend void from_json(const Darabonba::Json& j, QueryCloudRecordVideoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(videoList, videoList_);
    };
    QueryCloudRecordVideoResponseBody() = default ;
    QueryCloudRecordVideoResponseBody(const QueryCloudRecordVideoResponseBody &) = default ;
    QueryCloudRecordVideoResponseBody(QueryCloudRecordVideoResponseBody &&) = default ;
    QueryCloudRecordVideoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryCloudRecordVideoResponseBody() = default ;
    QueryCloudRecordVideoResponseBody& operator=(const QueryCloudRecordVideoResponseBody &) = default ;
    QueryCloudRecordVideoResponseBody& operator=(QueryCloudRecordVideoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->videoList_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryCloudRecordVideoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // videoList Field Functions 
    bool hasVideoList() const { return this->videoList_ != nullptr;};
    void deleteVideoList() { this->videoList_ = nullptr;};
    inline const vector<QueryCloudRecordVideoResponseBodyVideoList> & videoList() const { DARABONBA_PTR_GET_CONST(videoList_, vector<QueryCloudRecordVideoResponseBodyVideoList>) };
    inline vector<QueryCloudRecordVideoResponseBodyVideoList> videoList() { DARABONBA_PTR_GET(videoList_, vector<QueryCloudRecordVideoResponseBodyVideoList>) };
    inline QueryCloudRecordVideoResponseBody& setVideoList(const vector<QueryCloudRecordVideoResponseBodyVideoList> & videoList) { DARABONBA_PTR_SET_VALUE(videoList_, videoList) };
    inline QueryCloudRecordVideoResponseBody& setVideoList(vector<QueryCloudRecordVideoResponseBodyVideoList> && videoList) { DARABONBA_PTR_SET_RVALUE(videoList_, videoList) };


  protected:
    // requestId
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<vector<QueryCloudRecordVideoResponseBodyVideoList>> videoList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
