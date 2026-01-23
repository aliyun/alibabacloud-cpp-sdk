// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCOUPONTEMPLATEDETAILREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETCOUPONTEMPLATEDETAILREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Agency20221216
{
namespace Models
{
  class GetCouponTemplateDetailRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCouponTemplateDetailRequest& obj) { 
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
    };
    friend void from_json(const Darabonba::Json& j, GetCouponTemplateDetailRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
    };
    GetCouponTemplateDetailRequest() = default ;
    GetCouponTemplateDetailRequest(const GetCouponTemplateDetailRequest &) = default ;
    GetCouponTemplateDetailRequest(GetCouponTemplateDetailRequest &&) = default ;
    GetCouponTemplateDetailRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCouponTemplateDetailRequest() = default ;
    GetCouponTemplateDetailRequest& operator=(const GetCouponTemplateDetailRequest &) = default ;
    GetCouponTemplateDetailRequest& operator=(GetCouponTemplateDetailRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->templateId_ == nullptr; };
    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline int64_t getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, 0L) };
    inline GetCouponTemplateDetailRequest& setTemplateId(int64_t templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


  protected:
    // This parameter is required.
    shared_ptr<int64_t> templateId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Agency20221216
#endif
