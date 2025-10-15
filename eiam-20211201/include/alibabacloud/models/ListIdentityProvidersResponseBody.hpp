// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTIDENTITYPROVIDERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTIDENTITYPROVIDERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListIdentityProvidersResponseBodyIdentityProviders.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class ListIdentityProvidersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListIdentityProvidersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(IdentityProviders, identityProviders_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListIdentityProvidersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(IdentityProviders, identityProviders_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListIdentityProvidersResponseBody() = default ;
    ListIdentityProvidersResponseBody(const ListIdentityProvidersResponseBody &) = default ;
    ListIdentityProvidersResponseBody(ListIdentityProvidersResponseBody &&) = default ;
    ListIdentityProvidersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListIdentityProvidersResponseBody() = default ;
    ListIdentityProvidersResponseBody& operator=(const ListIdentityProvidersResponseBody &) = default ;
    ListIdentityProvidersResponseBody& operator=(ListIdentityProvidersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->identityProviders_ == nullptr
        && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // identityProviders Field Functions 
    bool hasIdentityProviders() const { return this->identityProviders_ != nullptr;};
    void deleteIdentityProviders() { this->identityProviders_ = nullptr;};
    inline const vector<ListIdentityProvidersResponseBodyIdentityProviders> & identityProviders() const { DARABONBA_PTR_GET_CONST(identityProviders_, vector<ListIdentityProvidersResponseBodyIdentityProviders>) };
    inline vector<ListIdentityProvidersResponseBodyIdentityProviders> identityProviders() { DARABONBA_PTR_GET(identityProviders_, vector<ListIdentityProvidersResponseBodyIdentityProviders>) };
    inline ListIdentityProvidersResponseBody& setIdentityProviders(const vector<ListIdentityProvidersResponseBodyIdentityProviders> & identityProviders) { DARABONBA_PTR_SET_VALUE(identityProviders_, identityProviders) };
    inline ListIdentityProvidersResponseBody& setIdentityProviders(vector<ListIdentityProvidersResponseBodyIdentityProviders> && identityProviders) { DARABONBA_PTR_SET_RVALUE(identityProviders_, identityProviders) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListIdentityProvidersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListIdentityProvidersResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // Identity provider information array.
    std::shared_ptr<vector<ListIdentityProvidersResponseBodyIdentityProviders>> identityProviders_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
