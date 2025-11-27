// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CUSTOMPARAMS_HPP_
#define ALIBABACLOUD_MODELS_CUSTOMPARAMS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/Property.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class CustomParams : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CustomParams& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Properties, properties_);
    };
    friend void from_json(const Darabonba::Json& j, CustomParams& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Properties, properties_);
    };
    CustomParams() = default ;
    CustomParams(const CustomParams &) = default ;
    CustomParams(CustomParams &&) = default ;
    CustomParams(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CustomParams() = default ;
    CustomParams& operator=(const CustomParams &) = default ;
    CustomParams& operator=(CustomParams &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr
        && return this->properties_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CustomParams& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // properties Field Functions 
    bool hasProperties() const { return this->properties_ != nullptr;};
    void deleteProperties() { this->properties_ = nullptr;};
    inline const vector<Property> & properties() const { DARABONBA_PTR_GET_CONST(properties_, vector<Property>) };
    inline vector<Property> properties() { DARABONBA_PTR_GET(properties_, vector<Property>) };
    inline CustomParams& setProperties(const vector<Property> & properties) { DARABONBA_PTR_SET_VALUE(properties_, properties) };
    inline CustomParams& setProperties(vector<Property> && properties) { DARABONBA_PTR_SET_RVALUE(properties_, properties) };


  protected:
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<vector<Property>> properties_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
