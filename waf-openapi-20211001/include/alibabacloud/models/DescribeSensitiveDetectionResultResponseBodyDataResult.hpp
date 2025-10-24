// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESENSITIVEDETECTIONRESULTRESPONSEBODYDATARESULT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESENSITIVEDETECTIONRESULTRESPONSEBODYDATARESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeSensitiveDetectionResultResponseBodyDataResultList.hpp>
#include <alibabacloud/models/DescribeSensitiveDetectionResultResponseBodyDataResultMax.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeSensitiveDetectionResultResponseBodyDataResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSensitiveDetectionResultResponseBodyDataResult& obj) { 
      DARABONBA_PTR_TO_JSON(DetectionResult, detectionResult_);
      DARABONBA_PTR_TO_JSON(List, list_);
      DARABONBA_PTR_TO_JSON(Max, max_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSensitiveDetectionResultResponseBodyDataResult& obj) { 
      DARABONBA_PTR_FROM_JSON(DetectionResult, detectionResult_);
      DARABONBA_PTR_FROM_JSON(List, list_);
      DARABONBA_PTR_FROM_JSON(Max, max_);
    };
    DescribeSensitiveDetectionResultResponseBodyDataResult() = default ;
    DescribeSensitiveDetectionResultResponseBodyDataResult(const DescribeSensitiveDetectionResultResponseBodyDataResult &) = default ;
    DescribeSensitiveDetectionResultResponseBodyDataResult(DescribeSensitiveDetectionResultResponseBodyDataResult &&) = default ;
    DescribeSensitiveDetectionResultResponseBodyDataResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSensitiveDetectionResultResponseBodyDataResult() = default ;
    DescribeSensitiveDetectionResultResponseBodyDataResult& operator=(const DescribeSensitiveDetectionResultResponseBodyDataResult &) = default ;
    DescribeSensitiveDetectionResultResponseBodyDataResult& operator=(DescribeSensitiveDetectionResultResponseBodyDataResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->detectionResult_ == nullptr
        && return this->list_ == nullptr && return this->max_ == nullptr; };
    // detectionResult Field Functions 
    bool hasDetectionResult() const { return this->detectionResult_ != nullptr;};
    void deleteDetectionResult() { this->detectionResult_ = nullptr;};
    inline string detectionResult() const { DARABONBA_PTR_GET_DEFAULT(detectionResult_, "") };
    inline DescribeSensitiveDetectionResultResponseBodyDataResult& setDetectionResult(string detectionResult) { DARABONBA_PTR_SET_VALUE(detectionResult_, detectionResult) };


    // list Field Functions 
    bool hasList() const { return this->list_ != nullptr;};
    void deleteList() { this->list_ = nullptr;};
    inline const vector<Models::DescribeSensitiveDetectionResultResponseBodyDataResultList> & list() const { DARABONBA_PTR_GET_CONST(list_, vector<Models::DescribeSensitiveDetectionResultResponseBodyDataResultList>) };
    inline vector<Models::DescribeSensitiveDetectionResultResponseBodyDataResultList> list() { DARABONBA_PTR_GET(list_, vector<Models::DescribeSensitiveDetectionResultResponseBodyDataResultList>) };
    inline DescribeSensitiveDetectionResultResponseBodyDataResult& setList(const vector<Models::DescribeSensitiveDetectionResultResponseBodyDataResultList> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
    inline DescribeSensitiveDetectionResultResponseBodyDataResult& setList(vector<Models::DescribeSensitiveDetectionResultResponseBodyDataResultList> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


    // max Field Functions 
    bool hasMax() const { return this->max_ != nullptr;};
    void deleteMax() { this->max_ = nullptr;};
    inline const Models::DescribeSensitiveDetectionResultResponseBodyDataResultMax & max() const { DARABONBA_PTR_GET_CONST(max_, Models::DescribeSensitiveDetectionResultResponseBodyDataResultMax) };
    inline Models::DescribeSensitiveDetectionResultResponseBodyDataResultMax max() { DARABONBA_PTR_GET(max_, Models::DescribeSensitiveDetectionResultResponseBodyDataResultMax) };
    inline DescribeSensitiveDetectionResultResponseBodyDataResult& setMax(const Models::DescribeSensitiveDetectionResultResponseBodyDataResultMax & max) { DARABONBA_PTR_SET_VALUE(max_, max) };
    inline DescribeSensitiveDetectionResultResponseBodyDataResult& setMax(Models::DescribeSensitiveDetectionResultResponseBodyDataResultMax && max) { DARABONBA_PTR_SET_RVALUE(max_, max) };


  protected:
    // The compliance check results. Valid values:
    // 
    // *   **report**: Risks exist in cross-border data transfer.
    // *   **none**: No risks exist in cross-border data transfer.
    std::shared_ptr<string> detectionResult_ = nullptr;
    // The sensitive information check results by sensitive data type.
    std::shared_ptr<vector<Models::DescribeSensitiveDetectionResultResponseBodyDataResultList>> list_ = nullptr;
    // The maximum values in the statistics of sensitive data types.
    std::shared_ptr<Models::DescribeSensitiveDetectionResultResponseBodyDataResultMax> max_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
