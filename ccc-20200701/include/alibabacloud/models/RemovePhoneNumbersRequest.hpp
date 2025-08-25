// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REMOVEPHONENUMBERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REMOVEPHONENUMBERSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class RemovePhoneNumbersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RemovePhoneNumbersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Force, force_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(NumberList, numberList_);
    };
    friend void from_json(const Darabonba::Json& j, RemovePhoneNumbersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Force, force_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(NumberList, numberList_);
    };
    RemovePhoneNumbersRequest() = default ;
    RemovePhoneNumbersRequest(const RemovePhoneNumbersRequest &) = default ;
    RemovePhoneNumbersRequest(RemovePhoneNumbersRequest &&) = default ;
    RemovePhoneNumbersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RemovePhoneNumbersRequest() = default ;
    RemovePhoneNumbersRequest& operator=(const RemovePhoneNumbersRequest &) = default ;
    RemovePhoneNumbersRequest& operator=(RemovePhoneNumbersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->force_ != nullptr
        && this->instanceId_ != nullptr && this->numberList_ != nullptr; };
    // force Field Functions 
    bool hasForce() const { return this->force_ != nullptr;};
    void deleteForce() { this->force_ = nullptr;};
    inline bool force() const { DARABONBA_PTR_GET_DEFAULT(force_, false) };
    inline RemovePhoneNumbersRequest& setForce(bool force) { DARABONBA_PTR_SET_VALUE(force_, force) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline RemovePhoneNumbersRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // numberList Field Functions 
    bool hasNumberList() const { return this->numberList_ != nullptr;};
    void deleteNumberList() { this->numberList_ = nullptr;};
    inline string numberList() const { DARABONBA_PTR_GET_DEFAULT(numberList_, "") };
    inline RemovePhoneNumbersRequest& setNumberList(string numberList) { DARABONBA_PTR_SET_VALUE(numberList_, numberList) };


  protected:
    std::shared_ptr<bool> force_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> numberList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
