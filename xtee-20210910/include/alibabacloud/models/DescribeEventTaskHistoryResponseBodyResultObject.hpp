// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEVENTTASKHISTORYRESPONSEBODYRESULTOBJECT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEVENTTASKHISTORYRESPONSEBODYRESULTOBJECT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeEventTaskHistoryResponseBodyResultObject : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEventTaskHistoryResponseBodyResultObject& obj) { 
      DARABONBA_PTR_TO_JSON(taskCode, taskCode_);
      DARABONBA_PTR_TO_JSON(taskName, taskName_);
      DARABONBA_PTR_TO_JSON(taskStatus, taskStatus_);
      DARABONBA_PTR_TO_JSON(url, url_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEventTaskHistoryResponseBodyResultObject& obj) { 
      DARABONBA_PTR_FROM_JSON(taskCode, taskCode_);
      DARABONBA_PTR_FROM_JSON(taskName, taskName_);
      DARABONBA_PTR_FROM_JSON(taskStatus, taskStatus_);
      DARABONBA_PTR_FROM_JSON(url, url_);
    };
    DescribeEventTaskHistoryResponseBodyResultObject() = default ;
    DescribeEventTaskHistoryResponseBodyResultObject(const DescribeEventTaskHistoryResponseBodyResultObject &) = default ;
    DescribeEventTaskHistoryResponseBodyResultObject(DescribeEventTaskHistoryResponseBodyResultObject &&) = default ;
    DescribeEventTaskHistoryResponseBodyResultObject(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEventTaskHistoryResponseBodyResultObject() = default ;
    DescribeEventTaskHistoryResponseBodyResultObject& operator=(const DescribeEventTaskHistoryResponseBodyResultObject &) = default ;
    DescribeEventTaskHistoryResponseBodyResultObject& operator=(DescribeEventTaskHistoryResponseBodyResultObject &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->taskCode_ != nullptr
        && this->taskName_ != nullptr && this->taskStatus_ != nullptr && this->url_ != nullptr; };
    // taskCode Field Functions 
    bool hasTaskCode() const { return this->taskCode_ != nullptr;};
    void deleteTaskCode() { this->taskCode_ = nullptr;};
    inline string taskCode() const { DARABONBA_PTR_GET_DEFAULT(taskCode_, "") };
    inline DescribeEventTaskHistoryResponseBodyResultObject& setTaskCode(string taskCode) { DARABONBA_PTR_SET_VALUE(taskCode_, taskCode) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string taskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline DescribeEventTaskHistoryResponseBodyResultObject& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


    // taskStatus Field Functions 
    bool hasTaskStatus() const { return this->taskStatus_ != nullptr;};
    void deleteTaskStatus() { this->taskStatus_ = nullptr;};
    inline string taskStatus() const { DARABONBA_PTR_GET_DEFAULT(taskStatus_, "") };
    inline DescribeEventTaskHistoryResponseBodyResultObject& setTaskStatus(string taskStatus) { DARABONBA_PTR_SET_VALUE(taskStatus_, taskStatus) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline DescribeEventTaskHistoryResponseBodyResultObject& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    // Task code.
    std::shared_ptr<string> taskCode_ = nullptr;
    // Task name
    std::shared_ptr<string> taskName_ = nullptr;
    // Task status.
    std::shared_ptr<string> taskStatus_ = nullptr;
    // OSS download URL
    std::shared_ptr<string> url_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
