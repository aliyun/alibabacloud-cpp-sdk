// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEHTTPAPIVERSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEHTTPAPIVERSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/HttpApiVersionConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class CreateHttpApiVersionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateHttpApiVersionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(versionConfig, versionConfig_);
    };
    friend void from_json(const Darabonba::Json& j, CreateHttpApiVersionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(versionConfig, versionConfig_);
    };
    CreateHttpApiVersionRequest() = default ;
    CreateHttpApiVersionRequest(const CreateHttpApiVersionRequest &) = default ;
    CreateHttpApiVersionRequest(CreateHttpApiVersionRequest &&) = default ;
    CreateHttpApiVersionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateHttpApiVersionRequest() = default ;
    CreateHttpApiVersionRequest& operator=(const CreateHttpApiVersionRequest &) = default ;
    CreateHttpApiVersionRequest& operator=(CreateHttpApiVersionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->versionConfig_ == nullptr; };
    // versionConfig Field Functions 
    bool hasVersionConfig() const { return this->versionConfig_ != nullptr;};
    void deleteVersionConfig() { this->versionConfig_ = nullptr;};
    inline const HttpApiVersionConfig & getVersionConfig() const { DARABONBA_PTR_GET_CONST(versionConfig_, HttpApiVersionConfig) };
    inline HttpApiVersionConfig getVersionConfig() { DARABONBA_PTR_GET(versionConfig_, HttpApiVersionConfig) };
    inline CreateHttpApiVersionRequest& setVersionConfig(const HttpApiVersionConfig & versionConfig) { DARABONBA_PTR_SET_VALUE(versionConfig_, versionConfig) };
    inline CreateHttpApiVersionRequest& setVersionConfig(HttpApiVersionConfig && versionConfig) { DARABONBA_PTR_SET_RVALUE(versionConfig_, versionConfig) };


  protected:
    shared_ptr<HttpApiVersionConfig> versionConfig_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
