// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HYPERNODESCHEDULINGCONFIG_HPP_
#define ALIBABACLOUD_MODELS_HYPERNODESCHEDULINGCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDlc20201203
{
namespace Models
{
  class HyperNodeSchedulingConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HyperNodeSchedulingConfig& obj) { 
      DARABONBA_PTR_TO_JSON(MinAvailable, minAvailable_);
      DARABONBA_PTR_TO_JSON(QualityPolicy, qualityPolicy_);
    };
    friend void from_json(const Darabonba::Json& j, HyperNodeSchedulingConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(MinAvailable, minAvailable_);
      DARABONBA_PTR_FROM_JSON(QualityPolicy, qualityPolicy_);
    };
    HyperNodeSchedulingConfig() = default ;
    HyperNodeSchedulingConfig(const HyperNodeSchedulingConfig &) = default ;
    HyperNodeSchedulingConfig(HyperNodeSchedulingConfig &&) = default ;
    HyperNodeSchedulingConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HyperNodeSchedulingConfig() = default ;
    HyperNodeSchedulingConfig& operator=(const HyperNodeSchedulingConfig &) = default ;
    HyperNodeSchedulingConfig& operator=(HyperNodeSchedulingConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->minAvailable_ == nullptr
        && this->qualityPolicy_ == nullptr; };
    // minAvailable Field Functions 
    bool hasMinAvailable() const { return this->minAvailable_ != nullptr;};
    void deleteMinAvailable() { this->minAvailable_ = nullptr;};
    inline int32_t getMinAvailable() const { DARABONBA_PTR_GET_DEFAULT(minAvailable_, 0) };
    inline HyperNodeSchedulingConfig& setMinAvailable(int32_t minAvailable) { DARABONBA_PTR_SET_VALUE(minAvailable_, minAvailable) };


    // qualityPolicy Field Functions 
    bool hasQualityPolicy() const { return this->qualityPolicy_ != nullptr;};
    void deleteQualityPolicy() { this->qualityPolicy_ = nullptr;};
    inline string getQualityPolicy() const { DARABONBA_PTR_GET_DEFAULT(qualityPolicy_, "") };
    inline HyperNodeSchedulingConfig& setQualityPolicy(string qualityPolicy) { DARABONBA_PTR_SET_VALUE(qualityPolicy_, qualityPolicy) };


  protected:
    shared_ptr<int32_t> minAvailable_ {};
    shared_ptr<string> qualityPolicy_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDlc20201203
#endif
