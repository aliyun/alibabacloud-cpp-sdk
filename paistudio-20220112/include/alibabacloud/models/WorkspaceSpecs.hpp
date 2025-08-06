// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_WORKSPACESPECS_HPP_
#define ALIBABACLOUD_MODELS_WORKSPACESPECS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/PaiStudio20220112.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{
namespace Models
{
  class WorkspaceSpecs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const WorkspaceSpecs& obj) { 
      DARABONBA_PTR_TO_JSON(Product, product_);
      DARABONBA_PTR_TO_JSON(Specs, specs_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, WorkspaceSpecs& obj) { 
      DARABONBA_PTR_FROM_JSON(Product, product_);
      DARABONBA_PTR_FROM_JSON(Specs, specs_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    WorkspaceSpecs() = default ;
    WorkspaceSpecs(const WorkspaceSpecs &) = default ;
    WorkspaceSpecs(WorkspaceSpecs &&) = default ;
    WorkspaceSpecs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~WorkspaceSpecs() = default ;
    WorkspaceSpecs& operator=(const WorkspaceSpecs &) = default ;
    WorkspaceSpecs& operator=(WorkspaceSpecs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->product_ != nullptr
        && this->specs_ != nullptr && this->workspaceId_ != nullptr; };
    // product Field Functions 
    bool hasProduct() const { return this->product_ != nullptr;};
    void deleteProduct() { this->product_ = nullptr;};
    inline string product() const { DARABONBA_PTR_GET_DEFAULT(product_, "") };
    inline WorkspaceSpecs& setProduct(string product) { DARABONBA_PTR_SET_VALUE(product_, product) };


    // specs Field Functions 
    bool hasSpecs() const { return this->specs_ != nullptr;};
    void deleteSpecs() { this->specs_ = nullptr;};
    inline const vector<WorkspaceSpec> & specs() const { DARABONBA_PTR_GET_CONST(specs_, vector<WorkspaceSpec>) };
    inline vector<WorkspaceSpec> specs() { DARABONBA_PTR_GET(specs_, vector<WorkspaceSpec>) };
    inline WorkspaceSpecs& setSpecs(const vector<WorkspaceSpec> & specs) { DARABONBA_PTR_SET_VALUE(specs_, specs) };
    inline WorkspaceSpecs& setSpecs(vector<WorkspaceSpec> && specs) { DARABONBA_PTR_SET_RVALUE(specs_, specs) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline WorkspaceSpecs& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    std::shared_ptr<string> product_ = nullptr;
    std::shared_ptr<vector<WorkspaceSpec>> specs_ = nullptr;
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
