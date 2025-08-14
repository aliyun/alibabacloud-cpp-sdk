// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSNAPSHOTURLSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSNAPSHOTURLSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetSnapshotUrlsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSnapshotUrlsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SnapshotUrls, snapshotUrls_);
      DARABONBA_PTR_TO_JSON(Total, total_);
      DARABONBA_PTR_TO_JSON(WebVTTUrl, webVTTUrl_);
    };
    friend void from_json(const Darabonba::Json& j, GetSnapshotUrlsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SnapshotUrls, snapshotUrls_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
      DARABONBA_PTR_FROM_JSON(WebVTTUrl, webVTTUrl_);
    };
    GetSnapshotUrlsResponseBody() = default ;
    GetSnapshotUrlsResponseBody(const GetSnapshotUrlsResponseBody &) = default ;
    GetSnapshotUrlsResponseBody(GetSnapshotUrlsResponseBody &&) = default ;
    GetSnapshotUrlsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSnapshotUrlsResponseBody() = default ;
    GetSnapshotUrlsResponseBody& operator=(const GetSnapshotUrlsResponseBody &) = default ;
    GetSnapshotUrlsResponseBody& operator=(GetSnapshotUrlsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->snapshotUrls_ != nullptr && this->total_ != nullptr && this->webVTTUrl_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSnapshotUrlsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // snapshotUrls Field Functions 
    bool hasSnapshotUrls() const { return this->snapshotUrls_ != nullptr;};
    void deleteSnapshotUrls() { this->snapshotUrls_ = nullptr;};
    inline const vector<string> & snapshotUrls() const { DARABONBA_PTR_GET_CONST(snapshotUrls_, vector<string>) };
    inline vector<string> snapshotUrls() { DARABONBA_PTR_GET(snapshotUrls_, vector<string>) };
    inline GetSnapshotUrlsResponseBody& setSnapshotUrls(const vector<string> & snapshotUrls) { DARABONBA_PTR_SET_VALUE(snapshotUrls_, snapshotUrls) };
    inline GetSnapshotUrlsResponseBody& setSnapshotUrls(vector<string> && snapshotUrls) { DARABONBA_PTR_SET_RVALUE(snapshotUrls_, snapshotUrls) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline GetSnapshotUrlsResponseBody& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    // webVTTUrl Field Functions 
    bool hasWebVTTUrl() const { return this->webVTTUrl_ != nullptr;};
    void deleteWebVTTUrl() { this->webVTTUrl_ = nullptr;};
    inline string webVTTUrl() const { DARABONBA_PTR_GET_DEFAULT(webVTTUrl_, "") };
    inline GetSnapshotUrlsResponseBody& setWebVTTUrl(string webVTTUrl) { DARABONBA_PTR_SET_VALUE(webVTTUrl_, webVTTUrl) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The list of snapshot URLs.
    std::shared_ptr<vector<string>> snapshotUrls_ = nullptr;
    // The total number of snapshots.
    std::shared_ptr<int32_t> total_ = nullptr;
    // The URL of the WebVTT file.
    std::shared_ptr<string> webVTTUrl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
