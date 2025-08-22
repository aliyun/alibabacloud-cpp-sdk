// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNREFRESHTASKBYIDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNREFRESHTASKBYIDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnRefreshTaskByIdRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnRefreshTaskByIdRequest& obj) { 
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnRefreshTaskByIdRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    DescribeDcdnRefreshTaskByIdRequest() = default ;
    DescribeDcdnRefreshTaskByIdRequest(const DescribeDcdnRefreshTaskByIdRequest &) = default ;
    DescribeDcdnRefreshTaskByIdRequest(DescribeDcdnRefreshTaskByIdRequest &&) = default ;
    DescribeDcdnRefreshTaskByIdRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnRefreshTaskByIdRequest() = default ;
    DescribeDcdnRefreshTaskByIdRequest& operator=(const DescribeDcdnRefreshTaskByIdRequest &) = default ;
    DescribeDcdnRefreshTaskByIdRequest& operator=(DescribeDcdnRefreshTaskByIdRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->taskId_ != nullptr; };
    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline DescribeDcdnRefreshTaskByIdRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // The ID of the task that you want to query. The following signature algorithms require different message digest algorithms:
    // 
    // *   Perform the [RefreshDcdnObjectCaches](https://help.aliyun.com/document_detail/130620.html) operation to query refresh task IDs.
    // *   Perform the [PreloadDcdnObjectCaches](https://help.aliyun.com/document_detail/130636.html) operation to query prefetch task IDs.
    // 
    // > You can specify at most 10 task IDs in each call. Separate IDs with commas (,).
    // 
    // This parameter is required.
    std::shared_ptr<string> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
