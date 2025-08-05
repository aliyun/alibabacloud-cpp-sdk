// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDTSJOBDETAILRESPONSEBODYSUBDISTRIBUTEDJOBREVERSEJOBMIGRATIONMODE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDTSJOBDETAILRESPONSEBODYSUBDISTRIBUTEDJOBREVERSEJOBMIGRATIONMODE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class DescribeDtsJobDetailResponseBodySubDistributedJobReverseJobMigrationMode : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDtsJobDetailResponseBodySubDistributedJobReverseJobMigrationMode& obj) { 
      DARABONBA_PTR_TO_JSON(DataExtractTransformLoad, dataExtractTransformLoad_);
      DARABONBA_PTR_TO_JSON(DataInitialization, dataInitialization_);
      DARABONBA_PTR_TO_JSON(DataSynchronization, dataSynchronization_);
      DARABONBA_PTR_TO_JSON(StructureInitialization, structureInitialization_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDtsJobDetailResponseBodySubDistributedJobReverseJobMigrationMode& obj) { 
      DARABONBA_PTR_FROM_JSON(DataExtractTransformLoad, dataExtractTransformLoad_);
      DARABONBA_PTR_FROM_JSON(DataInitialization, dataInitialization_);
      DARABONBA_PTR_FROM_JSON(DataSynchronization, dataSynchronization_);
      DARABONBA_PTR_FROM_JSON(StructureInitialization, structureInitialization_);
    };
    DescribeDtsJobDetailResponseBodySubDistributedJobReverseJobMigrationMode() = default ;
    DescribeDtsJobDetailResponseBodySubDistributedJobReverseJobMigrationMode(const DescribeDtsJobDetailResponseBodySubDistributedJobReverseJobMigrationMode &) = default ;
    DescribeDtsJobDetailResponseBodySubDistributedJobReverseJobMigrationMode(DescribeDtsJobDetailResponseBodySubDistributedJobReverseJobMigrationMode &&) = default ;
    DescribeDtsJobDetailResponseBodySubDistributedJobReverseJobMigrationMode(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDtsJobDetailResponseBodySubDistributedJobReverseJobMigrationMode() = default ;
    DescribeDtsJobDetailResponseBodySubDistributedJobReverseJobMigrationMode& operator=(const DescribeDtsJobDetailResponseBodySubDistributedJobReverseJobMigrationMode &) = default ;
    DescribeDtsJobDetailResponseBodySubDistributedJobReverseJobMigrationMode& operator=(DescribeDtsJobDetailResponseBodySubDistributedJobReverseJobMigrationMode &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dataExtractTransformLoad_ != nullptr
        && this->dataInitialization_ != nullptr && this->dataSynchronization_ != nullptr && this->structureInitialization_ != nullptr; };
    // dataExtractTransformLoad Field Functions 
    bool hasDataExtractTransformLoad() const { return this->dataExtractTransformLoad_ != nullptr;};
    void deleteDataExtractTransformLoad() { this->dataExtractTransformLoad_ = nullptr;};
    inline bool dataExtractTransformLoad() const { DARABONBA_PTR_GET_DEFAULT(dataExtractTransformLoad_, false) };
    inline DescribeDtsJobDetailResponseBodySubDistributedJobReverseJobMigrationMode& setDataExtractTransformLoad(bool dataExtractTransformLoad) { DARABONBA_PTR_SET_VALUE(dataExtractTransformLoad_, dataExtractTransformLoad) };


    // dataInitialization Field Functions 
    bool hasDataInitialization() const { return this->dataInitialization_ != nullptr;};
    void deleteDataInitialization() { this->dataInitialization_ = nullptr;};
    inline bool dataInitialization() const { DARABONBA_PTR_GET_DEFAULT(dataInitialization_, false) };
    inline DescribeDtsJobDetailResponseBodySubDistributedJobReverseJobMigrationMode& setDataInitialization(bool dataInitialization) { DARABONBA_PTR_SET_VALUE(dataInitialization_, dataInitialization) };


    // dataSynchronization Field Functions 
    bool hasDataSynchronization() const { return this->dataSynchronization_ != nullptr;};
    void deleteDataSynchronization() { this->dataSynchronization_ = nullptr;};
    inline bool dataSynchronization() const { DARABONBA_PTR_GET_DEFAULT(dataSynchronization_, false) };
    inline DescribeDtsJobDetailResponseBodySubDistributedJobReverseJobMigrationMode& setDataSynchronization(bool dataSynchronization) { DARABONBA_PTR_SET_VALUE(dataSynchronization_, dataSynchronization) };


    // structureInitialization Field Functions 
    bool hasStructureInitialization() const { return this->structureInitialization_ != nullptr;};
    void deleteStructureInitialization() { this->structureInitialization_ = nullptr;};
    inline bool structureInitialization() const { DARABONBA_PTR_GET_DEFAULT(structureInitialization_, false) };
    inline DescribeDtsJobDetailResponseBodySubDistributedJobReverseJobMigrationMode& setStructureInitialization(bool structureInitialization) { DARABONBA_PTR_SET_VALUE(structureInitialization_, structureInitialization) };


  protected:
    // Indicates whether data transformation is performed. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> dataExtractTransformLoad_ = nullptr;
    // Indicates whether full data migration or initial full data synchronization is performed. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> dataInitialization_ = nullptr;
    // Indicates whether incremental data migration or synchronization is performed. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> dataSynchronization_ = nullptr;
    // Indicates whether schema migration or initial schema synchronization is performed. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> structureInitialization_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
