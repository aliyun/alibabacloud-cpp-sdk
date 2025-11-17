// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFEATUREVIEWRESPONSEBODYFIELDS_HPP_
#define ALIBABACLOUD_MODELS_GETFEATUREVIEWRESPONSEBODYFIELDS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetFeatureViewResponseBodyFieldsTransform.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiFeatureStore20230621
{
namespace Models
{
  class GetFeatureViewResponseBodyFields : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFeatureViewResponseBodyFields& obj) { 
      DARABONBA_PTR_TO_JSON(Attributes, attributes_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Transform, transform_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, GetFeatureViewResponseBodyFields& obj) { 
      DARABONBA_PTR_FROM_JSON(Attributes, attributes_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Transform, transform_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    GetFeatureViewResponseBodyFields() = default ;
    GetFeatureViewResponseBodyFields(const GetFeatureViewResponseBodyFields &) = default ;
    GetFeatureViewResponseBodyFields(GetFeatureViewResponseBodyFields &&) = default ;
    GetFeatureViewResponseBodyFields(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFeatureViewResponseBodyFields() = default ;
    GetFeatureViewResponseBodyFields& operator=(const GetFeatureViewResponseBodyFields &) = default ;
    GetFeatureViewResponseBodyFields& operator=(GetFeatureViewResponseBodyFields &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->attributes_ == nullptr
        && return this->name_ == nullptr && return this->transform_ == nullptr && return this->type_ == nullptr; };
    // attributes Field Functions 
    bool hasAttributes() const { return this->attributes_ != nullptr;};
    void deleteAttributes() { this->attributes_ = nullptr;};
    inline const vector<string> & attributes() const { DARABONBA_PTR_GET_CONST(attributes_, vector<string>) };
    inline vector<string> attributes() { DARABONBA_PTR_GET(attributes_, vector<string>) };
    inline GetFeatureViewResponseBodyFields& setAttributes(const vector<string> & attributes) { DARABONBA_PTR_SET_VALUE(attributes_, attributes) };
    inline GetFeatureViewResponseBodyFields& setAttributes(vector<string> && attributes) { DARABONBA_PTR_SET_RVALUE(attributes_, attributes) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetFeatureViewResponseBodyFields& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // transform Field Functions 
    bool hasTransform() const { return this->transform_ != nullptr;};
    void deleteTransform() { this->transform_ = nullptr;};
    inline const vector<Models::GetFeatureViewResponseBodyFieldsTransform> & transform() const { DARABONBA_PTR_GET_CONST(transform_, vector<Models::GetFeatureViewResponseBodyFieldsTransform>) };
    inline vector<Models::GetFeatureViewResponseBodyFieldsTransform> transform() { DARABONBA_PTR_GET(transform_, vector<Models::GetFeatureViewResponseBodyFieldsTransform>) };
    inline GetFeatureViewResponseBodyFields& setTransform(const vector<Models::GetFeatureViewResponseBodyFieldsTransform> & transform) { DARABONBA_PTR_SET_VALUE(transform_, transform) };
    inline GetFeatureViewResponseBodyFields& setTransform(vector<Models::GetFeatureViewResponseBodyFieldsTransform> && transform) { DARABONBA_PTR_SET_RVALUE(transform_, transform) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetFeatureViewResponseBodyFields& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<vector<string>> attributes_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<vector<Models::GetFeatureViewResponseBodyFieldsTransform>> transform_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiFeatureStore20230621
#endif
