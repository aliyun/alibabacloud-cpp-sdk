// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPHYSICALCONNECTIONLOARESPONSEBODYPHYSICALCONNECTIONLOATYPEPMINFOPMINFO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPHYSICALCONNECTIONLOARESPONSEBODYPHYSICALCONNECTIONLOATYPEPMINFOPMINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribePhysicalConnectionLOAResponseBodyPhysicalConnectionLOATypePMInfoPMInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePhysicalConnectionLOAResponseBodyPhysicalConnectionLOATypePMInfoPMInfo& obj) { 
      DARABONBA_PTR_TO_JSON(PMCertificateNo, PMCertificateNo_);
      DARABONBA_PTR_TO_JSON(PMCertificateType, PMCertificateType_);
      DARABONBA_PTR_TO_JSON(PMContactInfo, PMContactInfo_);
      DARABONBA_PTR_TO_JSON(PMGender, PMGender_);
      DARABONBA_PTR_TO_JSON(PMName, PMName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePhysicalConnectionLOAResponseBodyPhysicalConnectionLOATypePMInfoPMInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(PMCertificateNo, PMCertificateNo_);
      DARABONBA_PTR_FROM_JSON(PMCertificateType, PMCertificateType_);
      DARABONBA_PTR_FROM_JSON(PMContactInfo, PMContactInfo_);
      DARABONBA_PTR_FROM_JSON(PMGender, PMGender_);
      DARABONBA_PTR_FROM_JSON(PMName, PMName_);
    };
    DescribePhysicalConnectionLOAResponseBodyPhysicalConnectionLOATypePMInfoPMInfo() = default ;
    DescribePhysicalConnectionLOAResponseBodyPhysicalConnectionLOATypePMInfoPMInfo(const DescribePhysicalConnectionLOAResponseBodyPhysicalConnectionLOATypePMInfoPMInfo &) = default ;
    DescribePhysicalConnectionLOAResponseBodyPhysicalConnectionLOATypePMInfoPMInfo(DescribePhysicalConnectionLOAResponseBodyPhysicalConnectionLOATypePMInfoPMInfo &&) = default ;
    DescribePhysicalConnectionLOAResponseBodyPhysicalConnectionLOATypePMInfoPMInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePhysicalConnectionLOAResponseBodyPhysicalConnectionLOATypePMInfoPMInfo() = default ;
    DescribePhysicalConnectionLOAResponseBodyPhysicalConnectionLOATypePMInfoPMInfo& operator=(const DescribePhysicalConnectionLOAResponseBodyPhysicalConnectionLOATypePMInfoPMInfo &) = default ;
    DescribePhysicalConnectionLOAResponseBodyPhysicalConnectionLOATypePMInfoPMInfo& operator=(DescribePhysicalConnectionLOAResponseBodyPhysicalConnectionLOATypePMInfoPMInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->PMCertificateNo_ == nullptr
        && return this->PMCertificateType_ == nullptr && return this->PMContactInfo_ == nullptr && return this->PMGender_ == nullptr && return this->PMName_ == nullptr; };
    // PMCertificateNo Field Functions 
    bool hasPMCertificateNo() const { return this->PMCertificateNo_ != nullptr;};
    void deletePMCertificateNo() { this->PMCertificateNo_ = nullptr;};
    inline string PMCertificateNo() const { DARABONBA_PTR_GET_DEFAULT(PMCertificateNo_, "") };
    inline DescribePhysicalConnectionLOAResponseBodyPhysicalConnectionLOATypePMInfoPMInfo& setPMCertificateNo(string PMCertificateNo) { DARABONBA_PTR_SET_VALUE(PMCertificateNo_, PMCertificateNo) };


    // PMCertificateType Field Functions 
    bool hasPMCertificateType() const { return this->PMCertificateType_ != nullptr;};
    void deletePMCertificateType() { this->PMCertificateType_ = nullptr;};
    inline string PMCertificateType() const { DARABONBA_PTR_GET_DEFAULT(PMCertificateType_, "") };
    inline DescribePhysicalConnectionLOAResponseBodyPhysicalConnectionLOATypePMInfoPMInfo& setPMCertificateType(string PMCertificateType) { DARABONBA_PTR_SET_VALUE(PMCertificateType_, PMCertificateType) };


    // PMContactInfo Field Functions 
    bool hasPMContactInfo() const { return this->PMContactInfo_ != nullptr;};
    void deletePMContactInfo() { this->PMContactInfo_ = nullptr;};
    inline string PMContactInfo() const { DARABONBA_PTR_GET_DEFAULT(PMContactInfo_, "") };
    inline DescribePhysicalConnectionLOAResponseBodyPhysicalConnectionLOATypePMInfoPMInfo& setPMContactInfo(string PMContactInfo) { DARABONBA_PTR_SET_VALUE(PMContactInfo_, PMContactInfo) };


    // PMGender Field Functions 
    bool hasPMGender() const { return this->PMGender_ != nullptr;};
    void deletePMGender() { this->PMGender_ = nullptr;};
    inline string PMGender() const { DARABONBA_PTR_GET_DEFAULT(PMGender_, "") };
    inline DescribePhysicalConnectionLOAResponseBodyPhysicalConnectionLOATypePMInfoPMInfo& setPMGender(string PMGender) { DARABONBA_PTR_SET_VALUE(PMGender_, PMGender) };


    // PMName Field Functions 
    bool hasPMName() const { return this->PMName_ != nullptr;};
    void deletePMName() { this->PMName_ = nullptr;};
    inline string PMName() const { DARABONBA_PTR_GET_DEFAULT(PMName_, "") };
    inline DescribePhysicalConnectionLOAResponseBodyPhysicalConnectionLOATypePMInfoPMInfo& setPMName(string PMName) { DARABONBA_PTR_SET_VALUE(PMName_, PMName) };


  protected:
    // The identity document number of the construction worker.
    std::shared_ptr<string> PMCertificateNo_ = nullptr;
    // The identity document type of the construction worker. Valid values:
    // 
    // *   **IDCard**
    // *   **Passport**
    // *   **Other**
    std::shared_ptr<string> PMCertificateType_ = nullptr;
    // The phone number of the construction worker.
    std::shared_ptr<string> PMContactInfo_ = nullptr;
    // The gender of the construction worker. Valid values:
    // 
    // *   **Male**
    // *   **Female**
    std::shared_ptr<string> PMGender_ = nullptr;
    // The name of the construction worker.
    std::shared_ptr<string> PMName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
