// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INSTALLAEGISFORLINGJUNRESPONSEBODYINVOKETASKS_HPP_
#define ALIBABACLOUD_MODELS_INSTALLAEGISFORLINGJUNRESPONSEBODYINVOKETASKS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class InstallAegisForLingjunResponseBodyInvokeTasks : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InstallAegisForLingjunResponseBodyInvokeTasks& obj) { 
      DARABONBA_PTR_TO_JSON(InvokeId, invokeId_);
      DARABONBA_PTR_TO_JSON(Uuids, uuids_);
    };
    friend void from_json(const Darabonba::Json& j, InstallAegisForLingjunResponseBodyInvokeTasks& obj) { 
      DARABONBA_PTR_FROM_JSON(InvokeId, invokeId_);
      DARABONBA_PTR_FROM_JSON(Uuids, uuids_);
    };
    InstallAegisForLingjunResponseBodyInvokeTasks() = default ;
    InstallAegisForLingjunResponseBodyInvokeTasks(const InstallAegisForLingjunResponseBodyInvokeTasks &) = default ;
    InstallAegisForLingjunResponseBodyInvokeTasks(InstallAegisForLingjunResponseBodyInvokeTasks &&) = default ;
    InstallAegisForLingjunResponseBodyInvokeTasks(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InstallAegisForLingjunResponseBodyInvokeTasks() = default ;
    InstallAegisForLingjunResponseBodyInvokeTasks& operator=(const InstallAegisForLingjunResponseBodyInvokeTasks &) = default ;
    InstallAegisForLingjunResponseBodyInvokeTasks& operator=(InstallAegisForLingjunResponseBodyInvokeTasks &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->invokeId_ == nullptr
        && return this->uuids_ == nullptr; };
    // invokeId Field Functions 
    bool hasInvokeId() const { return this->invokeId_ != nullptr;};
    void deleteInvokeId() { this->invokeId_ = nullptr;};
    inline string invokeId() const { DARABONBA_PTR_GET_DEFAULT(invokeId_, "") };
    inline InstallAegisForLingjunResponseBodyInvokeTasks& setInvokeId(string invokeId) { DARABONBA_PTR_SET_VALUE(invokeId_, invokeId) };


    // uuids Field Functions 
    bool hasUuids() const { return this->uuids_ != nullptr;};
    void deleteUuids() { this->uuids_ = nullptr;};
    inline const vector<string> & uuids() const { DARABONBA_PTR_GET_CONST(uuids_, vector<string>) };
    inline vector<string> uuids() { DARABONBA_PTR_GET(uuids_, vector<string>) };
    inline InstallAegisForLingjunResponseBodyInvokeTasks& setUuids(const vector<string> & uuids) { DARABONBA_PTR_SET_VALUE(uuids_, uuids) };
    inline InstallAegisForLingjunResponseBodyInvokeTasks& setUuids(vector<string> && uuids) { DARABONBA_PTR_SET_RVALUE(uuids_, uuids) };


  protected:
    // Installation task ID for the Lingjun machine.
    std::shared_ptr<string> invokeId_ = nullptr;
    // List of unique UUIDs for Lingjun bare metal.
    std::shared_ptr<vector<string>> uuids_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
