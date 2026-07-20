// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVIEWSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTVIEWSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DlfNext20250310
{
namespace Models
{
  class ListViewsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListViewsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(pageToken, pageToken_);
      DARABONBA_PTR_TO_JSON(viewNamePattern, viewNamePattern_);
    };
    friend void from_json(const Darabonba::Json& j, ListViewsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(pageToken, pageToken_);
      DARABONBA_PTR_FROM_JSON(viewNamePattern, viewNamePattern_);
    };
    ListViewsRequest() = default ;
    ListViewsRequest(const ListViewsRequest &) = default ;
    ListViewsRequest(ListViewsRequest &&) = default ;
    ListViewsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListViewsRequest() = default ;
    ListViewsRequest& operator=(const ListViewsRequest &) = default ;
    ListViewsRequest& operator=(ListViewsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->pageToken_ == nullptr && this->viewNamePattern_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListViewsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // pageToken Field Functions 
    bool hasPageToken() const { return this->pageToken_ != nullptr;};
    void deletePageToken() { this->pageToken_ = nullptr;};
    inline string getPageToken() const { DARABONBA_PTR_GET_DEFAULT(pageToken_, "") };
    inline ListViewsRequest& setPageToken(string pageToken) { DARABONBA_PTR_SET_VALUE(pageToken_, pageToken) };


    // viewNamePattern Field Functions 
    bool hasViewNamePattern() const { return this->viewNamePattern_ != nullptr;};
    void deleteViewNamePattern() { this->viewNamePattern_ = nullptr;};
    inline string getViewNamePattern() const { DARABONBA_PTR_GET_DEFAULT(viewNamePattern_, "") };
    inline ListViewsRequest& setViewNamePattern(string viewNamePattern) { DARABONBA_PTR_SET_VALUE(viewNamePattern_, viewNamePattern) };


  protected:
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> pageToken_ {};
    shared_ptr<string> viewNamePattern_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DlfNext20250310
#endif
