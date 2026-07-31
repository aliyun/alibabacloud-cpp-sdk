// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODELROUTERUPDATEMODELGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODELROUTERUPDATEMODELGROUPREQUEST_HPP_
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
  class ModelRouterUpdateModelGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModelRouterUpdateModelGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(modelList, modelList_);
      DARABONBA_PTR_TO_JSON(name, name_);
    };
    friend void from_json(const Darabonba::Json& j, ModelRouterUpdateModelGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(modelList, modelList_);
      DARABONBA_PTR_FROM_JSON(name, name_);
    };
    ModelRouterUpdateModelGroupRequest() = default ;
    ModelRouterUpdateModelGroupRequest(const ModelRouterUpdateModelGroupRequest &) = default ;
    ModelRouterUpdateModelGroupRequest(ModelRouterUpdateModelGroupRequest &&) = default ;
    ModelRouterUpdateModelGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModelRouterUpdateModelGroupRequest() = default ;
    ModelRouterUpdateModelGroupRequest& operator=(const ModelRouterUpdateModelGroupRequest &) = default ;
    ModelRouterUpdateModelGroupRequest& operator=(ModelRouterUpdateModelGroupRequest &&) = default ;
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
    inline ModelRouterUpdateModelGroupRequest& setModelList(const vector<int64_t> & modelList) { DARABONBA_PTR_SET_VALUE(modelList_, modelList) };
    inline ModelRouterUpdateModelGroupRequest& setModelList(vector<int64_t> && modelList) { DARABONBA_PTR_SET_RVALUE(modelList_, modelList) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ModelRouterUpdateModelGroupRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // The full member array. An empty array clears all members.
    // 
    // This parameter is required.
    shared_ptr<vector<int64_t>> modelList_ {};
    // The group name. This parameter performs a full overwrite. Pass the current name even if you do not want to rename the group.
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiContent20240611
#endif
