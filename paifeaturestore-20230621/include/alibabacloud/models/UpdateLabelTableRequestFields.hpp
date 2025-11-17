// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATELABELTABLEREQUESTFIELDS_HPP_
#define ALIBABACLOUD_MODELS_UPDATELABELTABLEREQUESTFIELDS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiFeatureStore20230621
{
namespace Models
{
  class UpdateLabelTableRequestFields : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateLabelTableRequestFields& obj) { 
      DARABONBA_PTR_TO_JSON(Attributes, attributes_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateLabelTableRequestFields& obj) { 
      DARABONBA_PTR_FROM_JSON(Attributes, attributes_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    UpdateLabelTableRequestFields() = default ;
    UpdateLabelTableRequestFields(const UpdateLabelTableRequestFields &) = default ;
    UpdateLabelTableRequestFields(UpdateLabelTableRequestFields &&) = default ;
    UpdateLabelTableRequestFields(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateLabelTableRequestFields() = default ;
    UpdateLabelTableRequestFields& operator=(const UpdateLabelTableRequestFields &) = default ;
    UpdateLabelTableRequestFields& operator=(UpdateLabelTableRequestFields &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->attributes_ == nullptr
        && return this->name_ == nullptr && return this->type_ == nullptr; };
    // attributes Field Functions 
    bool hasAttributes() const { return this->attributes_ != nullptr;};
    void deleteAttributes() { this->attributes_ = nullptr;};
    inline const vector<string> & attributes() const { DARABONBA_PTR_GET_CONST(attributes_, vector<string>) };
    inline vector<string> attributes() { DARABONBA_PTR_GET(attributes_, vector<string>) };
    inline UpdateLabelTableRequestFields& setAttributes(const vector<string> & attributes) { DARABONBA_PTR_SET_VALUE(attributes_, attributes) };
    inline UpdateLabelTableRequestFields& setAttributes(vector<string> && attributes) { DARABONBA_PTR_SET_RVALUE(attributes_, attributes) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateLabelTableRequestFields& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline UpdateLabelTableRequestFields& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // This parameter is required.
    std::shared_ptr<vector<string>> attributes_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiFeatureStore20230621
#endif
