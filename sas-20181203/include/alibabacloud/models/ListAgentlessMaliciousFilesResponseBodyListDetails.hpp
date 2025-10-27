// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAGENTLESSMALICIOUSFILESRESPONSEBODYLISTDETAILS_HPP_
#define ALIBABACLOUD_MODELS_LISTAGENTLESSMALICIOUSFILESRESPONSEBODYLISTDETAILS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListAgentlessMaliciousFilesResponseBodyListDetails : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAgentlessMaliciousFilesResponseBodyListDetails& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NameKey, nameKey_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, ListAgentlessMaliciousFilesResponseBodyListDetails& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NameKey, nameKey_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    ListAgentlessMaliciousFilesResponseBodyListDetails() = default ;
    ListAgentlessMaliciousFilesResponseBodyListDetails(const ListAgentlessMaliciousFilesResponseBodyListDetails &) = default ;
    ListAgentlessMaliciousFilesResponseBodyListDetails(ListAgentlessMaliciousFilesResponseBodyListDetails &&) = default ;
    ListAgentlessMaliciousFilesResponseBodyListDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAgentlessMaliciousFilesResponseBodyListDetails() = default ;
    ListAgentlessMaliciousFilesResponseBodyListDetails& operator=(const ListAgentlessMaliciousFilesResponseBodyListDetails &) = default ;
    ListAgentlessMaliciousFilesResponseBodyListDetails& operator=(ListAgentlessMaliciousFilesResponseBodyListDetails &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr
        && return this->nameKey_ == nullptr && return this->type_ == nullptr && return this->value_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListAgentlessMaliciousFilesResponseBodyListDetails& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // nameKey Field Functions 
    bool hasNameKey() const { return this->nameKey_ != nullptr;};
    void deleteNameKey() { this->nameKey_ = nullptr;};
    inline string nameKey() const { DARABONBA_PTR_GET_DEFAULT(nameKey_, "") };
    inline ListAgentlessMaliciousFilesResponseBodyListDetails& setNameKey(string nameKey) { DARABONBA_PTR_SET_VALUE(nameKey_, nameKey) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListAgentlessMaliciousFilesResponseBodyListDetails& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline ListAgentlessMaliciousFilesResponseBodyListDetails& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The name of the detailed item.
    std::shared_ptr<string> name_ = nullptr;
    // The name key of the detailed item.
    std::shared_ptr<string> nameKey_ = nullptr;
    // The type of the detailed item.
    std::shared_ptr<string> type_ = nullptr;
    // The value of the detailed item.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
