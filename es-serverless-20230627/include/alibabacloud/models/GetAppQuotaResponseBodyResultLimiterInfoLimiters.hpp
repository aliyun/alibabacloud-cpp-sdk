// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPPQUOTARESPONSEBODYRESULTLIMITERINFOLIMITERS_HPP_
#define ALIBABACLOUD_MODELS_GETAPPQUOTARESPONSEBODYRESULTLIMITERINFOLIMITERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EsServerless20230627
{
namespace Models
{
  class GetAppQuotaResponseBodyResultLimiterInfoLimiters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAppQuotaResponseBodyResultLimiterInfoLimiters& obj) { 
      DARABONBA_PTR_TO_JSON(immutable, immutable_);
      DARABONBA_PTR_TO_JSON(maxValue, maxValue_);
      DARABONBA_PTR_TO_JSON(minValue, minValue_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, GetAppQuotaResponseBodyResultLimiterInfoLimiters& obj) { 
      DARABONBA_PTR_FROM_JSON(immutable, immutable_);
      DARABONBA_PTR_FROM_JSON(maxValue, maxValue_);
      DARABONBA_PTR_FROM_JSON(minValue, minValue_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    GetAppQuotaResponseBodyResultLimiterInfoLimiters() = default ;
    GetAppQuotaResponseBodyResultLimiterInfoLimiters(const GetAppQuotaResponseBodyResultLimiterInfoLimiters &) = default ;
    GetAppQuotaResponseBodyResultLimiterInfoLimiters(GetAppQuotaResponseBodyResultLimiterInfoLimiters &&) = default ;
    GetAppQuotaResponseBodyResultLimiterInfoLimiters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAppQuotaResponseBodyResultLimiterInfoLimiters() = default ;
    GetAppQuotaResponseBodyResultLimiterInfoLimiters& operator=(const GetAppQuotaResponseBodyResultLimiterInfoLimiters &) = default ;
    GetAppQuotaResponseBodyResultLimiterInfoLimiters& operator=(GetAppQuotaResponseBodyResultLimiterInfoLimiters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->immutable_ != nullptr
        && this->maxValue_ != nullptr && this->minValue_ != nullptr && this->type_ != nullptr; };
    // immutable Field Functions 
    bool hasImmutable() const { return this->immutable_ != nullptr;};
    void deleteImmutable() { this->immutable_ = nullptr;};
    inline bool immutable() const { DARABONBA_PTR_GET_DEFAULT(immutable_, false) };
    inline GetAppQuotaResponseBodyResultLimiterInfoLimiters& setImmutable(bool immutable) { DARABONBA_PTR_SET_VALUE(immutable_, immutable) };


    // maxValue Field Functions 
    bool hasMaxValue() const { return this->maxValue_ != nullptr;};
    void deleteMaxValue() { this->maxValue_ = nullptr;};
    inline int64_t maxValue() const { DARABONBA_PTR_GET_DEFAULT(maxValue_, 0L) };
    inline GetAppQuotaResponseBodyResultLimiterInfoLimiters& setMaxValue(int64_t maxValue) { DARABONBA_PTR_SET_VALUE(maxValue_, maxValue) };


    // minValue Field Functions 
    bool hasMinValue() const { return this->minValue_ != nullptr;};
    void deleteMinValue() { this->minValue_ = nullptr;};
    inline int64_t minValue() const { DARABONBA_PTR_GET_DEFAULT(minValue_, 0L) };
    inline GetAppQuotaResponseBodyResultLimiterInfoLimiters& setMinValue(int64_t minValue) { DARABONBA_PTR_SET_VALUE(minValue_, minValue) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetAppQuotaResponseBodyResultLimiterInfoLimiters& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<bool> immutable_ = nullptr;
    std::shared_ptr<int64_t> maxValue_ = nullptr;
    std::shared_ptr<int64_t> minValue_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EsServerless20230627
#endif
