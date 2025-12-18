// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAGGREGATERESOURCERELATIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAGGREGATERESOURCERELATIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListAggregateResourceRelationsResponseBodyResourceRelations.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class ListAggregateResourceRelationsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAggregateResourceRelationsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceRelations, resourceRelations_);
    };
    friend void from_json(const Darabonba::Json& j, ListAggregateResourceRelationsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceRelations, resourceRelations_);
    };
    ListAggregateResourceRelationsResponseBody() = default ;
    ListAggregateResourceRelationsResponseBody(const ListAggregateResourceRelationsResponseBody &) = default ;
    ListAggregateResourceRelationsResponseBody(ListAggregateResourceRelationsResponseBody &&) = default ;
    ListAggregateResourceRelationsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAggregateResourceRelationsResponseBody() = default ;
    ListAggregateResourceRelationsResponseBody& operator=(const ListAggregateResourceRelationsResponseBody &) = default ;
    ListAggregateResourceRelationsResponseBody& operator=(ListAggregateResourceRelationsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->resourceRelations_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAggregateResourceRelationsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceRelations Field Functions 
    bool hasResourceRelations() const { return this->resourceRelations_ != nullptr;};
    void deleteResourceRelations() { this->resourceRelations_ = nullptr;};
    inline const ListAggregateResourceRelationsResponseBodyResourceRelations & resourceRelations() const { DARABONBA_PTR_GET_CONST(resourceRelations_, ListAggregateResourceRelationsResponseBodyResourceRelations) };
    inline ListAggregateResourceRelationsResponseBodyResourceRelations resourceRelations() { DARABONBA_PTR_GET(resourceRelations_, ListAggregateResourceRelationsResponseBodyResourceRelations) };
    inline ListAggregateResourceRelationsResponseBody& setResourceRelations(const ListAggregateResourceRelationsResponseBodyResourceRelations & resourceRelations) { DARABONBA_PTR_SET_VALUE(resourceRelations_, resourceRelations) };
    inline ListAggregateResourceRelationsResponseBody& setResourceRelations(ListAggregateResourceRelationsResponseBodyResourceRelations && resourceRelations) { DARABONBA_PTR_SET_RVALUE(resourceRelations_, resourceRelations) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The result of the relationship.
    std::shared_ptr<ListAggregateResourceRelationsResponseBodyResourceRelations> resourceRelations_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
