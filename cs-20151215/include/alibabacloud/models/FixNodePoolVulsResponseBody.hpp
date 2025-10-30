// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FIXNODEPOOLVULSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_FIXNODEPOOLVULSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class FixNodePoolVulsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FixNodePoolVulsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(task_id, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, FixNodePoolVulsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(task_id, taskId_);
    };
    FixNodePoolVulsResponseBody() = default ;
    FixNodePoolVulsResponseBody(const FixNodePoolVulsResponseBody &) = default ;
    FixNodePoolVulsResponseBody(FixNodePoolVulsResponseBody &&) = default ;
    FixNodePoolVulsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FixNodePoolVulsResponseBody() = default ;
    FixNodePoolVulsResponseBody& operator=(const FixNodePoolVulsResponseBody &) = default ;
    FixNodePoolVulsResponseBody& operator=(FixNodePoolVulsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->taskId_ == nullptr; };
    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline FixNodePoolVulsResponseBody& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // The ID of the CVE patching task.
    std::shared_ptr<string> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
