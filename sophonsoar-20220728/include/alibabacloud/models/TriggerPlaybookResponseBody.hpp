// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRIGGERPLAYBOOKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_TRIGGERPLAYBOOKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sophonsoar20220728
{
namespace Models
{
  class TriggerPlaybookResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TriggerPlaybookResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TriggerUuid, triggerUuid_);
    };
    friend void from_json(const Darabonba::Json& j, TriggerPlaybookResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TriggerUuid, triggerUuid_);
    };
    TriggerPlaybookResponseBody() = default ;
    TriggerPlaybookResponseBody(const TriggerPlaybookResponseBody &) = default ;
    TriggerPlaybookResponseBody(TriggerPlaybookResponseBody &&) = default ;
    TriggerPlaybookResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TriggerPlaybookResponseBody() = default ;
    TriggerPlaybookResponseBody& operator=(const TriggerPlaybookResponseBody &) = default ;
    TriggerPlaybookResponseBody& operator=(TriggerPlaybookResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->triggerUuid_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline TriggerPlaybookResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // triggerUuid Field Functions 
    bool hasTriggerUuid() const { return this->triggerUuid_ != nullptr;};
    void deleteTriggerUuid() { this->triggerUuid_ = nullptr;};
    inline string triggerUuid() const { DARABONBA_PTR_GET_DEFAULT(triggerUuid_, "") };
    inline TriggerPlaybookResponseBody& setTriggerUuid(string triggerUuid) { DARABONBA_PTR_SET_VALUE(triggerUuid_, triggerUuid) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The running UUID of the playbook. This parameter is used to query the running result of the playbook.
    std::shared_ptr<string> triggerUuid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sophonsoar20220728
#endif
