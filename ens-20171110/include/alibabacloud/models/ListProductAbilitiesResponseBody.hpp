// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPRODUCTABILITIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPRODUCTABILITIESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class ListProductAbilitiesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListProductAbilitiesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ProductAbilities, productAbilities_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListProductAbilitiesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ProductAbilities, productAbilities_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListProductAbilitiesResponseBody() = default ;
    ListProductAbilitiesResponseBody(const ListProductAbilitiesResponseBody &) = default ;
    ListProductAbilitiesResponseBody(ListProductAbilitiesResponseBody &&) = default ;
    ListProductAbilitiesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListProductAbilitiesResponseBody() = default ;
    ListProductAbilitiesResponseBody& operator=(const ListProductAbilitiesResponseBody &) = default ;
    ListProductAbilitiesResponseBody& operator=(ListProductAbilitiesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->productAbilities_ == nullptr
        && this->requestId_ == nullptr; };
    // productAbilities Field Functions 
    bool hasProductAbilities() const { return this->productAbilities_ != nullptr;};
    void deleteProductAbilities() { this->productAbilities_ = nullptr;};
    inline const vector<string> & getProductAbilities() const { DARABONBA_PTR_GET_CONST(productAbilities_, vector<string>) };
    inline vector<string> getProductAbilities() { DARABONBA_PTR_GET(productAbilities_, vector<string>) };
    inline ListProductAbilitiesResponseBody& setProductAbilities(const vector<string> & productAbilities) { DARABONBA_PTR_SET_VALUE(productAbilities_, productAbilities) };
    inline ListProductAbilitiesResponseBody& setProductAbilities(vector<string> && productAbilities) { DARABONBA_PTR_SET_RVALUE(productAbilities_, productAbilities) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListProductAbilitiesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Products supported by the edge node.
    shared_ptr<vector<string>> productAbilities_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
