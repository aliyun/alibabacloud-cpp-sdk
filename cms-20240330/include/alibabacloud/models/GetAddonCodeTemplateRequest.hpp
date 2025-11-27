// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETADDONCODETEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETADDONCODETEMPLATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class GetAddonCodeTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAddonCodeTemplateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(aliyunLang, aliyunLang_);
      DARABONBA_PTR_TO_JSON(environmentType, environmentType_);
      DARABONBA_PTR_TO_JSON(version, version_);
    };
    friend void from_json(const Darabonba::Json& j, GetAddonCodeTemplateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(aliyunLang, aliyunLang_);
      DARABONBA_PTR_FROM_JSON(environmentType, environmentType_);
      DARABONBA_PTR_FROM_JSON(version, version_);
    };
    GetAddonCodeTemplateRequest() = default ;
    GetAddonCodeTemplateRequest(const GetAddonCodeTemplateRequest &) = default ;
    GetAddonCodeTemplateRequest(GetAddonCodeTemplateRequest &&) = default ;
    GetAddonCodeTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAddonCodeTemplateRequest() = default ;
    GetAddonCodeTemplateRequest& operator=(const GetAddonCodeTemplateRequest &) = default ;
    GetAddonCodeTemplateRequest& operator=(GetAddonCodeTemplateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aliyunLang_ == nullptr
        && return this->environmentType_ == nullptr && return this->version_ == nullptr; };
    // aliyunLang Field Functions 
    bool hasAliyunLang() const { return this->aliyunLang_ != nullptr;};
    void deleteAliyunLang() { this->aliyunLang_ = nullptr;};
    inline string aliyunLang() const { DARABONBA_PTR_GET_DEFAULT(aliyunLang_, "") };
    inline GetAddonCodeTemplateRequest& setAliyunLang(string aliyunLang) { DARABONBA_PTR_SET_VALUE(aliyunLang_, aliyunLang) };


    // environmentType Field Functions 
    bool hasEnvironmentType() const { return this->environmentType_ != nullptr;};
    void deleteEnvironmentType() { this->environmentType_ = nullptr;};
    inline string environmentType() const { DARABONBA_PTR_GET_DEFAULT(environmentType_, "") };
    inline GetAddonCodeTemplateRequest& setEnvironmentType(string environmentType) { DARABONBA_PTR_SET_VALUE(environmentType_, environmentType) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline GetAddonCodeTemplateRequest& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    std::shared_ptr<string> aliyunLang_ = nullptr;
    std::shared_ptr<string> environmentType_ = nullptr;
    std::shared_ptr<string> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
