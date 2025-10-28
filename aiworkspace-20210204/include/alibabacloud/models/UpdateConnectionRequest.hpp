// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECONNECTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATECONNECTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <vector>
#include <alibabacloud/models/UpdateConnectionRequestModels.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIWorkSpace20210204
{
namespace Models
{
  class UpdateConnectionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateConnectionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Configs, configs_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Models, models_);
      DARABONBA_PTR_TO_JSON(Secrets, secrets_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateConnectionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Configs, configs_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Models, models_);
      DARABONBA_PTR_FROM_JSON(Secrets, secrets_);
    };
    UpdateConnectionRequest() = default ;
    UpdateConnectionRequest(const UpdateConnectionRequest &) = default ;
    UpdateConnectionRequest(UpdateConnectionRequest &&) = default ;
    UpdateConnectionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateConnectionRequest() = default ;
    UpdateConnectionRequest& operator=(const UpdateConnectionRequest &) = default ;
    UpdateConnectionRequest& operator=(UpdateConnectionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->configs_ == nullptr
        && return this->description_ == nullptr && return this->models_ == nullptr && return this->secrets_ == nullptr; };
    // configs Field Functions 
    bool hasConfigs() const { return this->configs_ != nullptr;};
    void deleteConfigs() { this->configs_ = nullptr;};
    inline const map<string, string> & configs() const { DARABONBA_PTR_GET_CONST(configs_, map<string, string>) };
    inline map<string, string> configs() { DARABONBA_PTR_GET(configs_, map<string, string>) };
    inline UpdateConnectionRequest& setConfigs(const map<string, string> & configs) { DARABONBA_PTR_SET_VALUE(configs_, configs) };
    inline UpdateConnectionRequest& setConfigs(map<string, string> && configs) { DARABONBA_PTR_SET_RVALUE(configs_, configs) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateConnectionRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // models Field Functions 
    bool hasModels() const { return this->models_ != nullptr;};
    void deleteModels() { this->models_ = nullptr;};
    inline const vector<UpdateConnectionRequestModels> & models() const { DARABONBA_PTR_GET_CONST(models_, vector<UpdateConnectionRequestModels>) };
    inline vector<UpdateConnectionRequestModels> models() { DARABONBA_PTR_GET(models_, vector<UpdateConnectionRequestModels>) };
    inline UpdateConnectionRequest& setModels(const vector<UpdateConnectionRequestModels> & models) { DARABONBA_PTR_SET_VALUE(models_, models) };
    inline UpdateConnectionRequest& setModels(vector<UpdateConnectionRequestModels> && models) { DARABONBA_PTR_SET_RVALUE(models_, models) };


    // secrets Field Functions 
    bool hasSecrets() const { return this->secrets_ != nullptr;};
    void deleteSecrets() { this->secrets_ = nullptr;};
    inline const map<string, string> & secrets() const { DARABONBA_PTR_GET_CONST(secrets_, map<string, string>) };
    inline map<string, string> secrets() { DARABONBA_PTR_GET(secrets_, map<string, string>) };
    inline UpdateConnectionRequest& setSecrets(const map<string, string> & secrets) { DARABONBA_PTR_SET_VALUE(secrets_, secrets) };
    inline UpdateConnectionRequest& setSecrets(map<string, string> && secrets) { DARABONBA_PTR_SET_RVALUE(secrets_, secrets) };


  protected:
    // The connection configuration. The connection configuration is in the key-value format. The keys configured for different connection types are different. For more information, see the supplementary description of the request parameters in CreateConnection.
    std::shared_ptr<map<string, string>> configs_ = nullptr;
    // The connection description.
    std::shared_ptr<string> description_ = nullptr;
    // The models.
    std::shared_ptr<vector<UpdateConnectionRequestModels>> models_ = nullptr;
    // The key-value configuration to be encrypted, such as the database logon password and the key for model connection.
    std::shared_ptr<map<string, string>> secrets_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
