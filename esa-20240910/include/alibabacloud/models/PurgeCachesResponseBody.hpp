// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PURGECACHESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_PURGECACHESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class PurgeCachesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PurgeCachesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, PurgeCachesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    PurgeCachesResponseBody() = default ;
    PurgeCachesResponseBody(const PurgeCachesResponseBody &) = default ;
    PurgeCachesResponseBody(PurgeCachesResponseBody &&) = default ;
    PurgeCachesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PurgeCachesResponseBody() = default ;
    PurgeCachesResponseBody& operator=(const PurgeCachesResponseBody &) = default ;
    PurgeCachesResponseBody& operator=(PurgeCachesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->taskId_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline PurgeCachesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline PurgeCachesResponseBody& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // Request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Task ID, which is returned when you create a refresh or preheat task.
    std::shared_ptr<string> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
