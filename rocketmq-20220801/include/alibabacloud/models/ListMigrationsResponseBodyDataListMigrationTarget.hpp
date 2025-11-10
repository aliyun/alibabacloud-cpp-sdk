// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMIGRATIONSRESPONSEBODYDATALISTMIGRATIONTARGET_HPP_
#define ALIBABACLOUD_MODELS_LISTMIGRATIONSRESPONSEBODYDATALISTMIGRATIONTARGET_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RocketMQ20220801
{
namespace Models
{
  class ListMigrationsResponseBodyDataListMigrationTarget : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMigrationsResponseBodyDataListMigrationTarget& obj) { 
      DARABONBA_ANY_TO_JSON(targetData, targetData_);
      DARABONBA_PTR_TO_JSON(targetType, targetType_);
    };
    friend void from_json(const Darabonba::Json& j, ListMigrationsResponseBodyDataListMigrationTarget& obj) { 
      DARABONBA_ANY_FROM_JSON(targetData, targetData_);
      DARABONBA_PTR_FROM_JSON(targetType, targetType_);
    };
    ListMigrationsResponseBodyDataListMigrationTarget() = default ;
    ListMigrationsResponseBodyDataListMigrationTarget(const ListMigrationsResponseBodyDataListMigrationTarget &) = default ;
    ListMigrationsResponseBodyDataListMigrationTarget(ListMigrationsResponseBodyDataListMigrationTarget &&) = default ;
    ListMigrationsResponseBodyDataListMigrationTarget(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMigrationsResponseBodyDataListMigrationTarget() = default ;
    ListMigrationsResponseBodyDataListMigrationTarget& operator=(const ListMigrationsResponseBodyDataListMigrationTarget &) = default ;
    ListMigrationsResponseBodyDataListMigrationTarget& operator=(ListMigrationsResponseBodyDataListMigrationTarget &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->targetData_ == nullptr
        && return this->targetType_ == nullptr; };
    // targetData Field Functions 
    bool hasTargetData() const { return this->targetData_ != nullptr;};
    void deleteTargetData() { this->targetData_ = nullptr;};
    inline     const Darabonba::Json & targetData() const { DARABONBA_GET(targetData_) };
    Darabonba::Json & targetData() { DARABONBA_GET(targetData_) };
    inline ListMigrationsResponseBodyDataListMigrationTarget& setTargetData(const Darabonba::Json & targetData) { DARABONBA_SET_VALUE(targetData_, targetData) };
    inline ListMigrationsResponseBodyDataListMigrationTarget& setTargetData(Darabonba::Json & targetData) { DARABONBA_SET_RVALUE(targetData_, targetData) };


    // targetType Field Functions 
    bool hasTargetType() const { return this->targetType_ != nullptr;};
    void deleteTargetType() { this->targetType_ = nullptr;};
    inline string targetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
    inline ListMigrationsResponseBodyDataListMigrationTarget& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


  protected:
    Darabonba::Json targetData_ = nullptr;
    std::shared_ptr<string> targetType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RocketMQ20220801
#endif
