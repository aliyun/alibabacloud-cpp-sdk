// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSECRETPARAMETERVERSIONSRESPONSEBODYPARAMETERVERSIONS_HPP_
#define ALIBABACLOUD_MODELS_LISTSECRETPARAMETERVERSIONSRESPONSEBODYPARAMETERVERSIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class ListSecretParameterVersionsResponseBodyParameterVersions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSecretParameterVersionsResponseBodyParameterVersions& obj) { 
      DARABONBA_PTR_TO_JSON(ParameterVersion, parameterVersion_);
      DARABONBA_PTR_TO_JSON(UpdatedBy, updatedBy_);
      DARABONBA_PTR_TO_JSON(UpdatedDate, updatedDate_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, ListSecretParameterVersionsResponseBodyParameterVersions& obj) { 
      DARABONBA_PTR_FROM_JSON(ParameterVersion, parameterVersion_);
      DARABONBA_PTR_FROM_JSON(UpdatedBy, updatedBy_);
      DARABONBA_PTR_FROM_JSON(UpdatedDate, updatedDate_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    ListSecretParameterVersionsResponseBodyParameterVersions() = default ;
    ListSecretParameterVersionsResponseBodyParameterVersions(const ListSecretParameterVersionsResponseBodyParameterVersions &) = default ;
    ListSecretParameterVersionsResponseBodyParameterVersions(ListSecretParameterVersionsResponseBodyParameterVersions &&) = default ;
    ListSecretParameterVersionsResponseBodyParameterVersions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSecretParameterVersionsResponseBodyParameterVersions() = default ;
    ListSecretParameterVersionsResponseBodyParameterVersions& operator=(const ListSecretParameterVersionsResponseBodyParameterVersions &) = default ;
    ListSecretParameterVersionsResponseBodyParameterVersions& operator=(ListSecretParameterVersionsResponseBodyParameterVersions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->parameterVersion_ == nullptr
        && return this->updatedBy_ == nullptr && return this->updatedDate_ == nullptr && return this->value_ == nullptr; };
    // parameterVersion Field Functions 
    bool hasParameterVersion() const { return this->parameterVersion_ != nullptr;};
    void deleteParameterVersion() { this->parameterVersion_ = nullptr;};
    inline int32_t parameterVersion() const { DARABONBA_PTR_GET_DEFAULT(parameterVersion_, 0) };
    inline ListSecretParameterVersionsResponseBodyParameterVersions& setParameterVersion(int32_t parameterVersion) { DARABONBA_PTR_SET_VALUE(parameterVersion_, parameterVersion) };


    // updatedBy Field Functions 
    bool hasUpdatedBy() const { return this->updatedBy_ != nullptr;};
    void deleteUpdatedBy() { this->updatedBy_ = nullptr;};
    inline string updatedBy() const { DARABONBA_PTR_GET_DEFAULT(updatedBy_, "") };
    inline ListSecretParameterVersionsResponseBodyParameterVersions& setUpdatedBy(string updatedBy) { DARABONBA_PTR_SET_VALUE(updatedBy_, updatedBy) };


    // updatedDate Field Functions 
    bool hasUpdatedDate() const { return this->updatedDate_ != nullptr;};
    void deleteUpdatedDate() { this->updatedDate_ = nullptr;};
    inline string updatedDate() const { DARABONBA_PTR_GET_DEFAULT(updatedDate_, "") };
    inline ListSecretParameterVersionsResponseBodyParameterVersions& setUpdatedDate(string updatedDate) { DARABONBA_PTR_SET_VALUE(updatedDate_, updatedDate) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline ListSecretParameterVersionsResponseBodyParameterVersions& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The version number of the encryption parameter.
    std::shared_ptr<int32_t> parameterVersion_ = nullptr;
    // The user who updated the encryption parameter.
    std::shared_ptr<string> updatedBy_ = nullptr;
    // The time when the encryption parameter was updated.
    std::shared_ptr<string> updatedDate_ = nullptr;
    // The value of the encryption parameter.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
