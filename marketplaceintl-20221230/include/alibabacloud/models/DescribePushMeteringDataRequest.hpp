// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPUSHMETERINGDATAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPUSHMETERINGDATAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MarketplaceIntl20221230
{
namespace Models
{
  class DescribePushMeteringDataRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePushMeteringDataRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PushOrderBizId, pushOrderBizId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePushMeteringDataRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PushOrderBizId, pushOrderBizId_);
    };
    DescribePushMeteringDataRequest() = default ;
    DescribePushMeteringDataRequest(const DescribePushMeteringDataRequest &) = default ;
    DescribePushMeteringDataRequest(DescribePushMeteringDataRequest &&) = default ;
    DescribePushMeteringDataRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePushMeteringDataRequest() = default ;
    DescribePushMeteringDataRequest& operator=(const DescribePushMeteringDataRequest &) = default ;
    DescribePushMeteringDataRequest& operator=(DescribePushMeteringDataRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->pushOrderBizId_ != nullptr; };
    // pushOrderBizId Field Functions 
    bool hasPushOrderBizId() const { return this->pushOrderBizId_ != nullptr;};
    void deletePushOrderBizId() { this->pushOrderBizId_ = nullptr;};
    inline string pushOrderBizId() const { DARABONBA_PTR_GET_DEFAULT(pushOrderBizId_, "") };
    inline DescribePushMeteringDataRequest& setPushOrderBizId(string pushOrderBizId) { DARABONBA_PTR_SET_VALUE(pushOrderBizId_, pushOrderBizId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> pushOrderBizId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MarketplaceIntl20221230
#endif
