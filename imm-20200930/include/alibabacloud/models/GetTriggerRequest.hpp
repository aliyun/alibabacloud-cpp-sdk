// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTRIGGERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETTRIGGERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class GetTriggerRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTriggerRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
    };
    friend void from_json(const Darabonba::Json& j, GetTriggerRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
    };
    GetTriggerRequest() = default ;
    GetTriggerRequest(const GetTriggerRequest &) = default ;
    GetTriggerRequest(GetTriggerRequest &&) = default ;
    GetTriggerRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTriggerRequest() = default ;
    GetTriggerRequest& operator=(const GetTriggerRequest &) = default ;
    GetTriggerRequest& operator=(GetTriggerRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->id_ != nullptr
        && this->projectName_ != nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline GetTriggerRequest& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string projectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline GetTriggerRequest& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


  protected:
    // The ID of the trigger. You can obtain the ID from the response parameters of the [CreateTrigger](https://help.aliyun.com/document_detail/479912.html) operation.
    // 
    // This parameter is required.
    std::shared_ptr<string> id_ = nullptr;
    // The name of the project. For more information, see [CreateProject](https://help.aliyun.com/document_detail/478153.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> projectName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
