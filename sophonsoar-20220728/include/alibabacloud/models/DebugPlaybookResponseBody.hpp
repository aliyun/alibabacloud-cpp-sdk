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
        && return this->requestUuid_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DebugPlaybookResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // requestUuid Field Functions 
    bool hasRequestUuid() const { return this->requestUuid_ != nullptr;};
    void deleteRequestUuid() { this->requestUuid_ = nullptr;};
    inline string requestUuid() const { DARABONBA_PTR_GET_DEFAULT(requestUuid_, "") };
    inline DebugPlaybookResponseBody& setRequestUuid(string requestUuid) { DARABONBA_PTR_SET_VALUE(requestUuid_, requestUuid) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The UUID of the debugging task. You can use the UUID to query the result and other details of the debugging task.
    std::shared_ptr<string> requestUuid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sophonsoar20220728
#endif
