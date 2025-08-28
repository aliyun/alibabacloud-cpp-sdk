// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETTRANSFERCALLEEPOOLCONFIGREQUESTDETAILS_HPP_
#define ALIBABACLOUD_MODELS_SETTRANSFERCALLEEPOOLCONFIGREQUESTDETAILS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyvmsapi20170525
{
namespace Models
{
  class SetTransferCalleePoolConfigRequestDetails : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetTransferCalleePoolConfigRequestDetails& obj) { 
      DARABONBA_PTR_TO_JSON(Called, called_);
      DARABONBA_PTR_TO_JSON(Caller, caller_);
    };
    friend void from_json(const Darabonba::Json& j, SetTransferCalleePoolConfigRequestDetails& obj) { 
      DARABONBA_PTR_FROM_JSON(Called, called_);
      DARABONBA_PTR_FROM_JSON(Caller, caller_);
    };
    SetTransferCalleePoolConfigRequestDetails() = default ;
    SetTransferCalleePoolConfigRequestDetails(const SetTransferCalleePoolConfigRequestDetails &) = default ;
    SetTransferCalleePoolConfigRequestDetails(SetTransferCalleePoolConfigRequestDetails &&) = default ;
    SetTransferCalleePoolConfigRequestDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetTransferCalleePoolConfigRequestDetails() = default ;
    SetTransferCalleePoolConfigRequestDetails& operator=(const SetTransferCalleePoolConfigRequestDetails &) = default ;
    SetTransferCalleePoolConfigRequestDetails& operator=(SetTransferCalleePoolConfigRequestDetails &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->called_ != nullptr
        && this->caller_ != nullptr; };
    // called Field Functions 
    bool hasCalled() const { return this->called_ != nullptr;};
    void deleteCalled() { this->called_ = nullptr;};
    inline string called() const { DARABONBA_PTR_GET_DEFAULT(called_, "") };
    inline SetTransferCalleePoolConfigRequestDetails& setCalled(string called) { DARABONBA_PTR_SET_VALUE(called_, called) };


    // caller Field Functions 
    bool hasCaller() const { return this->caller_ != nullptr;};
    void deleteCaller() { this->caller_ = nullptr;};
    inline string caller() const { DARABONBA_PTR_GET_DEFAULT(caller_, "") };
    inline SetTransferCalleePoolConfigRequestDetails& setCaller(string caller) { DARABONBA_PTR_SET_VALUE(caller_, caller) };


  protected:
    // The called number.
    // 
    // This parameter is required.
    std::shared_ptr<string> called_ = nullptr;
    // The calling number.
    std::shared_ptr<string> caller_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyvmsapi20170525
#endif
