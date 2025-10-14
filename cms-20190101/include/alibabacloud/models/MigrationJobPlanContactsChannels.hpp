// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MIGRATIONJOBPLANCONTACTSCHANNELS_HPP_
#define ALIBABACLOUD_MODELS_MIGRATIONJOBPLANCONTACTSCHANNELS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class MigrationJobPlanContactsChannels : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MigrationJobPlanContactsChannels& obj) { 
      DARABONBA_PTR_TO_JSON(Level, level_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, MigrationJobPlanContactsChannels& obj) { 
      DARABONBA_PTR_FROM_JSON(Level, level_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    MigrationJobPlanContactsChannels() = default ;
    MigrationJobPlanContactsChannels(const MigrationJobPlanContactsChannels &) = default ;
    MigrationJobPlanContactsChannels(MigrationJobPlanContactsChannels &&) = default ;
    MigrationJobPlanContactsChannels(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MigrationJobPlanContactsChannels() = default ;
    MigrationJobPlanContactsChannels& operator=(const MigrationJobPlanContactsChannels &) = default ;
    MigrationJobPlanContactsChannels& operator=(MigrationJobPlanContactsChannels &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->level_ == nullptr
        && return this->type_ == nullptr && return this->value_ == nullptr; };
    // level Field Functions 
    bool hasLevel() const { return this->level_ != nullptr;};
    void deleteLevel() { this->level_ = nullptr;};
    inline int64_t level() const { DARABONBA_PTR_GET_DEFAULT(level_, 0L) };
    inline MigrationJobPlanContactsChannels& setLevel(int64_t level) { DARABONBA_PTR_SET_VALUE(level_, level) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline MigrationJobPlanContactsChannels& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline MigrationJobPlanContactsChannels& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    std::shared_ptr<int64_t> level_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
