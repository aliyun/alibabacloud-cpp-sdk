// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYCLUSTERACCESSWHITELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYCLUSTERACCESSWHITELISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class ModifyClusterAccessWhiteListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyClusterAccessWhiteListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyClusterAccessWhiteListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    ModifyClusterAccessWhiteListResponseBody() = default ;
    ModifyClusterAccessWhiteListResponseBody(const ModifyClusterAccessWhiteListResponseBody &) = default ;
    ModifyClusterAccessWhiteListResponseBody(ModifyClusterAccessWhiteListResponseBody &&) = default ;
    ModifyClusterAccessWhiteListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyClusterAccessWhiteListResponseBody() = default ;
    ModifyClusterAccessWhiteListResponseBody& operator=(const ModifyClusterAccessWhiteListResponseBody &) = default ;
    ModifyClusterAccessWhiteListResponseBody& operator=(ModifyClusterAccessWhiteListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->DBClusterId_ != nullptr
        && this->requestId_ != nullptr && this->taskId_ != nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline ModifyClusterAccessWhiteListResponseBody& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ModifyClusterAccessWhiteListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline int32_t taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0) };
    inline ModifyClusterAccessWhiteListResponseBody& setTaskId(int32_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // The ID of the AnalyticDB for MySQL Data Lakehouse Edition cluster.
    std::shared_ptr<string> DBClusterId_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The task ID.
    std::shared_ptr<int32_t> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
