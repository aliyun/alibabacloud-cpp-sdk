// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFACEGUARDRISKRESPONSEBODYRESULTOBJECT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFACEGUARDRISKRESPONSEBODYRESULTOBJECT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class DescribeFaceGuardRiskResponseBodyResultObject : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFaceGuardRiskResponseBodyResultObject& obj) { 
      DARABONBA_PTR_TO_JSON(CertifyId, certifyId_);
      DARABONBA_PTR_TO_JSON(RiskExtends, riskExtends_);
      DARABONBA_PTR_TO_JSON(RiskTags, riskTags_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFaceGuardRiskResponseBodyResultObject& obj) { 
      DARABONBA_PTR_FROM_JSON(CertifyId, certifyId_);
      DARABONBA_PTR_FROM_JSON(RiskExtends, riskExtends_);
      DARABONBA_PTR_FROM_JSON(RiskTags, riskTags_);
    };
    DescribeFaceGuardRiskResponseBodyResultObject() = default ;
    DescribeFaceGuardRiskResponseBodyResultObject(const DescribeFaceGuardRiskResponseBodyResultObject &) = default ;
    DescribeFaceGuardRiskResponseBodyResultObject(DescribeFaceGuardRiskResponseBodyResultObject &&) = default ;
    DescribeFaceGuardRiskResponseBodyResultObject(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFaceGuardRiskResponseBodyResultObject() = default ;
    DescribeFaceGuardRiskResponseBodyResultObject& operator=(const DescribeFaceGuardRiskResponseBodyResultObject &) = default ;
    DescribeFaceGuardRiskResponseBodyResultObject& operator=(DescribeFaceGuardRiskResponseBodyResultObject &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->certifyId_ != nullptr
        && this->riskExtends_ != nullptr && this->riskTags_ != nullptr; };
    // certifyId Field Functions 
    bool hasCertifyId() const { return this->certifyId_ != nullptr;};
    void deleteCertifyId() { this->certifyId_ = nullptr;};
    inline string certifyId() const { DARABONBA_PTR_GET_DEFAULT(certifyId_, "") };
    inline DescribeFaceGuardRiskResponseBodyResultObject& setCertifyId(string certifyId) { DARABONBA_PTR_SET_VALUE(certifyId_, certifyId) };


    // riskExtends Field Functions 
    bool hasRiskExtends() const { return this->riskExtends_ != nullptr;};
    void deleteRiskExtends() { this->riskExtends_ = nullptr;};
    inline string riskExtends() const { DARABONBA_PTR_GET_DEFAULT(riskExtends_, "") };
    inline DescribeFaceGuardRiskResponseBodyResultObject& setRiskExtends(string riskExtends) { DARABONBA_PTR_SET_VALUE(riskExtends_, riskExtends) };


    // riskTags Field Functions 
    bool hasRiskTags() const { return this->riskTags_ != nullptr;};
    void deleteRiskTags() { this->riskTags_ = nullptr;};
    inline string riskTags() const { DARABONBA_PTR_GET_DEFAULT(riskTags_, "") };
    inline DescribeFaceGuardRiskResponseBodyResultObject& setRiskTags(string riskTags) { DARABONBA_PTR_SET_VALUE(riskTags_, riskTags) };


  protected:
    std::shared_ptr<string> certifyId_ = nullptr;
    std::shared_ptr<string> riskExtends_ = nullptr;
    std::shared_ptr<string> riskTags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
