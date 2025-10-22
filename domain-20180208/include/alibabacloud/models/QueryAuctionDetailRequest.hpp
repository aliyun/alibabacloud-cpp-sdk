// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYAUCTIONDETAILREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYAUCTIONDETAILREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180208
{
namespace Models
{
  class QueryAuctionDetailRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryAuctionDetailRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AuctionId, auctionId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryAuctionDetailRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AuctionId, auctionId_);
    };
    QueryAuctionDetailRequest() = default ;
    QueryAuctionDetailRequest(const QueryAuctionDetailRequest &) = default ;
    QueryAuctionDetailRequest(QueryAuctionDetailRequest &&) = default ;
    QueryAuctionDetailRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryAuctionDetailRequest() = default ;
    QueryAuctionDetailRequest& operator=(const QueryAuctionDetailRequest &) = default ;
    QueryAuctionDetailRequest& operator=(QueryAuctionDetailRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->auctionId_ == nullptr; };
    // auctionId Field Functions 
    bool hasAuctionId() const { return this->auctionId_ != nullptr;};
    void deleteAuctionId() { this->auctionId_ = nullptr;};
    inline string auctionId() const { DARABONBA_PTR_GET_DEFAULT(auctionId_, "") };
    inline QueryAuctionDetailRequest& setAuctionId(string auctionId) { DARABONBA_PTR_SET_VALUE(auctionId_, auctionId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> auctionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180208
#endif
