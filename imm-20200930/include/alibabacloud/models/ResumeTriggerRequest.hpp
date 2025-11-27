// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESUMETRIGGERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RESUMETRIGGERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class ResumeTriggerRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ResumeTriggerRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
    };
    friend void from_json(const Darabonba::Json& j, ResumeTriggerRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
    };
    ResumeTriggerRequest() = default ;
    ResumeTriggerRequest(const ResumeTriggerRequest &) = default ;
    ResumeTriggerRequest(ResumeTriggerRequest &&) = default ;
    ResumeTriggerRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ResumeTriggerRequest() = default ;
    ResumeTriggerRequest& operator=(const ResumeTriggerRequest &) = default ;
    ResumeTriggerRequest& operator=(ResumeTriggerRequest &&) = default ;
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
    inline ResumeTriggerRequest& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string projectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline ResumeTriggerRequest& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


  protected:
    // The ID of the trigger. You can obtain the ID from the response of the [CreateTrigger](https://help.aliyun.com/document_detail/479912.html) operation.
    // 
    // This parameter is required.
    std::shared_ptr<string> id_ = nullptr;
    // The name of the project. You can obtain the name of the project from the response of the [CreateProject](https://help.aliyun.com/document_detail/478153.html) operation.
    // 
    // This parameter is required.
    std::shared_ptr<string> projectName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
