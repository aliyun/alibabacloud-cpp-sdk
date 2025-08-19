// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPPQUOTARESPONSEBODYRESULTLIMITERINFO_HPP_
#define ALIBABACLOUD_MODELS_GETAPPQUOTARESPONSEBODYRESULTLIMITERINFO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetAppQuotaResponseBodyResultLimiterInfoLimiters.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EsServerless20230627
{
namespace Models
{
  class GetAppQuotaResponseBodyResultLimiterInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAppQuotaResponseBodyResultLimiterInfo& obj) { 
      DARABONBA_PTR_TO_JSON(limiters, limiters_);
    };
    friend void from_json(const Darabonba::Json& j, GetAppQuotaResponseBodyResultLimiterInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(limiters, limiters_);
    };
    GetAppQuotaResponseBodyResultLimiterInfo() = default ;
    GetAppQuotaResponseBodyResultLimiterInfo(const GetAppQuotaResponseBodyResultLimiterInfo &) = default ;
    GetAppQuotaResponseBodyResultLimiterInfo(GetAppQuotaResponseBodyResultLimiterInfo &&) = default ;
    GetAppQuotaResponseBodyResultLimiterInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAppQuotaResponseBodyResultLimiterInfo() = default ;
    GetAppQuotaResponseBodyResultLimiterInfo& operator=(const GetAppQuotaResponseBodyResultLimiterInfo &) = default ;
    GetAppQuotaResponseBodyResultLimiterInfo& operator=(GetAppQuotaResponseBodyResultLimiterInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->limiters_ != nullptr; };
    // limiters Field Functions 
    bool hasLimiters() const { return this->limiters_ != nullptr;};
    void deleteLimiters() { this->limiters_ = nullptr;};
    inline const vector<Models::GetAppQuotaResponseBodyResultLimiterInfoLimiters> & limiters() const { DARABONBA_PTR_GET_CONST(limiters_, vector<Models::GetAppQuotaResponseBodyResultLimiterInfoLimiters>) };
    inline vector<Models::GetAppQuotaResponseBodyResultLimiterInfoLimiters> limiters() { DARABONBA_PTR_GET(limiters_, vector<Models::GetAppQuotaResponseBodyResultLimiterInfoLimiters>) };
    inline GetAppQuotaResponseBodyResultLimiterInfo& setLimiters(const vector<Models::GetAppQuotaResponseBodyResultLimiterInfoLimiters> & limiters) { DARABONBA_PTR_SET_VALUE(limiters_, limiters) };
    inline GetAppQuotaResponseBodyResultLimiterInfo& setLimiters(vector<Models::GetAppQuotaResponseBodyResultLimiterInfoLimiters> && limiters) { DARABONBA_PTR_SET_RVALUE(limiters_, limiters) };


  protected:
    std::shared_ptr<vector<Models::GetAppQuotaResponseBodyResultLimiterInfoLimiters>> limiters_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EsServerless20230627
#endif
