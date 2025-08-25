// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_WAIDPERMISSIONS_HPP_
#define ALIBABACLOUD_MODELS_WAIDPERMISSIONS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/WaIdPermissions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsUser20210308
{
namespace Models
{
  class WaIdPermissions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const WaIdPermissions& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(IsBasicChild, isBasicChild_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(SubPermissions, subPermissions_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, WaIdPermissions& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(IsBasicChild, isBasicChild_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(SubPermissions, subPermissions_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    WaIdPermissions() = default ;
    WaIdPermissions(const WaIdPermissions &) = default ;
    WaIdPermissions(WaIdPermissions &&) = default ;
    WaIdPermissions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~WaIdPermissions() = default ;
    WaIdPermissions& operator=(const WaIdPermissions &) = default ;
    WaIdPermissions& operator=(WaIdPermissions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->isBasicChild_ != nullptr && this->name_ != nullptr && this->subPermissions_ != nullptr && this->type_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline WaIdPermissions& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // isBasicChild Field Functions 
    bool hasIsBasicChild() const { return this->isBasicChild_ != nullptr;};
    void deleteIsBasicChild() { this->isBasicChild_ = nullptr;};
    inline bool isBasicChild() const { DARABONBA_PTR_GET_DEFAULT(isBasicChild_, false) };
    inline WaIdPermissions& setIsBasicChild(bool isBasicChild) { DARABONBA_PTR_SET_VALUE(isBasicChild_, isBasicChild) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline WaIdPermissions& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // subPermissions Field Functions 
    bool hasSubPermissions() const { return this->subPermissions_ != nullptr;};
    void deleteSubPermissions() { this->subPermissions_ = nullptr;};
    inline const vector<WaIdPermissions> & subPermissions() const { DARABONBA_PTR_GET_CONST(subPermissions_, vector<WaIdPermissions>) };
    inline vector<WaIdPermissions> subPermissions() { DARABONBA_PTR_GET(subPermissions_, vector<WaIdPermissions>) };
    inline WaIdPermissions& setSubPermissions(const vector<WaIdPermissions> & subPermissions) { DARABONBA_PTR_SET_VALUE(subPermissions_, subPermissions) };
    inline WaIdPermissions& setSubPermissions(vector<WaIdPermissions> && subPermissions) { DARABONBA_PTR_SET_RVALUE(subPermissions_, subPermissions) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline WaIdPermissions& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<bool> isBasicChild_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<vector<WaIdPermissions>> subPermissions_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsUser20210308
#endif
