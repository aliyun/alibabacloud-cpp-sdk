// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_NLURESPONSEBODYMESSAGESDSNLUINFOENTITYLIST_HPP_
#define ALIBABACLOUD_MODELS_NLURESPONSEBODYMESSAGESDSNLUINFOENTITYLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Chatbot20220408
{
namespace Models
{
  class NluResponseBodyMessagesDsNluInfoEntityList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const NluResponseBodyMessagesDsNluInfoEntityList& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Origin, origin_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, NluResponseBodyMessagesDsNluInfoEntityList& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Origin, origin_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    NluResponseBodyMessagesDsNluInfoEntityList() = default ;
    NluResponseBodyMessagesDsNluInfoEntityList(const NluResponseBodyMessagesDsNluInfoEntityList &) = default ;
    NluResponseBodyMessagesDsNluInfoEntityList(NluResponseBodyMessagesDsNluInfoEntityList &&) = default ;
    NluResponseBodyMessagesDsNluInfoEntityList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~NluResponseBodyMessagesDsNluInfoEntityList() = default ;
    NluResponseBodyMessagesDsNluInfoEntityList& operator=(const NluResponseBodyMessagesDsNluInfoEntityList &) = default ;
    NluResponseBodyMessagesDsNluInfoEntityList& operator=(NluResponseBodyMessagesDsNluInfoEntityList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->name_ != nullptr
        && this->origin_ != nullptr && this->type_ != nullptr && this->value_ != nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline NluResponseBodyMessagesDsNluInfoEntityList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // origin Field Functions 
    bool hasOrigin() const { return this->origin_ != nullptr;};
    void deleteOrigin() { this->origin_ = nullptr;};
    inline string origin() const { DARABONBA_PTR_GET_DEFAULT(origin_, "") };
    inline NluResponseBodyMessagesDsNluInfoEntityList& setOrigin(string origin) { DARABONBA_PTR_SET_VALUE(origin_, origin) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline NluResponseBodyMessagesDsNluInfoEntityList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline NluResponseBodyMessagesDsNluInfoEntityList& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> origin_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Chatbot20220408
#endif
