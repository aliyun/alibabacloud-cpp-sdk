// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPHYSICALCONNECTIONLOARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPHYSICALCONNECTIONLOARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribePhysicalConnectionLOAResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePhysicalConnectionLOAResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PhysicalConnectionLOAType, physicalConnectionLOAType_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePhysicalConnectionLOAResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PhysicalConnectionLOAType, physicalConnectionLOAType_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribePhysicalConnectionLOAResponseBody() = default ;
    DescribePhysicalConnectionLOAResponseBody(const DescribePhysicalConnectionLOAResponseBody &) = default ;
    DescribePhysicalConnectionLOAResponseBody(DescribePhysicalConnectionLOAResponseBody &&) = default ;
    DescribePhysicalConnectionLOAResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePhysicalConnectionLOAResponseBody() = default ;
    DescribePhysicalConnectionLOAResponseBody& operator=(const DescribePhysicalConnectionLOAResponseBody &) = default ;
    DescribePhysicalConnectionLOAResponseBody& operator=(DescribePhysicalConnectionLOAResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PhysicalConnectionLOAType : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PhysicalConnectionLOAType& obj) { 
        DARABONBA_PTR_TO_JSON(CompanyLocalizedName, companyLocalizedName_);
        DARABONBA_PTR_TO_JSON(CompanyName, companyName_);
        DARABONBA_PTR_TO_JSON(ConstructionTime, constructionTime_);
        DARABONBA_PTR_TO_JSON(Description, description_);
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
      friend void from_json(const Darabonba::Json& j, PhysicalConnectionLOAType& obj) { 
        DARABONBA_PTR_FROM_JSON(CompanyLocalizedName, companyLocalizedName_);
        DARABONBA_PTR_FROM_JSON(CompanyName, companyName_);
        DARABONBA_PTR_FROM_JSON(ConstructionTime, constructionTime_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
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
      PhysicalConnectionLOAType() = default ;
      PhysicalConnectionLOAType(const PhysicalConnectionLOAType &) = default ;
      PhysicalConnectionLOAType(PhysicalConnectionLOAType &&) = default ;
      PhysicalConnectionLOAType(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PhysicalConnectionLOAType() = default ;
      PhysicalConnectionLOAType& operator=(const PhysicalConnectionLOAType &) = default ;
      PhysicalConnectionLOAType& operator=(PhysicalConnectionLOAType &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class PMInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PMInfo& obj) { 
          DARABONBA_PTR_TO_JSON(PMInfo, PMInfo_);
        };
        friend void from_json(const Darabonba::Json& j, PMInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(PMInfo, PMInfo_);
        };
        PMInfo() = default ;
        PMInfo(const PMInfo &) = default ;
        PMInfo(PMInfo &&) = default ;
        PMInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PMInfo() = default ;
        PMInfo& operator=(const PMInfo &) = default ;
        PMInfo& operator=(PMInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class PMInfoItem : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const PMInfoItem& obj) { 
            DARABONBA_PTR_TO_JSON(PMCertificateNo, PMCertificateNo_);
            DARABONBA_PTR_TO_JSON(PMCertificateType, PMCertificateType_);
            DARABONBA_PTR_TO_JSON(PMContactInfo, PMContactInfo_);
            DARABONBA_PTR_TO_JSON(PMGender, PMGender_);
            DARABONBA_PTR_TO_JSON(PMName, PMName_);
          };
          friend void from_json(const Darabonba::Json& j, PMInfoItem& obj) { 
            DARABONBA_PTR_FROM_JSON(PMCertificateNo, PMCertificateNo_);
            DARABONBA_PTR_FROM_JSON(PMCertificateType, PMCertificateType_);
            DARABONBA_PTR_FROM_JSON(PMContactInfo, PMContactInfo_);
            DARABONBA_PTR_FROM_JSON(PMGender, PMGender_);
            DARABONBA_PTR_FROM_JSON(PMName, PMName_);
          };
          PMInfoItem() = default ;
          PMInfoItem(const PMInfoItem &) = default ;
          PMInfoItem(PMInfoItem &&) = default ;
          PMInfoItem(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~PMInfoItem() = default ;
          PMInfoItem& operator=(const PMInfoItem &) = default ;
          PMInfoItem& operator=(PMInfoItem &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->PMCertificateNo_ == nullptr
        && this->PMCertificateType_ == nullptr && this->PMContactInfo_ == nullptr && this->PMGender_ == nullptr && this->PMName_ == nullptr; };
          // PMCertificateNo Field Functions 
          bool hasPMCertificateNo() const { return this->PMCertificateNo_ != nullptr;};
          void deletePMCertificateNo() { this->PMCertificateNo_ = nullptr;};
          inline string getPMCertificateNo() const { DARABONBA_PTR_GET_DEFAULT(PMCertificateNo_, "") };
          inline PMInfoItem& setPMCertificateNo(string PMCertificateNo) { DARABONBA_PTR_SET_VALUE(PMCertificateNo_, PMCertificateNo) };


          // PMCertificateType Field Functions 
          bool hasPMCertificateType() const { return this->PMCertificateType_ != nullptr;};
          void deletePMCertificateType() { this->PMCertificateType_ = nullptr;};
          inline string getPMCertificateType() const { DARABONBA_PTR_GET_DEFAULT(PMCertificateType_, "") };
          inline PMInfoItem& setPMCertificateType(string PMCertificateType) { DARABONBA_PTR_SET_VALUE(PMCertificateType_, PMCertificateType) };


          // PMContactInfo Field Functions 
          bool hasPMContactInfo() const { return this->PMContactInfo_ != nullptr;};
          void deletePMContactInfo() { this->PMContactInfo_ = nullptr;};
          inline string getPMContactInfo() const { DARABONBA_PTR_GET_DEFAULT(PMContactInfo_, "") };
          inline PMInfoItem& setPMContactInfo(string PMContactInfo) { DARABONBA_PTR_SET_VALUE(PMContactInfo_, PMContactInfo) };


          // PMGender Field Functions 
          bool hasPMGender() const { return this->PMGender_ != nullptr;};
          void deletePMGender() { this->PMGender_ = nullptr;};
          inline string getPMGender() const { DARABONBA_PTR_GET_DEFAULT(PMGender_, "") };
          inline PMInfoItem& setPMGender(string PMGender) { DARABONBA_PTR_SET_VALUE(PMGender_, PMGender) };


          // PMName Field Functions 
          bool hasPMName() const { return this->PMName_ != nullptr;};
          void deletePMName() { this->PMName_ = nullptr;};
          inline string getPMName() const { DARABONBA_PTR_GET_DEFAULT(PMName_, "") };
          inline PMInfoItem& setPMName(string PMName) { DARABONBA_PTR_SET_VALUE(PMName_, PMName) };


        protected:
          // The identity document number of the construction worker.
          shared_ptr<string> PMCertificateNo_ {};
          // The identity document type of the construction worker. Valid values:
          // 
          // *   **IDCard**
          // *   **Passport**
          // *   **Other**
          shared_ptr<string> PMCertificateType_ {};
          // The phone number of the construction worker.
          shared_ptr<string> PMContactInfo_ {};
          // The gender of the construction worker. Valid values:
          // 
          // *   **Male**
          // *   **Female**
          shared_ptr<string> PMGender_ {};
          // The name of the construction worker.
          shared_ptr<string> PMName_ {};
        };

        virtual bool empty() const override { return this->PMInfo_ == nullptr; };
        // PMInfo Field Functions 
        bool hasPMInfo() const { return this->PMInfo_ != nullptr;};
        void deletePMInfo() { this->PMInfo_ = nullptr;};
        inline const vector<PMInfo::PMInfoItem> & getPMInfo() const { DARABONBA_PTR_GET_CONST(PMInfo_, vector<PMInfo::PMInfoItem>) };
        inline vector<PMInfo::PMInfoItem> getPMInfo() { DARABONBA_PTR_GET(PMInfo_, vector<PMInfo::PMInfoItem>) };
        inline PMInfo& setPMInfo(const vector<PMInfo::PMInfoItem> & pMInfo) { DARABONBA_PTR_SET_VALUE(PMInfo_, pMInfo) };
        inline PMInfo& setPMInfo(vector<PMInfo::PMInfoItem> && pMInfo) { DARABONBA_PTR_SET_RVALUE(PMInfo_, pMInfo) };


      protected:
        shared_ptr<vector<PMInfo::PMInfoItem>> PMInfo_ {};
      };

      virtual bool empty() const override { return this->companyLocalizedName_ == nullptr
        && this->companyName_ == nullptr && this->constructionTime_ == nullptr && this->description_ == nullptr && this->instanceId_ == nullptr && this->lineCode_ == nullptr
        && this->lineLabel_ == nullptr && this->lineSPContactInfo_ == nullptr && this->lineServiceProvider_ == nullptr && this->lineType_ == nullptr && this->loaUrl_ == nullptr
        && this->PMInfo_ == nullptr && this->SI_ == nullptr && this->status_ == nullptr; };
      // companyLocalizedName Field Functions 
      bool hasCompanyLocalizedName() const { return this->companyLocalizedName_ != nullptr;};
      void deleteCompanyLocalizedName() { this->companyLocalizedName_ = nullptr;};
      inline string getCompanyLocalizedName() const { DARABONBA_PTR_GET_DEFAULT(companyLocalizedName_, "") };
      inline PhysicalConnectionLOAType& setCompanyLocalizedName(string companyLocalizedName) { DARABONBA_PTR_SET_VALUE(companyLocalizedName_, companyLocalizedName) };


      // companyName Field Functions 
      bool hasCompanyName() const { return this->companyName_ != nullptr;};
      void deleteCompanyName() { this->companyName_ = nullptr;};
      inline string getCompanyName() const { DARABONBA_PTR_GET_DEFAULT(companyName_, "") };
      inline PhysicalConnectionLOAType& setCompanyName(string companyName) { DARABONBA_PTR_SET_VALUE(companyName_, companyName) };


      // constructionTime Field Functions 
      bool hasConstructionTime() const { return this->constructionTime_ != nullptr;};
      void deleteConstructionTime() { this->constructionTime_ = nullptr;};
      inline string getConstructionTime() const { DARABONBA_PTR_GET_DEFAULT(constructionTime_, "") };
      inline PhysicalConnectionLOAType& setConstructionTime(string constructionTime) { DARABONBA_PTR_SET_VALUE(constructionTime_, constructionTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline PhysicalConnectionLOAType& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline PhysicalConnectionLOAType& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // lineCode Field Functions 
      bool hasLineCode() const { return this->lineCode_ != nullptr;};
      void deleteLineCode() { this->lineCode_ = nullptr;};
      inline string getLineCode() const { DARABONBA_PTR_GET_DEFAULT(lineCode_, "") };
      inline PhysicalConnectionLOAType& setLineCode(string lineCode) { DARABONBA_PTR_SET_VALUE(lineCode_, lineCode) };


      // lineLabel Field Functions 
      bool hasLineLabel() const { return this->lineLabel_ != nullptr;};
      void deleteLineLabel() { this->lineLabel_ = nullptr;};
      inline string getLineLabel() const { DARABONBA_PTR_GET_DEFAULT(lineLabel_, "") };
      inline PhysicalConnectionLOAType& setLineLabel(string lineLabel) { DARABONBA_PTR_SET_VALUE(lineLabel_, lineLabel) };


      // lineSPContactInfo Field Functions 
      bool hasLineSPContactInfo() const { return this->lineSPContactInfo_ != nullptr;};
      void deleteLineSPContactInfo() { this->lineSPContactInfo_ = nullptr;};
      inline string getLineSPContactInfo() const { DARABONBA_PTR_GET_DEFAULT(lineSPContactInfo_, "") };
      inline PhysicalConnectionLOAType& setLineSPContactInfo(string lineSPContactInfo) { DARABONBA_PTR_SET_VALUE(lineSPContactInfo_, lineSPContactInfo) };


      // lineServiceProvider Field Functions 
      bool hasLineServiceProvider() const { return this->lineServiceProvider_ != nullptr;};
      void deleteLineServiceProvider() { this->lineServiceProvider_ = nullptr;};
      inline string getLineServiceProvider() const { DARABONBA_PTR_GET_DEFAULT(lineServiceProvider_, "") };
      inline PhysicalConnectionLOAType& setLineServiceProvider(string lineServiceProvider) { DARABONBA_PTR_SET_VALUE(lineServiceProvider_, lineServiceProvider) };


      // lineType Field Functions 
      bool hasLineType() const { return this->lineType_ != nullptr;};
      void deleteLineType() { this->lineType_ = nullptr;};
      inline string getLineType() const { DARABONBA_PTR_GET_DEFAULT(lineType_, "") };
      inline PhysicalConnectionLOAType& setLineType(string lineType) { DARABONBA_PTR_SET_VALUE(lineType_, lineType) };


      // loaUrl Field Functions 
      bool hasLoaUrl() const { return this->loaUrl_ != nullptr;};
      void deleteLoaUrl() { this->loaUrl_ = nullptr;};
      inline string getLoaUrl() const { DARABONBA_PTR_GET_DEFAULT(loaUrl_, "") };
      inline PhysicalConnectionLOAType& setLoaUrl(string loaUrl) { DARABONBA_PTR_SET_VALUE(loaUrl_, loaUrl) };


      // PMInfo Field Functions 
      bool hasPMInfo() const { return this->PMInfo_ != nullptr;};
      void deletePMInfo() { this->PMInfo_ = nullptr;};
      inline const PhysicalConnectionLOAType::PMInfo & getPMInfo() const { DARABONBA_PTR_GET_CONST(PMInfo_, PhysicalConnectionLOAType::PMInfo) };
      inline PhysicalConnectionLOAType::PMInfo getPMInfo() { DARABONBA_PTR_GET(PMInfo_, PhysicalConnectionLOAType::PMInfo) };
      inline PhysicalConnectionLOAType& setPMInfo(const PhysicalConnectionLOAType::PMInfo & pMInfo) { DARABONBA_PTR_SET_VALUE(PMInfo_, pMInfo) };
      inline PhysicalConnectionLOAType& setPMInfo(PhysicalConnectionLOAType::PMInfo && pMInfo) { DARABONBA_PTR_SET_RVALUE(PMInfo_, pMInfo) };


      // SI Field Functions 
      bool hasSI() const { return this->SI_ != nullptr;};
      void deleteSI() { this->SI_ = nullptr;};
      inline string getSI() const { DARABONBA_PTR_GET_DEFAULT(SI_, "") };
      inline PhysicalConnectionLOAType& setSI(string SI) { DARABONBA_PTR_SET_VALUE(SI_, SI) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline PhysicalConnectionLOAType& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The name of the construction company.
      shared_ptr<string> companyLocalizedName_ {};
      // The name of the organization that requires the Express Connect circuit.
      shared_ptr<string> companyName_ {};
      // The time when construction starts.
      shared_ptr<string> constructionTime_ {};
      shared_ptr<string> description_ {};
      // The ID of the Express Connect circuit.
      shared_ptr<string> instanceId_ {};
      // The circuit code provided by the connectivity provider.
      shared_ptr<string> lineCode_ {};
      // The label of the cable in the data center.
      shared_ptr<string> lineLabel_ {};
      // The contact information about line O\\&M.
      shared_ptr<string> lineSPContactInfo_ {};
      // The ISP. Valid values:
      // 
      // *   **China Telecom**
      // *   **China Unicom**
      // *   **China Mobile**
      // *   **Other ISPs in China**
      shared_ptr<string> lineServiceProvider_ {};
      // The type of the Express Connect circuit. Valid values:
      // 
      // *   **MSTP**
      // *   **MPLSVPN**
      // *   **FIBRE**
      // *   **Other**
      shared_ptr<string> lineType_ {};
      // The download URL of the LOA file.
      shared_ptr<string> loaUrl_ {};
      // The information about the construction workers.
      shared_ptr<PhysicalConnectionLOAType::PMInfo> PMInfo_ {};
      // The on-site construction company.
      shared_ptr<string> SI_ {};
      // The status of the LOA. Valid values:
      // 
      // *   **Applying**: The LOA is pending for approval.
      // *   **Accept**: The LOA is approved.
      // *   **Available**: The LOA is available.
      // *   **Rejected**: The LOA is rejected.
      // *   **Completing**: The Express Connect circuit is under construction.
      // *   **Complete**: The Express Connect circuit is installed.
      // *   **Deleted**: The LOA is deleted.
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->physicalConnectionLOAType_ == nullptr
        && this->requestId_ == nullptr; };
    // physicalConnectionLOAType Field Functions 
    bool hasPhysicalConnectionLOAType() const { return this->physicalConnectionLOAType_ != nullptr;};
    void deletePhysicalConnectionLOAType() { this->physicalConnectionLOAType_ = nullptr;};
    inline const DescribePhysicalConnectionLOAResponseBody::PhysicalConnectionLOAType & getPhysicalConnectionLOAType() const { DARABONBA_PTR_GET_CONST(physicalConnectionLOAType_, DescribePhysicalConnectionLOAResponseBody::PhysicalConnectionLOAType) };
    inline DescribePhysicalConnectionLOAResponseBody::PhysicalConnectionLOAType getPhysicalConnectionLOAType() { DARABONBA_PTR_GET(physicalConnectionLOAType_, DescribePhysicalConnectionLOAResponseBody::PhysicalConnectionLOAType) };
    inline DescribePhysicalConnectionLOAResponseBody& setPhysicalConnectionLOAType(const DescribePhysicalConnectionLOAResponseBody::PhysicalConnectionLOAType & physicalConnectionLOAType) { DARABONBA_PTR_SET_VALUE(physicalConnectionLOAType_, physicalConnectionLOAType) };
    inline DescribePhysicalConnectionLOAResponseBody& setPhysicalConnectionLOAType(DescribePhysicalConnectionLOAResponseBody::PhysicalConnectionLOAType && physicalConnectionLOAType) { DARABONBA_PTR_SET_RVALUE(physicalConnectionLOAType_, physicalConnectionLOAType) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePhysicalConnectionLOAResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The LOA information about the Express Connect circuit.
    shared_ptr<DescribePhysicalConnectionLOAResponseBody::PhysicalConnectionLOAType> physicalConnectionLOAType_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
