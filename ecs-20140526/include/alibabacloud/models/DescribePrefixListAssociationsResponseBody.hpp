// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPREFIXLISTASSOCIATIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPREFIXLISTASSOCIATIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribePrefixListAssociationsResponseBodyPrefixListAssociations.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribePrefixListAssociationsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePrefixListAssociationsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PrefixListAssociations, prefixListAssociations_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePrefixListAssociationsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PrefixListAssociations, prefixListAssociations_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribePrefixListAssociationsResponseBody() = default ;
    DescribePrefixListAssociationsResponseBody(const DescribePrefixListAssociationsResponseBody &) = default ;
    DescribePrefixListAssociationsResponseBody(DescribePrefixListAssociationsResponseBody &&) = default ;
    DescribePrefixListAssociationsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePrefixListAssociationsResponseBody() = default ;
    DescribePrefixListAssociationsResponseBody& operator=(const DescribePrefixListAssociationsResponseBody &) = default ;
    DescribePrefixListAssociationsResponseBody& operator=(DescribePrefixListAssociationsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->nextToken_ == nullptr
        && return this->prefixListAssociations_ == nullptr && return this->requestId_ == nullptr; };
    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribePrefixListAssociationsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // prefixListAssociations Field Functions 
    bool hasPrefixListAssociations() const { return this->prefixListAssociations_ != nullptr;};
    void deletePrefixListAssociations() { this->prefixListAssociations_ = nullptr;};
    inline const DescribePrefixListAssociationsResponseBodyPrefixListAssociations & prefixListAssociations() const { DARABONBA_PTR_GET_CONST(prefixListAssociations_, DescribePrefixListAssociationsResponseBodyPrefixListAssociations) };
    inline DescribePrefixListAssociationsResponseBodyPrefixListAssociations prefixListAssociations() { DARABONBA_PTR_GET(prefixListAssociations_, DescribePrefixListAssociationsResponseBodyPrefixListAssociations) };
    inline DescribePrefixListAssociationsResponseBody& setPrefixListAssociations(const DescribePrefixListAssociationsResponseBodyPrefixListAssociations & prefixListAssociations) { DARABONBA_PTR_SET_VALUE(prefixListAssociations_, prefixListAssociations) };
    inline DescribePrefixListAssociationsResponseBody& setPrefixListAssociations(DescribePrefixListAssociationsResponseBodyPrefixListAssociations && prefixListAssociations) { DARABONBA_PTR_SET_RVALUE(prefixListAssociations_, prefixListAssociations) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePrefixListAssociationsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The query token that is returned in this call. If the return value is empty, no more data is returned.
    std::shared_ptr<string> nextToken_ = nullptr;
    // Details about the resources that are associated with the prefix list.
    std::shared_ptr<DescribePrefixListAssociationsResponseBodyPrefixListAssociations> prefixListAssociations_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
