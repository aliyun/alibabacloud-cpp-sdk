// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRUNMETRICSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTRUNMETRICSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIWorkSpace20210204
{
namespace Models
{
  class ListRunMetricsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRunMetricsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(PageToken, pageToken_);
    };
    friend void from_json(const Darabonba::Json& j, ListRunMetricsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(PageToken, pageToken_);
    };
    ListRunMetricsRequest() = default ;
    ListRunMetricsRequest(const ListRunMetricsRequest &) = default ;
    ListRunMetricsRequest(ListRunMetricsRequest &&) = default ;
    ListRunMetricsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRunMetricsRequest() = default ;
    ListRunMetricsRequest& operator=(const ListRunMetricsRequest &) = default ;
    ListRunMetricsRequest& operator=(ListRunMetricsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->key_ == nullptr
        && return this->maxResults_ == nullptr && return this->pageToken_ == nullptr; };
    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline ListRunMetricsRequest& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int64_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0L) };
    inline ListRunMetricsRequest& setMaxResults(int64_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // pageToken Field Functions 
    bool hasPageToken() const { return this->pageToken_ != nullptr;};
    void deletePageToken() { this->pageToken_ = nullptr;};
    inline int64_t pageToken() const { DARABONBA_PTR_GET_DEFAULT(pageToken_, 0L) };
    inline ListRunMetricsRequest& setPageToken(int64_t pageToken) { DARABONBA_PTR_SET_VALUE(pageToken_, pageToken) };


  protected:
    // The metric key of the run.
    // 
    // This parameter is required.
    std::shared_ptr<string> key_ = nullptr;
    // The maximum number of entries in the request. Default value: 10.
    std::shared_ptr<int64_t> maxResults_ = nullptr;
    // The pagination token, which starts from 0. Default value: 0.
    std::shared_ptr<int64_t> pageToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
