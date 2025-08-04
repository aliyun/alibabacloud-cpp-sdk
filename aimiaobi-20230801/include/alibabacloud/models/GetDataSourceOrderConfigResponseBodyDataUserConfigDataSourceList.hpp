// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATASOURCEORDERCONFIGRESPONSEBODYDATAUSERCONFIGDATASOURCELIST_HPP_
#define ALIBABACLOUD_MODELS_GETDATASOURCEORDERCONFIGRESPONSEBODYDATAUSERCONFIGDATASOURCELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class GetDataSourceOrderConfigResponseBodyDataUserConfigDataSourceList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataSourceOrderConfigResponseBodyDataUserConfigDataSourceList& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Enable, enable_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Number, number_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataSourceOrderConfigResponseBodyDataUserConfigDataSourceList& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Enable, enable_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Number, number_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    GetDataSourceOrderConfigResponseBodyDataUserConfigDataSourceList() = default ;
    GetDataSourceOrderConfigResponseBodyDataUserConfigDataSourceList(const GetDataSourceOrderConfigResponseBodyDataUserConfigDataSourceList &) = default ;
    GetDataSourceOrderConfigResponseBodyDataUserConfigDataSourceList(GetDataSourceOrderConfigResponseBodyDataUserConfigDataSourceList &&) = default ;
    GetDataSourceOrderConfigResponseBodyDataUserConfigDataSourceList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataSourceOrderConfigResponseBodyDataUserConfigDataSourceList() = default ;
    GetDataSourceOrderConfigResponseBodyDataUserConfigDataSourceList& operator=(const GetDataSourceOrderConfigResponseBodyDataUserConfigDataSourceList &) = default ;
    GetDataSourceOrderConfigResponseBodyDataUserConfigDataSourceList& operator=(GetDataSourceOrderConfigResponseBodyDataUserConfigDataSourceList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->enable_ != nullptr && this->name_ != nullptr && this->number_ != nullptr && this->type_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetDataSourceOrderConfigResponseBodyDataUserConfigDataSourceList& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline bool enable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
    inline GetDataSourceOrderConfigResponseBodyDataUserConfigDataSourceList& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetDataSourceOrderConfigResponseBodyDataUserConfigDataSourceList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // number Field Functions 
    bool hasNumber() const { return this->number_ != nullptr;};
    void deleteNumber() { this->number_ = nullptr;};
    inline int32_t number() const { DARABONBA_PTR_GET_DEFAULT(number_, 0) };
    inline GetDataSourceOrderConfigResponseBodyDataUserConfigDataSourceList& setNumber(int32_t number) { DARABONBA_PTR_SET_VALUE(number_, number) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetDataSourceOrderConfigResponseBodyDataUserConfigDataSourceList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<bool> enable_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<int32_t> number_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
