// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SYNTAXCHECKANDTRANSFORMSQLCONVERSIONTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SYNTAXCHECKANDTRANSFORMSQLCONVERSIONTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace LHM20250116
{
namespace Models
{
  class SyntaxCheckAndTransformSqlConversionTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SyntaxCheckAndTransformSqlConversionTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(taskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, SyntaxCheckAndTransformSqlConversionTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(taskId, taskId_);
    };
    SyntaxCheckAndTransformSqlConversionTaskRequest() = default ;
    SyntaxCheckAndTransformSqlConversionTaskRequest(const SyntaxCheckAndTransformSqlConversionTaskRequest &) = default ;
    SyntaxCheckAndTransformSqlConversionTaskRequest(SyntaxCheckAndTransformSqlConversionTaskRequest &&) = default ;
    SyntaxCheckAndTransformSqlConversionTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SyntaxCheckAndTransformSqlConversionTaskRequest() = default ;
    SyntaxCheckAndTransformSqlConversionTaskRequest& operator=(const SyntaxCheckAndTransformSqlConversionTaskRequest &) = default ;
    SyntaxCheckAndTransformSqlConversionTaskRequest& operator=(SyntaxCheckAndTransformSqlConversionTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->taskId_ == nullptr; };
    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline int64_t getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0L) };
    inline SyntaxCheckAndTransformSqlConversionTaskRequest& setTaskId(int64_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // This parameter is required.
    shared_ptr<int64_t> taskId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace LHM20250116
#endif
