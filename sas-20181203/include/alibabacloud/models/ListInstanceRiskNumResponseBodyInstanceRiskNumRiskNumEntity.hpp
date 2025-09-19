// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCERISKNUMRESPONSEBODYINSTANCERISKNUMRISKNUMENTITY_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCERISKNUMRESPONSEBODYINSTANCERISKNUMRISKNUMENTITY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListInstanceRiskNumResponseBodyInstanceRiskNumRiskNumEntity : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstanceRiskNumResponseBodyInstanceRiskNumRiskNumEntity& obj) { 
      DARABONBA_PTR_TO_JSON(SuspiciousHighCount, suspiciousHighCount_);
      DARABONBA_PTR_TO_JSON(SuspiciousLowCount, suspiciousLowCount_);
      DARABONBA_PTR_TO_JSON(SuspiciousMediumCount, suspiciousMediumCount_);
      DARABONBA_PTR_TO_JSON(VulHighCount, vulHighCount_);
      DARABONBA_PTR_TO_JSON(VulLowCount, vulLowCount_);
      DARABONBA_PTR_TO_JSON(VulMediumCount, vulMediumCount_);
      DARABONBA_PTR_TO_JSON(WeakPassWordCount, weakPassWordCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstanceRiskNumResponseBodyInstanceRiskNumRiskNumEntity& obj) { 
      DARABONBA_PTR_FROM_JSON(SuspiciousHighCount, suspiciousHighCount_);
      DARABONBA_PTR_FROM_JSON(SuspiciousLowCount, suspiciousLowCount_);
      DARABONBA_PTR_FROM_JSON(SuspiciousMediumCount, suspiciousMediumCount_);
      DARABONBA_PTR_FROM_JSON(VulHighCount, vulHighCount_);
      DARABONBA_PTR_FROM_JSON(VulLowCount, vulLowCount_);
      DARABONBA_PTR_FROM_JSON(VulMediumCount, vulMediumCount_);
      DARABONBA_PTR_FROM_JSON(WeakPassWordCount, weakPassWordCount_);
    };
    ListInstanceRiskNumResponseBodyInstanceRiskNumRiskNumEntity() = default ;
    ListInstanceRiskNumResponseBodyInstanceRiskNumRiskNumEntity(const ListInstanceRiskNumResponseBodyInstanceRiskNumRiskNumEntity &) = default ;
    ListInstanceRiskNumResponseBodyInstanceRiskNumRiskNumEntity(ListInstanceRiskNumResponseBodyInstanceRiskNumRiskNumEntity &&) = default ;
    ListInstanceRiskNumResponseBodyInstanceRiskNumRiskNumEntity(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstanceRiskNumResponseBodyInstanceRiskNumRiskNumEntity() = default ;
    ListInstanceRiskNumResponseBodyInstanceRiskNumRiskNumEntity& operator=(const ListInstanceRiskNumResponseBodyInstanceRiskNumRiskNumEntity &) = default ;
    ListInstanceRiskNumResponseBodyInstanceRiskNumRiskNumEntity& operator=(ListInstanceRiskNumResponseBodyInstanceRiskNumRiskNumEntity &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->suspiciousHighCount_ != nullptr
        && this->suspiciousLowCount_ != nullptr && this->suspiciousMediumCount_ != nullptr && this->vulHighCount_ != nullptr && this->vulLowCount_ != nullptr && this->vulMediumCount_ != nullptr
        && this->weakPassWordCount_ != nullptr; };
    // suspiciousHighCount Field Functions 
    bool hasSuspiciousHighCount() const { return this->suspiciousHighCount_ != nullptr;};
    void deleteSuspiciousHighCount() { this->suspiciousHighCount_ = nullptr;};
    inline int32_t suspiciousHighCount() const { DARABONBA_PTR_GET_DEFAULT(suspiciousHighCount_, 0) };
    inline ListInstanceRiskNumResponseBodyInstanceRiskNumRiskNumEntity& setSuspiciousHighCount(int32_t suspiciousHighCount) { DARABONBA_PTR_SET_VALUE(suspiciousHighCount_, suspiciousHighCount) };


    // suspiciousLowCount Field Functions 
    bool hasSuspiciousLowCount() const { return this->suspiciousLowCount_ != nullptr;};
    void deleteSuspiciousLowCount() { this->suspiciousLowCount_ = nullptr;};
    inline int32_t suspiciousLowCount() const { DARABONBA_PTR_GET_DEFAULT(suspiciousLowCount_, 0) };
    inline ListInstanceRiskNumResponseBodyInstanceRiskNumRiskNumEntity& setSuspiciousLowCount(int32_t suspiciousLowCount) { DARABONBA_PTR_SET_VALUE(suspiciousLowCount_, suspiciousLowCount) };


    // suspiciousMediumCount Field Functions 
    bool hasSuspiciousMediumCount() const { return this->suspiciousMediumCount_ != nullptr;};
    void deleteSuspiciousMediumCount() { this->suspiciousMediumCount_ = nullptr;};
    inline int32_t suspiciousMediumCount() const { DARABONBA_PTR_GET_DEFAULT(suspiciousMediumCount_, 0) };
    inline ListInstanceRiskNumResponseBodyInstanceRiskNumRiskNumEntity& setSuspiciousMediumCount(int32_t suspiciousMediumCount) { DARABONBA_PTR_SET_VALUE(suspiciousMediumCount_, suspiciousMediumCount) };


    // vulHighCount Field Functions 
    bool hasVulHighCount() const { return this->vulHighCount_ != nullptr;};
    void deleteVulHighCount() { this->vulHighCount_ = nullptr;};
    inline int32_t vulHighCount() const { DARABONBA_PTR_GET_DEFAULT(vulHighCount_, 0) };
    inline ListInstanceRiskNumResponseBodyInstanceRiskNumRiskNumEntity& setVulHighCount(int32_t vulHighCount) { DARABONBA_PTR_SET_VALUE(vulHighCount_, vulHighCount) };


    // vulLowCount Field Functions 
    bool hasVulLowCount() const { return this->vulLowCount_ != nullptr;};
    void deleteVulLowCount() { this->vulLowCount_ = nullptr;};
    inline int32_t vulLowCount() const { DARABONBA_PTR_GET_DEFAULT(vulLowCount_, 0) };
    inline ListInstanceRiskNumResponseBodyInstanceRiskNumRiskNumEntity& setVulLowCount(int32_t vulLowCount) { DARABONBA_PTR_SET_VALUE(vulLowCount_, vulLowCount) };


    // vulMediumCount Field Functions 
    bool hasVulMediumCount() const { return this->vulMediumCount_ != nullptr;};
    void deleteVulMediumCount() { this->vulMediumCount_ = nullptr;};
    inline int32_t vulMediumCount() const { DARABONBA_PTR_GET_DEFAULT(vulMediumCount_, 0) };
    inline ListInstanceRiskNumResponseBodyInstanceRiskNumRiskNumEntity& setVulMediumCount(int32_t vulMediumCount) { DARABONBA_PTR_SET_VALUE(vulMediumCount_, vulMediumCount) };


    // weakPassWordCount Field Functions 
    bool hasWeakPassWordCount() const { return this->weakPassWordCount_ != nullptr;};
    void deleteWeakPassWordCount() { this->weakPassWordCount_ = nullptr;};
    inline int32_t weakPassWordCount() const { DARABONBA_PTR_GET_DEFAULT(weakPassWordCount_, 0) };
    inline ListInstanceRiskNumResponseBodyInstanceRiskNumRiskNumEntity& setWeakPassWordCount(int32_t weakPassWordCount) { DARABONBA_PTR_SET_VALUE(weakPassWordCount_, weakPassWordCount) };


  protected:
    // The number of high-risk alerts.
    std::shared_ptr<int32_t> suspiciousHighCount_ = nullptr;
    // The number of low-risk alerts.
    std::shared_ptr<int32_t> suspiciousLowCount_ = nullptr;
    // The number of medium-risk alerts.
    std::shared_ptr<int32_t> suspiciousMediumCount_ = nullptr;
    // The number of high-risk vulnerabilities.
    std::shared_ptr<int32_t> vulHighCount_ = nullptr;
    // The number of low-risk vulnerabilities.
    std::shared_ptr<int32_t> vulLowCount_ = nullptr;
    // The number of medium-risk vulnerabilities.
    std::shared_ptr<int32_t> vulMediumCount_ = nullptr;
    // The number of weak passwords exposed on the Internet.
    std::shared_ptr<int32_t> weakPassWordCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
