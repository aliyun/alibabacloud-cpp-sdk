// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESENSITIVEDETECTIONRESULTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESENSITIVEDETECTIONRESULTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeSensitiveDetectionResultResponseBodyDataResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeSensitiveDetectionResultResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSensitiveDetectionResultResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSensitiveDetectionResultResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    DescribeSensitiveDetectionResultResponseBodyData() = default ;
    DescribeSensitiveDetectionResultResponseBodyData(const DescribeSensitiveDetectionResultResponseBodyData &) = default ;
    DescribeSensitiveDetectionResultResponseBodyData(DescribeSensitiveDetectionResultResponseBodyData &&) = default ;
    DescribeSensitiveDetectionResultResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSensitiveDetectionResultResponseBodyData() = default ;
    DescribeSensitiveDetectionResultResponseBodyData& operator=(const DescribeSensitiveDetectionResultResponseBodyData &) = default ;
    DescribeSensitiveDetectionResultResponseBodyData& operator=(DescribeSensitiveDetectionResultResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->result_ == nullptr; };
    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<Models::DescribeSensitiveDetectionResultResponseBodyDataResult> & result() const { DARABONBA_PTR_GET_CONST(result_, vector<Models::DescribeSensitiveDetectionResultResponseBodyDataResult>) };
    inline vector<Models::DescribeSensitiveDetectionResultResponseBodyDataResult> result() { DARABONBA_PTR_GET(result_, vector<Models::DescribeSensitiveDetectionResultResponseBodyDataResult>) };
    inline DescribeSensitiveDetectionResultResponseBodyData& setResult(const vector<Models::DescribeSensitiveDetectionResultResponseBodyDataResult> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline DescribeSensitiveDetectionResultResponseBodyData& setResult(vector<Models::DescribeSensitiveDetectionResultResponseBodyDataResult> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // The compliance checks.
    std::shared_ptr<vector<Models::DescribeSensitiveDetectionResultResponseBodyDataResult>> result_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
