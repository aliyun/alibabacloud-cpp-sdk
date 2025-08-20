// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IDPATTRMAPCONFIGITEM_HPP_
#define ALIBABACLOUD_MODELS_IDPATTRMAPCONFIGITEM_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class IdpAttrMapConfigItem : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IdpAttrMapConfigItem& obj) { 
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(Target, target_);
      DARABONBA_PTR_TO_JSON(TargetType, targetType_);
    };
    friend void from_json(const Darabonba::Json& j, IdpAttrMapConfigItem& obj) { 
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(Target, target_);
      DARABONBA_PTR_FROM_JSON(TargetType, targetType_);
    };
    IdpAttrMapConfigItem() = default ;
    IdpAttrMapConfigItem(const IdpAttrMapConfigItem &) = default ;
    IdpAttrMapConfigItem(IdpAttrMapConfigItem &&) = default ;
    IdpAttrMapConfigItem(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IdpAttrMapConfigItem() = default ;
    IdpAttrMapConfigItem& operator=(const IdpAttrMapConfigItem &) = default ;
    IdpAttrMapConfigItem& operator=(IdpAttrMapConfigItem &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->source_ != nullptr
        && this->target_ != nullptr && this->targetType_ != nullptr; };
    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline IdpAttrMapConfigItem& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // target Field Functions 
    bool hasTarget() const { return this->target_ != nullptr;};
    void deleteTarget() { this->target_ = nullptr;};
    inline string target() const { DARABONBA_PTR_GET_DEFAULT(target_, "") };
    inline IdpAttrMapConfigItem& setTarget(string target) { DARABONBA_PTR_SET_VALUE(target_, target) };


    // targetType Field Functions 
    bool hasTargetType() const { return this->targetType_ != nullptr;};
    void deleteTargetType() { this->targetType_ = nullptr;};
    inline string targetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
    inline IdpAttrMapConfigItem& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


  protected:
    std::shared_ptr<string> source_ = nullptr;
    std::shared_ptr<string> target_ = nullptr;
    std::shared_ptr<string> targetType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
