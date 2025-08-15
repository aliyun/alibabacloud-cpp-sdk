// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTICEBERGNAMESPACEDETAILSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTICEBERGNAMESPACEDETAILSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/Namespace.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DlfNext20250310
{
namespace Models
{
  class ListIcebergNamespaceDetailsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListIcebergNamespaceDetailsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(namespaceDetails, namespaceDetails_);
      DARABONBA_PTR_TO_JSON(nextPageToken, nextPageToken_);
    };
    friend void from_json(const Darabonba::Json& j, ListIcebergNamespaceDetailsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(namespaceDetails, namespaceDetails_);
      DARABONBA_PTR_FROM_JSON(nextPageToken, nextPageToken_);
    };
    ListIcebergNamespaceDetailsResponseBody() = default ;
    ListIcebergNamespaceDetailsResponseBody(const ListIcebergNamespaceDetailsResponseBody &) = default ;
    ListIcebergNamespaceDetailsResponseBody(ListIcebergNamespaceDetailsResponseBody &&) = default ;
    ListIcebergNamespaceDetailsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListIcebergNamespaceDetailsResponseBody() = default ;
    ListIcebergNamespaceDetailsResponseBody& operator=(const ListIcebergNamespaceDetailsResponseBody &) = default ;
    ListIcebergNamespaceDetailsResponseBody& operator=(ListIcebergNamespaceDetailsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->namespaceDetails_ != nullptr
        && this->nextPageToken_ != nullptr; };
    // namespaceDetails Field Functions 
    bool hasNamespaceDetails() const { return this->namespaceDetails_ != nullptr;};
    void deleteNamespaceDetails() { this->namespaceDetails_ = nullptr;};
    inline const vector<_Namespace> & namespaceDetails() const { DARABONBA_PTR_GET_CONST(namespaceDetails_, vector<_Namespace>) };
    inline vector<_Namespace> namespaceDetails() { DARABONBA_PTR_GET(namespaceDetails_, vector<_Namespace>) };
    inline ListIcebergNamespaceDetailsResponseBody& setNamespaceDetails(const vector<_Namespace> & namespaceDetails) { DARABONBA_PTR_SET_VALUE(namespaceDetails_, namespaceDetails) };
    inline ListIcebergNamespaceDetailsResponseBody& setNamespaceDetails(vector<_Namespace> && namespaceDetails) { DARABONBA_PTR_SET_RVALUE(namespaceDetails_, namespaceDetails) };


    // nextPageToken Field Functions 
    bool hasNextPageToken() const { return this->nextPageToken_ != nullptr;};
    void deleteNextPageToken() { this->nextPageToken_ = nullptr;};
    inline string nextPageToken() const { DARABONBA_PTR_GET_DEFAULT(nextPageToken_, "") };
    inline ListIcebergNamespaceDetailsResponseBody& setNextPageToken(string nextPageToken) { DARABONBA_PTR_SET_VALUE(nextPageToken_, nextPageToken) };


  protected:
    std::shared_ptr<vector<_Namespace>> namespaceDetails_ = nullptr;
    std::shared_ptr<string> nextPageToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DlfNext20250310
#endif
