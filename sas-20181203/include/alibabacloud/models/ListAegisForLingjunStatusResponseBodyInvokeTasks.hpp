// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAEGISFORLINGJUNSTATUSRESPONSEBODYINVOKETASKS_HPP_
#define ALIBABACLOUD_MODELS_LISTAEGISFORLINGJUNSTATUSRESPONSEBODYINVOKETASKS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListAegisForLingjunStatusResponseBodyInvokeTasks : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAegisForLingjunStatusResponseBodyInvokeTasks& obj) { 
      DARABONBA_PTR_TO_JSON(InvokeId, invokeId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
    };
    friend void from_json(const Darabonba::Json& j, ListAegisForLingjunStatusResponseBodyInvokeTasks& obj) { 
      DARABONBA_PTR_FROM_JSON(InvokeId, invokeId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
    };
    ListAegisForLingjunStatusResponseBodyInvokeTasks() = default ;
    ListAegisForLingjunStatusResponseBodyInvokeTasks(const ListAegisForLingjunStatusResponseBodyInvokeTasks &) = default ;
    ListAegisForLingjunStatusResponseBodyInvokeTasks(ListAegisForLingjunStatusResponseBodyInvokeTasks &&) = default ;
    ListAegisForLingjunStatusResponseBodyInvokeTasks(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAegisForLingjunStatusResponseBodyInvokeTasks() = default ;
    ListAegisForLingjunStatusResponseBodyInvokeTasks& operator=(const ListAegisForLingjunStatusResponseBodyInvokeTasks &) = default ;
    ListAegisForLingjunStatusResponseBodyInvokeTasks& operator=(ListAegisForLingjunStatusResponseBodyInvokeTasks &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->invokeId_ == nullptr
        && return this->result_ == nullptr && return this->status_ == nullptr && return this->uuid_ == nullptr; };
    // invokeId Field Functions 
    bool hasInvokeId() const { return this->invokeId_ != nullptr;};
    void deleteInvokeId() { this->invokeId_ = nullptr;};
    inline string invokeId() const { DARABONBA_PTR_GET_DEFAULT(invokeId_, "") };
    inline ListAegisForLingjunStatusResponseBodyInvokeTasks& setInvokeId(string invokeId) { DARABONBA_PTR_SET_VALUE(invokeId_, invokeId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline string result() const { DARABONBA_PTR_GET_DEFAULT(result_, "") };
    inline ListAegisForLingjunStatusResponseBodyInvokeTasks& setResult(string result) { DARABONBA_PTR_SET_VALUE(result_, result) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline ListAegisForLingjunStatusResponseBodyInvokeTasks& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string uuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline ListAegisForLingjunStatusResponseBodyInvokeTasks& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    // Installation task ID for the Lingjun machine.
    std::shared_ptr<string> invokeId_ = nullptr;
    // Installation processing result. Values:
    // - success: Installation successful
    // - fail: Installation failed
    std::shared_ptr<string> result_ = nullptr;
    // Installation status. Values:
    // - **1**: Installation successful
    // - **0**: Installation failed
    std::shared_ptr<int32_t> status_ = nullptr;
    // Unique UUID for Lingjun bare metal.
    std::shared_ptr<string> uuid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
