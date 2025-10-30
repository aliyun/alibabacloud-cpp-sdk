// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTREMOTEADBDATASOURCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTREMOTEADBDATASOURCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListRemoteADBDataSourcesResponseBodyDataSourceItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class ListRemoteADBDataSourcesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRemoteADBDataSourcesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataSourceItems, dataSourceItems_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, ListRemoteADBDataSourcesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataSourceItems, dataSourceItems_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    ListRemoteADBDataSourcesResponseBody() = default ;
    ListRemoteADBDataSourcesResponseBody(const ListRemoteADBDataSourcesResponseBody &) = default ;
    ListRemoteADBDataSourcesResponseBody(ListRemoteADBDataSourcesResponseBody &&) = default ;
    ListRemoteADBDataSourcesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRemoteADBDataSourcesResponseBody() = default ;
    ListRemoteADBDataSourcesResponseBody& operator=(const ListRemoteADBDataSourcesResponseBody &) = default ;
    ListRemoteADBDataSourcesResponseBody& operator=(ListRemoteADBDataSourcesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataSourceItems_ == nullptr
        && return this->requestId_ == nullptr && return this->taskId_ == nullptr; };
    // dataSourceItems Field Functions 
    bool hasDataSourceItems() const { return this->dataSourceItems_ != nullptr;};
    void deleteDataSourceItems() { this->dataSourceItems_ = nullptr;};
    inline const ListRemoteADBDataSourcesResponseBodyDataSourceItems & dataSourceItems() const { DARABONBA_PTR_GET_CONST(dataSourceItems_, ListRemoteADBDataSourcesResponseBodyDataSourceItems) };
    inline ListRemoteADBDataSourcesResponseBodyDataSourceItems dataSourceItems() { DARABONBA_PTR_GET(dataSourceItems_, ListRemoteADBDataSourcesResponseBodyDataSourceItems) };
    inline ListRemoteADBDataSourcesResponseBody& setDataSourceItems(const ListRemoteADBDataSourcesResponseBodyDataSourceItems & dataSourceItems) { DARABONBA_PTR_SET_VALUE(dataSourceItems_, dataSourceItems) };
    inline ListRemoteADBDataSourcesResponseBody& setDataSourceItems(ListRemoteADBDataSourcesResponseBodyDataSourceItems && dataSourceItems) { DARABONBA_PTR_SET_RVALUE(dataSourceItems_, dataSourceItems) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListRemoteADBDataSourcesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline int32_t taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0) };
    inline ListRemoteADBDataSourcesResponseBody& setTaskId(int32_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // Returns the successfully added data sharing service data.
    std::shared_ptr<ListRemoteADBDataSourcesResponseBodyDataSourceItems> dataSourceItems_ = nullptr;
    // Request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Task ID.
    std::shared_ptr<int32_t> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
