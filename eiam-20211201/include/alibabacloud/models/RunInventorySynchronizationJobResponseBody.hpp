// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNINVENTORYSYNCHRONIZATIONJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_RUNINVENTORYSYNCHRONIZATIONJOBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class RunInventorySynchronizationJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunInventorySynchronizationJobResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InventorySynchronizationJobId, inventorySynchronizationJobId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, RunInventorySynchronizationJobResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InventorySynchronizationJobId, inventorySynchronizationJobId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    RunInventorySynchronizationJobResponseBody() = default ;
    RunInventorySynchronizationJobResponseBody(const RunInventorySynchronizationJobResponseBody &) = default ;
    RunInventorySynchronizationJobResponseBody(RunInventorySynchronizationJobResponseBody &&) = default ;
    RunInventorySynchronizationJobResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunInventorySynchronizationJobResponseBody() = default ;
    RunInventorySynchronizationJobResponseBody& operator=(const RunInventorySynchronizationJobResponseBody &) = default ;
    RunInventorySynchronizationJobResponseBody& operator=(RunInventorySynchronizationJobResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->inventorySynchronizationJobId_ == nullptr
        && this->requestId_ == nullptr; };
    // inventorySynchronizationJobId Field Functions 
    bool hasInventorySynchronizationJobId() const { return this->inventorySynchronizationJobId_ != nullptr;};
    void deleteInventorySynchronizationJobId() { this->inventorySynchronizationJobId_ = nullptr;};
    inline string getInventorySynchronizationJobId() const { DARABONBA_PTR_GET_DEFAULT(inventorySynchronizationJobId_, "") };
    inline RunInventorySynchronizationJobResponseBody& setInventorySynchronizationJobId(string inventorySynchronizationJobId) { DARABONBA_PTR_SET_VALUE(inventorySynchronizationJobId_, inventorySynchronizationJobId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RunInventorySynchronizationJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the synchronization task.
    shared_ptr<string> inventorySynchronizationJobId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
