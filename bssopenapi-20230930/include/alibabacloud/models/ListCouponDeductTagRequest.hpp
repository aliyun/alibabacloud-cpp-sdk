// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCOUPONDEDUCTTAGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCOUPONDEDUCTTAGREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class EcIdAccountIds : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const EcIdAccountIds& obj) { 
        DARABONBA_PTR_TO_JSON(AccountIds, accountIds_);
        DARABONBA_PTR_TO_JSON(EcId, ecId_);
      };
      friend void from_json(const Darabonba::Json& j, EcIdAccountIds& obj) { 
        DARABONBA_PTR_FROM_JSON(AccountIds, accountIds_);
        DARABONBA_PTR_FROM_JSON(EcId, ecId_);
      };
      EcIdAccountIds() = default ;
      EcIdAccountIds(const EcIdAccountIds &) = default ;
      EcIdAccountIds(EcIdAccountIds &&) = default ;
      EcIdAccountIds(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~EcIdAccountIds() = default ;
      EcIdAccountIds& operator=(const EcIdAccountIds &) = default ;
      EcIdAccountIds& operator=(EcIdAccountIds &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->accountIds_ == nullptr
        && this->ecId_ == nullptr; };
      // accountIds Field Functions 
      bool hasAccountIds() const { return this->accountIds_ != nullptr;};
      void deleteAccountIds() { this->accountIds_ = nullptr;};
      inline const vector<int64_t> & getAccountIds() const { DARABONBA_PTR_GET_CONST(accountIds_, vector<int64_t>) };
      inline vector<int64_t> getAccountIds() { DARABONBA_PTR_GET(accountIds_, vector<int64_t>) };
      inline EcIdAccountIds& setAccountIds(const vector<int64_t> & accountIds) { DARABONBA_PTR_SET_VALUE(accountIds_, accountIds) };
      inline EcIdAccountIds& setAccountIds(vector<int64_t> && accountIds) { DARABONBA_PTR_SET_RVALUE(accountIds_, accountIds) };


      // ecId Field Functions 
      bool hasEcId() const { return this->ecId_ != nullptr;};
      void deleteEcId() { this->ecId_ = nullptr;};
      inline string getEcId() const { DARABONBA_PTR_GET_DEFAULT(ecId_, "") };
      inline EcIdAccountIds& setEcId(string ecId) { DARABONBA_PTR_SET_VALUE(ecId_, ecId) };


    protected:
      shared_ptr<vector<int64_t>> accountIds_ {};
      // This parameter is required.
      shared_ptr<string> ecId_ {};
    };

    virtual bool empty() const override { return this->couponId_ == nullptr
        && this->ecIdAccountIds_ == nullptr && this->nbid_ == nullptr; };
    // couponId Field Functions 
    bool hasCouponId() const { return this->couponId_ != nullptr;};
    void deleteCouponId() { this->couponId_ = nullptr;};
    inline string getCouponId() const { DARABONBA_PTR_GET_DEFAULT(couponId_, "") };
    inline ListCouponDeductTagRequest& setCouponId(string couponId) { DARABONBA_PTR_SET_VALUE(couponId_, couponId) };


    // ecIdAccountIds Field Functions 
    bool hasEcIdAccountIds() const { return this->ecIdAccountIds_ != nullptr;};
    void deleteEcIdAccountIds() { this->ecIdAccountIds_ = nullptr;};
    inline const vector<ListCouponDeductTagRequest::EcIdAccountIds> & getEcIdAccountIds() const { DARABONBA_PTR_GET_CONST(ecIdAccountIds_, vector<ListCouponDeductTagRequest::EcIdAccountIds>) };
    inline vector<ListCouponDeductTagRequest::EcIdAccountIds> getEcIdAccountIds() { DARABONBA_PTR_GET(ecIdAccountIds_, vector<ListCouponDeductTagRequest::EcIdAccountIds>) };
    inline ListCouponDeductTagRequest& setEcIdAccountIds(const vector<ListCouponDeductTagRequest::EcIdAccountIds> & ecIdAccountIds) { DARABONBA_PTR_SET_VALUE(ecIdAccountIds_, ecIdAccountIds) };
    inline ListCouponDeductTagRequest& setEcIdAccountIds(vector<ListCouponDeductTagRequest::EcIdAccountIds> && ecIdAccountIds) { DARABONBA_PTR_SET_RVALUE(ecIdAccountIds_, ecIdAccountIds) };


    // nbid Field Functions 
    bool hasNbid() const { return this->nbid_ != nullptr;};
    void deleteNbid() { this->nbid_ = nullptr;};
    inline string getNbid() const { DARABONBA_PTR_GET_DEFAULT(nbid_, "") };
    inline ListCouponDeductTagRequest& setNbid(string nbid) { DARABONBA_PTR_SET_VALUE(nbid_, nbid) };


  protected:
    shared_ptr<string> couponId_ {};
    shared_ptr<vector<ListCouponDeductTagRequest::EcIdAccountIds>> ecIdAccountIds_ {};
    shared_ptr<string> nbid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20230930
#endif
