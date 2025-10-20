// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTICEBERGNAMESPACEDETAILSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTICEBERGNAMESPACEDETAILSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DlfNext20250310
{
namespace Models
{
  class ListIcebergNamespaceDetailsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListIcebergNamespaceDetailsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(namespaceNamePattern, namespaceNamePattern_);
      DARABONBA_PTR_TO_JSON(pageToken, pageToken_);
    };
    friend void from_json(const Darabonba::Json& j, ListIcebergNamespaceDetailsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(namespaceNamePattern, namespaceNamePattern_);
      DARABONBA_PTR_FROM_JSON(pageToken, pageToken_);
    };
    ListIcebergNamespaceDetailsRequest() = default ;
    ListIcebergNamespaceDetailsRequest(const ListIcebergNamespaceDetailsRequest &) = default ;
    ListIcebergNamespaceDetailsRequest(ListIcebergNamespaceDetailsRequest &&) = default ;
    ListIcebergNamespaceDetailsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListIcebergNamespaceDetailsRequest() = default ;
    ListIcebergNamespaceDetailsRequest& operator=(const ListIcebergNamespaceDetailsRequest &) = default ;
    ListIcebergNamespaceDetailsRequest& operator=(ListIcebergNamespaceDetailsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->maxResults_ == nullptr
        && return this->namespaceNamePattern_ == nullptr && return this->pageToken_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListIcebergNamespaceDetailsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // namespaceNamePattern Field Functions 
    bool hasNamespaceNamePattern() const { return this->namespaceNamePattern_ != nullptr;};
    void deleteNamespaceNamePattern() { this->namespaceNamePattern_ = nullptr;};
    inline string namespaceNamePattern() const { DARABONBA_PTR_GET_DEFAULT(namespaceNamePattern_, "") };
    inline ListIcebergNamespaceDetailsRequest& setNamespaceNamePattern(string namespaceNamePattern) { DARABONBA_PTR_SET_VALUE(namespaceNamePattern_, namespaceNamePattern) };


    // pageToken Field Functions 
    bool hasPageToken() const { return this->pageToken_ != nullptr;};
    void deletePageToken() { this->pageToken_ = nullptr;};
    inline string pageToken() const { DARABONBA_PTR_GET_DEFAULT(pageToken_, "") };
    inline ListIcebergNamespaceDetailsRequest& setPageToken(string pageToken) { DARABONBA_PTR_SET_VALUE(pageToken_, pageToken) };


  protected:
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    std::shared_ptr<string> namespaceNamePattern_ = nullptr;
    std::shared_ptr<string> pageToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DlfNext20250310
#endif
