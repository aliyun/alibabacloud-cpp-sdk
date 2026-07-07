// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPARSEPROGRESSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETPARSEPROGRESSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20210602
{
namespace Models
{
  class GetParseProgressRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetParseProgressRequest& obj) { 
      DARABONBA_PTR_TO_JSON(TaskKey, taskKey_);
    };
    friend void from_json(const Darabonba::Json& j, GetParseProgressRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(TaskKey, taskKey_);
    };
    GetParseProgressRequest() = default ;
    GetParseProgressRequest(const GetParseProgressRequest &) = default ;
    GetParseProgressRequest(GetParseProgressRequest &&) = default ;
    GetParseProgressRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetParseProgressRequest() = default ;
    GetParseProgressRequest& operator=(const GetParseProgressRequest &) = default ;
    GetParseProgressRequest& operator=(GetParseProgressRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->taskKey_ == nullptr; };
    // taskKey Field Functions 
    bool hasTaskKey() const { return this->taskKey_ != nullptr;};
    void deleteTaskKey() { this->taskKey_ = nullptr;};
    inline string getTaskKey() const { DARABONBA_PTR_GET_DEFAULT(taskKey_, "") };
    inline GetParseProgressRequest& setTaskKey(string taskKey) { DARABONBA_PTR_SET_VALUE(taskKey_, taskKey) };


  protected:
    // The task key for parsing the skill package.
    // 
    // This parameter is required.
    shared_ptr<string> taskKey_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20210602
#endif
