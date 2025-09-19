// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCHECKINSTANCERESULTRESPONSEBODYBASICDATAINSTANCEINFOCONFIG_HPP_
#define ALIBABACLOUD_MODELS_LISTCHECKINSTANCERESULTRESPONSEBODYBASICDATAINSTANCEINFOCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListCheckInstanceResultResponseBodyBasicDataInstanceInfoConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCheckInstanceResultResponseBodyBasicDataInstanceInfoConfig& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ShowName, showName_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, ListCheckInstanceResultResponseBodyBasicDataInstanceInfoConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ShowName, showName_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    ListCheckInstanceResultResponseBodyBasicDataInstanceInfoConfig() = default ;
    ListCheckInstanceResultResponseBodyBasicDataInstanceInfoConfig(const ListCheckInstanceResultResponseBodyBasicDataInstanceInfoConfig &) = default ;
    ListCheckInstanceResultResponseBodyBasicDataInstanceInfoConfig(ListCheckInstanceResultResponseBodyBasicDataInstanceInfoConfig &&) = default ;
    ListCheckInstanceResultResponseBodyBasicDataInstanceInfoConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCheckInstanceResultResponseBodyBasicDataInstanceInfoConfig() = default ;
    ListCheckInstanceResultResponseBodyBasicDataInstanceInfoConfig& operator=(const ListCheckInstanceResultResponseBodyBasicDataInstanceInfoConfig &) = default ;
    ListCheckInstanceResultResponseBodyBasicDataInstanceInfoConfig& operator=(ListCheckInstanceResultResponseBodyBasicDataInstanceInfoConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->name_ != nullptr
        && this->showName_ != nullptr && this->value_ != nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListCheckInstanceResultResponseBodyBasicDataInstanceInfoConfig& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // showName Field Functions 
    bool hasShowName() const { return this->showName_ != nullptr;};
    void deleteShowName() { this->showName_ = nullptr;};
    inline string showName() const { DARABONBA_PTR_GET_DEFAULT(showName_, "") };
    inline ListCheckInstanceResultResponseBodyBasicDataInstanceInfoConfig& setShowName(string showName) { DARABONBA_PTR_SET_VALUE(showName_, showName) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline ListCheckInstanceResultResponseBodyBasicDataInstanceInfoConfig& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The name of the configuration item, which is unique.
    std::shared_ptr<string> name_ = nullptr;
    // The display name of the configuration item for internationalization.
    std::shared_ptr<string> showName_ = nullptr;
    // The value of the configuration item specified for the instance.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
