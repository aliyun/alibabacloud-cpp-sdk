// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTRANSITROUTERCIDRRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTRANSITROUTERCIDRRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListTransitRouterCidrResponseBodyCidrLists.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class ListTransitRouterCidrResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTransitRouterCidrResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CidrLists, cidrLists_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListTransitRouterCidrResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CidrLists, cidrLists_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListTransitRouterCidrResponseBody() = default ;
    ListTransitRouterCidrResponseBody(const ListTransitRouterCidrResponseBody &) = default ;
    ListTransitRouterCidrResponseBody(ListTransitRouterCidrResponseBody &&) = default ;
    ListTransitRouterCidrResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTransitRouterCidrResponseBody() = default ;
    ListTransitRouterCidrResponseBody& operator=(const ListTransitRouterCidrResponseBody &) = default ;
    ListTransitRouterCidrResponseBody& operator=(ListTransitRouterCidrResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cidrLists_ != nullptr
        && this->requestId_ != nullptr; };
    // cidrLists Field Functions 
    bool hasCidrLists() const { return this->cidrLists_ != nullptr;};
    void deleteCidrLists() { this->cidrLists_ = nullptr;};
    inline const vector<ListTransitRouterCidrResponseBodyCidrLists> & cidrLists() const { DARABONBA_PTR_GET_CONST(cidrLists_, vector<ListTransitRouterCidrResponseBodyCidrLists>) };
    inline vector<ListTransitRouterCidrResponseBodyCidrLists> cidrLists() { DARABONBA_PTR_GET(cidrLists_, vector<ListTransitRouterCidrResponseBodyCidrLists>) };
    inline ListTransitRouterCidrResponseBody& setCidrLists(const vector<ListTransitRouterCidrResponseBodyCidrLists> & cidrLists) { DARABONBA_PTR_SET_VALUE(cidrLists_, cidrLists) };
    inline ListTransitRouterCidrResponseBody& setCidrLists(vector<ListTransitRouterCidrResponseBodyCidrLists> && cidrLists) { DARABONBA_PTR_SET_RVALUE(cidrLists_, cidrLists) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListTransitRouterCidrResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the CIDR block.
    std::shared_ptr<vector<ListTransitRouterCidrResponseBodyCidrLists>> cidrLists_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
