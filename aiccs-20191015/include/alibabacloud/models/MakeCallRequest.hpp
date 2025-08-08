// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MAKECALLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MAKECALLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class MakeCallRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MakeCallRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CalledNumber, calledNumber_);
      DARABONBA_PTR_TO_JSON(CallingNumber, callingNumber_);
      DARABONBA_PTR_TO_JSON(CommandCode, commandCode_);
      DARABONBA_PTR_TO_JSON(ExtInfo, extInfo_);
      DARABONBA_PTR_TO_JSON(OuterAccountId, outerAccountId_);
      DARABONBA_PTR_TO_JSON(OuterAccountType, outerAccountType_);
    };
    friend void from_json(const Darabonba::Json& j, MakeCallRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CalledNumber, calledNumber_);
      DARABONBA_PTR_FROM_JSON(CallingNumber, callingNumber_);
      DARABONBA_PTR_FROM_JSON(CommandCode, commandCode_);
      DARABONBA_PTR_FROM_JSON(ExtInfo, extInfo_);
      DARABONBA_PTR_FROM_JSON(OuterAccountId, outerAccountId_);
      DARABONBA_PTR_FROM_JSON(OuterAccountType, outerAccountType_);
    };
    MakeCallRequest() = default ;
    MakeCallRequest(const MakeCallRequest &) = default ;
    MakeCallRequest(MakeCallRequest &&) = default ;
    MakeCallRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MakeCallRequest() = default ;
    MakeCallRequest& operator=(const MakeCallRequest &) = default ;
    MakeCallRequest& operator=(MakeCallRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->calledNumber_ != nullptr
        && this->callingNumber_ != nullptr && this->commandCode_ != nullptr && this->extInfo_ != nullptr && this->outerAccountId_ != nullptr && this->outerAccountType_ != nullptr; };
    // calledNumber Field Functions 
    bool hasCalledNumber() const { return this->calledNumber_ != nullptr;};
    void deleteCalledNumber() { this->calledNumber_ = nullptr;};
    inline string calledNumber() const { DARABONBA_PTR_GET_DEFAULT(calledNumber_, "") };
    inline MakeCallRequest& setCalledNumber(string calledNumber) { DARABONBA_PTR_SET_VALUE(calledNumber_, calledNumber) };


    // callingNumber Field Functions 
    bool hasCallingNumber() const { return this->callingNumber_ != nullptr;};
    void deleteCallingNumber() { this->callingNumber_ = nullptr;};
    inline string callingNumber() const { DARABONBA_PTR_GET_DEFAULT(callingNumber_, "") };
    inline MakeCallRequest& setCallingNumber(string callingNumber) { DARABONBA_PTR_SET_VALUE(callingNumber_, callingNumber) };


    // commandCode Field Functions 
    bool hasCommandCode() const { return this->commandCode_ != nullptr;};
    void deleteCommandCode() { this->commandCode_ = nullptr;};
    inline string commandCode() const { DARABONBA_PTR_GET_DEFAULT(commandCode_, "") };
    inline MakeCallRequest& setCommandCode(string commandCode) { DARABONBA_PTR_SET_VALUE(commandCode_, commandCode) };


    // extInfo Field Functions 
    bool hasExtInfo() const { return this->extInfo_ != nullptr;};
    void deleteExtInfo() { this->extInfo_ = nullptr;};
    inline string extInfo() const { DARABONBA_PTR_GET_DEFAULT(extInfo_, "") };
    inline MakeCallRequest& setExtInfo(string extInfo) { DARABONBA_PTR_SET_VALUE(extInfo_, extInfo) };


    // outerAccountId Field Functions 
    bool hasOuterAccountId() const { return this->outerAccountId_ != nullptr;};
    void deleteOuterAccountId() { this->outerAccountId_ = nullptr;};
    inline string outerAccountId() const { DARABONBA_PTR_GET_DEFAULT(outerAccountId_, "") };
    inline MakeCallRequest& setOuterAccountId(string outerAccountId) { DARABONBA_PTR_SET_VALUE(outerAccountId_, outerAccountId) };


    // outerAccountType Field Functions 
    bool hasOuterAccountType() const { return this->outerAccountType_ != nullptr;};
    void deleteOuterAccountType() { this->outerAccountType_ = nullptr;};
    inline string outerAccountType() const { DARABONBA_PTR_GET_DEFAULT(outerAccountType_, "") };
    inline MakeCallRequest& setOuterAccountType(string outerAccountType) { DARABONBA_PTR_SET_VALUE(outerAccountType_, outerAccountType) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> calledNumber_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> callingNumber_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> commandCode_ = nullptr;
    std::shared_ptr<string> extInfo_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> outerAccountId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> outerAccountType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
