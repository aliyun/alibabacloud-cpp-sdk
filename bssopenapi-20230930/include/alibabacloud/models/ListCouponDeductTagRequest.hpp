// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCOUPONDEDUCTTAGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCOUPONDEDUCTTAGREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListCouponDeductTagRequestEcIdAccountIds.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20230930
{
namespace Models
{
  class ListCouponDeductTagRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCouponDeductTagRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CouponId, couponId_);
      DARABONBA_PTR_TO_JSON(EcIdAccountIds, ecIdAccountIds_);
      DARABONBA_PTR_TO_JSON(Nbid, nbid_);
    };
    friend void from_json(const Darabonba::Json& j, ListCouponDeductTagRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CouponId, couponId_);
      DARABONBA_PTR_FROM_JSON(EcIdAccountIds, ecIdAccountIds_);
      DARABONBA_PTR_FROM_JSON(Nbid, nbid_);
    };
    ListCouponDeductTagRequest() = default ;
    ListCouponDeductTagRequest(const ListCouponDeductTagRequest &) = default ;
    ListCouponDeductTagRequest(ListCouponDeductTagRequest &&) = default ;
    ListCouponDeductTagRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCouponDeductTagRequest() = default ;
    ListCouponDeductTagRequest& operator=(const ListCouponDeductTagRequest &) = default ;
    ListCouponDeductTagRequest& operator=(ListCouponDeductTagRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->couponId_ != nullptr
        && this->ecIdAccountIds_ != nullptr && this->nbid_ != nullptr; };
    // couponId Field Functions 
    bool hasCouponId() const { return this->couponId_ != nullptr;};
    void deleteCouponId() { this->couponId_ = nullptr;};
    inline string couponId() const { DARABONBA_PTR_GET_DEFAULT(couponId_, "") };
    inline ListCouponDeductTagRequest& setCouponId(string couponId) { DARABONBA_PTR_SET_VALUE(couponId_, couponId) };


    // ecIdAccountIds Field Functions 
    bool hasEcIdAccountIds() const { return this->ecIdAccountIds_ != nullptr;};
    void deleteEcIdAccountIds() { this->ecIdAccountIds_ = nullptr;};
    inline const vector<ListCouponDeductTagRequestEcIdAccountIds> & ecIdAccountIds() const { DARABONBA_PTR_GET_CONST(ecIdAccountIds_, vector<ListCouponDeductTagRequestEcIdAccountIds>) };
    inline vector<ListCouponDeductTagRequestEcIdAccountIds> ecIdAccountIds() { DARABONBA_PTR_GET(ecIdAccountIds_, vector<ListCouponDeductTagRequestEcIdAccountIds>) };
    inline ListCouponDeductTagRequest& setEcIdAccountIds(const vector<ListCouponDeductTagRequestEcIdAccountIds> & ecIdAccountIds) { DARABONBA_PTR_SET_VALUE(ecIdAccountIds_, ecIdAccountIds) };
    inline ListCouponDeductTagRequest& setEcIdAccountIds(vector<ListCouponDeductTagRequestEcIdAccountIds> && ecIdAccountIds) { DARABONBA_PTR_SET_RVALUE(ecIdAccountIds_, ecIdAccountIds) };


    // nbid Field Functions 
    bool hasNbid() const { return this->nbid_ != nullptr;};
    void deleteNbid() { this->nbid_ = nullptr;};
    inline string nbid() const { DARABONBA_PTR_GET_DEFAULT(nbid_, "") };
    inline ListCouponDeductTagRequest& setNbid(string nbid) { DARABONBA_PTR_SET_VALUE(nbid_, nbid) };


  protected:
    std::shared_ptr<string> couponId_ = nullptr;
    std::shared_ptr<vector<ListCouponDeductTagRequestEcIdAccountIds>> ecIdAccountIds_ = nullptr;
    std::shared_ptr<string> nbid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20230930
#endif
