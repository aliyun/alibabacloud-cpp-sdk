// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRECEIVEDSHARESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTRECEIVEDSHARESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ReceivedShare.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DlfNext20250310
{
namespace Models
{
  class ListReceivedSharesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListReceivedSharesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(nextPageToken, nextPageToken_);
      DARABONBA_PTR_TO_JSON(shares, shares_);
    };
    friend void from_json(const Darabonba::Json& j, ListReceivedSharesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(nextPageToken, nextPageToken_);
      DARABONBA_PTR_FROM_JSON(shares, shares_);
    };
    ListReceivedSharesResponseBody() = default ;
    ListReceivedSharesResponseBody(const ListReceivedSharesResponseBody &) = default ;
    ListReceivedSharesResponseBody(ListReceivedSharesResponseBody &&) = default ;
    ListReceivedSharesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListReceivedSharesResponseBody() = default ;
    ListReceivedSharesResponseBody& operator=(const ListReceivedSharesResponseBody &) = default ;
    ListReceivedSharesResponseBody& operator=(ListReceivedSharesResponseBody &&) = default ;
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
    inline ListReceivedSharesResponseBody& setNextPageToken(string nextPageToken) { DARABONBA_PTR_SET_VALUE(nextPageToken_, nextPageToken) };


    // shares Field Functions 
    bool hasShares() const { return this->shares_ != nullptr;};
    void deleteShares() { this->shares_ = nullptr;};
    inline const vector<ReceivedShare> & shares() const { DARABONBA_PTR_GET_CONST(shares_, vector<ReceivedShare>) };
    inline vector<ReceivedShare> shares() { DARABONBA_PTR_GET(shares_, vector<ReceivedShare>) };
    inline ListReceivedSharesResponseBody& setShares(const vector<ReceivedShare> & shares) { DARABONBA_PTR_SET_VALUE(shares_, shares) };
    inline ListReceivedSharesResponseBody& setShares(vector<ReceivedShare> && shares) { DARABONBA_PTR_SET_RVALUE(shares_, shares) };


  protected:
    std::shared_ptr<string> nextPageToken_ = nullptr;
    std::shared_ptr<vector<ReceivedShare>> shares_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DlfNext20250310
#endif
