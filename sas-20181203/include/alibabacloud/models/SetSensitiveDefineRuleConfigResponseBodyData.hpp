// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETSENSITIVEDEFINERULECONFIGRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_SETSENSITIVEDEFINERULECONFIGRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class SetSensitiveDefineRuleConfigResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetSensitiveDefineRuleConfigResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
    };
    friend void from_json(const Darabonba::Json& j, SetSensitiveDefineRuleConfigResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
    };
    SetSensitiveDefineRuleConfigResponseBodyData() = default ;
    SetSensitiveDefineRuleConfigResponseBodyData(const SetSensitiveDefineRuleConfigResponseBodyData &) = default ;
    SetSensitiveDefineRuleConfigResponseBodyData(SetSensitiveDefineRuleConfigResponseBodyData &&) = default ;
    SetSensitiveDefineRuleConfigResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetSensitiveDefineRuleConfigResponseBodyData() = default ;
    SetSensitiveDefineRuleConfigResponseBodyData& operator=(const SetSensitiveDefineRuleConfigResponseBodyData &) = default ;
    SetSensitiveDefineRuleConfigResponseBodyData& operator=(SetSensitiveDefineRuleConfigResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->id_ != nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline SetSensitiveDefineRuleConfigResponseBodyData& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


  protected:
    // The custom primary key.
    std::shared_ptr<int64_t> id_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
