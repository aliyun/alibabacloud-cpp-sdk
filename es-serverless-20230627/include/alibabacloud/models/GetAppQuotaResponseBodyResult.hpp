// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPPQUOTARESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_GETAPPQUOTARESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetAppQuotaResponseBodyResultLimiterInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EsServerless20230627
{
namespace Models
{
  class GetAppQuotaResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAppQuotaResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(limiterInfo, limiterInfo_);
      DARABONBA_ANY_TO_JSON(quotaInfo, quotaInfo_);
    };
    friend void from_json(const Darabonba::Json& j, GetAppQuotaResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(limiterInfo, limiterInfo_);
      DARABONBA_ANY_FROM_JSON(quotaInfo, quotaInfo_);
    };
    GetAppQuotaResponseBodyResult() = default ;
    GetAppQuotaResponseBodyResult(const GetAppQuotaResponseBodyResult &) = default ;
    GetAppQuotaResponseBodyResult(GetAppQuotaResponseBodyResult &&) = default ;
    GetAppQuotaResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAppQuotaResponseBodyResult() = default ;
    GetAppQuotaResponseBodyResult& operator=(const GetAppQuotaResponseBodyResult &) = default ;
    GetAppQuotaResponseBodyResult& operator=(GetAppQuotaResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->limiterInfo_ != nullptr
        && this->quotaInfo_ != nullptr; };
    // limiterInfo Field Functions 
    bool hasLimiterInfo() const { return this->limiterInfo_ != nullptr;};
    void deleteLimiterInfo() { this->limiterInfo_ = nullptr;};
    inline const Models::GetAppQuotaResponseBodyResultLimiterInfo & limiterInfo() const { DARABONBA_PTR_GET_CONST(limiterInfo_, Models::GetAppQuotaResponseBodyResultLimiterInfo) };
    inline Models::GetAppQuotaResponseBodyResultLimiterInfo limiterInfo() { DARABONBA_PTR_GET(limiterInfo_, Models::GetAppQuotaResponseBodyResultLimiterInfo) };
    inline GetAppQuotaResponseBodyResult& setLimiterInfo(const Models::GetAppQuotaResponseBodyResultLimiterInfo & limiterInfo) { DARABONBA_PTR_SET_VALUE(limiterInfo_, limiterInfo) };
    inline GetAppQuotaResponseBodyResult& setLimiterInfo(Models::GetAppQuotaResponseBodyResultLimiterInfo && limiterInfo) { DARABONBA_PTR_SET_RVALUE(limiterInfo_, limiterInfo) };


    // quotaInfo Field Functions 
    bool hasQuotaInfo() const { return this->quotaInfo_ != nullptr;};
    void deleteQuotaInfo() { this->quotaInfo_ = nullptr;};
    inline     const Darabonba::Json & quotaInfo() const { DARABONBA_GET(quotaInfo_) };
    Darabonba::Json & quotaInfo() { DARABONBA_GET(quotaInfo_) };
    inline GetAppQuotaResponseBodyResult& setQuotaInfo(const Darabonba::Json & quotaInfo) { DARABONBA_SET_VALUE(quotaInfo_, quotaInfo) };
    inline GetAppQuotaResponseBodyResult& setQuotaInfo(Darabonba::Json & quotaInfo) { DARABONBA_SET_RVALUE(quotaInfo_, quotaInfo) };


  protected:
    std::shared_ptr<Models::GetAppQuotaResponseBodyResultLimiterInfo> limiterInfo_ = nullptr;
    Darabonba::Json quotaInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EsServerless20230627
#endif
