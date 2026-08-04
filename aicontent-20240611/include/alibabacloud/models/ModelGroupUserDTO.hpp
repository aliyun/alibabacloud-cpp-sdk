// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODELGROUPUSERDTO_HPP_
#define ALIBABACLOUD_MODELS_MODELGROUPUSERDTO_HPP_
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
  class ModelGroupUserDTO : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModelGroupUserDTO& obj) { 
      DARABONBA_PTR_TO_JSON(apiKeys, apiKeys_);
      DARABONBA_PTR_TO_JSON(userId, userId_);
      DARABONBA_PTR_TO_JSON(userName, userName_);
    };
    friend void from_json(const Darabonba::Json& j, ModelGroupUserDTO& obj) { 
      DARABONBA_PTR_FROM_JSON(apiKeys, apiKeys_);
      DARABONBA_PTR_FROM_JSON(userId, userId_);
      DARABONBA_PTR_FROM_JSON(userName, userName_);
    };
    ModelGroupUserDTO() = default ;
    ModelGroupUserDTO(const ModelGroupUserDTO &) = default ;
    ModelGroupUserDTO(ModelGroupUserDTO &&) = default ;
    ModelGroupUserDTO(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModelGroupUserDTO() = default ;
    ModelGroupUserDTO& operator=(const ModelGroupUserDTO &) = default ;
    ModelGroupUserDTO& operator=(ModelGroupUserDTO &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiKeys_ == nullptr
        && this->userId_ == nullptr && this->userName_ == nullptr; };
    // apiKeys Field Functions 
    bool hasApiKeys() const { return this->apiKeys_ != nullptr;};
    void deleteApiKeys() { this->apiKeys_ = nullptr;};
    inline const vector<ModelGroupClientKeyItemDTO> & getApiKeys() const { DARABONBA_PTR_GET_CONST(apiKeys_, vector<ModelGroupClientKeyItemDTO>) };
    inline vector<ModelGroupClientKeyItemDTO> getApiKeys() { DARABONBA_PTR_GET(apiKeys_, vector<ModelGroupClientKeyItemDTO>) };
    inline ModelGroupUserDTO& setApiKeys(const vector<ModelGroupClientKeyItemDTO> & apiKeys) { DARABONBA_PTR_SET_VALUE(apiKeys_, apiKeys) };
    inline ModelGroupUserDTO& setApiKeys(vector<ModelGroupClientKeyItemDTO> && apiKeys) { DARABONBA_PTR_SET_RVALUE(apiKeys_, apiKeys) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline int64_t getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, 0L) };
    inline ModelGroupUserDTO& setUserId(int64_t userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline ModelGroupUserDTO& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


  protected:
    shared_ptr<vector<ModelGroupClientKeyItemDTO>> apiKeys_ {};
    shared_ptr<int64_t> userId_ {};
    shared_ptr<string> userName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiContent20240611
#endif
