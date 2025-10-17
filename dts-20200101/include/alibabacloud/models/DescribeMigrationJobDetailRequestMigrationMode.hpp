// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMIGRATIONJOBDETAILREQUESTMIGRATIONMODE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMIGRATIONJOBDETAILREQUESTMIGRATIONMODE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class DescribeMigrationJobDetailRequestMigrationMode : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMigrationJobDetailRequestMigrationMode& obj) { 
      DARABONBA_PTR_TO_JSON(DataInitialization, dataInitialization_);
      DARABONBA_PTR_TO_JSON(DataSynchronization, dataSynchronization_);
      DARABONBA_PTR_TO_JSON(StructureInitialization, structureInitialization_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMigrationJobDetailRequestMigrationMode& obj) { 
      DARABONBA_PTR_FROM_JSON(DataInitialization, dataInitialization_);
      DARABONBA_PTR_FROM_JSON(DataSynchronization, dataSynchronization_);
      DARABONBA_PTR_FROM_JSON(StructureInitialization, structureInitialization_);
    };
    DescribeMigrationJobDetailRequestMigrationMode() = default ;
    DescribeMigrationJobDetailRequestMigrationMode(const DescribeMigrationJobDetailRequestMigrationMode &) = default ;
    DescribeMigrationJobDetailRequestMigrationMode(DescribeMigrationJobDetailRequestMigrationMode &&) = default ;
    DescribeMigrationJobDetailRequestMigrationMode(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMigrationJobDetailRequestMigrationMode() = default ;
    DescribeMigrationJobDetailRequestMigrationMode& operator=(const DescribeMigrationJobDetailRequestMigrationMode &) = default ;
    DescribeMigrationJobDetailRequestMigrationMode& operator=(DescribeMigrationJobDetailRequestMigrationMode &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataInitialization_ == nullptr
        && return this->dataSynchronization_ == nullptr && return this->structureInitialization_ == nullptr; };
    // dataInitialization Field Functions 
    bool hasDataInitialization() const { return this->dataInitialization_ != nullptr;};
    void deleteDataInitialization() { this->dataInitialization_ = nullptr;};
    inline bool dataInitialization() const { DARABONBA_PTR_GET_DEFAULT(dataInitialization_, false) };
    inline DescribeMigrationJobDetailRequestMigrationMode& setDataInitialization(bool dataInitialization) { DARABONBA_PTR_SET_VALUE(dataInitialization_, dataInitialization) };


    // dataSynchronization Field Functions 
    bool hasDataSynchronization() const { return this->dataSynchronization_ != nullptr;};
    void deleteDataSynchronization() { this->dataSynchronization_ = nullptr;};
    inline bool dataSynchronization() const { DARABONBA_PTR_GET_DEFAULT(dataSynchronization_, false) };
    inline DescribeMigrationJobDetailRequestMigrationMode& setDataSynchronization(bool dataSynchronization) { DARABONBA_PTR_SET_VALUE(dataSynchronization_, dataSynchronization) };


    // structureInitialization Field Functions 
    bool hasStructureInitialization() const { return this->structureInitialization_ != nullptr;};
    void deleteStructureInitialization() { this->structureInitialization_ = nullptr;};
    inline bool structureInitialization() const { DARABONBA_PTR_GET_DEFAULT(structureInitialization_, false) };
    inline DescribeMigrationJobDetailRequestMigrationMode& setStructureInitialization(bool structureInitialization) { DARABONBA_PTR_SET_VALUE(structureInitialization_, structureInitialization) };


  protected:
    // The ID of the region where the data migration instance resides. For more information, see [List of supported regions](https://help.aliyun.com/document_detail/141033.html).
    std::shared_ptr<bool> dataInitialization_ = nullptr;
    // The number of entries to return on each page. Valid values: **30**, **50**, and **100**. Default value: **30**.
    std::shared_ptr<bool> dataSynchronization_ = nullptr;
    // When you call this operation, the data migration task must be in the Migrating, Failed, Paused, or Finished state.
    std::shared_ptr<bool> structureInitialization_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
