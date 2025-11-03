// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPHYSICALCONNECTIONLOARESPONSEBODYPHYSICALCONNECTIONLOATYPE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPHYSICALCONNECTIONLOARESPONSEBODYPHYSICALCONNECTIONLOATYPE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribePhysicalConnectionLOAResponseBodyPhysicalConnectionLOATypePMInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribePhysicalConnectionLOAResponseBodyPhysicalConnectionLOAType : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePhysicalConnectionLOAResponseBodyPhysicalConnectionLOAType& obj) { 
      DARABONBA_PTR_TO_JSON(CompanyLocalizedName, companyLocalizedName_);
      DARABONBA_PTR_TO_JSON(CompanyName, companyName_);
      DARABONBA_PTR_TO_JSON(ConstructionTime, constructionTime_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(LineCode, lineCode_);
      DARABONBA_PTR_TO_JSON(LineLabel, lineLabel_);
      DARABONBA_PTR_TO_JSON(LineSPContactInfo, lineSPContactInfo_);
      DARABONBA_PTR_TO_JSON(LineServiceProvider, lineServiceProvider_);
      DARABONBA_PTR_TO_JSON(LineType, lineType_);
      DARABONBA_PTR_TO_JSON(LoaUrl, loaUrl_);
      DARABONBA_PTR_TO_JSON(PMInfo, PMInfo_);
      DARABONBA_PTR_TO_JSON(SI, SI_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePhysicalConnectionLOAResponseBodyPhysicalConnectionLOAType& obj) { 
      DARABONBA_PTR_FROM_JSON(CompanyLocalizedName, companyLocalizedName_);
      DARABONBA_PTR_FROM_JSON(CompanyName, companyName_);
      DARABONBA_PTR_FROM_JSON(ConstructionTime, constructionTime_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(LineCode, lineCode_);
      DARABONBA_PTR_FROM_JSON(LineLabel, lineLabel_);
      DARABONBA_PTR_FROM_JSON(LineSPContactInfo, lineSPContactInfo_);
      DARABONBA_PTR_FROM_JSON(LineServiceProvider, lineServiceProvider_);
      DARABONBA_PTR_FROM_JSON(LineType, lineType_);
      DARABONBA_PTR_FROM_JSON(LoaUrl, loaUrl_);
      DARABONBA_PTR_FROM_JSON(PMInfo, PMInfo_);
      DARABONBA_PTR_FROM_JSON(SI, SI_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribePhysicalConnectionLOAResponseBodyPhysicalConnectionLOAType() = default ;
    DescribePhysicalConnectionLOAResponseBodyPhysicalConnectionLOAType(const DescribePhysicalConnectionLOAResponseBodyPhysicalConnectionLOAType &) = default ;
    DescribePhysicalConnectionLOAResponseBodyPhysicalConnectionLOAType(DescribePhysicalConnectionLOAResponseBodyPhysicalConnectionLOAType &&) = default ;
    DescribePhysicalConnectionLOAResponseBodyPhysicalConnectionLOAType(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePhysicalConnectionLOAResponseBodyPhysicalConnectionLOAType() = default ;
    DescribePhysicalConnectionLOAResponseBodyPhysicalConnectionLOAType& operator=(const DescribePhysicalConnectionLOAResponseBodyPhysicalConnectionLOAType &) = default ;
    DescribePhysicalConnectionLOAResponseBodyPhysicalConnectionLOAType& operator=(DescribePhysicalConnectionLOAResponseBodyPhysicalConnectionLOAType &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->companyLocalizedName_ == nullptr
        && return this->companyName_ == nullptr && return this->constructionTime_ == nullptr && return this->instanceId_ == nullptr && return this->lineCode_ == nullptr && return this->lineLabel_ == nullptr
        && return this->lineSPContactInfo_ == nullptr && return this->lineServiceProvider_ == nullptr && return this->lineType_ == nullptr && return this->loaUrl_ == nullptr && return this->PMInfo_ == nullptr
        && return this->SI_ == nullptr && return this->status_ == nullptr; };
    // companyLocalizedName Field Functions 
    bool hasCompanyLocalizedName() const { return this->companyLocalizedName_ != nullptr;};
    void deleteCompanyLocalizedName() { this->companyLocalizedName_ = nullptr;};
    inline string companyLocalizedName() const { DARABONBA_PTR_GET_DEFAULT(companyLocalizedName_, "") };
    inline DescribePhysicalConnectionLOAResponseBodyPhysicalConnectionLOAType& setCompanyLocalizedName(string companyLocalizedName) { DARABONBA_PTR_SET_VALUE(companyLocalizedName_, companyLocalizedName) };


    // companyName Field Functions 
    bool hasCompanyName() const { return this->companyName_ != nullptr;};
    void deleteCompanyName() { this->companyName_ = nullptr;};
    inline string companyName() const { DARABONBA_PTR_GET_DEFAULT(companyName_, "") };
    inline DescribePhysicalConnectionLOAResponseBodyPhysicalConnectionLOAType& setCompanyName(string companyName) { DARABONBA_PTR_SET_VALUE(companyName_, companyName) };


    // constructionTime Field Functions 
    bool hasConstructionTime() const { return this->constructionTime_ != nullptr;};
    void deleteConstructionTime() { this->constructionTime_ = nullptr;};
    inline string constructionTime() const { DARABONBA_PTR_GET_DEFAULT(constructionTime_, "") };
    inline DescribePhysicalConnectionLOAResponseBodyPhysicalConnectionLOAType& setConstructionTime(string constructionTime) { DARABONBA_PTR_SET_VALUE(constructionTime_, constructionTime) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribePhysicalConnectionLOAResponseBodyPhysicalConnectionLOAType& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // lineCode Field Functions 
    bool hasLineCode() const { return this->lineCode_ != nullptr;};
    void deleteLineCode() { this->lineCode_ = nullptr;};
    inline string lineCode() const { DARABONBA_PTR_GET_DEFAULT(lineCode_, "") };
    inline DescribePhysicalConnectionLOAResponseBodyPhysicalConnectionLOAType& setLineCode(string lineCode) { DARABONBA_PTR_SET_VALUE(lineCode_, lineCode) };


    // lineLabel Field Functions 
    bool hasLineLabel() const { return this->lineLabel_ != nullptr;};
    void deleteLineLabel() { this->lineLabel_ = nullptr;};
    inline string lineLabel() const { DARABONBA_PTR_GET_DEFAULT(lineLabel_, "") };
    inline DescribePhysicalConnectionLOAResponseBodyPhysicalConnectionLOAType& setLineLabel(string lineLabel) { DARABONBA_PTR_SET_VALUE(lineLabel_, lineLabel) };


    // lineSPContactInfo Field Functions 
    bool hasLineSPContactInfo() const { return this->lineSPContactInfo_ != nullptr;};
    void deleteLineSPContactInfo() { this->lineSPContactInfo_ = nullptr;};
    inline string lineSPContactInfo() const { DARABONBA_PTR_GET_DEFAULT(lineSPContactInfo_, "") };
    inline DescribePhysicalConnectionLOAResponseBodyPhysicalConnectionLOAType& setLineSPContactInfo(string lineSPContactInfo) { DARABONBA_PTR_SET_VALUE(lineSPContactInfo_, lineSPContactInfo) };


    // lineServiceProvider Field Functions 
    bool hasLineServiceProvider() const { return this->lineServiceProvider_ != nullptr;};
    void deleteLineServiceProvider() { this->lineServiceProvider_ = nullptr;};
    inline string lineServiceProvider() const { DARABONBA_PTR_GET_DEFAULT(lineServiceProvider_, "") };
    inline DescribePhysicalConnectionLOAResponseBodyPhysicalConnectionLOAType& setLineServiceProvider(string lineServiceProvider) { DARABONBA_PTR_SET_VALUE(lineServiceProvider_, lineServiceProvider) };


    // lineType Field Functions 
    bool hasLineType() const { return this->lineType_ != nullptr;};
    void deleteLineType() { this->lineType_ = nullptr;};
    inline string lineType() const { DARABONBA_PTR_GET_DEFAULT(lineType_, "") };
    inline DescribePhysicalConnectionLOAResponseBodyPhysicalConnectionLOAType& setLineType(string lineType) { DARABONBA_PTR_SET_VALUE(lineType_, lineType) };


    // loaUrl Field Functions 
    bool hasLoaUrl() const { return this->loaUrl_ != nullptr;};
    void deleteLoaUrl() { this->loaUrl_ = nullptr;};
    inline string loaUrl() const { DARABONBA_PTR_GET_DEFAULT(loaUrl_, "") };
    inline DescribePhysicalConnectionLOAResponseBodyPhysicalConnectionLOAType& setLoaUrl(string loaUrl) { DARABONBA_PTR_SET_VALUE(loaUrl_, loaUrl) };


    // PMInfo Field Functions 
    bool hasPMInfo() const { return this->PMInfo_ != nullptr;};
    void deletePMInfo() { this->PMInfo_ = nullptr;};
    inline const Models::DescribePhysicalConnectionLOAResponseBodyPhysicalConnectionLOATypePMInfo & PMInfo() const { DARABONBA_PTR_GET_CONST(PMInfo_, Models::DescribePhysicalConnectionLOAResponseBodyPhysicalConnectionLOATypePMInfo) };
    inline Models::DescribePhysicalConnectionLOAResponseBodyPhysicalConnectionLOATypePMInfo PMInfo() { DARABONBA_PTR_GET(PMInfo_, Models::DescribePhysicalConnectionLOAResponseBodyPhysicalConnectionLOATypePMInfo) };
    inline DescribePhysicalConnectionLOAResponseBodyPhysicalConnectionLOAType& setPMInfo(const Models::DescribePhysicalConnectionLOAResponseBodyPhysicalConnectionLOATypePMInfo & PMInfo) { DARABONBA_PTR_SET_VALUE(PMInfo_, PMInfo) };
    inline DescribePhysicalConnectionLOAResponseBodyPhysicalConnectionLOAType& setPMInfo(Models::DescribePhysicalConnectionLOAResponseBodyPhysicalConnectionLOATypePMInfo && PMInfo) { DARABONBA_PTR_SET_RVALUE(PMInfo_, PMInfo) };


    // SI Field Functions 
    bool hasSI() const { return this->SI_ != nullptr;};
    void deleteSI() { this->SI_ = nullptr;};
    inline string SI() const { DARABONBA_PTR_GET_DEFAULT(SI_, "") };
    inline DescribePhysicalConnectionLOAResponseBodyPhysicalConnectionLOAType& setSI(string SI) { DARABONBA_PTR_SET_VALUE(SI_, SI) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribePhysicalConnectionLOAResponseBodyPhysicalConnectionLOAType& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The name of the construction company.
    std::shared_ptr<string> companyLocalizedName_ = nullptr;
    // The name of the organization that requires the Express Connect circuit.
    std::shared_ptr<string> companyName_ = nullptr;
    // The time when construction starts.
    std::shared_ptr<string> constructionTime_ = nullptr;
    // The ID of the Express Connect circuit.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The circuit code provided by the connectivity provider.
    std::shared_ptr<string> lineCode_ = nullptr;
    // The label of the cable in the data center.
    std::shared_ptr<string> lineLabel_ = nullptr;
    // The contact information about line O\\&M.
    std::shared_ptr<string> lineSPContactInfo_ = nullptr;
    // The ISP. Valid values:
    // 
    // *   **China Telecom**
    // *   **China Unicom**
    // *   **China Mobile**
    // *   **Other ISPs in China**
    std::shared_ptr<string> lineServiceProvider_ = nullptr;
    // The type of the Express Connect circuit. Valid values:
    // 
    // *   **MSTP**
    // *   **MPLSVPN**
    // *   **FIBRE**
    // *   **Other**
    std::shared_ptr<string> lineType_ = nullptr;
    // The download URL of the LOA file.
    std::shared_ptr<string> loaUrl_ = nullptr;
    // The information about the construction workers.
    std::shared_ptr<Models::DescribePhysicalConnectionLOAResponseBodyPhysicalConnectionLOATypePMInfo> PMInfo_ = nullptr;
    // The on-site construction company.
    std::shared_ptr<string> SI_ = nullptr;
    // The status of the LOA. Valid values:
    // 
    // *   **Applying**: The LOA is pending for approval.
    // *   **Accept**: The LOA is approved.
    // *   **Available**: The LOA is available.
    // *   **Rejected**: The LOA is rejected.
    // *   **Completing**: The Express Connect circuit is under construction.
    // *   **Complete**: The Express Connect circuit is installed.
    // *   **Deleted**: The LOA is deleted.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
