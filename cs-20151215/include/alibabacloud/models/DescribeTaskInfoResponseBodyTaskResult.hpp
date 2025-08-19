// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETASKINFORESPONSEBODYTASKRESULT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETASKINFORESPONSEBODYTASKRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class DescribeTaskInfoResponseBodyTaskResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTaskInfoResponseBodyTaskResult& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTaskInfoResponseBodyTaskResult& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(status, status_);
    };
    DescribeTaskInfoResponseBodyTaskResult() = default ;
    DescribeTaskInfoResponseBodyTaskResult(const DescribeTaskInfoResponseBodyTaskResult &) = default ;
    DescribeTaskInfoResponseBodyTaskResult(DescribeTaskInfoResponseBodyTaskResult &&) = default ;
    DescribeTaskInfoResponseBodyTaskResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTaskInfoResponseBodyTaskResult() = default ;
    DescribeTaskInfoResponseBodyTaskResult& operator=(const DescribeTaskInfoResponseBodyTaskResult &) = default ;
    DescribeTaskInfoResponseBodyTaskResult& operator=(DescribeTaskInfoResponseBodyTaskResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr
        && this->status_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline string data() const { DARABONBA_PTR_GET_DEFAULT(data_, "") };
    inline DescribeTaskInfoResponseBodyTaskResult& setData(string data) { DARABONBA_PTR_SET_VALUE(data_, data) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeTaskInfoResponseBodyTaskResult& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The resources that are managed by the task. For a scale-out task, the value of this parameter is the ID of the instance that is added by the task.
    std::shared_ptr<string> data_ = nullptr;
    // The status of the scale-out task. Valid values:
    // 
    // *   `success`: The scale-out task is successful.
    // *   `success`: The scale-out task failed.
    // *   `initial`: The scale-out task is being initialized.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
