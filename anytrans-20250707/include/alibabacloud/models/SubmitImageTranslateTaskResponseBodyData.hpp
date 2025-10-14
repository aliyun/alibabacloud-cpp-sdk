// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITIMAGETRANSLATETASKRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_SUBMITIMAGETRANSLATETASKRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AnyTrans20250707
{
namespace Models
{
  class SubmitImageTranslateTaskResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitImageTranslateTaskResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(taskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitImageTranslateTaskResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(taskId, taskId_);
    };
    SubmitImageTranslateTaskResponseBodyData() = default ;
    SubmitImageTranslateTaskResponseBodyData(const SubmitImageTranslateTaskResponseBodyData &) = default ;
    SubmitImageTranslateTaskResponseBodyData(SubmitImageTranslateTaskResponseBodyData &&) = default ;
    SubmitImageTranslateTaskResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitImageTranslateTaskResponseBodyData() = default ;
    SubmitImageTranslateTaskResponseBodyData& operator=(const SubmitImageTranslateTaskResponseBodyData &) = default ;
    SubmitImageTranslateTaskResponseBodyData& operator=(SubmitImageTranslateTaskResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->status_ == nullptr
        && return this->taskId_ == nullptr; };
    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline SubmitImageTranslateTaskResponseBodyData& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline SubmitImageTranslateTaskResponseBodyData& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AnyTrans20250707
#endif
