// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSERVICEINSTANCEFAULTINJECTIONINFORESPONSEBODYFAULTINFOLISTFAULTSTATUS_HPP_
#define ALIBABACLOUD_MODELS_LISTSERVICEINSTANCEFAULTINJECTIONINFORESPONSEBODYFAULTINFOLISTFAULTSTATUS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
namespace Models
{
  class ListServiceInstanceFaultInjectionInfoResponseBodyFaultInfoListFaultStatus : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListServiceInstanceFaultInjectionInfoResponseBodyFaultInfoListFaultStatus& obj) { 
      DARABONBA_PTR_TO_JSON(FaultStatus, faultStatus_);
      DARABONBA_PTR_TO_JSON(FaultStatusMessage, faultStatusMessage_);
    };
    friend void from_json(const Darabonba::Json& j, ListServiceInstanceFaultInjectionInfoResponseBodyFaultInfoListFaultStatus& obj) { 
      DARABONBA_PTR_FROM_JSON(FaultStatus, faultStatus_);
      DARABONBA_PTR_FROM_JSON(FaultStatusMessage, faultStatusMessage_);
    };
    ListServiceInstanceFaultInjectionInfoResponseBodyFaultInfoListFaultStatus() = default ;
    ListServiceInstanceFaultInjectionInfoResponseBodyFaultInfoListFaultStatus(const ListServiceInstanceFaultInjectionInfoResponseBodyFaultInfoListFaultStatus &) = default ;
    ListServiceInstanceFaultInjectionInfoResponseBodyFaultInfoListFaultStatus(ListServiceInstanceFaultInjectionInfoResponseBodyFaultInfoListFaultStatus &&) = default ;
    ListServiceInstanceFaultInjectionInfoResponseBodyFaultInfoListFaultStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListServiceInstanceFaultInjectionInfoResponseBodyFaultInfoListFaultStatus() = default ;
    ListServiceInstanceFaultInjectionInfoResponseBodyFaultInfoListFaultStatus& operator=(const ListServiceInstanceFaultInjectionInfoResponseBodyFaultInfoListFaultStatus &) = default ;
    ListServiceInstanceFaultInjectionInfoResponseBodyFaultInfoListFaultStatus& operator=(ListServiceInstanceFaultInjectionInfoResponseBodyFaultInfoListFaultStatus &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->faultStatus_ == nullptr
        && return this->faultStatusMessage_ == nullptr; };
    // faultStatus Field Functions 
    bool hasFaultStatus() const { return this->faultStatus_ != nullptr;};
    void deleteFaultStatus() { this->faultStatus_ = nullptr;};
    inline string faultStatus() const { DARABONBA_PTR_GET_DEFAULT(faultStatus_, "") };
    inline ListServiceInstanceFaultInjectionInfoResponseBodyFaultInfoListFaultStatus& setFaultStatus(string faultStatus) { DARABONBA_PTR_SET_VALUE(faultStatus_, faultStatus) };


    // faultStatusMessage Field Functions 
    bool hasFaultStatusMessage() const { return this->faultStatusMessage_ != nullptr;};
    void deleteFaultStatusMessage() { this->faultStatusMessage_ = nullptr;};
    inline string faultStatusMessage() const { DARABONBA_PTR_GET_DEFAULT(faultStatusMessage_, "") };
    inline ListServiceInstanceFaultInjectionInfoResponseBodyFaultInfoListFaultStatus& setFaultStatusMessage(string faultStatusMessage) { DARABONBA_PTR_SET_VALUE(faultStatusMessage_, faultStatusMessage) };


  protected:
    std::shared_ptr<string> faultStatus_ = nullptr;
    std::shared_ptr<string> faultStatusMessage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
