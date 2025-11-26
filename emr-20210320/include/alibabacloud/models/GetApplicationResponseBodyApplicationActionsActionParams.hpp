// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPPLICATIONRESPONSEBODYAPPLICATIONACTIONSACTIONPARAMS_HPP_
#define ALIBABACLOUD_MODELS_GETAPPLICATIONRESPONSEBODYAPPLICATIONACTIONSACTIONPARAMS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetApplicationResponseBodyApplicationActionsActionParamsValueAttribute.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class GetApplicationResponseBodyApplicationActionsActionParams : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetApplicationResponseBodyApplicationActionsActionParams& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(ValueAttribute, valueAttribute_);
    };
    friend void from_json(const Darabonba::Json& j, GetApplicationResponseBodyApplicationActionsActionParams& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(ValueAttribute, valueAttribute_);
    };
    GetApplicationResponseBodyApplicationActionsActionParams() = default ;
    GetApplicationResponseBodyApplicationActionsActionParams(const GetApplicationResponseBodyApplicationActionsActionParams &) = default ;
    GetApplicationResponseBodyApplicationActionsActionParams(GetApplicationResponseBodyApplicationActionsActionParams &&) = default ;
    GetApplicationResponseBodyApplicationActionsActionParams(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetApplicationResponseBodyApplicationActionsActionParams() = default ;
    GetApplicationResponseBodyApplicationActionsActionParams& operator=(const GetApplicationResponseBodyApplicationActionsActionParams &) = default ;
    GetApplicationResponseBodyApplicationActionsActionParams& operator=(GetApplicationResponseBodyApplicationActionsActionParams &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && return this->key_ == nullptr && return this->valueAttribute_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetApplicationResponseBodyApplicationActionsActionParams& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline GetApplicationResponseBodyApplicationActionsActionParams& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // valueAttribute Field Functions 
    bool hasValueAttribute() const { return this->valueAttribute_ != nullptr;};
    void deleteValueAttribute() { this->valueAttribute_ = nullptr;};
    inline const Models::GetApplicationResponseBodyApplicationActionsActionParamsValueAttribute & valueAttribute() const { DARABONBA_PTR_GET_CONST(valueAttribute_, Models::GetApplicationResponseBodyApplicationActionsActionParamsValueAttribute) };
    inline Models::GetApplicationResponseBodyApplicationActionsActionParamsValueAttribute valueAttribute() { DARABONBA_PTR_GET(valueAttribute_, Models::GetApplicationResponseBodyApplicationActionsActionParamsValueAttribute) };
    inline GetApplicationResponseBodyApplicationActionsActionParams& setValueAttribute(const Models::GetApplicationResponseBodyApplicationActionsActionParamsValueAttribute & valueAttribute) { DARABONBA_PTR_SET_VALUE(valueAttribute_, valueAttribute) };
    inline GetApplicationResponseBodyApplicationActionsActionParams& setValueAttribute(Models::GetApplicationResponseBodyApplicationActionsActionParamsValueAttribute && valueAttribute) { DARABONBA_PTR_SET_RVALUE(valueAttribute_, valueAttribute) };


  protected:
    // Description
    std::shared_ptr<string> description_ = nullptr;
    // The parameter name.
    std::shared_ptr<string> key_ = nullptr;
    // The parameter value attribute.
    std::shared_ptr<Models::GetApplicationResponseBodyApplicationActionsActionParamsValueAttribute> valueAttribute_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
