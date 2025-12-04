// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEEMBODIEDAIPLATFORMREQUESTRAYCONFIG_HPP_
#define ALIBABACLOUD_MODELS_CREATEEMBODIEDAIPLATFORMREQUESTRAYCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateEmbodiedAIPlatformRequestRayConfigWorkerGroups.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ADBAI20250812
{
namespace Models
{
  class CreateEmbodiedAIPlatformRequestRayConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateEmbodiedAIPlatformRequestRayConfig& obj) { 
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(HeadSpec, headSpec_);
      DARABONBA_PTR_TO_JSON(WorkerGroups, workerGroups_);
    };
    friend void from_json(const Darabonba::Json& j, CreateEmbodiedAIPlatformRequestRayConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(HeadSpec, headSpec_);
      DARABONBA_PTR_FROM_JSON(WorkerGroups, workerGroups_);
    };
    CreateEmbodiedAIPlatformRequestRayConfig() = default ;
    CreateEmbodiedAIPlatformRequestRayConfig(const CreateEmbodiedAIPlatformRequestRayConfig &) = default ;
    CreateEmbodiedAIPlatformRequestRayConfig(CreateEmbodiedAIPlatformRequestRayConfig &&) = default ;
    CreateEmbodiedAIPlatformRequestRayConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateEmbodiedAIPlatformRequestRayConfig() = default ;
    CreateEmbodiedAIPlatformRequestRayConfig& operator=(const CreateEmbodiedAIPlatformRequestRayConfig &) = default ;
    CreateEmbodiedAIPlatformRequestRayConfig& operator=(CreateEmbodiedAIPlatformRequestRayConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->category_ == nullptr
        && return this->headSpec_ == nullptr && return this->workerGroups_ == nullptr; };
    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline CreateEmbodiedAIPlatformRequestRayConfig& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // headSpec Field Functions 
    bool hasHeadSpec() const { return this->headSpec_ != nullptr;};
    void deleteHeadSpec() { this->headSpec_ = nullptr;};
    inline string headSpec() const { DARABONBA_PTR_GET_DEFAULT(headSpec_, "") };
    inline CreateEmbodiedAIPlatformRequestRayConfig& setHeadSpec(string headSpec) { DARABONBA_PTR_SET_VALUE(headSpec_, headSpec) };


    // workerGroups Field Functions 
    bool hasWorkerGroups() const { return this->workerGroups_ != nullptr;};
    void deleteWorkerGroups() { this->workerGroups_ = nullptr;};
    inline const vector<Models::CreateEmbodiedAIPlatformRequestRayConfigWorkerGroups> & workerGroups() const { DARABONBA_PTR_GET_CONST(workerGroups_, vector<Models::CreateEmbodiedAIPlatformRequestRayConfigWorkerGroups>) };
    inline vector<Models::CreateEmbodiedAIPlatformRequestRayConfigWorkerGroups> workerGroups() { DARABONBA_PTR_GET(workerGroups_, vector<Models::CreateEmbodiedAIPlatformRequestRayConfigWorkerGroups>) };
    inline CreateEmbodiedAIPlatformRequestRayConfig& setWorkerGroups(const vector<Models::CreateEmbodiedAIPlatformRequestRayConfigWorkerGroups> & workerGroups) { DARABONBA_PTR_SET_VALUE(workerGroups_, workerGroups) };
    inline CreateEmbodiedAIPlatformRequestRayConfig& setWorkerGroups(vector<Models::CreateEmbodiedAIPlatformRequestRayConfigWorkerGroups> && workerGroups) { DARABONBA_PTR_SET_RVALUE(workerGroups_, workerGroups) };


  protected:
    std::shared_ptr<string> category_ = nullptr;
    std::shared_ptr<string> headSpec_ = nullptr;
    std::shared_ptr<vector<Models::CreateEmbodiedAIPlatformRequestRayConfigWorkerGroups>> workerGroups_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ADBAI20250812
#endif
