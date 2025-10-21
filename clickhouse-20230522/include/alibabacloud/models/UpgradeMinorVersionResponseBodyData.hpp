// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPGRADEMINORVERSIONRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_UPGRADEMINORVERSIONRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20230522
{
namespace Models
{
  class UpgradeMinorVersionResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpgradeMinorVersionResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceName, DBInstanceName_);
    };
    friend void from_json(const Darabonba::Json& j, UpgradeMinorVersionResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceName, DBInstanceName_);
    };
    UpgradeMinorVersionResponseBodyData() = default ;
    UpgradeMinorVersionResponseBodyData(const UpgradeMinorVersionResponseBodyData &) = default ;
    UpgradeMinorVersionResponseBodyData(UpgradeMinorVersionResponseBodyData &&) = default ;
    UpgradeMinorVersionResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpgradeMinorVersionResponseBodyData() = default ;
    UpgradeMinorVersionResponseBodyData& operator=(const UpgradeMinorVersionResponseBodyData &) = default ;
    UpgradeMinorVersionResponseBodyData& operator=(UpgradeMinorVersionResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceName_ == nullptr; };
    // DBInstanceName Field Functions 
    bool hasDBInstanceName() const { return this->DBInstanceName_ != nullptr;};
    void deleteDBInstanceName() { this->DBInstanceName_ = nullptr;};
    inline string DBInstanceName() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceName_, "") };
    inline UpgradeMinorVersionResponseBodyData& setDBInstanceName(string DBInstanceName) { DARABONBA_PTR_SET_VALUE(DBInstanceName_, DBInstanceName) };


  protected:
    // The instance ID.
    std::shared_ptr<string> DBInstanceName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20230522
#endif
