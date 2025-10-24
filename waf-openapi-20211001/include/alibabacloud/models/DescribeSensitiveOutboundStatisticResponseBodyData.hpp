// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESENSITIVEOUTBOUNDSTATISTICRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESENSITIVEOUTBOUNDSTATISTICRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeSensitiveOutboundStatisticResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSensitiveOutboundStatisticResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(DetectionResult, detectionResult_);
      DARABONBA_PTR_TO_JSON(InfoCount, infoCount_);
      DARABONBA_PTR_TO_JSON(OutboundCount, outboundCount_);
      DARABONBA_PTR_TO_JSON(SensitiveCode, sensitiveCode_);
      DARABONBA_PTR_TO_JSON(SensitiveLevel, sensitiveLevel_);
      DARABONBA_PTR_TO_JSON(SensitiveType, sensitiveType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSensitiveOutboundStatisticResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(DetectionResult, detectionResult_);
      DARABONBA_PTR_FROM_JSON(InfoCount, infoCount_);
      DARABONBA_PTR_FROM_JSON(OutboundCount, outboundCount_);
      DARABONBA_PTR_FROM_JSON(SensitiveCode, sensitiveCode_);
      DARABONBA_PTR_FROM_JSON(SensitiveLevel, sensitiveLevel_);
      DARABONBA_PTR_FROM_JSON(SensitiveType, sensitiveType_);
    };
    DescribeSensitiveOutboundStatisticResponseBodyData() = default ;
    DescribeSensitiveOutboundStatisticResponseBodyData(const DescribeSensitiveOutboundStatisticResponseBodyData &) = default ;
    DescribeSensitiveOutboundStatisticResponseBodyData(DescribeSensitiveOutboundStatisticResponseBodyData &&) = default ;
    DescribeSensitiveOutboundStatisticResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSensitiveOutboundStatisticResponseBodyData() = default ;
    DescribeSensitiveOutboundStatisticResponseBodyData& operator=(const DescribeSensitiveOutboundStatisticResponseBodyData &) = default ;
    DescribeSensitiveOutboundStatisticResponseBodyData& operator=(DescribeSensitiveOutboundStatisticResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->detectionResult_ == nullptr
        && return this->infoCount_ == nullptr && return this->outboundCount_ == nullptr && return this->sensitiveCode_ == nullptr && return this->sensitiveLevel_ == nullptr && return this->sensitiveType_ == nullptr; };
    // detectionResult Field Functions 
    bool hasDetectionResult() const { return this->detectionResult_ != nullptr;};
    void deleteDetectionResult() { this->detectionResult_ = nullptr;};
    inline string detectionResult() const { DARABONBA_PTR_GET_DEFAULT(detectionResult_, "") };
    inline DescribeSensitiveOutboundStatisticResponseBodyData& setDetectionResult(string detectionResult) { DARABONBA_PTR_SET_VALUE(detectionResult_, detectionResult) };


    // infoCount Field Functions 
    bool hasInfoCount() const { return this->infoCount_ != nullptr;};
    void deleteInfoCount() { this->infoCount_ = nullptr;};
    inline int64_t infoCount() const { DARABONBA_PTR_GET_DEFAULT(infoCount_, 0L) };
    inline DescribeSensitiveOutboundStatisticResponseBodyData& setInfoCount(int64_t infoCount) { DARABONBA_PTR_SET_VALUE(infoCount_, infoCount) };


    // outboundCount Field Functions 
    bool hasOutboundCount() const { return this->outboundCount_ != nullptr;};
    void deleteOutboundCount() { this->outboundCount_ = nullptr;};
    inline int64_t outboundCount() const { DARABONBA_PTR_GET_DEFAULT(outboundCount_, 0L) };
    inline DescribeSensitiveOutboundStatisticResponseBodyData& setOutboundCount(int64_t outboundCount) { DARABONBA_PTR_SET_VALUE(outboundCount_, outboundCount) };


    // sensitiveCode Field Functions 
    bool hasSensitiveCode() const { return this->sensitiveCode_ != nullptr;};
    void deleteSensitiveCode() { this->sensitiveCode_ = nullptr;};
    inline int64_t sensitiveCode() const { DARABONBA_PTR_GET_DEFAULT(sensitiveCode_, 0L) };
    inline DescribeSensitiveOutboundStatisticResponseBodyData& setSensitiveCode(int64_t sensitiveCode) { DARABONBA_PTR_SET_VALUE(sensitiveCode_, sensitiveCode) };


    // sensitiveLevel Field Functions 
    bool hasSensitiveLevel() const { return this->sensitiveLevel_ != nullptr;};
    void deleteSensitiveLevel() { this->sensitiveLevel_ = nullptr;};
    inline string sensitiveLevel() const { DARABONBA_PTR_GET_DEFAULT(sensitiveLevel_, "") };
    inline DescribeSensitiveOutboundStatisticResponseBodyData& setSensitiveLevel(string sensitiveLevel) { DARABONBA_PTR_SET_VALUE(sensitiveLevel_, sensitiveLevel) };


    // sensitiveType Field Functions 
    bool hasSensitiveType() const { return this->sensitiveType_ != nullptr;};
    void deleteSensitiveType() { this->sensitiveType_ = nullptr;};
    inline string sensitiveType() const { DARABONBA_PTR_GET_DEFAULT(sensitiveType_, "") };
    inline DescribeSensitiveOutboundStatisticResponseBodyData& setSensitiveType(string sensitiveType) { DARABONBA_PTR_SET_VALUE(sensitiveType_, sensitiveType) };


  protected:
    // The evaluation result. Valid values:
    // 
    // *   **report**: Risks exist in cross-border data transfer.
    // *   **none**: No risks exist in cross-border data transfer.
    std::shared_ptr<string> detectionResult_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int64_t> infoCount_ = nullptr;
    // The number of data entries that are transferred across borders.
    std::shared_ptr<int64_t> outboundCount_ = nullptr;
    // The type of the sensitive data.
    // 
    // >  You can call the [DescribeApisecRules](https://help.aliyun.com/document_detail/2859155.html) operation to query the supported types of sensitive data.
    std::shared_ptr<int64_t> sensitiveCode_ = nullptr;
    // The sensitivity level. Valid values:
    // 
    // *   **high**
    // *   **medium**
    // *   **low**
    std::shared_ptr<string> sensitiveLevel_ = nullptr;
    // The type of the information. Valid values:
    // 
    // *   **info**: full personal information
    // *   **sensitive**: sensitive personal information
    std::shared_ptr<string> sensitiveType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
