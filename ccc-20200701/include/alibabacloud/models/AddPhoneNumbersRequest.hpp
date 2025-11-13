// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDPHONENUMBERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDPHONENUMBERSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class AddPhoneNumbersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddPhoneNumbersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ContactFlowId, contactFlowId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(NumberGroupId, numberGroupId_);
      DARABONBA_PTR_TO_JSON(NumberList, numberList_);
      DARABONBA_PTR_TO_JSON(Usage, usage_);
    };
    friend void from_json(const Darabonba::Json& j, AddPhoneNumbersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ContactFlowId, contactFlowId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(NumberGroupId, numberGroupId_);
      DARABONBA_PTR_FROM_JSON(NumberList, numberList_);
      DARABONBA_PTR_FROM_JSON(Usage, usage_);
    };
    AddPhoneNumbersRequest() = default ;
    AddPhoneNumbersRequest(const AddPhoneNumbersRequest &) = default ;
    AddPhoneNumbersRequest(AddPhoneNumbersRequest &&) = default ;
    AddPhoneNumbersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddPhoneNumbersRequest() = default ;
    AddPhoneNumbersRequest& operator=(const AddPhoneNumbersRequest &) = default ;
    AddPhoneNumbersRequest& operator=(AddPhoneNumbersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->contactFlowId_ == nullptr
        && return this->instanceId_ == nullptr && return this->numberGroupId_ == nullptr && return this->numberList_ == nullptr && return this->usage_ == nullptr; };
    // contactFlowId Field Functions 
    bool hasContactFlowId() const { return this->contactFlowId_ != nullptr;};
    void deleteContactFlowId() { this->contactFlowId_ = nullptr;};
    inline string contactFlowId() const { DARABONBA_PTR_GET_DEFAULT(contactFlowId_, "") };
    inline AddPhoneNumbersRequest& setContactFlowId(string contactFlowId) { DARABONBA_PTR_SET_VALUE(contactFlowId_, contactFlowId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline AddPhoneNumbersRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // numberGroupId Field Functions 
    bool hasNumberGroupId() const { return this->numberGroupId_ != nullptr;};
    void deleteNumberGroupId() { this->numberGroupId_ = nullptr;};
    inline string numberGroupId() const { DARABONBA_PTR_GET_DEFAULT(numberGroupId_, "") };
    inline AddPhoneNumbersRequest& setNumberGroupId(string numberGroupId) { DARABONBA_PTR_SET_VALUE(numberGroupId_, numberGroupId) };


    // numberList Field Functions 
    bool hasNumberList() const { return this->numberList_ != nullptr;};
    void deleteNumberList() { this->numberList_ = nullptr;};
    inline string numberList() const { DARABONBA_PTR_GET_DEFAULT(numberList_, "") };
    inline AddPhoneNumbersRequest& setNumberList(string numberList) { DARABONBA_PTR_SET_VALUE(numberList_, numberList) };


    // usage Field Functions 
    bool hasUsage() const { return this->usage_ != nullptr;};
    void deleteUsage() { this->usage_ = nullptr;};
    inline string usage() const { DARABONBA_PTR_GET_DEFAULT(usage_, "") };
    inline AddPhoneNumbersRequest& setUsage(string usage) { DARABONBA_PTR_SET_VALUE(usage_, usage) };


  protected:
    std::shared_ptr<string> contactFlowId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> numberGroupId_ = nullptr;
    std::shared_ptr<string> numberList_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> usage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
