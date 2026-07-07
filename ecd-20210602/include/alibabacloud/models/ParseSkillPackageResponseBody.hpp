// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PARSESKILLPACKAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_PARSESKILLPACKAGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20210602
{
namespace Models
{
  class ParseSkillPackageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ParseSkillPackageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TaskKey, taskKey_);
    };
    friend void from_json(const Darabonba::Json& j, ParseSkillPackageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TaskKey, taskKey_);
    };
    ParseSkillPackageResponseBody() = default ;
    ParseSkillPackageResponseBody(const ParseSkillPackageResponseBody &) = default ;
    ParseSkillPackageResponseBody(ParseSkillPackageResponseBody &&) = default ;
    ParseSkillPackageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ParseSkillPackageResponseBody() = default ;
    ParseSkillPackageResponseBody& operator=(const ParseSkillPackageResponseBody &) = default ;
    ParseSkillPackageResponseBody& operator=(ParseSkillPackageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->taskKey_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ParseSkillPackageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // taskKey Field Functions 
    bool hasTaskKey() const { return this->taskKey_ != nullptr;};
    void deleteTaskKey() { this->taskKey_ = nullptr;};
    inline string getTaskKey() const { DARABONBA_PTR_GET_DEFAULT(taskKey_, "") };
    inline ParseSkillPackageResponseBody& setTaskKey(string taskKey) { DARABONBA_PTR_SET_VALUE(taskKey_, taskKey) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The key of the skill package parsing task.
    shared_ptr<string> taskKey_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20210602
#endif
