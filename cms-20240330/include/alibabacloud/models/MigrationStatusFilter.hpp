// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MIGRATIONSTATUSFILTER_HPP_
#define ALIBABACLOUD_MODELS_MIGRATIONSTATUSFILTER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class MigrationStatusFilter : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MigrationStatusFilter& obj) { 
      DARABONBA_PTR_TO_JSON(isMigrated, isMigrated_);
    };
    friend void from_json(const Darabonba::Json& j, MigrationStatusFilter& obj) { 
      DARABONBA_PTR_FROM_JSON(isMigrated, isMigrated_);
    };
    MigrationStatusFilter() = default ;
    MigrationStatusFilter(const MigrationStatusFilter &) = default ;
    MigrationStatusFilter(MigrationStatusFilter &&) = default ;
    MigrationStatusFilter(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MigrationStatusFilter() = default ;
    MigrationStatusFilter& operator=(const MigrationStatusFilter &) = default ;
    MigrationStatusFilter& operator=(MigrationStatusFilter &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->isMigrated_ == nullptr; };
    // isMigrated Field Functions 
    bool hasIsMigrated() const { return this->isMigrated_ != nullptr;};
    void deleteIsMigrated() { this->isMigrated_ = nullptr;};
    inline bool getIsMigrated() const { DARABONBA_PTR_GET_DEFAULT(isMigrated_, false) };
    inline MigrationStatusFilter& setIsMigrated(bool isMigrated) { DARABONBA_PTR_SET_VALUE(isMigrated_, isMigrated) };


  protected:
    // Specifies whether to filter by migration rule. Valid values:
    // - true: Only migrated rules (migration_status is not 0 or NULL).
    // - false: Only native rules (migration_status = 0).
    shared_ptr<bool> isMigrated_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
