// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODELGROUPCLIENTDTO_HPP_
#define ALIBABACLOUD_MODELS_MODELGROUPCLIENTDTO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ModelGroupClientKeyItemDTO.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiContent20240611
{
namespace Models
{
  class ModelGroupClientDTO : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModelGroupClientDTO& obj) { 
      DARABONBA_PTR_TO_JSON(apiKeys, apiKeys_);
      DARABONBA_PTR_TO_JSON(clientId, clientId_);
      DARABONBA_PTR_TO_JSON(clientName, clientName_);
    };
    friend void from_json(const Darabonba::Json& j, ModelGroupClientDTO& obj) { 
      DARABONBA_PTR_FROM_JSON(apiKeys, apiKeys_);
      DARABONBA_PTR_FROM_JSON(clientId, clientId_);
      DARABONBA_PTR_FROM_JSON(clientName, clientName_);
    };
    ModelGroupClientDTO() = default ;
    ModelGroupClientDTO(const ModelGroupClientDTO &) = default ;
    ModelGroupClientDTO(ModelGroupClientDTO &&) = default ;
    ModelGroupClientDTO(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModelGroupClientDTO() = default ;
    ModelGroupClientDTO& operator=(const ModelGroupClientDTO &) = default ;
    ModelGroupClientDTO& operator=(ModelGroupClientDTO &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiKeys_ == nullptr
        && this->clientId_ == nullptr && this->clientName_ == nullptr; };
    // apiKeys Field Functions 
    bool hasApiKeys() const { return this->apiKeys_ != nullptr;};
    void deleteApiKeys() { this->apiKeys_ = nullptr;};
    inline const vector<ModelGroupClientKeyItemDTO> & getApiKeys() const { DARABONBA_PTR_GET_CONST(apiKeys_, vector<ModelGroupClientKeyItemDTO>) };
    inline vector<ModelGroupClientKeyItemDTO> getApiKeys() { DARABONBA_PTR_GET(apiKeys_, vector<ModelGroupClientKeyItemDTO>) };
    inline ModelGroupClientDTO& setApiKeys(const vector<ModelGroupClientKeyItemDTO> & apiKeys) { DARABONBA_PTR_SET_VALUE(apiKeys_, apiKeys) };
    inline ModelGroupClientDTO& setApiKeys(vector<ModelGroupClientKeyItemDTO> && apiKeys) { DARABONBA_PTR_SET_RVALUE(apiKeys_, apiKeys) };


    // clientId Field Functions 
    bool hasClientId() const { return this->clientId_ != nullptr;};
    void deleteClientId() { this->clientId_ = nullptr;};
    inline int64_t getClientId() const { DARABONBA_PTR_GET_DEFAULT(clientId_, 0L) };
    inline ModelGroupClientDTO& setClientId(int64_t clientId) { DARABONBA_PTR_SET_VALUE(clientId_, clientId) };


    // clientName Field Functions 
    bool hasClientName() const { return this->clientName_ != nullptr;};
    void deleteClientName() { this->clientName_ = nullptr;};
    inline string getClientName() const { DARABONBA_PTR_GET_DEFAULT(clientName_, "") };
    inline ModelGroupClientDTO& setClientName(string clientName) { DARABONBA_PTR_SET_VALUE(clientName_, clientName) };


  protected:
    shared_ptr<vector<ModelGroupClientKeyItemDTO>> apiKeys_ {};
    shared_ptr<int64_t> clientId_ {};
    shared_ptr<string> clientName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiContent20240611
#endif
