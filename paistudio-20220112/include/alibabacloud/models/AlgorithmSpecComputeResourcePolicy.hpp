// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ALGORITHMSPECCOMPUTERESOURCEPOLICY_HPP_
#define ALIBABACLOUD_MODELS_ALGORITHMSPECCOMPUTERESOURCEPOLICY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{
namespace Models
{
  class AlgorithmSpecComputeResourcePolicy : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AlgorithmSpecComputeResourcePolicy& obj) { 
      DARABONBA_PTR_TO_JSON(Value, value_);
      DARABONBA_PTR_TO_JSON(Version, version_);
    };
    friend void from_json(const Darabonba::Json& j, AlgorithmSpecComputeResourcePolicy& obj) { 
      DARABONBA_PTR_FROM_JSON(Value, value_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
    };
    AlgorithmSpecComputeResourcePolicy() = default ;
    AlgorithmSpecComputeResourcePolicy(const AlgorithmSpecComputeResourcePolicy &) = default ;
    AlgorithmSpecComputeResourcePolicy(AlgorithmSpecComputeResourcePolicy &&) = default ;
    AlgorithmSpecComputeResourcePolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AlgorithmSpecComputeResourcePolicy() = default ;
    AlgorithmSpecComputeResourcePolicy& operator=(const AlgorithmSpecComputeResourcePolicy &) = default ;
    AlgorithmSpecComputeResourcePolicy& operator=(AlgorithmSpecComputeResourcePolicy &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->value_ == nullptr
        && return this->version_ == nullptr; };
    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline AlgorithmSpecComputeResourcePolicy& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline AlgorithmSpecComputeResourcePolicy& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> value_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
