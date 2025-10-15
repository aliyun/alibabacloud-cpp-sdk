// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETQUALITYCHECKTASKRESULTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETQUALITYCHECKTASKRESULTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DianJin20240628
{
namespace Models
{
  class GetQualityCheckTaskResultRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetQualityCheckTaskResultRequest& obj) { 
      DARABONBA_PTR_TO_JSON(taskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, GetQualityCheckTaskResultRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(taskId, taskId_);
    };
    GetQualityCheckTaskResultRequest() = default ;
    GetQualityCheckTaskResultRequest(const GetQualityCheckTaskResultRequest &) = default ;
    GetQualityCheckTaskResultRequest(GetQualityCheckTaskResultRequest &&) = default ;
    GetQualityCheckTaskResultRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetQualityCheckTaskResultRequest() = default ;
    GetQualityCheckTaskResultRequest& operator=(const GetQualityCheckTaskResultRequest &) = default ;
    GetQualityCheckTaskResultRequest& operator=(GetQualityCheckTaskResultRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->taskId_ == nullptr; };
    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline GetQualityCheckTaskResultRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
#endif
