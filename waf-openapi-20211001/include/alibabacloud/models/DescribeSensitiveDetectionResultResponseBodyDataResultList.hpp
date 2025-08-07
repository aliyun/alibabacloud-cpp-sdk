// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESENSITIVEDETECTIONRESULTRESPONSEBODYDATARESULTLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESENSITIVEDETECTIONRESULTRESPONSEBODYDATARESULTLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeSensitiveDetectionResultResponseBodyDataResultList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSensitiveDetectionResultResponseBodyDataResultList& obj) { 
      DARABONBA_PTR_TO_JSON(InfoCount, infoCount_);
      DARABONBA_PTR_TO_JSON(OutboundCount, outboundCount_);
      DARABONBA_PTR_TO_JSON(SensitiveCode, sensitiveCode_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSensitiveDetectionResultResponseBodyDataResultList& obj) { 
      DARABONBA_PTR_FROM_JSON(InfoCount, infoCount_);
      DARABONBA_PTR_FROM_JSON(OutboundCount, outboundCount_);
      DARABONBA_PTR_FROM_JSON(SensitiveCode, sensitiveCode_);
    };
    DescribeSensitiveDetectionResultResponseBodyDataResultList() = default ;
    DescribeSensitiveDetectionResultResponseBodyDataResultList(const DescribeSensitiveDetectionResultResponseBodyDataResultList &) = default ;
    DescribeSensitiveDetectionResultResponseBodyDataResultList(DescribeSensitiveDetectionResultResponseBodyDataResultList &&) = default ;
    DescribeSensitiveDetectionResultResponseBodyDataResultList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSensitiveDetectionResultResponseBodyDataResultList() = default ;
    DescribeSensitiveDetectionResultResponseBodyDataResultList& operator=(const DescribeSensitiveDetectionResultResponseBodyDataResultList &) = default ;
    DescribeSensitiveDetectionResultResponseBodyDataResultList& operator=(DescribeSensitiveDetectionResultResponseBodyDataResultList &&) = default ;
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
    inline DescribeSensitiveDetectionResultResponseBodyDataResultList& setInfoCount(int64_t infoCount) { DARABONBA_PTR_SET_VALUE(infoCount_, infoCount) };


    // outboundCount Field Functions 
    bool hasOutboundCount() const { return this->outboundCount_ != nullptr;};
    void deleteOutboundCount() { this->outboundCount_ = nullptr;};
    inline int64_t outboundCount() const { DARABONBA_PTR_GET_DEFAULT(outboundCount_, 0L) };
    inline DescribeSensitiveDetectionResultResponseBodyDataResultList& setOutboundCount(int64_t outboundCount) { DARABONBA_PTR_SET_VALUE(outboundCount_, outboundCount) };


    // sensitiveCode Field Functions 
    bool hasSensitiveCode() const { return this->sensitiveCode_ != nullptr;};
    void deleteSensitiveCode() { this->sensitiveCode_ = nullptr;};
    inline int64_t sensitiveCode() const { DARABONBA_PTR_GET_DEFAULT(sensitiveCode_, 0L) };
    inline DescribeSensitiveDetectionResultResponseBodyDataResultList& setSensitiveCode(int64_t sensitiveCode) { DARABONBA_PTR_SET_VALUE(sensitiveCode_, sensitiveCode) };


  protected:
    // The number of personal information records.
    std::shared_ptr<int64_t> infoCount_ = nullptr;
    // The number of sensitive personal information records that are involved in cross-border data transfer.
    std::shared_ptr<int64_t> outboundCount_ = nullptr;
    // The sensitive data type.
    std::shared_ptr<int64_t> sensitiveCode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
