// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPPLICATIONADVANCEDCONFIGRESPONSEBODYAPPLICATIONADVANCEDCONFIGSCIMSERVERADVANCEDCONFIG_HPP_
#define ALIBABACLOUD_MODELS_GETAPPLICATIONADVANCEDCONFIGRESPONSEBODYAPPLICATIONADVANCEDCONFIGSCIMSERVERADVANCEDCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class GetApplicationAdvancedConfigResponseBodyApplicationAdvancedConfigScimServerAdvancedConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetApplicationAdvancedConfigResponseBodyApplicationAdvancedConfigScimServerAdvancedConfig& obj) { 
      DARABONBA_PTR_TO_JSON(SupportedUserCustomFieldIds, supportedUserCustomFieldIds_);
      DARABONBA_PTR_TO_JSON(UserCustomFieldNamespace, userCustomFieldNamespace_);
    };
    friend void from_json(const Darabonba::Json& j, GetApplicationAdvancedConfigResponseBodyApplicationAdvancedConfigScimServerAdvancedConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(SupportedUserCustomFieldIds, supportedUserCustomFieldIds_);
      DARABONBA_PTR_FROM_JSON(UserCustomFieldNamespace, userCustomFieldNamespace_);
    };
    GetApplicationAdvancedConfigResponseBodyApplicationAdvancedConfigScimServerAdvancedConfig() = default ;
    GetApplicationAdvancedConfigResponseBodyApplicationAdvancedConfigScimServerAdvancedConfig(const GetApplicationAdvancedConfigResponseBodyApplicationAdvancedConfigScimServerAdvancedConfig &) = default ;
    GetApplicationAdvancedConfigResponseBodyApplicationAdvancedConfigScimServerAdvancedConfig(GetApplicationAdvancedConfigResponseBodyApplicationAdvancedConfigScimServerAdvancedConfig &&) = default ;
    GetApplicationAdvancedConfigResponseBodyApplicationAdvancedConfigScimServerAdvancedConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetApplicationAdvancedConfigResponseBodyApplicationAdvancedConfigScimServerAdvancedConfig() = default ;
    GetApplicationAdvancedConfigResponseBodyApplicationAdvancedConfigScimServerAdvancedConfig& operator=(const GetApplicationAdvancedConfigResponseBodyApplicationAdvancedConfigScimServerAdvancedConfig &) = default ;
    GetApplicationAdvancedConfigResponseBodyApplicationAdvancedConfigScimServerAdvancedConfig& operator=(GetApplicationAdvancedConfigResponseBodyApplicationAdvancedConfigScimServerAdvancedConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->supportedUserCustomFieldIds_ == nullptr
        && return this->userCustomFieldNamespace_ == nullptr; };
    // supportedUserCustomFieldIds Field Functions 
    bool hasSupportedUserCustomFieldIds() const { return this->supportedUserCustomFieldIds_ != nullptr;};
    void deleteSupportedUserCustomFieldIds() { this->supportedUserCustomFieldIds_ = nullptr;};
    inline const vector<string> & supportedUserCustomFieldIds() const { DARABONBA_PTR_GET_CONST(supportedUserCustomFieldIds_, vector<string>) };
    inline vector<string> supportedUserCustomFieldIds() { DARABONBA_PTR_GET(supportedUserCustomFieldIds_, vector<string>) };
    inline GetApplicationAdvancedConfigResponseBodyApplicationAdvancedConfigScimServerAdvancedConfig& setSupportedUserCustomFieldIds(const vector<string> & supportedUserCustomFieldIds) { DARABONBA_PTR_SET_VALUE(supportedUserCustomFieldIds_, supportedUserCustomFieldIds) };
    inline GetApplicationAdvancedConfigResponseBodyApplicationAdvancedConfigScimServerAdvancedConfig& setSupportedUserCustomFieldIds(vector<string> && supportedUserCustomFieldIds) { DARABONBA_PTR_SET_RVALUE(supportedUserCustomFieldIds_, supportedUserCustomFieldIds) };


    // userCustomFieldNamespace Field Functions 
    bool hasUserCustomFieldNamespace() const { return this->userCustomFieldNamespace_ != nullptr;};
    void deleteUserCustomFieldNamespace() { this->userCustomFieldNamespace_ = nullptr;};
    inline string userCustomFieldNamespace() const { DARABONBA_PTR_GET_DEFAULT(userCustomFieldNamespace_, "") };
    inline GetApplicationAdvancedConfigResponseBodyApplicationAdvancedConfigScimServerAdvancedConfig& setUserCustomFieldNamespace(string userCustomFieldNamespace) { DARABONBA_PTR_SET_VALUE(userCustomFieldNamespace_, userCustomFieldNamespace) };


  protected:
    // 支持的用户自定义字段ID列表。
    std::shared_ptr<vector<string>> supportedUserCustomFieldIds_ = nullptr;
    // 用户扩展字段的命名空间。
    std::shared_ptr<string> userCustomFieldNamespace_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
