// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIDENTIFYTASKSTATUSRESPONSEBODYCONTENT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIDENTIFYTASKSTATUSRESPONSEBODYCONTENT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sddp20190103
{
namespace Models
{
  class DescribeIdentifyTaskStatusResponseBodyContent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeIdentifyTaskStatusResponseBodyContent& obj) { 
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeIdentifyTaskStatusResponseBodyContent& obj) { 
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeIdentifyTaskStatusResponseBodyContent() = default ;
    DescribeIdentifyTaskStatusResponseBodyContent(const DescribeIdentifyTaskStatusResponseBodyContent &) = default ;
    DescribeIdentifyTaskStatusResponseBodyContent(DescribeIdentifyTaskStatusResponseBodyContent &&) = default ;
    DescribeIdentifyTaskStatusResponseBodyContent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeIdentifyTaskStatusResponseBodyContent() = default ;
    DescribeIdentifyTaskStatusResponseBodyContent& operator=(const DescribeIdentifyTaskStatusResponseBodyContent &) = default ;
    DescribeIdentifyTaskStatusResponseBodyContent& operator=(DescribeIdentifyTaskStatusResponseBodyContent &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->status_ != nullptr; };
    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline DescribeIdentifyTaskStatusResponseBodyContent& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // 任务运行状态。
    // - 0：未开始
    // - 1：运行中
    // - 2：已暂停
    // - 3：已终止
    // - 200：已完成
    std::shared_ptr<int32_t> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sddp20190103
#endif
