// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSHARERECEIVERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSHARERECEIVERSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DlfNext20250310
{
namespace Models
{
  class ListShareReceiversRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListShareReceiversRequest& obj) { 
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(pageToken, pageToken_);
    };
    friend void from_json(const Darabonba::Json& j, ListShareReceiversRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(pageToken, pageToken_);
    };
    ListShareReceiversRequest() = default ;
    ListShareReceiversRequest(const ListShareReceiversRequest &) = default ;
    ListShareReceiversRequest(ListShareReceiversRequest &&) = default ;
    ListShareReceiversRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListShareReceiversRequest() = default ;
    ListShareReceiversRequest& operator=(const ListShareReceiversRequest &) = default ;
    ListShareReceiversRequest& operator=(ListShareReceiversRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->maxResults_ != nullptr
        && this->pageToken_ != nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListShareReceiversRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // pageToken Field Functions 
    bool hasPageToken() const { return this->pageToken_ != nullptr;};
    void deletePageToken() { this->pageToken_ = nullptr;};
    inline string pageToken() const { DARABONBA_PTR_GET_DEFAULT(pageToken_, "") };
    inline ListShareReceiversRequest& setPageToken(string pageToken) { DARABONBA_PTR_SET_VALUE(pageToken_, pageToken) };


  protected:
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    std::shared_ptr<string> pageToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DlfNext20250310
#endif
