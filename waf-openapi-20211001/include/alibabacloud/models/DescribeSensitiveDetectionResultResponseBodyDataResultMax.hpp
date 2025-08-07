// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESENSITIVEDETECTIONRESULTRESPONSEBODYDATARESULTMAX_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESENSITIVEDETECTIONRESULTRESPONSEBODYDATARESULTMAX_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeSensitiveDetectionResultResponseBodyDataResultMax : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSensitiveDetectionResultResponseBodyDataResultMax& obj) { 
      DARABONBA_PTR_TO_JSON(InfoCount, infoCount_);
      DARABONBA_PTR_TO_JSON(OutboundCount, outboundCount_);
      DARABONBA_PTR_TO_JSON(SensitiveCode, sensitiveCode_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSensitiveDetectionResultResponseBodyDataResultMax& obj) { 
      DARABONBA_PTR_FROM_JSON(InfoCount, infoCount_);
      DARABONBA_PTR_FROM_JSON(OutboundCount, outboundCount_);
      DARABONBA_PTR_FROM_JSON(SensitiveCode, sensitiveCode_);
    };
    DescribeSensitiveDetectionResultResponseBodyDataResultMax() = default ;
    DescribeSensitiveDetectionResultResponseBodyDataResultMax(const DescribeSensitiveDetectionResultResponseBodyDataResultMax &) = default ;
    DescribeSensitiveDetectionResultResponseBodyDataResultMax(DescribeSensitiveDetectionResultResponseBodyDataResultMax &&) = default ;
    DescribeSensitiveDetectionResultResponseBodyDataResultMax(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSensitiveDetectionResultResponseBodyDataResultMax() = default ;
    DescribeSensitiveDetectionResultResponseBodyDataResultMax& operator=(const DescribeSensitiveDetectionResultResponseBodyDataResultMax &) = default ;
    DescribeSensitiveDetectionResultResponseBodyDataResultMax& operator=(DescribeSensitiveDetectionResultResponseBodyDataResultMax &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->infoCount_ != nullptr
        && this->outboundCount_ != nullptr && this->sensitiveCode_ != nullptr; };
    // infoCount Field Functions 
    bool hasInfoCount() const { return this->infoCount_ != nullptr;};
    void deleteInfoCount() { this->infoCount_ = nullptr;};
    inline int64_t infoCount() const { DARABONBA_PTR_GET_DEFAULT(infoCount_, 0L) };
    inline DescribeSensitiveDetectionResultResponseBodyDataResultMax& setInfoCount(int64_t infoCount) { DARABONBA_PTR_SET_VALUE(infoCount_, infoCount) };


    // outboundCount Field Functions 
    bool hasOutboundCount() const { return this->outboundCount_ != nullptr;};
    void deleteOutboundCount() { this->outboundCount_ = nullptr;};
    inline int64_t outboundCount() const { DARABONBA_PTR_GET_DEFAULT(outboundCount_, 0L) };
    inline DescribeSensitiveDetectionResultResponseBodyDataResultMax& setOutboundCount(int64_t outboundCount) { DARABONBA_PTR_SET_VALUE(outboundCount_, outboundCount) };


    // sensitiveCode Field Functions 
    bool hasSensitiveCode() const { return this->sensitiveCode_ != nullptr;};
    void deleteSensitiveCode() { this->sensitiveCode_ = nullptr;};
    inline int64_t sensitiveCode() const { DARABONBA_PTR_GET_DEFAULT(sensitiveCode_, 0L) };
    inline DescribeSensitiveDetectionResultResponseBodyDataResultMax& setSensitiveCode(int64_t sensitiveCode) { DARABONBA_PTR_SET_VALUE(sensitiveCode_, sensitiveCode) };


  protected:
    // The number of sensitive personal information records that are of the most frequent sensitive data type.
    std::shared_ptr<int64_t> infoCount_ = nullptr;
    // The number of sensitive personal information records that are of the most frequent sensitive data type and are involved in cross-border data transfer.
    std::shared_ptr<int64_t> outboundCount_ = nullptr;
    // The most frequent sensitive data type.
    std::shared_ptr<int64_t> sensitiveCode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
