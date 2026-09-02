// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DATAVALUE_HPP_
#define ALIBABACLOUD_MODELS_DATAVALUE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DataValue : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DataValue& obj) { 
      DARABONBA_PTR_TO_JSON(CveNum, cveNum_);
      DARABONBA_PTR_TO_JSON(EmgNum, emgNum_);
      DARABONBA_PTR_TO_JSON(SysNum, sysNum_);
      DARABONBA_PTR_TO_JSON(CmsNum, cmsNum_);
      DARABONBA_PTR_TO_JSON(AppNum, appNum_);
      DARABONBA_PTR_TO_JSON(ScaNum, scaNum_);
      DARABONBA_PTR_TO_JSON(VulAsapSum, vulAsapSum_);
      DARABONBA_PTR_TO_JSON(VulLaterSum, vulLaterSum_);
      DARABONBA_PTR_TO_JSON(VulNntfSum, vulNntfSum_);
      DARABONBA_PTR_TO_JSON(SysAsapNum, sysAsapNum_);
    };
    friend void from_json(const Darabonba::Json& j, DataValue& obj) { 
      DARABONBA_PTR_FROM_JSON(CveNum, cveNum_);
      DARABONBA_PTR_FROM_JSON(EmgNum, emgNum_);
      DARABONBA_PTR_FROM_JSON(SysNum, sysNum_);
      DARABONBA_PTR_FROM_JSON(CmsNum, cmsNum_);
      DARABONBA_PTR_FROM_JSON(AppNum, appNum_);
      DARABONBA_PTR_FROM_JSON(ScaNum, scaNum_);
      DARABONBA_PTR_FROM_JSON(VulAsapSum, vulAsapSum_);
      DARABONBA_PTR_FROM_JSON(VulLaterSum, vulLaterSum_);
      DARABONBA_PTR_FROM_JSON(VulNntfSum, vulNntfSum_);
      DARABONBA_PTR_FROM_JSON(SysAsapNum, sysAsapNum_);
    };
    DataValue() = default ;
    DataValue(const DataValue &) = default ;
    DataValue(DataValue &&) = default ;
    DataValue(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DataValue() = default ;
    DataValue& operator=(const DataValue &) = default ;
    DataValue& operator=(DataValue &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cveNum_ == nullptr
        && this->emgNum_ == nullptr && this->sysNum_ == nullptr && this->cmsNum_ == nullptr && this->appNum_ == nullptr && this->scaNum_ == nullptr
        && this->vulAsapSum_ == nullptr && this->vulLaterSum_ == nullptr && this->vulNntfSum_ == nullptr && this->sysAsapNum_ == nullptr; };
    // cveNum Field Functions 
    bool hasCveNum() const { return this->cveNum_ != nullptr;};
    void deleteCveNum() { this->cveNum_ = nullptr;};
    inline int32_t getCveNum() const { DARABONBA_PTR_GET_DEFAULT(cveNum_, 0) };
    inline DataValue& setCveNum(int32_t cveNum) { DARABONBA_PTR_SET_VALUE(cveNum_, cveNum) };


    // emgNum Field Functions 
    bool hasEmgNum() const { return this->emgNum_ != nullptr;};
    void deleteEmgNum() { this->emgNum_ = nullptr;};
    inline int32_t getEmgNum() const { DARABONBA_PTR_GET_DEFAULT(emgNum_, 0) };
    inline DataValue& setEmgNum(int32_t emgNum) { DARABONBA_PTR_SET_VALUE(emgNum_, emgNum) };


    // sysNum Field Functions 
    bool hasSysNum() const { return this->sysNum_ != nullptr;};
    void deleteSysNum() { this->sysNum_ = nullptr;};
    inline int32_t getSysNum() const { DARABONBA_PTR_GET_DEFAULT(sysNum_, 0) };
    inline DataValue& setSysNum(int32_t sysNum) { DARABONBA_PTR_SET_VALUE(sysNum_, sysNum) };


    // cmsNum Field Functions 
    bool hasCmsNum() const { return this->cmsNum_ != nullptr;};
    void deleteCmsNum() { this->cmsNum_ = nullptr;};
    inline int32_t getCmsNum() const { DARABONBA_PTR_GET_DEFAULT(cmsNum_, 0) };
    inline DataValue& setCmsNum(int32_t cmsNum) { DARABONBA_PTR_SET_VALUE(cmsNum_, cmsNum) };


    // appNum Field Functions 
    bool hasAppNum() const { return this->appNum_ != nullptr;};
    void deleteAppNum() { this->appNum_ = nullptr;};
    inline int32_t getAppNum() const { DARABONBA_PTR_GET_DEFAULT(appNum_, 0) };
    inline DataValue& setAppNum(int32_t appNum) { DARABONBA_PTR_SET_VALUE(appNum_, appNum) };


    // scaNum Field Functions 
    bool hasScaNum() const { return this->scaNum_ != nullptr;};
    void deleteScaNum() { this->scaNum_ = nullptr;};
    inline int32_t getScaNum() const { DARABONBA_PTR_GET_DEFAULT(scaNum_, 0) };
    inline DataValue& setScaNum(int32_t scaNum) { DARABONBA_PTR_SET_VALUE(scaNum_, scaNum) };


    // vulAsapSum Field Functions 
    bool hasVulAsapSum() const { return this->vulAsapSum_ != nullptr;};
    void deleteVulAsapSum() { this->vulAsapSum_ = nullptr;};
    inline int32_t getVulAsapSum() const { DARABONBA_PTR_GET_DEFAULT(vulAsapSum_, 0) };
    inline DataValue& setVulAsapSum(int32_t vulAsapSum) { DARABONBA_PTR_SET_VALUE(vulAsapSum_, vulAsapSum) };


    // vulLaterSum Field Functions 
    bool hasVulLaterSum() const { return this->vulLaterSum_ != nullptr;};
    void deleteVulLaterSum() { this->vulLaterSum_ = nullptr;};
    inline int32_t getVulLaterSum() const { DARABONBA_PTR_GET_DEFAULT(vulLaterSum_, 0) };
    inline DataValue& setVulLaterSum(int32_t vulLaterSum) { DARABONBA_PTR_SET_VALUE(vulLaterSum_, vulLaterSum) };


    // vulNntfSum Field Functions 
    bool hasVulNntfSum() const { return this->vulNntfSum_ != nullptr;};
    void deleteVulNntfSum() { this->vulNntfSum_ = nullptr;};
    inline int32_t getVulNntfSum() const { DARABONBA_PTR_GET_DEFAULT(vulNntfSum_, 0) };
    inline DataValue& setVulNntfSum(int32_t vulNntfSum) { DARABONBA_PTR_SET_VALUE(vulNntfSum_, vulNntfSum) };


    // sysAsapNum Field Functions 
    bool hasSysAsapNum() const { return this->sysAsapNum_ != nullptr;};
    void deleteSysAsapNum() { this->sysAsapNum_ = nullptr;};
    inline int32_t getSysAsapNum() const { DARABONBA_PTR_GET_DEFAULT(sysAsapNum_, 0) };
    inline DataValue& setSysAsapNum(int32_t sysAsapNum) { DARABONBA_PTR_SET_VALUE(sysAsapNum_, sysAsapNum) };


  protected:
    shared_ptr<int32_t> cveNum_ {};
    shared_ptr<int32_t> emgNum_ {};
    shared_ptr<int32_t> sysNum_ {};
    shared_ptr<int32_t> cmsNum_ {};
    shared_ptr<int32_t> appNum_ {};
    shared_ptr<int32_t> scaNum_ {};
    shared_ptr<int32_t> vulAsapSum_ {};
    shared_ptr<int32_t> vulLaterSum_ {};
    shared_ptr<int32_t> vulNntfSum_ {};
    shared_ptr<int32_t> sysAsapNum_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
