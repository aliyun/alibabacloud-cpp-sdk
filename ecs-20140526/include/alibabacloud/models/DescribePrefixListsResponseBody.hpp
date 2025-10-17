// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPREFIXLISTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPREFIXLISTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribePrefixListsResponseBodyPrefixLists.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribePrefixListsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePrefixListsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PrefixLists, prefixLists_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePrefixListsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PrefixLists, prefixLists_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribePrefixListsResponseBody() = default ;
    DescribePrefixListsResponseBody(const DescribePrefixListsResponseBody &) = default ;
    DescribePrefixListsResponseBody(DescribePrefixListsResponseBody &&) = default ;
    DescribePrefixListsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePrefixListsResponseBody() = default ;
    DescribePrefixListsResponseBody& operator=(const DescribePrefixListsResponseBody &) = default ;
    DescribePrefixListsResponseBody& operator=(DescribePrefixListsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->nextToken_ == nullptr
        && return this->prefixLists_ == nullptr && return this->requestId_ == nullptr; };
    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribePrefixListsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // prefixLists Field Functions 
    bool hasPrefixLists() const { return this->prefixLists_ != nullptr;};
    void deletePrefixLists() { this->prefixLists_ = nullptr;};
    inline const DescribePrefixListsResponseBodyPrefixLists & prefixLists() const { DARABONBA_PTR_GET_CONST(prefixLists_, DescribePrefixListsResponseBodyPrefixLists) };
    inline DescribePrefixListsResponseBodyPrefixLists prefixLists() { DARABONBA_PTR_GET(prefixLists_, DescribePrefixListsResponseBodyPrefixLists) };
    inline DescribePrefixListsResponseBody& setPrefixLists(const DescribePrefixListsResponseBodyPrefixLists & prefixLists) { DARABONBA_PTR_SET_VALUE(prefixLists_, prefixLists) };
    inline DescribePrefixListsResponseBody& setPrefixLists(DescribePrefixListsResponseBodyPrefixLists && prefixLists) { DARABONBA_PTR_SET_RVALUE(prefixLists_, prefixLists) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePrefixListsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The query token that is returned in this call. If the return value is empty, no more data is returned.
    std::shared_ptr<string> nextToken_ = nullptr;
    // Details about the prefix lists.
    std::shared_ptr<DescribePrefixListsResponseBodyPrefixLists> prefixLists_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
