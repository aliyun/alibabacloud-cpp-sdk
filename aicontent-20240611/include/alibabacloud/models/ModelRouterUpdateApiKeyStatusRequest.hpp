// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODELROUTERUPDATEAPIKEYSTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODELROUTERUPDATEAPIKEYSTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiContent20240611
{
namespace Models
{
  class ModelRouterUpdateApiKeyStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModelRouterUpdateApiKeyStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ModelRouterUpdateApiKeyStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(status, status_);
    };
    ModelRouterUpdateApiKeyStatusRequest() = default ;
    ModelRouterUpdateApiKeyStatusRequest(const ModelRouterUpdateApiKeyStatusRequest &) = default ;
    ModelRouterUpdateApiKeyStatusRequest(ModelRouterUpdateApiKeyStatusRequest &&) = default ;
    ModelRouterUpdateApiKeyStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModelRouterUpdateApiKeyStatusRequest() = default ;
    ModelRouterUpdateApiKeyStatusRequest& operator=(const ModelRouterUpdateApiKeyStatusRequest &) = default ;
    ModelRouterUpdateApiKeyStatusRequest& operator=(ModelRouterUpdateApiKeyStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->status_ == nullptr; };
    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ModelRouterUpdateApiKeyStatusRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The status of the API key. Valid values:
    // 
    // - active: The API key is valid.
    // - disabled: The API key is invalid.
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiContent20240611
#endif
