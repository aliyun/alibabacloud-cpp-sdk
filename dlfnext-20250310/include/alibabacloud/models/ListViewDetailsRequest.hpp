// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVIEWDETAILSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTVIEWDETAILSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DlfNext20250310
{
namespace Models
{
  class ListViewDetailsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListViewDetailsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(pageToken, pageToken_);
      DARABONBA_PTR_TO_JSON(viewNamePattern, viewNamePattern_);
    };
    friend void from_json(const Darabonba::Json& j, ListViewDetailsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(pageToken, pageToken_);
      DARABONBA_PTR_FROM_JSON(viewNamePattern, viewNamePattern_);
    };
    ListViewDetailsRequest() = default ;
    ListViewDetailsRequest(const ListViewDetailsRequest &) = default ;
    ListViewDetailsRequest(ListViewDetailsRequest &&) = default ;
    ListViewDetailsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListViewDetailsRequest() = default ;
    ListViewDetailsRequest& operator=(const ListViewDetailsRequest &) = default ;
    ListViewDetailsRequest& operator=(ListViewDetailsRequest &&) = default ;
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
    inline ListViewDetailsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // pageToken Field Functions 
    bool hasPageToken() const { return this->pageToken_ != nullptr;};
    void deletePageToken() { this->pageToken_ = nullptr;};
    inline string getPageToken() const { DARABONBA_PTR_GET_DEFAULT(pageToken_, "") };
    inline ListViewDetailsRequest& setPageToken(string pageToken) { DARABONBA_PTR_SET_VALUE(pageToken_, pageToken) };


    // viewNamePattern Field Functions 
    bool hasViewNamePattern() const { return this->viewNamePattern_ != nullptr;};
    void deleteViewNamePattern() { this->viewNamePattern_ = nullptr;};
    inline string getViewNamePattern() const { DARABONBA_PTR_GET_DEFAULT(viewNamePattern_, "") };
    inline ListViewDetailsRequest& setViewNamePattern(string viewNamePattern) { DARABONBA_PTR_SET_VALUE(viewNamePattern_, viewNamePattern) };


  protected:
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> pageToken_ {};
    shared_ptr<string> viewNamePattern_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DlfNext20250310
#endif
