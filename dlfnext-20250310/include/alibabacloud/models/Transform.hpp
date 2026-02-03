// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRANSFORM_HPP_
#define ALIBABACLOUD_MODELS_TRANSFORM_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/FullDataType.hpp>
#include <alibabacloud/models/FieldRef.hpp>
#include <vector>
#include <alibabacloud/models/TransformInput.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DlfNext20250310
{
namespace Models
{
  class Transform : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Transform& obj) { 
      DARABONBA_PTR_TO_JSON(castType, castType_);
      DARABONBA_PTR_TO_JSON(fieldRef, fieldRef_);
      DARABONBA_PTR_TO_JSON(inputs, inputs_);
      DARABONBA_PTR_TO_JSON(name, name_);
    };
    friend void from_json(const Darabonba::Json& j, Transform& obj) { 
      DARABONBA_PTR_FROM_JSON(castType, castType_);
      DARABONBA_PTR_FROM_JSON(fieldRef, fieldRef_);
      DARABONBA_PTR_FROM_JSON(inputs, inputs_);
      DARABONBA_PTR_FROM_JSON(name, name_);
    };
    Transform() = default ;
    Transform(const Transform &) = default ;
    Transform(Transform &&) = default ;
    Transform(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Transform() = default ;
    Transform& operator=(const Transform &) = default ;
    Transform& operator=(Transform &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->castType_ == nullptr
        && this->fieldRef_ == nullptr && this->inputs_ == nullptr && this->name_ == nullptr; };
    // castType Field Functions 
    bool hasCastType() const { return this->castType_ != nullptr;};
    void deleteCastType() { this->castType_ = nullptr;};
    inline const FullDataType & getCastType() const { DARABONBA_PTR_GET_CONST(castType_, FullDataType) };
    inline FullDataType getCastType() { DARABONBA_PTR_GET(castType_, FullDataType) };
    inline Transform& setCastType(const FullDataType & castType) { DARABONBA_PTR_SET_VALUE(castType_, castType) };
    inline Transform& setCastType(FullDataType && castType) { DARABONBA_PTR_SET_RVALUE(castType_, castType) };


    // fieldRef Field Functions 
    bool hasFieldRef() const { return this->fieldRef_ != nullptr;};
    void deleteFieldRef() { this->fieldRef_ = nullptr;};
    inline const FieldRef & getFieldRef() const { DARABONBA_PTR_GET_CONST(fieldRef_, FieldRef) };
    inline FieldRef getFieldRef() { DARABONBA_PTR_GET(fieldRef_, FieldRef) };
    inline Transform& setFieldRef(const FieldRef & fieldRef) { DARABONBA_PTR_SET_VALUE(fieldRef_, fieldRef) };
    inline Transform& setFieldRef(FieldRef && fieldRef) { DARABONBA_PTR_SET_RVALUE(fieldRef_, fieldRef) };


    // inputs Field Functions 
    bool hasInputs() const { return this->inputs_ != nullptr;};
    void deleteInputs() { this->inputs_ = nullptr;};
    inline const vector<TransformInput> & getInputs() const { DARABONBA_PTR_GET_CONST(inputs_, vector<TransformInput>) };
    inline vector<TransformInput> getInputs() { DARABONBA_PTR_GET(inputs_, vector<TransformInput>) };
    inline Transform& setInputs(const vector<TransformInput> & inputs) { DARABONBA_PTR_SET_VALUE(inputs_, inputs) };
    inline Transform& setInputs(vector<TransformInput> && inputs) { DARABONBA_PTR_SET_RVALUE(inputs_, inputs) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline Transform& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    shared_ptr<FullDataType> castType_ {};
    shared_ptr<FieldRef> fieldRef_ {};
    shared_ptr<vector<TransformInput>> inputs_ {};
    shared_ptr<string> name_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DlfNext20250310
#endif
