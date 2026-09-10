// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSQLCONVERSIONRESULTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETSQLCONVERSIONRESULTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace LHM20250116
{
namespace Models
{
  class GetSqlConversionResultRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSqlConversionResultRequest& obj) { 
      DARABONBA_PTR_TO_JSON(page, page_);
      DARABONBA_PTR_TO_JSON(size, size_);
      DARABONBA_PTR_TO_JSON(taskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, GetSqlConversionResultRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(page, page_);
      DARABONBA_PTR_FROM_JSON(size, size_);
      DARABONBA_PTR_FROM_JSON(taskId, taskId_);
    };
    GetSqlConversionResultRequest() = default ;
    GetSqlConversionResultRequest(const GetSqlConversionResultRequest &) = default ;
    GetSqlConversionResultRequest(GetSqlConversionResultRequest &&) = default ;
    GetSqlConversionResultRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSqlConversionResultRequest() = default ;
    GetSqlConversionResultRequest& operator=(const GetSqlConversionResultRequest &) = default ;
    GetSqlConversionResultRequest& operator=(GetSqlConversionResultRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->page_ == nullptr
        && this->size_ == nullptr && this->taskId_ == nullptr; };
    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline int32_t getPage() const { DARABONBA_PTR_GET_DEFAULT(page_, 0) };
    inline GetSqlConversionResultRequest& setPage(int32_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int32_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0) };
    inline GetSqlConversionResultRequest& setSize(int32_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline int64_t getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0L) };
    inline GetSqlConversionResultRequest& setTaskId(int64_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // The page number.
    shared_ptr<int32_t> page_ {};
    // The number of entries per page.
    shared_ptr<int32_t> size_ {};
    // The task ID that uniquely identifies a task.
    shared_ptr<int64_t> taskId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace LHM20250116
#endif
