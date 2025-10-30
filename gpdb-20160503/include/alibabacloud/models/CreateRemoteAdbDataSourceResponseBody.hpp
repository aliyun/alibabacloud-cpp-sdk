// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEREMOTEADBDATASOURCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEREMOTEADBDATASOURCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateRemoteADBDataSourceResponseBodyDataSourceItem.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class CreateRemoteADBDataSourceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRemoteADBDataSourceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataSourceItem, dataSourceItem_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRemoteADBDataSourceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataSourceItem, dataSourceItem_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    CreateRemoteADBDataSourceResponseBody() = default ;
    CreateRemoteADBDataSourceResponseBody(const CreateRemoteADBDataSourceResponseBody &) = default ;
    CreateRemoteADBDataSourceResponseBody(CreateRemoteADBDataSourceResponseBody &&) = default ;
    CreateRemoteADBDataSourceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRemoteADBDataSourceResponseBody() = default ;
    CreateRemoteADBDataSourceResponseBody& operator=(const CreateRemoteADBDataSourceResponseBody &) = default ;
    CreateRemoteADBDataSourceResponseBody& operator=(CreateRemoteADBDataSourceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataSourceItem_ == nullptr
        && return this->requestId_ == nullptr && return this->taskId_ == nullptr; };
    // dataSourceItem Field Functions 
    bool hasDataSourceItem() const { return this->dataSourceItem_ != nullptr;};
    void deleteDataSourceItem() { this->dataSourceItem_ = nullptr;};
    inline const CreateRemoteADBDataSourceResponseBodyDataSourceItem & dataSourceItem() const { DARABONBA_PTR_GET_CONST(dataSourceItem_, CreateRemoteADBDataSourceResponseBodyDataSourceItem) };
    inline CreateRemoteADBDataSourceResponseBodyDataSourceItem dataSourceItem() { DARABONBA_PTR_GET(dataSourceItem_, CreateRemoteADBDataSourceResponseBodyDataSourceItem) };
    inline CreateRemoteADBDataSourceResponseBody& setDataSourceItem(const CreateRemoteADBDataSourceResponseBodyDataSourceItem & dataSourceItem) { DARABONBA_PTR_SET_VALUE(dataSourceItem_, dataSourceItem) };
    inline CreateRemoteADBDataSourceResponseBody& setDataSourceItem(CreateRemoteADBDataSourceResponseBodyDataSourceItem && dataSourceItem) { DARABONBA_PTR_SET_RVALUE(dataSourceItem_, dataSourceItem) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateRemoteADBDataSourceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline int32_t taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0) };
    inline CreateRemoteADBDataSourceResponseBody& setTaskId(int32_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // Returns the successfully added data sharing service data.
    std::shared_ptr<CreateRemoteADBDataSourceResponseBodyDataSourceItem> dataSourceItem_ = nullptr;
    // Request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Workflow task ID.
    std::shared_ptr<int32_t> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
