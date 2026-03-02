// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STACKINFOEXTINFO_HPP_
#define ALIBABACLOUD_MODELS_STACKINFOEXTINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class StackInfoExtInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StackInfoExtInfo& obj) { 
      DARABONBA_PTR_TO_JSON(info, info_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, StackInfoExtInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(info, info_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    StackInfoExtInfo() = default ;
    StackInfoExtInfo(const StackInfoExtInfo &) = default ;
    StackInfoExtInfo(StackInfoExtInfo &&) = default ;
    StackInfoExtInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StackInfoExtInfo() = default ;
    StackInfoExtInfo& operator=(const StackInfoExtInfo &) = default ;
    StackInfoExtInfo& operator=(StackInfoExtInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->info_ == nullptr
        && this->type_ == nullptr; };
    // info Field Functions 
    bool hasInfo() const { return this->info_ != nullptr;};
    void deleteInfo() { this->info_ = nullptr;};
    inline string getInfo() const { DARABONBA_PTR_GET_DEFAULT(info_, "") };
    inline StackInfoExtInfo& setInfo(string info) { DARABONBA_PTR_SET_VALUE(info_, info) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline StackInfoExtInfo& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    shared_ptr<string> info_ {};
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
