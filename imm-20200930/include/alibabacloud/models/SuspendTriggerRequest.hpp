// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUSPENDTRIGGERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUSPENDTRIGGERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class SuspendTriggerRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SuspendTriggerRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
    };
    friend void from_json(const Darabonba::Json& j, SuspendTriggerRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
    };
    SuspendTriggerRequest() = default ;
    SuspendTriggerRequest(const SuspendTriggerRequest &) = default ;
    SuspendTriggerRequest(SuspendTriggerRequest &&) = default ;
    SuspendTriggerRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SuspendTriggerRequest() = default ;
    SuspendTriggerRequest& operator=(const SuspendTriggerRequest &) = default ;
    SuspendTriggerRequest& operator=(SuspendTriggerRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->id_ == nullptr
        && return this->projectName_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline SuspendTriggerRequest& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string projectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline SuspendTriggerRequest& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


  protected:
    // The ID of the trigger.[](~~479912~~)
    // 
    // This parameter is required.
    std::shared_ptr<string> id_ = nullptr;
    // The name of the project.[](~~478153~~)
    // 
    // This parameter is required.
    std::shared_ptr<string> projectName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
