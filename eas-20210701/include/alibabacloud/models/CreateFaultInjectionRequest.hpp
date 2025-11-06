// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEFAULTINJECTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEFAULTINJECTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
namespace Models
{
  class CreateFaultInjectionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateFaultInjectionRequest& obj) { 
      DARABONBA_ANY_TO_JSON(FaultArgs, faultArgs_);
      DARABONBA_PTR_TO_JSON(FaultType, faultType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateFaultInjectionRequest& obj) { 
      DARABONBA_ANY_FROM_JSON(FaultArgs, faultArgs_);
      DARABONBA_PTR_FROM_JSON(FaultType, faultType_);
    };
    CreateFaultInjectionRequest() = default ;
    CreateFaultInjectionRequest(const CreateFaultInjectionRequest &) = default ;
    CreateFaultInjectionRequest(CreateFaultInjectionRequest &&) = default ;
    CreateFaultInjectionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateFaultInjectionRequest() = default ;
    CreateFaultInjectionRequest& operator=(const CreateFaultInjectionRequest &) = default ;
    CreateFaultInjectionRequest& operator=(CreateFaultInjectionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->faultArgs_ == nullptr
        && return this->faultType_ == nullptr; };
    // faultArgs Field Functions 
    bool hasFaultArgs() const { return this->faultArgs_ != nullptr;};
    void deleteFaultArgs() { this->faultArgs_ = nullptr;};
    inline     const Darabonba::Json & faultArgs() const { DARABONBA_GET(faultArgs_) };
    Darabonba::Json & faultArgs() { DARABONBA_GET(faultArgs_) };
    inline CreateFaultInjectionRequest& setFaultArgs(const Darabonba::Json & faultArgs) { DARABONBA_SET_VALUE(faultArgs_, faultArgs) };
    inline CreateFaultInjectionRequest& setFaultArgs(Darabonba::Json & faultArgs) { DARABONBA_SET_RVALUE(faultArgs_, faultArgs) };


    // faultType Field Functions 
    bool hasFaultType() const { return this->faultType_ != nullptr;};
    void deleteFaultType() { this->faultType_ = nullptr;};
    inline string faultType() const { DARABONBA_PTR_GET_DEFAULT(faultType_, "") };
    inline CreateFaultInjectionRequest& setFaultType(string faultType) { DARABONBA_PTR_SET_VALUE(faultType_, faultType) };


  protected:
    Darabonba::Json faultArgs_ = nullptr;
    std::shared_ptr<string> faultType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
