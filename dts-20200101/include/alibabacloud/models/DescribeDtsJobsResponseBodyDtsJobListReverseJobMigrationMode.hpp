// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDTSJOBSRESPONSEBODYDTSJOBLISTREVERSEJOBMIGRATIONMODE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDTSJOBSRESPONSEBODYDTSJOBLISTREVERSEJOBMIGRATIONMODE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class DescribeDtsJobsResponseBodyDtsJobListReverseJobMigrationMode : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDtsJobsResponseBodyDtsJobListReverseJobMigrationMode& obj) { 
      DARABONBA_PTR_TO_JSON(DataInitialization, dataInitialization_);
      DARABONBA_PTR_TO_JSON(DataSynchronization, dataSynchronization_);
      DARABONBA_PTR_TO_JSON(FullDataCheck, fullDataCheck_);
      DARABONBA_PTR_TO_JSON(IncDataCheck, incDataCheck_);
      DARABONBA_PTR_TO_JSON(StructureDataCheck, structureDataCheck_);
      DARABONBA_PTR_TO_JSON(StructureInitialization, structureInitialization_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDtsJobsResponseBodyDtsJobListReverseJobMigrationMode& obj) { 
      DARABONBA_PTR_FROM_JSON(DataInitialization, dataInitialization_);
      DARABONBA_PTR_FROM_JSON(DataSynchronization, dataSynchronization_);
      DARABONBA_PTR_FROM_JSON(FullDataCheck, fullDataCheck_);
      DARABONBA_PTR_FROM_JSON(IncDataCheck, incDataCheck_);
      DARABONBA_PTR_FROM_JSON(StructureDataCheck, structureDataCheck_);
      DARABONBA_PTR_FROM_JSON(StructureInitialization, structureInitialization_);
    };
    DescribeDtsJobsResponseBodyDtsJobListReverseJobMigrationMode() = default ;
    DescribeDtsJobsResponseBodyDtsJobListReverseJobMigrationMode(const DescribeDtsJobsResponseBodyDtsJobListReverseJobMigrationMode &) = default ;
    DescribeDtsJobsResponseBodyDtsJobListReverseJobMigrationMode(DescribeDtsJobsResponseBodyDtsJobListReverseJobMigrationMode &&) = default ;
    DescribeDtsJobsResponseBodyDtsJobListReverseJobMigrationMode(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDtsJobsResponseBodyDtsJobListReverseJobMigrationMode() = default ;
    DescribeDtsJobsResponseBodyDtsJobListReverseJobMigrationMode& operator=(const DescribeDtsJobsResponseBodyDtsJobListReverseJobMigrationMode &) = default ;
    DescribeDtsJobsResponseBodyDtsJobListReverseJobMigrationMode& operator=(DescribeDtsJobsResponseBodyDtsJobListReverseJobMigrationMode &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataInitialization_ == nullptr
        && return this->dataSynchronization_ == nullptr && return this->fullDataCheck_ == nullptr && return this->incDataCheck_ == nullptr && return this->structureDataCheck_ == nullptr && return this->structureInitialization_ == nullptr; };
    // dataInitialization Field Functions 
    bool hasDataInitialization() const { return this->dataInitialization_ != nullptr;};
    void deleteDataInitialization() { this->dataInitialization_ = nullptr;};
    inline bool dataInitialization() const { DARABONBA_PTR_GET_DEFAULT(dataInitialization_, false) };
    inline DescribeDtsJobsResponseBodyDtsJobListReverseJobMigrationMode& setDataInitialization(bool dataInitialization) { DARABONBA_PTR_SET_VALUE(dataInitialization_, dataInitialization) };


    // dataSynchronization Field Functions 
    bool hasDataSynchronization() const { return this->dataSynchronization_ != nullptr;};
    void deleteDataSynchronization() { this->dataSynchronization_ = nullptr;};
    inline bool dataSynchronization() const { DARABONBA_PTR_GET_DEFAULT(dataSynchronization_, false) };
    inline DescribeDtsJobsResponseBodyDtsJobListReverseJobMigrationMode& setDataSynchronization(bool dataSynchronization) { DARABONBA_PTR_SET_VALUE(dataSynchronization_, dataSynchronization) };


    // fullDataCheck Field Functions 
    bool hasFullDataCheck() const { return this->fullDataCheck_ != nullptr;};
    void deleteFullDataCheck() { this->fullDataCheck_ = nullptr;};
    inline bool fullDataCheck() const { DARABONBA_PTR_GET_DEFAULT(fullDataCheck_, false) };
    inline DescribeDtsJobsResponseBodyDtsJobListReverseJobMigrationMode& setFullDataCheck(bool fullDataCheck) { DARABONBA_PTR_SET_VALUE(fullDataCheck_, fullDataCheck) };


    // incDataCheck Field Functions 
    bool hasIncDataCheck() const { return this->incDataCheck_ != nullptr;};
    void deleteIncDataCheck() { this->incDataCheck_ = nullptr;};
    inline bool incDataCheck() const { DARABONBA_PTR_GET_DEFAULT(incDataCheck_, false) };
    inline DescribeDtsJobsResponseBodyDtsJobListReverseJobMigrationMode& setIncDataCheck(bool incDataCheck) { DARABONBA_PTR_SET_VALUE(incDataCheck_, incDataCheck) };


    // structureDataCheck Field Functions 
    bool hasStructureDataCheck() const { return this->structureDataCheck_ != nullptr;};
    void deleteStructureDataCheck() { this->structureDataCheck_ = nullptr;};
    inline bool structureDataCheck() const { DARABONBA_PTR_GET_DEFAULT(structureDataCheck_, false) };
    inline DescribeDtsJobsResponseBodyDtsJobListReverseJobMigrationMode& setStructureDataCheck(bool structureDataCheck) { DARABONBA_PTR_SET_VALUE(structureDataCheck_, structureDataCheck) };


    // structureInitialization Field Functions 
    bool hasStructureInitialization() const { return this->structureInitialization_ != nullptr;};
    void deleteStructureInitialization() { this->structureInitialization_ = nullptr;};
    inline bool structureInitialization() const { DARABONBA_PTR_GET_DEFAULT(structureInitialization_, false) };
    inline DescribeDtsJobsResponseBodyDtsJobListReverseJobMigrationMode& setStructureInitialization(bool structureInitialization) { DARABONBA_PTR_SET_VALUE(structureInitialization_, structureInitialization) };


  protected:
    // Indicates whether initial full data synchronization is performed. Valid values:
    // 
    // -  **true**
    // -  **false**
    std::shared_ptr<bool> dataInitialization_ = nullptr;
    // Indicates whether incremental data synchronization is performed. Valid values:
    // -  **true**
    // -  **false**
    std::shared_ptr<bool> dataSynchronization_ = nullptr;
    // Indicates whether full data verification is performed. Valid values:
    // -  **true**: yes
    // -  **false**: no
    std::shared_ptr<bool> fullDataCheck_ = nullptr;
    // Indicates whether incremental data verification is performed. Valid values:
    // -  **true**: yes
    // -  **false**: no
    std::shared_ptr<bool> incDataCheck_ = nullptr;
    std::shared_ptr<bool> structureDataCheck_ = nullptr;
    // Indicates whether initial schema synchronization is performed. Valid values:
    // -  **true**
    // -  **false**
    std::shared_ptr<bool> structureInitialization_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
