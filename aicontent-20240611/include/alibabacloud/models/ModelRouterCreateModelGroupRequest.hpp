// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODELROUTERCREATEMODELGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODELROUTERCREATEMODELGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiContent20240611
{
namespace Models
{
  class ModelRouterCreateModelGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModelRouterCreateModelGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(modelList, modelList_);
      DARABONBA_PTR_TO_JSON(name, name_);
    };
    friend void from_json(const Darabonba::Json& j, ModelRouterCreateModelGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(modelList, modelList_);
      DARABONBA_PTR_FROM_JSON(name, name_);
    };
    ModelRouterCreateModelGroupRequest() = default ;
    ModelRouterCreateModelGroupRequest(const ModelRouterCreateModelGroupRequest &) = default ;
    ModelRouterCreateModelGroupRequest(ModelRouterCreateModelGroupRequest &&) = default ;
    ModelRouterCreateModelGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModelRouterCreateModelGroupRequest() = default ;
    ModelRouterCreateModelGroupRequest& operator=(const ModelRouterCreateModelGroupRequest &) = default ;
    ModelRouterCreateModelGroupRequest& operator=(ModelRouterCreateModelGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->modelList_ == nullptr
        && this->name_ == nullptr; };
    // modelList Field Functions 
    bool hasModelList() const { return this->modelList_ != nullptr;};
    void deleteModelList() { this->modelList_ = nullptr;};
    inline const vector<int64_t> & getModelList() const { DARABONBA_PTR_GET_CONST(modelList_, vector<int64_t>) };
    inline vector<int64_t> getModelList() { DARABONBA_PTR_GET(modelList_, vector<int64_t>) };
    inline ModelRouterCreateModelGroupRequest& setModelList(const vector<int64_t> & modelList) { DARABONBA_PTR_SET_VALUE(modelList_, modelList) };
    inline ModelRouterCreateModelGroupRequest& setModelList(vector<int64_t> && modelList) { DARABONBA_PTR_SET_RVALUE(modelList_, modelList) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ModelRouterCreateModelGroupRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // The array of model IDs. At least one element is required. Each element must be the numeric model ID, not the model identifier.
    // 
    // This parameter is required.
    shared_ptr<vector<int64_t>> modelList_ {};
    // The group name. The name must be 1 to 50 characters in length and must be unique within the tenant (case-insensitive).
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiContent20240611
#endif
