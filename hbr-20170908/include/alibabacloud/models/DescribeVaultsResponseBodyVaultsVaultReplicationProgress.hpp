// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVAULTSRESPONSEBODYVAULTSVAULTREPLICATIONPROGRESS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVAULTSRESPONSEBODYVAULTSVAULTREPLICATIONPROGRESS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class DescribeVaultsResponseBodyVaultsVaultReplicationProgress : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVaultsResponseBodyVaultsVaultReplicationProgress& obj) { 
      DARABONBA_PTR_TO_JSON(HistoricalReplicationProgress, historicalReplicationProgress_);
      DARABONBA_PTR_TO_JSON(NewReplicationProgress, newReplicationProgress_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVaultsResponseBodyVaultsVaultReplicationProgress& obj) { 
      DARABONBA_PTR_FROM_JSON(HistoricalReplicationProgress, historicalReplicationProgress_);
      DARABONBA_PTR_FROM_JSON(NewReplicationProgress, newReplicationProgress_);
    };
    DescribeVaultsResponseBodyVaultsVaultReplicationProgress() = default ;
    DescribeVaultsResponseBodyVaultsVaultReplicationProgress(const DescribeVaultsResponseBodyVaultsVaultReplicationProgress &) = default ;
    DescribeVaultsResponseBodyVaultsVaultReplicationProgress(DescribeVaultsResponseBodyVaultsVaultReplicationProgress &&) = default ;
    DescribeVaultsResponseBodyVaultsVaultReplicationProgress(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVaultsResponseBodyVaultsVaultReplicationProgress() = default ;
    DescribeVaultsResponseBodyVaultsVaultReplicationProgress& operator=(const DescribeVaultsResponseBodyVaultsVaultReplicationProgress &) = default ;
    DescribeVaultsResponseBodyVaultsVaultReplicationProgress& operator=(DescribeVaultsResponseBodyVaultsVaultReplicationProgress &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->historicalReplicationProgress_ != nullptr
        && this->newReplicationProgress_ != nullptr; };
    // historicalReplicationProgress Field Functions 
    bool hasHistoricalReplicationProgress() const { return this->historicalReplicationProgress_ != nullptr;};
    void deleteHistoricalReplicationProgress() { this->historicalReplicationProgress_ = nullptr;};
    inline int32_t historicalReplicationProgress() const { DARABONBA_PTR_GET_DEFAULT(historicalReplicationProgress_, 0) };
    inline DescribeVaultsResponseBodyVaultsVaultReplicationProgress& setHistoricalReplicationProgress(int32_t historicalReplicationProgress) { DARABONBA_PTR_SET_VALUE(historicalReplicationProgress_, historicalReplicationProgress) };


    // newReplicationProgress Field Functions 
    bool hasNewReplicationProgress() const { return this->newReplicationProgress_ != nullptr;};
    void deleteNewReplicationProgress() { this->newReplicationProgress_ = nullptr;};
    inline int64_t newReplicationProgress() const { DARABONBA_PTR_GET_DEFAULT(newReplicationProgress_, 0L) };
    inline DescribeVaultsResponseBodyVaultsVaultReplicationProgress& setNewReplicationProgress(int64_t newReplicationProgress) { DARABONBA_PTR_SET_VALUE(newReplicationProgress_, newReplicationProgress) };


  protected:
    // The progress of historical data synchronization from the backup vault to the mirror vault. Valid values: 0 to 100.
    std::shared_ptr<int32_t> historicalReplicationProgress_ = nullptr;
    // The latest synchronization time of incremental data in the mirror vault.
    std::shared_ptr<int64_t> newReplicationProgress_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
