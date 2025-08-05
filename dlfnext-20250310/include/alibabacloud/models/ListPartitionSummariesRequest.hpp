// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPARTITIONSUMMARIESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTPARTITIONSUMMARIESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DlfNext20250310
{
namespace Models
{
  class ListPartitionSummariesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPartitionSummariesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(pageToken, pageToken_);
      DARABONBA_PTR_TO_JSON(partitionNamePattern, partitionNamePattern_);
    };
    friend void from_json(const Darabonba::Json& j, ListPartitionSummariesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(pageToken, pageToken_);
      DARABONBA_PTR_FROM_JSON(partitionNamePattern, partitionNamePattern_);
    };
    ListPartitionSummariesRequest() = default ;
    ListPartitionSummariesRequest(const ListPartitionSummariesRequest &) = default ;
    ListPartitionSummariesRequest(ListPartitionSummariesRequest &&) = default ;
    ListPartitionSummariesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPartitionSummariesRequest() = default ;
    ListPartitionSummariesRequest& operator=(const ListPartitionSummariesRequest &) = default ;
    ListPartitionSummariesRequest& operator=(ListPartitionSummariesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->maxResults_ != nullptr
        && this->pageToken_ != nullptr && this->partitionNamePattern_ != nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListPartitionSummariesRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // pageToken Field Functions 
    bool hasPageToken() const { return this->pageToken_ != nullptr;};
    void deletePageToken() { this->pageToken_ = nullptr;};
    inline string pageToken() const { DARABONBA_PTR_GET_DEFAULT(pageToken_, "") };
    inline ListPartitionSummariesRequest& setPageToken(string pageToken) { DARABONBA_PTR_SET_VALUE(pageToken_, pageToken) };


    // partitionNamePattern Field Functions 
    bool hasPartitionNamePattern() const { return this->partitionNamePattern_ != nullptr;};
    void deletePartitionNamePattern() { this->partitionNamePattern_ = nullptr;};
    inline string partitionNamePattern() const { DARABONBA_PTR_GET_DEFAULT(partitionNamePattern_, "") };
    inline ListPartitionSummariesRequest& setPartitionNamePattern(string partitionNamePattern) { DARABONBA_PTR_SET_VALUE(partitionNamePattern_, partitionNamePattern) };


  protected:
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    std::shared_ptr<string> pageToken_ = nullptr;
    std::shared_ptr<string> partitionNamePattern_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DlfNext20250310
#endif
