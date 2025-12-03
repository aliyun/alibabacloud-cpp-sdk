// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLUSTERSERVICECONFIGRESPONSEBODYCONFIGLISTCONFIG_HPP_
#define ALIBABACLOUD_MODELS_LISTCLUSTERSERVICECONFIGRESPONSEBODYCONFIGLISTCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace HBase20170115
{
namespace Models
{
  class ListClusterServiceConfigResponseBodyConfigListConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListClusterServiceConfigResponseBodyConfigListConfig& obj) { 
      DARABONBA_PTR_TO_JSON(DefaultValue, defaultValue_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NeedRestart, needRestart_);
      DARABONBA_PTR_TO_JSON(RunningValue, runningValue_);
      DARABONBA_PTR_TO_JSON(Unit, unit_);
      DARABONBA_PTR_TO_JSON(ValueRange, valueRange_);
    };
    friend void from_json(const Darabonba::Json& j, ListClusterServiceConfigResponseBodyConfigListConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(DefaultValue, defaultValue_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NeedRestart, needRestart_);
      DARABONBA_PTR_FROM_JSON(RunningValue, runningValue_);
      DARABONBA_PTR_FROM_JSON(Unit, unit_);
      DARABONBA_PTR_FROM_JSON(ValueRange, valueRange_);
    };
    ListClusterServiceConfigResponseBodyConfigListConfig() = default ;
    ListClusterServiceConfigResponseBodyConfigListConfig(const ListClusterServiceConfigResponseBodyConfigListConfig &) = default ;
    ListClusterServiceConfigResponseBodyConfigListConfig(ListClusterServiceConfigResponseBodyConfigListConfig &&) = default ;
    ListClusterServiceConfigResponseBodyConfigListConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListClusterServiceConfigResponseBodyConfigListConfig() = default ;
    ListClusterServiceConfigResponseBodyConfigListConfig& operator=(const ListClusterServiceConfigResponseBodyConfigListConfig &) = default ;
    ListClusterServiceConfigResponseBodyConfigListConfig& operator=(ListClusterServiceConfigResponseBodyConfigListConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->defaultValue_ == nullptr
        && return this->description_ == nullptr && return this->name_ == nullptr && return this->needRestart_ == nullptr && return this->runningValue_ == nullptr && return this->unit_ == nullptr
        && return this->valueRange_ == nullptr; };
    // defaultValue Field Functions 
    bool hasDefaultValue() const { return this->defaultValue_ != nullptr;};
    void deleteDefaultValue() { this->defaultValue_ = nullptr;};
    inline string defaultValue() const { DARABONBA_PTR_GET_DEFAULT(defaultValue_, "") };
    inline ListClusterServiceConfigResponseBodyConfigListConfig& setDefaultValue(string defaultValue) { DARABONBA_PTR_SET_VALUE(defaultValue_, defaultValue) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListClusterServiceConfigResponseBodyConfigListConfig& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListClusterServiceConfigResponseBodyConfigListConfig& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // needRestart Field Functions 
    bool hasNeedRestart() const { return this->needRestart_ != nullptr;};
    void deleteNeedRestart() { this->needRestart_ = nullptr;};
    inline string needRestart() const { DARABONBA_PTR_GET_DEFAULT(needRestart_, "") };
    inline ListClusterServiceConfigResponseBodyConfigListConfig& setNeedRestart(string needRestart) { DARABONBA_PTR_SET_VALUE(needRestart_, needRestart) };


    // runningValue Field Functions 
    bool hasRunningValue() const { return this->runningValue_ != nullptr;};
    void deleteRunningValue() { this->runningValue_ = nullptr;};
    inline string runningValue() const { DARABONBA_PTR_GET_DEFAULT(runningValue_, "") };
    inline ListClusterServiceConfigResponseBodyConfigListConfig& setRunningValue(string runningValue) { DARABONBA_PTR_SET_VALUE(runningValue_, runningValue) };


    // unit Field Functions 
    bool hasUnit() const { return this->unit_ != nullptr;};
    void deleteUnit() { this->unit_ = nullptr;};
    inline string unit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
    inline ListClusterServiceConfigResponseBodyConfigListConfig& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


    // valueRange Field Functions 
    bool hasValueRange() const { return this->valueRange_ != nullptr;};
    void deleteValueRange() { this->valueRange_ = nullptr;};
    inline string valueRange() const { DARABONBA_PTR_GET_DEFAULT(valueRange_, "") };
    inline ListClusterServiceConfigResponseBodyConfigListConfig& setValueRange(string valueRange) { DARABONBA_PTR_SET_VALUE(valueRange_, valueRange) };


  protected:
    std::shared_ptr<string> defaultValue_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> needRestart_ = nullptr;
    std::shared_ptr<string> runningValue_ = nullptr;
    std::shared_ptr<string> unit_ = nullptr;
    std::shared_ptr<string> valueRange_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace HBase20170115
#endif
