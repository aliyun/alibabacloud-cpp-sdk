// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IDPLOGINORDERITEM_HPP_
#define ALIBABACLOUD_MODELS_IDPLOGINORDERITEM_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class IdpLoginOrderItem : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IdpLoginOrderItem& obj) { 
      DARABONBA_PTR_TO_JSON(Class, class_);
      DARABONBA_PTR_TO_JSON(ConfigId, configId_);
      DARABONBA_PTR_TO_JSON(Desc, desc_);
      DARABONBA_PTR_TO_JSON(Enabled, enabled_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, IdpLoginOrderItem& obj) { 
      DARABONBA_PTR_FROM_JSON(Class, class_);
      DARABONBA_PTR_FROM_JSON(ConfigId, configId_);
      DARABONBA_PTR_FROM_JSON(Desc, desc_);
      DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    IdpLoginOrderItem() = default ;
    IdpLoginOrderItem(const IdpLoginOrderItem &) = default ;
    IdpLoginOrderItem(IdpLoginOrderItem &&) = default ;
    IdpLoginOrderItem(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IdpLoginOrderItem() = default ;
    IdpLoginOrderItem& operator=(const IdpLoginOrderItem &) = default ;
    IdpLoginOrderItem& operator=(IdpLoginOrderItem &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->class_ == nullptr
        && return this->configId_ == nullptr && return this->desc_ == nullptr && return this->enabled_ == nullptr && return this->name_ == nullptr && return this->type_ == nullptr; };
    // class Field Functions 
    bool hasClass() const { return this->class_ != nullptr;};
    void deleteClass() { this->class_ = nullptr;};
    inline string _class() const { DARABONBA_PTR_GET_DEFAULT(class_, "") };
    inline IdpLoginOrderItem& setClass(string _class) { DARABONBA_PTR_SET_VALUE(class_, _class) };


    // configId Field Functions 
    bool hasConfigId() const { return this->configId_ != nullptr;};
    void deleteConfigId() { this->configId_ = nullptr;};
    inline string configId() const { DARABONBA_PTR_GET_DEFAULT(configId_, "") };
    inline IdpLoginOrderItem& setConfigId(string configId) { DARABONBA_PTR_SET_VALUE(configId_, configId) };


    // desc Field Functions 
    bool hasDesc() const { return this->desc_ != nullptr;};
    void deleteDesc() { this->desc_ = nullptr;};
    inline string desc() const { DARABONBA_PTR_GET_DEFAULT(desc_, "") };
    inline IdpLoginOrderItem& setDesc(string desc) { DARABONBA_PTR_SET_VALUE(desc_, desc) };


    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool enabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline IdpLoginOrderItem& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline IdpLoginOrderItem& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline IdpLoginOrderItem& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> class_ = nullptr;
    std::shared_ptr<string> configId_ = nullptr;
    std::shared_ptr<string> desc_ = nullptr;
    std::shared_ptr<bool> enabled_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
