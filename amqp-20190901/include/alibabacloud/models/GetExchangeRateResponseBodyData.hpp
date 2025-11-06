// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETEXCHANGERATERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETEXCHANGERATERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetExchangeRateResponseBodyDataExchangeQuotaVO.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Amqp20190901
{
namespace Models
{
  class GetExchangeRateResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetExchangeRateResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ExchangeQuotaVO, exchangeQuotaVO_);
    };
    friend void from_json(const Darabonba::Json& j, GetExchangeRateResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ExchangeQuotaVO, exchangeQuotaVO_);
    };
    GetExchangeRateResponseBodyData() = default ;
    GetExchangeRateResponseBodyData(const GetExchangeRateResponseBodyData &) = default ;
    GetExchangeRateResponseBodyData(GetExchangeRateResponseBodyData &&) = default ;
    GetExchangeRateResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetExchangeRateResponseBodyData() = default ;
    GetExchangeRateResponseBodyData& operator=(const GetExchangeRateResponseBodyData &) = default ;
    GetExchangeRateResponseBodyData& operator=(GetExchangeRateResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->exchangeQuotaVO_ == nullptr; };
    // exchangeQuotaVO Field Functions 
    bool hasExchangeQuotaVO() const { return this->exchangeQuotaVO_ != nullptr;};
    void deleteExchangeQuotaVO() { this->exchangeQuotaVO_ = nullptr;};
    inline const vector<Models::GetExchangeRateResponseBodyDataExchangeQuotaVO> & exchangeQuotaVO() const { DARABONBA_PTR_GET_CONST(exchangeQuotaVO_, vector<Models::GetExchangeRateResponseBodyDataExchangeQuotaVO>) };
    inline vector<Models::GetExchangeRateResponseBodyDataExchangeQuotaVO> exchangeQuotaVO() { DARABONBA_PTR_GET(exchangeQuotaVO_, vector<Models::GetExchangeRateResponseBodyDataExchangeQuotaVO>) };
    inline GetExchangeRateResponseBodyData& setExchangeQuotaVO(const vector<Models::GetExchangeRateResponseBodyDataExchangeQuotaVO> & exchangeQuotaVO) { DARABONBA_PTR_SET_VALUE(exchangeQuotaVO_, exchangeQuotaVO) };
    inline GetExchangeRateResponseBodyData& setExchangeQuotaVO(vector<Models::GetExchangeRateResponseBodyDataExchangeQuotaVO> && exchangeQuotaVO) { DARABONBA_PTR_SET_RVALUE(exchangeQuotaVO_, exchangeQuotaVO) };


  protected:
    std::shared_ptr<vector<Models::GetExchangeRateResponseBodyDataExchangeQuotaVO>> exchangeQuotaVO_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Amqp20190901
#endif
