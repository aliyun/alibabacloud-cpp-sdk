// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUNIBACKUPSTATISTICSRESPONSEBODYREGIONCOUNTLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUNIBACKUPSTATISTICSRESPONSEBODYREGIONCOUNTLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeUniBackupStatisticsResponseBodyRegionCountList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUniBackupStatisticsResponseBodyRegionCountList& obj) { 
      DARABONBA_PTR_TO_JSON(AutomaticCount, automaticCount_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUniBackupStatisticsResponseBodyRegionCountList& obj) { 
      DARABONBA_PTR_FROM_JSON(AutomaticCount, automaticCount_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DescribeUniBackupStatisticsResponseBodyRegionCountList() = default ;
    DescribeUniBackupStatisticsResponseBodyRegionCountList(const DescribeUniBackupStatisticsResponseBodyRegionCountList &) = default ;
    DescribeUniBackupStatisticsResponseBodyRegionCountList(DescribeUniBackupStatisticsResponseBodyRegionCountList &&) = default ;
    DescribeUniBackupStatisticsResponseBodyRegionCountList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUniBackupStatisticsResponseBodyRegionCountList() = default ;
    DescribeUniBackupStatisticsResponseBodyRegionCountList& operator=(const DescribeUniBackupStatisticsResponseBodyRegionCountList &) = default ;
    DescribeUniBackupStatisticsResponseBodyRegionCountList& operator=(DescribeUniBackupStatisticsResponseBodyRegionCountList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->automaticCount_ != nullptr
        && this->regionId_ != nullptr; };
    // automaticCount Field Functions 
    bool hasAutomaticCount() const { return this->automaticCount_ != nullptr;};
    void deleteAutomaticCount() { this->automaticCount_ = nullptr;};
    inline string automaticCount() const { DARABONBA_PTR_GET_DEFAULT(automaticCount_, "") };
    inline DescribeUniBackupStatisticsResponseBodyRegionCountList& setAutomaticCount(string automaticCount) { DARABONBA_PTR_SET_VALUE(automaticCount_, automaticCount) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeUniBackupStatisticsResponseBodyRegionCountList& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The number of database instances that are automatically scanned.
    std::shared_ptr<string> automaticCount_ = nullptr;
    // The ID of the region in which the database instance resides.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
