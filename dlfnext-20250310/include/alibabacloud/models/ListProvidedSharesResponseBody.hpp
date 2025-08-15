// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPROVIDEDSHARESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPROVIDEDSHARESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/Share.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DlfNext20250310
{
namespace Models
{
  class ListProvidedSharesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListProvidedSharesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(nextPageToken, nextPageToken_);
      DARABONBA_PTR_TO_JSON(shares, shares_);
    };
    friend void from_json(const Darabonba::Json& j, ListProvidedSharesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(nextPageToken, nextPageToken_);
      DARABONBA_PTR_FROM_JSON(shares, shares_);
    };
    ListProvidedSharesResponseBody() = default ;
    ListProvidedSharesResponseBody(const ListProvidedSharesResponseBody &) = default ;
    ListProvidedSharesResponseBody(ListProvidedSharesResponseBody &&) = default ;
    ListProvidedSharesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListProvidedSharesResponseBody() = default ;
    ListProvidedSharesResponseBody& operator=(const ListProvidedSharesResponseBody &) = default ;
    ListProvidedSharesResponseBody& operator=(ListProvidedSharesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->nextPageToken_ != nullptr
        && this->shares_ != nullptr; };
    // nextPageToken Field Functions 
    bool hasNextPageToken() const { return this->nextPageToken_ != nullptr;};
    void deleteNextPageToken() { this->nextPageToken_ = nullptr;};
    inline string nextPageToken() const { DARABONBA_PTR_GET_DEFAULT(nextPageToken_, "") };
    inline ListProvidedSharesResponseBody& setNextPageToken(string nextPageToken) { DARABONBA_PTR_SET_VALUE(nextPageToken_, nextPageToken) };


    // shares Field Functions 
    bool hasShares() const { return this->shares_ != nullptr;};
    void deleteShares() { this->shares_ = nullptr;};
    inline const vector<Share> & shares() const { DARABONBA_PTR_GET_CONST(shares_, vector<Share>) };
    inline vector<Share> shares() { DARABONBA_PTR_GET(shares_, vector<Share>) };
    inline ListProvidedSharesResponseBody& setShares(const vector<Share> & shares) { DARABONBA_PTR_SET_VALUE(shares_, shares) };
    inline ListProvidedSharesResponseBody& setShares(vector<Share> && shares) { DARABONBA_PTR_SET_RVALUE(shares_, shares) };


  protected:
    std::shared_ptr<string> nextPageToken_ = nullptr;
    std::shared_ptr<vector<Share>> shares_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DlfNext20250310
#endif
