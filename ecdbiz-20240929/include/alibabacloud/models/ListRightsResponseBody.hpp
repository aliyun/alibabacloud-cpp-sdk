// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRIGHTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTRIGHTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EcdBiz20240929
{
namespace Models
{
  class ListRightsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRightsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListRightsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListRightsResponseBody() = default ;
    ListRightsResponseBody(const ListRightsResponseBody &) = default ;
    ListRightsResponseBody(ListRightsResponseBody &&) = default ;
    ListRightsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRightsResponseBody() = default ;
    ListRightsResponseBody& operator=(const ListRightsResponseBody &) = default ;
    ListRightsResponseBody& operator=(ListRightsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AddDataDiskSize, addDataDiskSize_);
        DARABONBA_PTR_TO_JSON(AddRootDiskSize, addRootDiskSize_);
        DARABONBA_PTR_TO_JSON(AiDesktop, aiDesktop_);
        DARABONBA_PTR_TO_JSON(BusinessSceneCode, businessSceneCode_);
        DARABONBA_PTR_TO_JSON(CalculatingCode, calculatingCode_);
        DARABONBA_PTR_TO_JSON(DataDiskSize, dataDiskSize_);
        DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(Hibernate, hibernate_);
        DARABONBA_PTR_TO_JSON(MonthlyCredit, monthlyCredit_);
        DARABONBA_PTR_TO_JSON(Overseas, overseas_);
        DARABONBA_PTR_TO_JSON(RightsActiveFailureCause, rightsActiveFailureCause_);
        DARABONBA_PTR_TO_JSON(RightsActiveStatus, rightsActiveStatus_);
        DARABONBA_PTR_TO_JSON(RightsActiveTime, rightsActiveTime_);
        DARABONBA_PTR_TO_JSON(RightsAssignedUser, rightsAssignedUser_);
        DARABONBA_PTR_TO_JSON(RightsExpireTime, rightsExpireTime_);
        DARABONBA_PTR_TO_JSON(RightsGpuSpec, rightsGpuSpec_);
        DARABONBA_PTR_TO_JSON(RightsId, rightsId_);
        DARABONBA_PTR_TO_JSON(RightsInventorySpec, rightsInventorySpec_);
        DARABONBA_PTR_TO_JSON(RightsPeriod, rightsPeriod_);
        DARABONBA_PTR_TO_JSON(RightsResourceArea, rightsResourceArea_);
        DARABONBA_PTR_TO_JSON(RightsResourceExpireTime, rightsResourceExpireTime_);
        DARABONBA_PTR_TO_JSON(RightsResourceId, rightsResourceId_);
        DARABONBA_PTR_TO_JSON(RightsResourceRegion, rightsResourceRegion_);
        DARABONBA_PTR_TO_JSON(RightsResourceStatus, rightsResourceStatus_);
        DARABONBA_PTR_TO_JSON(RightsResourceType, rightsResourceType_);
        DARABONBA_PTR_TO_JSON(RightsSourceName, rightsSourceName_);
        DARABONBA_PTR_TO_JSON(RightsSpec, rightsSpec_);
        DARABONBA_PTR_TO_JSON(SystemDiskSize, systemDiskSize_);
        DARABONBA_PTR_TO_JSON(ValuePackageInfos, valuePackageInfos_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AddDataDiskSize, addDataDiskSize_);
        DARABONBA_PTR_FROM_JSON(AddRootDiskSize, addRootDiskSize_);
        DARABONBA_PTR_FROM_JSON(AiDesktop, aiDesktop_);
        DARABONBA_PTR_FROM_JSON(BusinessSceneCode, businessSceneCode_);
        DARABONBA_PTR_FROM_JSON(CalculatingCode, calculatingCode_);
        DARABONBA_PTR_FROM_JSON(DataDiskSize, dataDiskSize_);
        DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(Hibernate, hibernate_);
        DARABONBA_PTR_FROM_JSON(MonthlyCredit, monthlyCredit_);
        DARABONBA_PTR_FROM_JSON(Overseas, overseas_);
        DARABONBA_PTR_FROM_JSON(RightsActiveFailureCause, rightsActiveFailureCause_);
        DARABONBA_PTR_FROM_JSON(RightsActiveStatus, rightsActiveStatus_);
        DARABONBA_PTR_FROM_JSON(RightsActiveTime, rightsActiveTime_);
        DARABONBA_PTR_FROM_JSON(RightsAssignedUser, rightsAssignedUser_);
        DARABONBA_PTR_FROM_JSON(RightsExpireTime, rightsExpireTime_);
        DARABONBA_PTR_FROM_JSON(RightsGpuSpec, rightsGpuSpec_);
        DARABONBA_PTR_FROM_JSON(RightsId, rightsId_);
        DARABONBA_PTR_FROM_JSON(RightsInventorySpec, rightsInventorySpec_);
        DARABONBA_PTR_FROM_JSON(RightsPeriod, rightsPeriod_);
        DARABONBA_PTR_FROM_JSON(RightsResourceArea, rightsResourceArea_);
        DARABONBA_PTR_FROM_JSON(RightsResourceExpireTime, rightsResourceExpireTime_);
        DARABONBA_PTR_FROM_JSON(RightsResourceId, rightsResourceId_);
        DARABONBA_PTR_FROM_JSON(RightsResourceRegion, rightsResourceRegion_);
        DARABONBA_PTR_FROM_JSON(RightsResourceStatus, rightsResourceStatus_);
        DARABONBA_PTR_FROM_JSON(RightsResourceType, rightsResourceType_);
        DARABONBA_PTR_FROM_JSON(RightsSourceName, rightsSourceName_);
        DARABONBA_PTR_FROM_JSON(RightsSpec, rightsSpec_);
        DARABONBA_PTR_FROM_JSON(SystemDiskSize, systemDiskSize_);
        DARABONBA_PTR_FROM_JSON(ValuePackageInfos, valuePackageInfos_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ValuePackageInfos : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ValuePackageInfos& obj) { 
          DARABONBA_PTR_TO_JSON(Function, function_);
          DARABONBA_PTR_TO_JSON(ValuePackageCode, valuePackageCode_);
        };
        friend void from_json(const Darabonba::Json& j, ValuePackageInfos& obj) { 
          DARABONBA_PTR_FROM_JSON(Function, function_);
          DARABONBA_PTR_FROM_JSON(ValuePackageCode, valuePackageCode_);
        };
        ValuePackageInfos() = default ;
        ValuePackageInfos(const ValuePackageInfos &) = default ;
        ValuePackageInfos(ValuePackageInfos &&) = default ;
        ValuePackageInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ValuePackageInfos() = default ;
        ValuePackageInfos& operator=(const ValuePackageInfos &) = default ;
        ValuePackageInfos& operator=(ValuePackageInfos &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->function_ == nullptr
        && this->valuePackageCode_ == nullptr; };
        // function Field Functions 
        bool hasFunction() const { return this->function_ != nullptr;};
        void deleteFunction() { this->function_ = nullptr;};
        inline string getFunction() const { DARABONBA_PTR_GET_DEFAULT(function_, "") };
        inline ValuePackageInfos& setFunction(string function) { DARABONBA_PTR_SET_VALUE(function_, function) };


        // valuePackageCode Field Functions 
        bool hasValuePackageCode() const { return this->valuePackageCode_ != nullptr;};
        void deleteValuePackageCode() { this->valuePackageCode_ = nullptr;};
        inline string getValuePackageCode() const { DARABONBA_PTR_GET_DEFAULT(valuePackageCode_, "") };
        inline ValuePackageInfos& setValuePackageCode(string valuePackageCode) { DARABONBA_PTR_SET_VALUE(valuePackageCode_, valuePackageCode) };


      protected:
        // The content of the value-added feature.
        shared_ptr<string> function_ {};
        // The value-added feature code.
        shared_ptr<string> valuePackageCode_ {};
      };

      virtual bool empty() const override { return this->addDataDiskSize_ == nullptr
        && this->addRootDiskSize_ == nullptr && this->aiDesktop_ == nullptr && this->businessSceneCode_ == nullptr && this->calculatingCode_ == nullptr && this->dataDiskSize_ == nullptr
        && this->gmtCreate_ == nullptr && this->hibernate_ == nullptr && this->monthlyCredit_ == nullptr && this->overseas_ == nullptr && this->rightsActiveFailureCause_ == nullptr
        && this->rightsActiveStatus_ == nullptr && this->rightsActiveTime_ == nullptr && this->rightsAssignedUser_ == nullptr && this->rightsExpireTime_ == nullptr && this->rightsGpuSpec_ == nullptr
        && this->rightsId_ == nullptr && this->rightsInventorySpec_ == nullptr && this->rightsPeriod_ == nullptr && this->rightsResourceArea_ == nullptr && this->rightsResourceExpireTime_ == nullptr
        && this->rightsResourceId_ == nullptr && this->rightsResourceRegion_ == nullptr && this->rightsResourceStatus_ == nullptr && this->rightsResourceType_ == nullptr && this->rightsSourceName_ == nullptr
        && this->rightsSpec_ == nullptr && this->systemDiskSize_ == nullptr && this->valuePackageInfos_ == nullptr; };
      // addDataDiskSize Field Functions 
      bool hasAddDataDiskSize() const { return this->addDataDiskSize_ != nullptr;};
      void deleteAddDataDiskSize() { this->addDataDiskSize_ = nullptr;};
      inline int32_t getAddDataDiskSize() const { DARABONBA_PTR_GET_DEFAULT(addDataDiskSize_, 0) };
      inline Data& setAddDataDiskSize(int32_t addDataDiskSize) { DARABONBA_PTR_SET_VALUE(addDataDiskSize_, addDataDiskSize) };


      // addRootDiskSize Field Functions 
      bool hasAddRootDiskSize() const { return this->addRootDiskSize_ != nullptr;};
      void deleteAddRootDiskSize() { this->addRootDiskSize_ = nullptr;};
      inline int32_t getAddRootDiskSize() const { DARABONBA_PTR_GET_DEFAULT(addRootDiskSize_, 0) };
      inline Data& setAddRootDiskSize(int32_t addRootDiskSize) { DARABONBA_PTR_SET_VALUE(addRootDiskSize_, addRootDiskSize) };


      // aiDesktop Field Functions 
      bool hasAiDesktop() const { return this->aiDesktop_ != nullptr;};
      void deleteAiDesktop() { this->aiDesktop_ = nullptr;};
      inline bool getAiDesktop() const { DARABONBA_PTR_GET_DEFAULT(aiDesktop_, false) };
      inline Data& setAiDesktop(bool aiDesktop) { DARABONBA_PTR_SET_VALUE(aiDesktop_, aiDesktop) };


      // businessSceneCode Field Functions 
      bool hasBusinessSceneCode() const { return this->businessSceneCode_ != nullptr;};
      void deleteBusinessSceneCode() { this->businessSceneCode_ = nullptr;};
      inline string getBusinessSceneCode() const { DARABONBA_PTR_GET_DEFAULT(businessSceneCode_, "") };
      inline Data& setBusinessSceneCode(string businessSceneCode) { DARABONBA_PTR_SET_VALUE(businessSceneCode_, businessSceneCode) };


      // calculatingCode Field Functions 
      bool hasCalculatingCode() const { return this->calculatingCode_ != nullptr;};
      void deleteCalculatingCode() { this->calculatingCode_ = nullptr;};
      inline string getCalculatingCode() const { DARABONBA_PTR_GET_DEFAULT(calculatingCode_, "") };
      inline Data& setCalculatingCode(string calculatingCode) { DARABONBA_PTR_SET_VALUE(calculatingCode_, calculatingCode) };


      // dataDiskSize Field Functions 
      bool hasDataDiskSize() const { return this->dataDiskSize_ != nullptr;};
      void deleteDataDiskSize() { this->dataDiskSize_ = nullptr;};
      inline int32_t getDataDiskSize() const { DARABONBA_PTR_GET_DEFAULT(dataDiskSize_, 0) };
      inline Data& setDataDiskSize(int32_t dataDiskSize) { DARABONBA_PTR_SET_VALUE(dataDiskSize_, dataDiskSize) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
      inline Data& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // hibernate Field Functions 
      bool hasHibernate() const { return this->hibernate_ != nullptr;};
      void deleteHibernate() { this->hibernate_ = nullptr;};
      inline int32_t getHibernate() const { DARABONBA_PTR_GET_DEFAULT(hibernate_, 0) };
      inline Data& setHibernate(int32_t hibernate) { DARABONBA_PTR_SET_VALUE(hibernate_, hibernate) };


      // monthlyCredit Field Functions 
      bool hasMonthlyCredit() const { return this->monthlyCredit_ != nullptr;};
      void deleteMonthlyCredit() { this->monthlyCredit_ = nullptr;};
      inline string getMonthlyCredit() const { DARABONBA_PTR_GET_DEFAULT(monthlyCredit_, "") };
      inline Data& setMonthlyCredit(string monthlyCredit) { DARABONBA_PTR_SET_VALUE(monthlyCredit_, monthlyCredit) };


      // overseas Field Functions 
      bool hasOverseas() const { return this->overseas_ != nullptr;};
      void deleteOverseas() { this->overseas_ = nullptr;};
      inline int32_t getOverseas() const { DARABONBA_PTR_GET_DEFAULT(overseas_, 0) };
      inline Data& setOverseas(int32_t overseas) { DARABONBA_PTR_SET_VALUE(overseas_, overseas) };


      // rightsActiveFailureCause Field Functions 
      bool hasRightsActiveFailureCause() const { return this->rightsActiveFailureCause_ != nullptr;};
      void deleteRightsActiveFailureCause() { this->rightsActiveFailureCause_ = nullptr;};
      inline string getRightsActiveFailureCause() const { DARABONBA_PTR_GET_DEFAULT(rightsActiveFailureCause_, "") };
      inline Data& setRightsActiveFailureCause(string rightsActiveFailureCause) { DARABONBA_PTR_SET_VALUE(rightsActiveFailureCause_, rightsActiveFailureCause) };


      // rightsActiveStatus Field Functions 
      bool hasRightsActiveStatus() const { return this->rightsActiveStatus_ != nullptr;};
      void deleteRightsActiveStatus() { this->rightsActiveStatus_ = nullptr;};
      inline string getRightsActiveStatus() const { DARABONBA_PTR_GET_DEFAULT(rightsActiveStatus_, "") };
      inline Data& setRightsActiveStatus(string rightsActiveStatus) { DARABONBA_PTR_SET_VALUE(rightsActiveStatus_, rightsActiveStatus) };


      // rightsActiveTime Field Functions 
      bool hasRightsActiveTime() const { return this->rightsActiveTime_ != nullptr;};
      void deleteRightsActiveTime() { this->rightsActiveTime_ = nullptr;};
      inline string getRightsActiveTime() const { DARABONBA_PTR_GET_DEFAULT(rightsActiveTime_, "") };
      inline Data& setRightsActiveTime(string rightsActiveTime) { DARABONBA_PTR_SET_VALUE(rightsActiveTime_, rightsActiveTime) };


      // rightsAssignedUser Field Functions 
      bool hasRightsAssignedUser() const { return this->rightsAssignedUser_ != nullptr;};
      void deleteRightsAssignedUser() { this->rightsAssignedUser_ = nullptr;};
      inline string getRightsAssignedUser() const { DARABONBA_PTR_GET_DEFAULT(rightsAssignedUser_, "") };
      inline Data& setRightsAssignedUser(string rightsAssignedUser) { DARABONBA_PTR_SET_VALUE(rightsAssignedUser_, rightsAssignedUser) };


      // rightsExpireTime Field Functions 
      bool hasRightsExpireTime() const { return this->rightsExpireTime_ != nullptr;};
      void deleteRightsExpireTime() { this->rightsExpireTime_ = nullptr;};
      inline string getRightsExpireTime() const { DARABONBA_PTR_GET_DEFAULT(rightsExpireTime_, "") };
      inline Data& setRightsExpireTime(string rightsExpireTime) { DARABONBA_PTR_SET_VALUE(rightsExpireTime_, rightsExpireTime) };


      // rightsGpuSpec Field Functions 
      bool hasRightsGpuSpec() const { return this->rightsGpuSpec_ != nullptr;};
      void deleteRightsGpuSpec() { this->rightsGpuSpec_ = nullptr;};
      inline string getRightsGpuSpec() const { DARABONBA_PTR_GET_DEFAULT(rightsGpuSpec_, "") };
      inline Data& setRightsGpuSpec(string rightsGpuSpec) { DARABONBA_PTR_SET_VALUE(rightsGpuSpec_, rightsGpuSpec) };


      // rightsId Field Functions 
      bool hasRightsId() const { return this->rightsId_ != nullptr;};
      void deleteRightsId() { this->rightsId_ = nullptr;};
      inline string getRightsId() const { DARABONBA_PTR_GET_DEFAULT(rightsId_, "") };
      inline Data& setRightsId(string rightsId) { DARABONBA_PTR_SET_VALUE(rightsId_, rightsId) };


      // rightsInventorySpec Field Functions 
      bool hasRightsInventorySpec() const { return this->rightsInventorySpec_ != nullptr;};
      void deleteRightsInventorySpec() { this->rightsInventorySpec_ = nullptr;};
      inline string getRightsInventorySpec() const { DARABONBA_PTR_GET_DEFAULT(rightsInventorySpec_, "") };
      inline Data& setRightsInventorySpec(string rightsInventorySpec) { DARABONBA_PTR_SET_VALUE(rightsInventorySpec_, rightsInventorySpec) };


      // rightsPeriod Field Functions 
      bool hasRightsPeriod() const { return this->rightsPeriod_ != nullptr;};
      void deleteRightsPeriod() { this->rightsPeriod_ = nullptr;};
      inline string getRightsPeriod() const { DARABONBA_PTR_GET_DEFAULT(rightsPeriod_, "") };
      inline Data& setRightsPeriod(string rightsPeriod) { DARABONBA_PTR_SET_VALUE(rightsPeriod_, rightsPeriod) };


      // rightsResourceArea Field Functions 
      bool hasRightsResourceArea() const { return this->rightsResourceArea_ != nullptr;};
      void deleteRightsResourceArea() { this->rightsResourceArea_ = nullptr;};
      inline string getRightsResourceArea() const { DARABONBA_PTR_GET_DEFAULT(rightsResourceArea_, "") };
      inline Data& setRightsResourceArea(string rightsResourceArea) { DARABONBA_PTR_SET_VALUE(rightsResourceArea_, rightsResourceArea) };


      // rightsResourceExpireTime Field Functions 
      bool hasRightsResourceExpireTime() const { return this->rightsResourceExpireTime_ != nullptr;};
      void deleteRightsResourceExpireTime() { this->rightsResourceExpireTime_ = nullptr;};
      inline string getRightsResourceExpireTime() const { DARABONBA_PTR_GET_DEFAULT(rightsResourceExpireTime_, "") };
      inline Data& setRightsResourceExpireTime(string rightsResourceExpireTime) { DARABONBA_PTR_SET_VALUE(rightsResourceExpireTime_, rightsResourceExpireTime) };


      // rightsResourceId Field Functions 
      bool hasRightsResourceId() const { return this->rightsResourceId_ != nullptr;};
      void deleteRightsResourceId() { this->rightsResourceId_ = nullptr;};
      inline string getRightsResourceId() const { DARABONBA_PTR_GET_DEFAULT(rightsResourceId_, "") };
      inline Data& setRightsResourceId(string rightsResourceId) { DARABONBA_PTR_SET_VALUE(rightsResourceId_, rightsResourceId) };


      // rightsResourceRegion Field Functions 
      bool hasRightsResourceRegion() const { return this->rightsResourceRegion_ != nullptr;};
      void deleteRightsResourceRegion() { this->rightsResourceRegion_ = nullptr;};
      inline string getRightsResourceRegion() const { DARABONBA_PTR_GET_DEFAULT(rightsResourceRegion_, "") };
      inline Data& setRightsResourceRegion(string rightsResourceRegion) { DARABONBA_PTR_SET_VALUE(rightsResourceRegion_, rightsResourceRegion) };


      // rightsResourceStatus Field Functions 
      bool hasRightsResourceStatus() const { return this->rightsResourceStatus_ != nullptr;};
      void deleteRightsResourceStatus() { this->rightsResourceStatus_ = nullptr;};
      inline string getRightsResourceStatus() const { DARABONBA_PTR_GET_DEFAULT(rightsResourceStatus_, "") };
      inline Data& setRightsResourceStatus(string rightsResourceStatus) { DARABONBA_PTR_SET_VALUE(rightsResourceStatus_, rightsResourceStatus) };


      // rightsResourceType Field Functions 
      bool hasRightsResourceType() const { return this->rightsResourceType_ != nullptr;};
      void deleteRightsResourceType() { this->rightsResourceType_ = nullptr;};
      inline string getRightsResourceType() const { DARABONBA_PTR_GET_DEFAULT(rightsResourceType_, "") };
      inline Data& setRightsResourceType(string rightsResourceType) { DARABONBA_PTR_SET_VALUE(rightsResourceType_, rightsResourceType) };


      // rightsSourceName Field Functions 
      bool hasRightsSourceName() const { return this->rightsSourceName_ != nullptr;};
      void deleteRightsSourceName() { this->rightsSourceName_ = nullptr;};
      inline string getRightsSourceName() const { DARABONBA_PTR_GET_DEFAULT(rightsSourceName_, "") };
      inline Data& setRightsSourceName(string rightsSourceName) { DARABONBA_PTR_SET_VALUE(rightsSourceName_, rightsSourceName) };


      // rightsSpec Field Functions 
      bool hasRightsSpec() const { return this->rightsSpec_ != nullptr;};
      void deleteRightsSpec() { this->rightsSpec_ = nullptr;};
      inline string getRightsSpec() const { DARABONBA_PTR_GET_DEFAULT(rightsSpec_, "") };
      inline Data& setRightsSpec(string rightsSpec) { DARABONBA_PTR_SET_VALUE(rightsSpec_, rightsSpec) };


      // systemDiskSize Field Functions 
      bool hasSystemDiskSize() const { return this->systemDiskSize_ != nullptr;};
      void deleteSystemDiskSize() { this->systemDiskSize_ = nullptr;};
      inline int32_t getSystemDiskSize() const { DARABONBA_PTR_GET_DEFAULT(systemDiskSize_, 0) };
      inline Data& setSystemDiskSize(int32_t systemDiskSize) { DARABONBA_PTR_SET_VALUE(systemDiskSize_, systemDiskSize) };


      // valuePackageInfos Field Functions 
      bool hasValuePackageInfos() const { return this->valuePackageInfos_ != nullptr;};
      void deleteValuePackageInfos() { this->valuePackageInfos_ = nullptr;};
      inline const vector<Data::ValuePackageInfos> & getValuePackageInfos() const { DARABONBA_PTR_GET_CONST(valuePackageInfos_, vector<Data::ValuePackageInfos>) };
      inline vector<Data::ValuePackageInfos> getValuePackageInfos() { DARABONBA_PTR_GET(valuePackageInfos_, vector<Data::ValuePackageInfos>) };
      inline Data& setValuePackageInfos(const vector<Data::ValuePackageInfos> & valuePackageInfos) { DARABONBA_PTR_SET_VALUE(valuePackageInfos_, valuePackageInfos) };
      inline Data& setValuePackageInfos(vector<Data::ValuePackageInfos> && valuePackageInfos) { DARABONBA_PTR_SET_RVALUE(valuePackageInfos_, valuePackageInfos) };


    protected:
      // The size of the additional data cloud disk. Unit: GiB.
      shared_ptr<int32_t> addDataDiskSize_ {};
      // The size of the additional system cloud disk. Unit: GiB.
      shared_ptr<int32_t> addRootDiskSize_ {};
      // Indicates whether the cloud computer is an AI cloud computer. Valid values:
      // - true: AI cloud computer.
      // - false: Regular cloud computer.
      shared_ptr<bool> aiDesktop_ {};
      // The scenario code for the commercial edition.
      shared_ptr<string> businessSceneCode_ {};
      // The compute plan code. Refer to the actual returned value of the rights.
      shared_ptr<string> calculatingCode_ {};
      // The size of the data cloud disk. Unit: GiB.
      shared_ptr<int32_t> dataDiskSize_ {};
      // The time when the rights record was created. The time is in RFC 3339 UTC format and ends with Z.
      shared_ptr<string> gmtCreate_ {};
      // The hibernation options for the rights. The actual policy is determined in combination with the compute plan.
      shared_ptr<int32_t> hibernate_ {};
      // The monthly credit information corresponding to the rights. This value may be empty if this configuration is not available.
      shared_ptr<string> monthlyCredit_ {};
      // Specifies whether the rights apply to regions outside the Chinese mainland, including Hong Kong (China), Macao (China), and Taiwan (China). Valid values:
      // - 0: The Chinese mainland.
      // - 1: Regions outside the Chinese mainland, including Hong Kong (China), Macao (China), and Taiwan (China).
      shared_ptr<int32_t> overseas_ {};
      // The cause of the rights activation failure. This value may be empty if the activation is successful.
      shared_ptr<string> rightsActiveFailureCause_ {};
      // The rights activation status. Use the returned value to determine whether the activation is complete.
      shared_ptr<string> rightsActiveStatus_ {};
      // The time when the rights were activated. This value may be empty if the rights are not yet activated. The time is in RFC 3339 UTC format and ends with Z.
      shared_ptr<string> rightsActiveTime_ {};
      // The end user to whom the rights are assigned. For convenience accounts, use EndUserId.
      shared_ptr<string> rightsAssignedUser_ {};
      // The deadline for manual activation of the rights. This is different from RightsResourceExpireTime, which is the expiration time of the resource after activation. The time is in RFC 3339 UTC format and ends with Z.
      shared_ptr<string> rightsExpireTime_ {};
      // The GPU specification. Refer to the returned value in the rights details.
      shared_ptr<string> rightsGpuSpec_ {};
      // The rights ID. Use this value for activation. This is not the cloud computer resource ID.
      shared_ptr<string> rightsId_ {};
      // The inventory specification corresponding to the rights.
      shared_ptr<string> rightsInventorySpec_ {};
      // The rights period code.
      shared_ptr<string> rightsPeriod_ {};
      // The area to which the rights belong. This cannot replace the resource region in a new activation request.
      shared_ptr<string> rightsResourceArea_ {};
      // The actual expiration time of the resource. This is different from the deadline for rights activation. The time is in RFC 3339 UTC format and ends with Z.
      shared_ptr<string> rightsResourceExpireTime_ {};
      // The ID of the resource associated with the rights. This value is returned after the resource is created.
      shared_ptr<string> rightsResourceId_ {};
      // The region ID of the resource. This is configured separately from the POP request routing region.
      shared_ptr<string> rightsResourceRegion_ {};
      // The status of the associated resource. Refer to the returned value for the actual status.
      shared_ptr<string> rightsResourceStatus_ {};
      // The rights resource type. Use Desktop for regular cloud computers. For other commodities, specify the actual rights type.
      shared_ptr<string> rightsResourceType_ {};
      // The name of the rights source.
      shared_ptr<string> rightsSourceName_ {};
      // The rights specification code. Refer to the rights query results for the actual value.
      shared_ptr<string> rightsSpec_ {};
      // The size of the system cloud disk. Unit: GiB.
      shared_ptr<int32_t> systemDiskSize_ {};
      // The list of value-added feature information associated with the rights.
      shared_ptr<vector<Data::ValuePackageInfos>> valuePackageInfos_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->maxResults_ == nullptr && this->message_ == nullptr && this->nextToken_ == nullptr
        && this->requestId_ == nullptr && this->success_ == nullptr && this->totalCount_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListRightsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListRightsResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListRightsResponseBody::Data>) };
    inline vector<ListRightsResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListRightsResponseBody::Data>) };
    inline ListRightsResponseBody& setData(const vector<ListRightsResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListRightsResponseBody& setData(vector<ListRightsResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListRightsResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListRightsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListRightsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListRightsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListRightsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListRightsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListRightsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The business processing result code.
    shared_ptr<string> code_ {};
    // The list of rights on the current page.
    shared_ptr<vector<ListRightsResponseBody::Data>> data_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The maximum number of results per page. Specify a positive integer from 1 to 200.
    shared_ptr<int32_t> maxResults_ {};
    // The description of the processing result. This is used for troubleshooting when a failure occurs.
    shared_ptr<string> message_ {};
    // The pagination token for the next page. An empty value indicates that the current query has ended. If the value is not empty, pass it exactly as it is in the next query. The example is for illustration purposes only.
    shared_ptr<string> nextToken_ {};
    // The unique identifier of the request. This is used to troubleshoot call issues.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was processed successfully. A successful activation request does not mean that the resource has been created.
    shared_ptr<bool> success_ {};
    // The total number of rights that meet the query conditions.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EcdBiz20240929
#endif
