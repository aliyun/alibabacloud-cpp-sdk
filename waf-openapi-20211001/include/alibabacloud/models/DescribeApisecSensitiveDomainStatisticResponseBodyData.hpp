// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPISECSENSITIVEDOMAINSTATISTICRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPISECSENSITIVEDOMAINSTATISTICRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeApisecSensitiveDomainStatisticResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApisecSensitiveDomainStatisticResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ApiCount, apiCount_);
      DARABONBA_PTR_TO_JSON(DomainCount, domainCount_);
      DARABONBA_PTR_TO_JSON(SensitiveCode, sensitiveCode_);
      DARABONBA_PTR_TO_JSON(SensitiveLevel, sensitiveLevel_);
      DARABONBA_PTR_TO_JSON(SensitiveName, sensitiveName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApisecSensitiveDomainStatisticResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiCount, apiCount_);
      DARABONBA_PTR_FROM_JSON(DomainCount, domainCount_);
      DARABONBA_PTR_FROM_JSON(SensitiveCode, sensitiveCode_);
      DARABONBA_PTR_FROM_JSON(SensitiveLevel, sensitiveLevel_);
      DARABONBA_PTR_FROM_JSON(SensitiveName, sensitiveName_);
    };
    DescribeApisecSensitiveDomainStatisticResponseBodyData() = default ;
    DescribeApisecSensitiveDomainStatisticResponseBodyData(const DescribeApisecSensitiveDomainStatisticResponseBodyData &) = default ;
    DescribeApisecSensitiveDomainStatisticResponseBodyData(DescribeApisecSensitiveDomainStatisticResponseBodyData &&) = default ;
    DescribeApisecSensitiveDomainStatisticResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApisecSensitiveDomainStatisticResponseBodyData() = default ;
    DescribeApisecSensitiveDomainStatisticResponseBodyData& operator=(const DescribeApisecSensitiveDomainStatisticResponseBodyData &) = default ;
    DescribeApisecSensitiveDomainStatisticResponseBodyData& operator=(DescribeApisecSensitiveDomainStatisticResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->apiCount_ != nullptr
        && this->domainCount_ != nullptr && this->sensitiveCode_ != nullptr && this->sensitiveLevel_ != nullptr && this->sensitiveName_ != nullptr; };
    // apiCount Field Functions 
    bool hasApiCount() const { return this->apiCount_ != nullptr;};
    void deleteApiCount() { this->apiCount_ = nullptr;};
    inline int64_t apiCount() const { DARABONBA_PTR_GET_DEFAULT(apiCount_, 0L) };
    inline DescribeApisecSensitiveDomainStatisticResponseBodyData& setApiCount(int64_t apiCount) { DARABONBA_PTR_SET_VALUE(apiCount_, apiCount) };


    // domainCount Field Functions 
    bool hasDomainCount() const { return this->domainCount_ != nullptr;};
    void deleteDomainCount() { this->domainCount_ = nullptr;};
    inline int64_t domainCount() const { DARABONBA_PTR_GET_DEFAULT(domainCount_, 0L) };
    inline DescribeApisecSensitiveDomainStatisticResponseBodyData& setDomainCount(int64_t domainCount) { DARABONBA_PTR_SET_VALUE(domainCount_, domainCount) };


    // sensitiveCode Field Functions 
    bool hasSensitiveCode() const { return this->sensitiveCode_ != nullptr;};
    void deleteSensitiveCode() { this->sensitiveCode_ = nullptr;};
    inline string sensitiveCode() const { DARABONBA_PTR_GET_DEFAULT(sensitiveCode_, "") };
    inline DescribeApisecSensitiveDomainStatisticResponseBodyData& setSensitiveCode(string sensitiveCode) { DARABONBA_PTR_SET_VALUE(sensitiveCode_, sensitiveCode) };


    // sensitiveLevel Field Functions 
    bool hasSensitiveLevel() const { return this->sensitiveLevel_ != nullptr;};
    void deleteSensitiveLevel() { this->sensitiveLevel_ = nullptr;};
    inline string sensitiveLevel() const { DARABONBA_PTR_GET_DEFAULT(sensitiveLevel_, "") };
    inline DescribeApisecSensitiveDomainStatisticResponseBodyData& setSensitiveLevel(string sensitiveLevel) { DARABONBA_PTR_SET_VALUE(sensitiveLevel_, sensitiveLevel) };


    // sensitiveName Field Functions 
    bool hasSensitiveName() const { return this->sensitiveName_ != nullptr;};
    void deleteSensitiveName() { this->sensitiveName_ = nullptr;};
    inline string sensitiveName() const { DARABONBA_PTR_GET_DEFAULT(sensitiveName_, "") };
    inline DescribeApisecSensitiveDomainStatisticResponseBodyData& setSensitiveName(string sensitiveName) { DARABONBA_PTR_SET_VALUE(sensitiveName_, sensitiveName) };


  protected:
    // The number of APIs that are involved.
    std::shared_ptr<int64_t> apiCount_ = nullptr;
    // The number of sites that are involved.
    std::shared_ptr<int64_t> domainCount_ = nullptr;
    // The code of the sensitive data.
    // >  You can call the [DescribeApisecRules](https://help.aliyun.com/document_detail/2859155.html) operation to query the supported sensitive data types.
    std::shared_ptr<string> sensitiveCode_ = nullptr;
    // The sensitivity level of the sensitive data.Valid values:
    // 
    // * **S1**: low sensitivity.
    // * **S2**: moderate sensitivity.
    // * **S3**: high sensitivity.
    std::shared_ptr<string> sensitiveLevel_ = nullptr;
    // The name of the sensitive data.
    std::shared_ptr<string> sensitiveName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
