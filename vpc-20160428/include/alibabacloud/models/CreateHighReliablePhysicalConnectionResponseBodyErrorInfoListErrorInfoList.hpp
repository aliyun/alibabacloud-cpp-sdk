// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEHIGHRELIABLEPHYSICALCONNECTIONRESPONSEBODYERRORINFOLISTERRORINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_CREATEHIGHRELIABLEPHYSICALCONNECTIONRESPONSEBODYERRORINFOLISTERRORINFOLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class CreateHighReliablePhysicalConnectionResponseBodyErrorInfoListErrorInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateHighReliablePhysicalConnectionResponseBodyErrorInfoListErrorInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateHighReliablePhysicalConnectionResponseBodyErrorInfoListErrorInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    CreateHighReliablePhysicalConnectionResponseBodyErrorInfoListErrorInfoList() = default ;
    CreateHighReliablePhysicalConnectionResponseBodyErrorInfoListErrorInfoList(const CreateHighReliablePhysicalConnectionResponseBodyErrorInfoListErrorInfoList &) = default ;
    CreateHighReliablePhysicalConnectionResponseBodyErrorInfoListErrorInfoList(CreateHighReliablePhysicalConnectionResponseBodyErrorInfoListErrorInfoList &&) = default ;
    CreateHighReliablePhysicalConnectionResponseBodyErrorInfoListErrorInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateHighReliablePhysicalConnectionResponseBodyErrorInfoListErrorInfoList() = default ;
    CreateHighReliablePhysicalConnectionResponseBodyErrorInfoListErrorInfoList& operator=(const CreateHighReliablePhysicalConnectionResponseBodyErrorInfoListErrorInfoList &) = default ;
    CreateHighReliablePhysicalConnectionResponseBodyErrorInfoListErrorInfoList& operator=(CreateHighReliablePhysicalConnectionResponseBodyErrorInfoListErrorInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->errorCode_ != nullptr
        && this->errorMessage_ != nullptr && this->instanceId_ != nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline CreateHighReliablePhysicalConnectionResponseBodyErrorInfoListErrorInfoList& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline CreateHighReliablePhysicalConnectionResponseBodyErrorInfoListErrorInfoList& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateHighReliablePhysicalConnectionResponseBodyErrorInfoListErrorInfoList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    // Error codes.
    std::shared_ptr<string> errorCode_ = nullptr;
    // The returned error message.
    std::shared_ptr<string> errorMessage_ = nullptr;
    // The ID of the Express Connect circuit.
    std::shared_ptr<string> instanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
