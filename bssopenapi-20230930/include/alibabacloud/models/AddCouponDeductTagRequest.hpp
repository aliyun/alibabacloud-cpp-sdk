// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDCOUPONDEDUCTTAGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDCOUPONDEDUCTTAGREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AddCouponDeductTagRequestEcIdAccountIds.hpp>
#include <alibabacloud/models/AddCouponDeductTagRequestTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20230930
{
namespace Models
{
  class AddCouponDeductTagRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddCouponDeductTagRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CouponId, couponId_);
      DARABONBA_PTR_TO_JSON(EcIdAccountIds, ecIdAccountIds_);
      DARABONBA_PTR_TO_JSON(Nbid, nbid_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, AddCouponDeductTagRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CouponId, couponId_);
      DARABONBA_PTR_FROM_JSON(EcIdAccountIds, ecIdAccountIds_);
      DARABONBA_PTR_FROM_JSON(Nbid, nbid_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    AddCouponDeductTagRequest() = default ;
    AddCouponDeductTagRequest(const AddCouponDeductTagRequest &) = default ;
    AddCouponDeductTagRequest(AddCouponDeductTagRequest &&) = default ;
    AddCouponDeductTagRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddCouponDeductTagRequest() = default ;
    AddCouponDeductTagRequest& operator=(const AddCouponDeductTagRequest &) = default ;
    AddCouponDeductTagRequest& operator=(AddCouponDeductTagRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->couponId_ != nullptr
        && this->ecIdAccountIds_ != nullptr && this->nbid_ != nullptr && this->tags_ != nullptr; };
    // couponId Field Functions 
    bool hasCouponId() const { return this->couponId_ != nullptr;};
    void deleteCouponId() { this->couponId_ = nullptr;};
    inline string couponId() const { DARABONBA_PTR_GET_DEFAULT(couponId_, "") };
    inline AddCouponDeductTagRequest& setCouponId(string couponId) { DARABONBA_PTR_SET_VALUE(couponId_, couponId) };


    // ecIdAccountIds Field Functions 
    bool hasEcIdAccountIds() const { return this->ecIdAccountIds_ != nullptr;};
    void deleteEcIdAccountIds() { this->ecIdAccountIds_ = nullptr;};
    inline const vector<AddCouponDeductTagRequestEcIdAccountIds> & ecIdAccountIds() const { DARABONBA_PTR_GET_CONST(ecIdAccountIds_, vector<AddCouponDeductTagRequestEcIdAccountIds>) };
    inline vector<AddCouponDeductTagRequestEcIdAccountIds> ecIdAccountIds() { DARABONBA_PTR_GET(ecIdAccountIds_, vector<AddCouponDeductTagRequestEcIdAccountIds>) };
    inline AddCouponDeductTagRequest& setEcIdAccountIds(const vector<AddCouponDeductTagRequestEcIdAccountIds> & ecIdAccountIds) { DARABONBA_PTR_SET_VALUE(ecIdAccountIds_, ecIdAccountIds) };
    inline AddCouponDeductTagRequest& setEcIdAccountIds(vector<AddCouponDeductTagRequestEcIdAccountIds> && ecIdAccountIds) { DARABONBA_PTR_SET_RVALUE(ecIdAccountIds_, ecIdAccountIds) };


    // nbid Field Functions 
    bool hasNbid() const { return this->nbid_ != nullptr;};
    void deleteNbid() { this->nbid_ = nullptr;};
    inline string nbid() const { DARABONBA_PTR_GET_DEFAULT(nbid_, "") };
    inline AddCouponDeductTagRequest& setNbid(string nbid) { DARABONBA_PTR_SET_VALUE(nbid_, nbid) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<AddCouponDeductTagRequestTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<AddCouponDeductTagRequestTags>) };
    inline vector<AddCouponDeductTagRequestTags> tags() { DARABONBA_PTR_GET(tags_, vector<AddCouponDeductTagRequestTags>) };
    inline AddCouponDeductTagRequest& setTags(const vector<AddCouponDeductTagRequestTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline AddCouponDeductTagRequest& setTags(vector<AddCouponDeductTagRequestTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    std::shared_ptr<string> couponId_ = nullptr;
    std::shared_ptr<vector<AddCouponDeductTagRequestEcIdAccountIds>> ecIdAccountIds_ = nullptr;
    std::shared_ptr<string> nbid_ = nullptr;
    std::shared_ptr<vector<AddCouponDeductTagRequestTags>> tags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20230930
#endif
