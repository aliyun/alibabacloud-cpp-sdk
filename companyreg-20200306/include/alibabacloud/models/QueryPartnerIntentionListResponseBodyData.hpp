// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYPARTNERINTENTIONLISTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_QUERYPARTNERINTENTIONLISTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Companyreg20200306
{
namespace Models
{
  class QueryPartnerIntentionListResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryPartnerIntentionListResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(BizId, bizId_);
      DARABONBA_PTR_TO_JSON(BizType, bizType_);
      DARABONBA_PTR_TO_JSON(Mobile, mobile_);
    };
    friend void from_json(const Darabonba::Json& j, QueryPartnerIntentionListResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(BizId, bizId_);
      DARABONBA_PTR_FROM_JSON(BizType, bizType_);
      DARABONBA_PTR_FROM_JSON(Mobile, mobile_);
    };
    QueryPartnerIntentionListResponseBodyData() = default ;
    QueryPartnerIntentionListResponseBodyData(const QueryPartnerIntentionListResponseBodyData &) = default ;
    QueryPartnerIntentionListResponseBodyData(QueryPartnerIntentionListResponseBodyData &&) = default ;
    QueryPartnerIntentionListResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryPartnerIntentionListResponseBodyData() = default ;
    QueryPartnerIntentionListResponseBodyData& operator=(const QueryPartnerIntentionListResponseBodyData &) = default ;
    QueryPartnerIntentionListResponseBodyData& operator=(QueryPartnerIntentionListResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizId_ == nullptr
        && return this->bizType_ == nullptr && return this->mobile_ == nullptr; };
    // bizId Field Functions 
    bool hasBizId() const { return this->bizId_ != nullptr;};
    void deleteBizId() { this->bizId_ = nullptr;};
    inline string bizId() const { DARABONBA_PTR_GET_DEFAULT(bizId_, "") };
    inline QueryPartnerIntentionListResponseBodyData& setBizId(string bizId) { DARABONBA_PTR_SET_VALUE(bizId_, bizId) };


    // bizType Field Functions 
    bool hasBizType() const { return this->bizType_ != nullptr;};
    void deleteBizType() { this->bizType_ = nullptr;};
    inline string bizType() const { DARABONBA_PTR_GET_DEFAULT(bizType_, "") };
    inline QueryPartnerIntentionListResponseBodyData& setBizType(string bizType) { DARABONBA_PTR_SET_VALUE(bizType_, bizType) };


    // mobile Field Functions 
    bool hasMobile() const { return this->mobile_ != nullptr;};
    void deleteMobile() { this->mobile_ = nullptr;};
    inline string mobile() const { DARABONBA_PTR_GET_DEFAULT(mobile_, "") };
    inline QueryPartnerIntentionListResponseBodyData& setMobile(string mobile) { DARABONBA_PTR_SET_VALUE(mobile_, mobile) };


  protected:
    std::shared_ptr<string> bizId_ = nullptr;
    std::shared_ptr<string> bizType_ = nullptr;
    std::shared_ptr<string> mobile_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Companyreg20200306
#endif
