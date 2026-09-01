// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DEBUGPLAYBOOKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DEBUGPLAYBOOKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sophonsoar20220728
{
namespace Models
{
  class DebugPlaybookResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DebugPlaybookResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RequestUuid, requestUuid_);
    };
    friend void from_json(const Darabonba::Json& j, DebugPlaybookResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RequestUuid, requestUuid_);
    };
    DebugPlaybookResponseBody() = default ;
    DebugPlaybookResponseBody(const DebugPlaybookResponseBody &) = default ;
    DebugPlaybookResponseBody(DebugPlaybookResponseBody &&) = default ;
    DebugPlaybookResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DebugPlaybookResponseBody() = default ;
    DebugPlaybookResponseBody& operator=(const DebugPlaybookResponseBody &) = default ;
    DebugPlaybookResponseBody& operator=(DebugPlaybookResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->requestUuid_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DebugPlaybookResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // requestUuid Field Functions 
    bool hasRequestUuid() const { return this->requestUuid_ != nullptr;};
    void deleteRequestUuid() { this->requestUuid_ = nullptr;};
    inline string getRequestUuid() const { DARABONBA_PTR_GET_DEFAULT(requestUuid_, "") };
    inline DebugPlaybookResponseBody& setRequestUuid(string requestUuid) { DARABONBA_PTR_SET_VALUE(requestUuid_, requestUuid) };


  protected:
    // The ID of the request. Alibaba Cloud generates a unique ID for each request. Use this ID to troubleshoot and locate issues.
    shared_ptr<string> requestId_ {};
    // The run UUID of the debugging task. Use this UUID to query information, such as the task result.
    shared_ptr<string> requestUuid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sophonsoar20220728
#endif
