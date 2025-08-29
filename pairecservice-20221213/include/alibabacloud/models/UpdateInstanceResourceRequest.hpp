// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEINSTANCERESOURCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEINSTANCERESOURCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class UpdateInstanceResourceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateInstanceResourceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Config, config_);
      DARABONBA_PTR_TO_JSON(Uri, uri_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateInstanceResourceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Config, config_);
      DARABONBA_PTR_FROM_JSON(Uri, uri_);
    };
    UpdateInstanceResourceRequest() = default ;
    UpdateInstanceResourceRequest(const UpdateInstanceResourceRequest &) = default ;
    UpdateInstanceResourceRequest(UpdateInstanceResourceRequest &&) = default ;
    UpdateInstanceResourceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateInstanceResourceRequest() = default ;
    UpdateInstanceResourceRequest& operator=(const UpdateInstanceResourceRequest &) = default ;
    UpdateInstanceResourceRequest& operator=(UpdateInstanceResourceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->config_ != nullptr
        && this->uri_ != nullptr; };
    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline string config() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
    inline UpdateInstanceResourceRequest& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


    // uri Field Functions 
    bool hasUri() const { return this->uri_ != nullptr;};
    void deleteUri() { this->uri_ = nullptr;};
    inline string uri() const { DARABONBA_PTR_GET_DEFAULT(uri_, "") };
    inline UpdateInstanceResourceRequest& setUri(string uri) { DARABONBA_PTR_SET_VALUE(uri_, uri) };


  protected:
    std::shared_ptr<string> config_ = nullptr;
    std::shared_ptr<string> uri_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
