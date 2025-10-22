// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHANGEAUCTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHANGEAUCTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ChangeAuctionRequestAuctionList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180208
{
namespace Models
{
  class ChangeAuctionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChangeAuctionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AuctionList, auctionList_);
    };
    friend void from_json(const Darabonba::Json& j, ChangeAuctionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AuctionList, auctionList_);
    };
    ChangeAuctionRequest() = default ;
    ChangeAuctionRequest(const ChangeAuctionRequest &) = default ;
    ChangeAuctionRequest(ChangeAuctionRequest &&) = default ;
    ChangeAuctionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChangeAuctionRequest() = default ;
    ChangeAuctionRequest& operator=(const ChangeAuctionRequest &) = default ;
    ChangeAuctionRequest& operator=(ChangeAuctionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->auctionList_ == nullptr; };
    // auctionList Field Functions 
    bool hasAuctionList() const { return this->auctionList_ != nullptr;};
    void deleteAuctionList() { this->auctionList_ = nullptr;};
    inline const vector<ChangeAuctionRequestAuctionList> & auctionList() const { DARABONBA_PTR_GET_CONST(auctionList_, vector<ChangeAuctionRequestAuctionList>) };
    inline vector<ChangeAuctionRequestAuctionList> auctionList() { DARABONBA_PTR_GET(auctionList_, vector<ChangeAuctionRequestAuctionList>) };
    inline ChangeAuctionRequest& setAuctionList(const vector<ChangeAuctionRequestAuctionList> & auctionList) { DARABONBA_PTR_SET_VALUE(auctionList_, auctionList) };
    inline ChangeAuctionRequest& setAuctionList(vector<ChangeAuctionRequestAuctionList> && auctionList) { DARABONBA_PTR_SET_RVALUE(auctionList_, auctionList) };


  protected:
    std::shared_ptr<vector<ChangeAuctionRequestAuctionList>> auctionList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180208
#endif
