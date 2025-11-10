// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMIGRATIONSRESPONSEBODYDATALISTMIGRATIONSOURCE_HPP_
#define ALIBABACLOUD_MODELS_LISTMIGRATIONSRESPONSEBODYDATALISTMIGRATIONSOURCE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RocketMQ20220801
{
namespace Models
{
  class ListMigrationsResponseBodyDataListMigrationSource : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMigrationsResponseBodyDataListMigrationSource& obj) { 
      DARABONBA_ANY_TO_JSON(sourceData, sourceData_);
      DARABONBA_PTR_TO_JSON(sourceType, sourceType_);
    };
    friend void from_json(const Darabonba::Json& j, ListMigrationsResponseBodyDataListMigrationSource& obj) { 
      DARABONBA_ANY_FROM_JSON(sourceData, sourceData_);
      DARABONBA_PTR_FROM_JSON(sourceType, sourceType_);
    };
    ListMigrationsResponseBodyDataListMigrationSource() = default ;
    ListMigrationsResponseBodyDataListMigrationSource(const ListMigrationsResponseBodyDataListMigrationSource &) = default ;
    ListMigrationsResponseBodyDataListMigrationSource(ListMigrationsResponseBodyDataListMigrationSource &&) = default ;
    ListMigrationsResponseBodyDataListMigrationSource(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMigrationsResponseBodyDataListMigrationSource() = default ;
    ListMigrationsResponseBodyDataListMigrationSource& operator=(const ListMigrationsResponseBodyDataListMigrationSource &) = default ;
    ListMigrationsResponseBodyDataListMigrationSource& operator=(ListMigrationsResponseBodyDataListMigrationSource &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->sourceData_ == nullptr
        && return this->sourceType_ == nullptr; };
    // sourceData Field Functions 
    bool hasSourceData() const { return this->sourceData_ != nullptr;};
    void deleteSourceData() { this->sourceData_ = nullptr;};
    inline     const Darabonba::Json & sourceData() const { DARABONBA_GET(sourceData_) };
    Darabonba::Json & sourceData() { DARABONBA_GET(sourceData_) };
    inline ListMigrationsResponseBodyDataListMigrationSource& setSourceData(const Darabonba::Json & sourceData) { DARABONBA_SET_VALUE(sourceData_, sourceData) };
    inline ListMigrationsResponseBodyDataListMigrationSource& setSourceData(Darabonba::Json & sourceData) { DARABONBA_SET_RVALUE(sourceData_, sourceData) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string sourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline ListMigrationsResponseBodyDataListMigrationSource& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


  protected:
    Darabonba::Json sourceData_ = nullptr;
    std::shared_ptr<string> sourceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RocketMQ20220801
#endif
