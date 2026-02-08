// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEMATERIALTASKSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEMATERIALTASKSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class DeleteMaterialTaskShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteMaterialTaskShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(TaskIds, taskIdsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteMaterialTaskShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(TaskIds, taskIdsShrink_);
    };
    DeleteMaterialTaskShrinkRequest() = default ;
    DeleteMaterialTaskShrinkRequest(const DeleteMaterialTaskShrinkRequest &) = default ;
    DeleteMaterialTaskShrinkRequest(DeleteMaterialTaskShrinkRequest &&) = default ;
    DeleteMaterialTaskShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteMaterialTaskShrinkRequest() = default ;
    DeleteMaterialTaskShrinkRequest& operator=(const DeleteMaterialTaskShrinkRequest &) = default ;
    DeleteMaterialTaskShrinkRequest& operator=(DeleteMaterialTaskShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->taskIdsShrink_ == nullptr; };
    // taskIdsShrink Field Functions 
    bool hasTaskIdsShrink() const { return this->taskIdsShrink_ != nullptr;};
    void deleteTaskIdsShrink() { this->taskIdsShrink_ = nullptr;};
    inline string getTaskIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(taskIdsShrink_, "") };
    inline DeleteMaterialTaskShrinkRequest& setTaskIdsShrink(string taskIdsShrink) { DARABONBA_PTR_SET_VALUE(taskIdsShrink_, taskIdsShrink) };


  protected:
    // This parameter is required.
    shared_ptr<string> taskIdsShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
