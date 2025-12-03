// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVARIABLEGROUPRESPONSEBODYVARIABLEGROUPVARIABLES_HPP_
#define ALIBABACLOUD_MODELS_GETVARIABLEGROUPRESPONSEBODYVARIABLEGROUPVARIABLES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class GetVariableGroupResponseBodyVariableGroupVariables : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetVariableGroupResponseBodyVariableGroupVariables& obj) { 
      DARABONBA_PTR_TO_JSON(isEncrypted, isEncrypted_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(value, value_);
    };
    friend void from_json(const Darabonba::Json& j, GetVariableGroupResponseBodyVariableGroupVariables& obj) { 
      DARABONBA_PTR_FROM_JSON(isEncrypted, isEncrypted_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(value, value_);
    };
    GetVariableGroupResponseBodyVariableGroupVariables() = default ;
    GetVariableGroupResponseBodyVariableGroupVariables(const GetVariableGroupResponseBodyVariableGroupVariables &) = default ;
    GetVariableGroupResponseBodyVariableGroupVariables(GetVariableGroupResponseBodyVariableGroupVariables &&) = default ;
    GetVariableGroupResponseBodyVariableGroupVariables(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetVariableGroupResponseBodyVariableGroupVariables() = default ;
    GetVariableGroupResponseBodyVariableGroupVariables& operator=(const GetVariableGroupResponseBodyVariableGroupVariables &) = default ;
    GetVariableGroupResponseBodyVariableGroupVariables& operator=(GetVariableGroupResponseBodyVariableGroupVariables &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->isEncrypted_ == nullptr
        && return this->name_ == nullptr && return this->value_ == nullptr; };
    // isEncrypted Field Functions 
    bool hasIsEncrypted() const { return this->isEncrypted_ != nullptr;};
    void deleteIsEncrypted() { this->isEncrypted_ = nullptr;};
    inline bool isEncrypted() const { DARABONBA_PTR_GET_DEFAULT(isEncrypted_, false) };
    inline GetVariableGroupResponseBodyVariableGroupVariables& setIsEncrypted(bool isEncrypted) { DARABONBA_PTR_SET_VALUE(isEncrypted_, isEncrypted) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetVariableGroupResponseBodyVariableGroupVariables& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline GetVariableGroupResponseBodyVariableGroupVariables& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    std::shared_ptr<bool> isEncrypted_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
