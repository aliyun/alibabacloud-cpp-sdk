// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DATAI18NVALUE_HPP_
#define ALIBABACLOUD_MODELS_DATAI18NVALUE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentCore20260804
{
namespace Models
{
  class DataI18nValue : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DataI18nValue& obj) { 
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(readme, readme_);
    };
    friend void from_json(const Darabonba::Json& j, DataI18nValue& obj) { 
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(readme, readme_);
    };
    DataI18nValue() = default ;
    DataI18nValue(const DataI18nValue &) = default ;
    DataI18nValue(DataI18nValue &&) = default ;
    DataI18nValue(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DataI18nValue() = default ;
    DataI18nValue& operator=(const DataI18nValue &) = default ;
    DataI18nValue& operator=(DataI18nValue &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && this->name_ == nullptr && this->readme_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DataI18nValue& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DataI18nValue& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // readme Field Functions 
    bool hasReadme() const { return this->readme_ != nullptr;};
    void deleteReadme() { this->readme_ = nullptr;};
    inline string getReadme() const { DARABONBA_PTR_GET_DEFAULT(readme_, "") };
    inline DataI18nValue& setReadme(string readme) { DARABONBA_PTR_SET_VALUE(readme_, readme) };


  protected:
    // The MCP service description in the corresponding language.
    shared_ptr<string> description_ {};
    // The MCP marketplace template name in the corresponding language.
    shared_ptr<string> name_ {};
    // The MCP marketplace template usage instructions in the corresponding language.
    shared_ptr<string> readme_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentCore20260804
#endif
