// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCUSTOMAGENTTOOLSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTCUSTOMAGENTTOOLSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RdsAi20250507
{
namespace Models
{
  class ListCustomAgentToolsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCustomAgentToolsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(En, en_);
      DARABONBA_PTR_TO_JSON(Ja, ja_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Tc, tc_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Zh, zh_);
    };
    friend void from_json(const Darabonba::Json& j, ListCustomAgentToolsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(En, en_);
      DARABONBA_PTR_FROM_JSON(Ja, ja_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Tc, tc_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Zh, zh_);
    };
    ListCustomAgentToolsResponseBodyData() = default ;
    ListCustomAgentToolsResponseBodyData(const ListCustomAgentToolsResponseBodyData &) = default ;
    ListCustomAgentToolsResponseBodyData(ListCustomAgentToolsResponseBodyData &&) = default ;
    ListCustomAgentToolsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCustomAgentToolsResponseBodyData() = default ;
    ListCustomAgentToolsResponseBodyData& operator=(const ListCustomAgentToolsResponseBodyData &) = default ;
    ListCustomAgentToolsResponseBodyData& operator=(ListCustomAgentToolsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->en_ == nullptr
        && return this->ja_ == nullptr && return this->name_ == nullptr && return this->tc_ == nullptr && return this->type_ == nullptr && return this->zh_ == nullptr; };
    // en Field Functions 
    bool hasEn() const { return this->en_ != nullptr;};
    void deleteEn() { this->en_ = nullptr;};
    inline string en() const { DARABONBA_PTR_GET_DEFAULT(en_, "") };
    inline ListCustomAgentToolsResponseBodyData& setEn(string en) { DARABONBA_PTR_SET_VALUE(en_, en) };


    // ja Field Functions 
    bool hasJa() const { return this->ja_ != nullptr;};
    void deleteJa() { this->ja_ = nullptr;};
    inline string ja() const { DARABONBA_PTR_GET_DEFAULT(ja_, "") };
    inline ListCustomAgentToolsResponseBodyData& setJa(string ja) { DARABONBA_PTR_SET_VALUE(ja_, ja) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListCustomAgentToolsResponseBodyData& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // tc Field Functions 
    bool hasTc() const { return this->tc_ != nullptr;};
    void deleteTc() { this->tc_ = nullptr;};
    inline string tc() const { DARABONBA_PTR_GET_DEFAULT(tc_, "") };
    inline ListCustomAgentToolsResponseBodyData& setTc(string tc) { DARABONBA_PTR_SET_VALUE(tc_, tc) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListCustomAgentToolsResponseBodyData& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // zh Field Functions 
    bool hasZh() const { return this->zh_ != nullptr;};
    void deleteZh() { this->zh_ = nullptr;};
    inline string zh() const { DARABONBA_PTR_GET_DEFAULT(zh_, "") };
    inline ListCustomAgentToolsResponseBodyData& setZh(string zh) { DARABONBA_PTR_SET_VALUE(zh_, zh) };


  protected:
    std::shared_ptr<string> en_ = nullptr;
    std::shared_ptr<string> ja_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> tc_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
    std::shared_ptr<string> zh_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RdsAi20250507
#endif
