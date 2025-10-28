// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REGISTRYCERTCONFIG_HPP_
#define ALIBABACLOUD_MODELS_REGISTRYCERTCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FC20230330
{
namespace Models
{
  class RegistryCertConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RegistryCertConfig& obj) { 
      DARABONBA_PTR_TO_JSON(insecure, insecure_);
      DARABONBA_PTR_TO_JSON(rootCaCertBase64, rootCaCertBase64_);
    };
    friend void from_json(const Darabonba::Json& j, RegistryCertConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(insecure, insecure_);
      DARABONBA_PTR_FROM_JSON(rootCaCertBase64, rootCaCertBase64_);
    };
    RegistryCertConfig() = default ;
    RegistryCertConfig(const RegistryCertConfig &) = default ;
    RegistryCertConfig(RegistryCertConfig &&) = default ;
    RegistryCertConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RegistryCertConfig() = default ;
    RegistryCertConfig& operator=(const RegistryCertConfig &) = default ;
    RegistryCertConfig& operator=(RegistryCertConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->insecure_ == nullptr
        && return this->rootCaCertBase64_ == nullptr; };
    // insecure Field Functions 
    bool hasInsecure() const { return this->insecure_ != nullptr;};
    void deleteInsecure() { this->insecure_ = nullptr;};
    inline bool insecure() const { DARABONBA_PTR_GET_DEFAULT(insecure_, false) };
    inline RegistryCertConfig& setInsecure(bool insecure) { DARABONBA_PTR_SET_VALUE(insecure_, insecure) };


    // rootCaCertBase64 Field Functions 
    bool hasRootCaCertBase64() const { return this->rootCaCertBase64_ != nullptr;};
    void deleteRootCaCertBase64() { this->rootCaCertBase64_ = nullptr;};
    inline string rootCaCertBase64() const { DARABONBA_PTR_GET_DEFAULT(rootCaCertBase64_, "") };
    inline RegistryCertConfig& setRootCaCertBase64(string rootCaCertBase64) { DARABONBA_PTR_SET_VALUE(rootCaCertBase64_, rootCaCertBase64) };


  protected:
    std::shared_ptr<bool> insecure_ = nullptr;
    std::shared_ptr<string> rootCaCertBase64_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
