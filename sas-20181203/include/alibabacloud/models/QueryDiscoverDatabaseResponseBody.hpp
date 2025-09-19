// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYDISCOVERDATABASERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYDISCOVERDATABASERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class QueryDiscoverDatabaseResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryDiscoverDatabaseResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TaskProgress, taskProgress_);
    };
    friend void from_json(const Darabonba::Json& j, QueryDiscoverDatabaseResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TaskProgress, taskProgress_);
    };
    QueryDiscoverDatabaseResponseBody() = default ;
    QueryDiscoverDatabaseResponseBody(const QueryDiscoverDatabaseResponseBody &) = default ;
    QueryDiscoverDatabaseResponseBody(QueryDiscoverDatabaseResponseBody &&) = default ;
    QueryDiscoverDatabaseResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryDiscoverDatabaseResponseBody() = default ;
    QueryDiscoverDatabaseResponseBody& operator=(const QueryDiscoverDatabaseResponseBody &) = default ;
    QueryDiscoverDatabaseResponseBody& operator=(QueryDiscoverDatabaseResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->taskProgress_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryDiscoverDatabaseResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // taskProgress Field Functions 
    bool hasTaskProgress() const { return this->taskProgress_ != nullptr;};
    void deleteTaskProgress() { this->taskProgress_ = nullptr;};
    inline int32_t taskProgress() const { DARABONBA_PTR_GET_DEFAULT(taskProgress_, 0) };
    inline QueryDiscoverDatabaseResponseBody& setTaskProgress(int32_t taskProgress) { DARABONBA_PTR_SET_VALUE(taskProgress_, taskProgress) };


  protected:
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
    // The progress of the database scan task in percentage.
    std::shared_ptr<int32_t> taskProgress_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
