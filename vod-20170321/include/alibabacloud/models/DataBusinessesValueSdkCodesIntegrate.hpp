// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DATABUSINESSESVALUESDKCODESINTEGRATE_HPP_
#define ALIBABACLOUD_MODELS_DATABUSINESSESVALUESDKCODESINTEGRATE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DataBusinessesValueSdkCodesIntegrate : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DataBusinessesValueSdkCodesIntegrate& obj) { 
      DARABONBA_PTR_TO_JSON(Platform, platform_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Pkg, pkg_);
      DARABONBA_PTR_TO_JSON(Size, size_);
    };
    friend void from_json(const Darabonba::Json& j, DataBusinessesValueSdkCodesIntegrate& obj) { 
      DARABONBA_PTR_FROM_JSON(Platform, platform_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Pkg, pkg_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
    };
    DataBusinessesValueSdkCodesIntegrate() = default ;
    DataBusinessesValueSdkCodesIntegrate(const DataBusinessesValueSdkCodesIntegrate &) = default ;
    DataBusinessesValueSdkCodesIntegrate(DataBusinessesValueSdkCodesIntegrate &&) = default ;
    DataBusinessesValueSdkCodesIntegrate(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DataBusinessesValueSdkCodesIntegrate() = default ;
    DataBusinessesValueSdkCodesIntegrate& operator=(const DataBusinessesValueSdkCodesIntegrate &) = default ;
    DataBusinessesValueSdkCodesIntegrate& operator=(DataBusinessesValueSdkCodesIntegrate &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->platform_ != nullptr
        && this->code_ != nullptr && this->pkg_ != nullptr && this->size_ != nullptr; };
    // platform Field Functions 
    bool hasPlatform() const { return this->platform_ != nullptr;};
    void deletePlatform() { this->platform_ = nullptr;};
    inline string platform() const { DARABONBA_PTR_GET_DEFAULT(platform_, "") };
    inline DataBusinessesValueSdkCodesIntegrate& setPlatform(string platform) { DARABONBA_PTR_SET_VALUE(platform_, platform) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DataBusinessesValueSdkCodesIntegrate& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // pkg Field Functions 
    bool hasPkg() const { return this->pkg_ != nullptr;};
    void deletePkg() { this->pkg_ = nullptr;};
    inline string pkg() const { DARABONBA_PTR_GET_DEFAULT(pkg_, "") };
    inline DataBusinessesValueSdkCodesIntegrate& setPkg(string pkg) { DARABONBA_PTR_SET_VALUE(pkg_, pkg) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline string size() const { DARABONBA_PTR_GET_DEFAULT(size_, "") };
    inline DataBusinessesValueSdkCodesIntegrate& setSize(string size) { DARABONBA_PTR_SET_VALUE(size_, size) };


  protected:
    std::shared_ptr<string> platform_ = nullptr;
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<string> pkg_ = nullptr;
    std::shared_ptr<string> size_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
