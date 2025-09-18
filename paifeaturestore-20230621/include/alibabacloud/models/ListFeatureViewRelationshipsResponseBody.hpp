// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTFEATUREVIEWRELATIONSHIPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTFEATUREVIEWRELATIONSHIPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListFeatureViewRelationshipsResponseBodyRelationships.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiFeatureStore20230621
{
namespace Models
{
  class ListFeatureViewRelationshipsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListFeatureViewRelationshipsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Relationships, relationships_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListFeatureViewRelationshipsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Relationships, relationships_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListFeatureViewRelationshipsResponseBody() = default ;
    ListFeatureViewRelationshipsResponseBody(const ListFeatureViewRelationshipsResponseBody &) = default ;
    ListFeatureViewRelationshipsResponseBody(ListFeatureViewRelationshipsResponseBody &&) = default ;
    ListFeatureViewRelationshipsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListFeatureViewRelationshipsResponseBody() = default ;
    ListFeatureViewRelationshipsResponseBody& operator=(const ListFeatureViewRelationshipsResponseBody &) = default ;
    ListFeatureViewRelationshipsResponseBody& operator=(ListFeatureViewRelationshipsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->relationships_ != nullptr
        && this->requestId_ != nullptr; };
    // relationships Field Functions 
    bool hasRelationships() const { return this->relationships_ != nullptr;};
    void deleteRelationships() { this->relationships_ = nullptr;};
    inline const vector<ListFeatureViewRelationshipsResponseBodyRelationships> & relationships() const { DARABONBA_PTR_GET_CONST(relationships_, vector<ListFeatureViewRelationshipsResponseBodyRelationships>) };
    inline vector<ListFeatureViewRelationshipsResponseBodyRelationships> relationships() { DARABONBA_PTR_GET(relationships_, vector<ListFeatureViewRelationshipsResponseBodyRelationships>) };
    inline ListFeatureViewRelationshipsResponseBody& setRelationships(const vector<ListFeatureViewRelationshipsResponseBodyRelationships> & relationships) { DARABONBA_PTR_SET_VALUE(relationships_, relationships) };
    inline ListFeatureViewRelationshipsResponseBody& setRelationships(vector<ListFeatureViewRelationshipsResponseBodyRelationships> && relationships) { DARABONBA_PTR_SET_RVALUE(relationships_, relationships) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListFeatureViewRelationshipsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<ListFeatureViewRelationshipsResponseBodyRelationships>> relationships_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiFeatureStore20230621
#endif
