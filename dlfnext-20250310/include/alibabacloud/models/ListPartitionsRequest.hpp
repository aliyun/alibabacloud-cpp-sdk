// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPARTITIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTPARTITIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DlfNext20250310
{
namespace Models
{
  class ListPartitionsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPartitionsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(pageToken, pageToken_);
      DARABONBA_PTR_TO_JSON(partitionNamePattern, partitionNamePattern_);
    };
    friend void from_json(const Darabonba::Json& j, ListPartitionsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(pageToken, pageToken_);
      DARABONBA_PTR_FROM_JSON(partitionNamePattern, partitionNamePattern_);
    };
    ListPartitionsRequest() = default ;
    ListPartitionsRequest(const ListPartitionsRequest &) = default ;
    ListPartitionsRequest(ListPartitionsRequest &&) = default ;
    ListPartitionsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPartitionsRequest() = default ;
    ListPartitionsRequest& operator=(const ListPartitionsRequest &) = default ;
    ListPartitionsRequest& operator=(ListPartitionsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->maxResults_ == nullptr
        && return this->pageToken_ == nullptr && return this->partitionNamePattern_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int64_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0L) };
    inline ListPartitionsRequest& setMaxResults(int64_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // pageToken Field Functions 
    bool hasPageToken() const { return this->pageToken_ != nullptr;};
    void deletePageToken() { this->pageToken_ = nullptr;};
    inline string pageToken() const { DARABONBA_PTR_GET_DEFAULT(pageToken_, "") };
    inline ListPartitionsRequest& setPageToken(string pageToken) { DARABONBA_PTR_SET_VALUE(pageToken_, pageToken) };


    // partitionNamePattern Field Functions 
    bool hasPartitionNamePattern() const { return this->partitionNamePattern_ != nullptr;};
    void deletePartitionNamePattern() { this->partitionNamePattern_ = nullptr;};
    inline string partitionNamePattern() const { DARABONBA_PTR_GET_DEFAULT(partitionNamePattern_, "") };
    inline ListPartitionsRequest& setPartitionNamePattern(string partitionNamePattern) { DARABONBA_PTR_SET_VALUE(partitionNamePattern_, partitionNamePattern) };


  protected:
    std::shared_ptr<int64_t> maxResults_ = nullptr;
    std::shared_ptr<string> pageToken_ = nullptr;
    std::shared_ptr<string> partitionNamePattern_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DlfNext20250310
#endif
