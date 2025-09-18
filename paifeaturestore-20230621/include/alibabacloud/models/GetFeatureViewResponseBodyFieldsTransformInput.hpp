// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFEATUREVIEWRESPONSEBODYFIELDSTRANSFORMINPUT_HPP_
#define ALIBABACLOUD_MODELS_GETFEATUREVIEWRESPONSEBODYFIELDSTRANSFORMINPUT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiFeatureStore20230621
{
namespace Models
{
  class GetFeatureViewResponseBodyFieldsTransformInput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFeatureViewResponseBodyFieldsTransformInput& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, GetFeatureViewResponseBodyFieldsTransformInput& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    GetFeatureViewResponseBodyFieldsTransformInput() = default ;
    GetFeatureViewResponseBodyFieldsTransformInput(const GetFeatureViewResponseBodyFieldsTransformInput &) = default ;
    GetFeatureViewResponseBodyFieldsTransformInput(GetFeatureViewResponseBodyFieldsTransformInput &&) = default ;
    GetFeatureViewResponseBodyFieldsTransformInput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFeatureViewResponseBodyFieldsTransformInput() = default ;
    GetFeatureViewResponseBodyFieldsTransformInput& operator=(const GetFeatureViewResponseBodyFieldsTransformInput &) = default ;
    GetFeatureViewResponseBodyFieldsTransformInput& operator=(GetFeatureViewResponseBodyFieldsTransformInput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->name_ != nullptr
        && this->type_ != nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetFeatureViewResponseBodyFieldsTransformInput& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetFeatureViewResponseBodyFieldsTransformInput& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiFeatureStore20230621
#endif
