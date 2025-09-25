// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPROMETHEUSINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETPROMETHEUSINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class GetPrometheusInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPrometheusInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(aliyunLang, aliyunLang_);
      DARABONBA_PTR_TO_JSON(resourceGroupId, resourceGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, GetPrometheusInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(aliyunLang, aliyunLang_);
      DARABONBA_PTR_FROM_JSON(resourceGroupId, resourceGroupId_);
    };
    GetPrometheusInstanceRequest() = default ;
    GetPrometheusInstanceRequest(const GetPrometheusInstanceRequest &) = default ;
    GetPrometheusInstanceRequest(GetPrometheusInstanceRequest &&) = default ;
    GetPrometheusInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPrometheusInstanceRequest() = default ;
    GetPrometheusInstanceRequest& operator=(const GetPrometheusInstanceRequest &) = default ;
    GetPrometheusInstanceRequest& operator=(GetPrometheusInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->aliyunLang_ != nullptr
        && this->resourceGroupId_ != nullptr; };
    // aliyunLang Field Functions 
    bool hasAliyunLang() const { return this->aliyunLang_ != nullptr;};
    void deleteAliyunLang() { this->aliyunLang_ = nullptr;};
    inline string aliyunLang() const { DARABONBA_PTR_GET_DEFAULT(aliyunLang_, "") };
    inline GetPrometheusInstanceRequest& setAliyunLang(string aliyunLang) { DARABONBA_PTR_SET_VALUE(aliyunLang_, aliyunLang) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline GetPrometheusInstanceRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


  protected:
    std::shared_ptr<string> aliyunLang_ = nullptr;
    std::shared_ptr<string> resourceGroupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
