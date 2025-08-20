// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYAPSJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYAPSJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class ModifyApsJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyApsJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApsJobId, apsJobId_);
      DARABONBA_PTR_TO_JSON(DbList, dbList_);
      DARABONBA_PTR_TO_JSON(PartitionList, partitionList_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyApsJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApsJobId, apsJobId_);
      DARABONBA_PTR_FROM_JSON(DbList, dbList_);
      DARABONBA_PTR_FROM_JSON(PartitionList, partitionList_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ModifyApsJobRequest() = default ;
    ModifyApsJobRequest(const ModifyApsJobRequest &) = default ;
    ModifyApsJobRequest(ModifyApsJobRequest &&) = default ;
    ModifyApsJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyApsJobRequest() = default ;
    ModifyApsJobRequest& operator=(const ModifyApsJobRequest &) = default ;
    ModifyApsJobRequest& operator=(ModifyApsJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->apsJobId_ != nullptr
        && this->dbList_ != nullptr && this->partitionList_ != nullptr && this->regionId_ != nullptr; };
    // apsJobId Field Functions 
    bool hasApsJobId() const { return this->apsJobId_ != nullptr;};
    void deleteApsJobId() { this->apsJobId_ = nullptr;};
    inline string apsJobId() const { DARABONBA_PTR_GET_DEFAULT(apsJobId_, "") };
    inline ModifyApsJobRequest& setApsJobId(string apsJobId) { DARABONBA_PTR_SET_VALUE(apsJobId_, apsJobId) };


    // dbList Field Functions 
    bool hasDbList() const { return this->dbList_ != nullptr;};
    void deleteDbList() { this->dbList_ = nullptr;};
    inline string dbList() const { DARABONBA_PTR_GET_DEFAULT(dbList_, "") };
    inline ModifyApsJobRequest& setDbList(string dbList) { DARABONBA_PTR_SET_VALUE(dbList_, dbList) };


    // partitionList Field Functions 
    bool hasPartitionList() const { return this->partitionList_ != nullptr;};
    void deletePartitionList() { this->partitionList_ = nullptr;};
    inline string partitionList() const { DARABONBA_PTR_GET_DEFAULT(partitionList_, "") };
    inline ModifyApsJobRequest& setPartitionList(string partitionList) { DARABONBA_PTR_SET_VALUE(partitionList_, partitionList) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyApsJobRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The job ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> apsJobId_ = nullptr;
    // The objects to be synchronized.
    // 
    // This parameter is required.
    std::shared_ptr<string> dbList_ = nullptr;
    // The partitions.
    std::shared_ptr<string> partitionList_ = nullptr;
    // The region ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
