// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYCUSTOMCALLTAGGINGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYCUSTOMCALLTAGGINGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class ModifyCustomCallTaggingRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyCustomCallTaggingRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CallTagNameList, callTagNameList_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Number, number_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyCustomCallTaggingRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CallTagNameList, callTagNameList_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Number, number_);
    };
    ModifyCustomCallTaggingRequest() = default ;
    ModifyCustomCallTaggingRequest(const ModifyCustomCallTaggingRequest &) = default ;
    ModifyCustomCallTaggingRequest(ModifyCustomCallTaggingRequest &&) = default ;
    ModifyCustomCallTaggingRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyCustomCallTaggingRequest() = default ;
    ModifyCustomCallTaggingRequest& operator=(const ModifyCustomCallTaggingRequest &) = default ;
    ModifyCustomCallTaggingRequest& operator=(ModifyCustomCallTaggingRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->callTagNameList_ != nullptr
        && this->description_ != nullptr && this->instanceId_ != nullptr && this->number_ != nullptr; };
    // callTagNameList Field Functions 
    bool hasCallTagNameList() const { return this->callTagNameList_ != nullptr;};
    void deleteCallTagNameList() { this->callTagNameList_ = nullptr;};
    inline string callTagNameList() const { DARABONBA_PTR_GET_DEFAULT(callTagNameList_, "") };
    inline ModifyCustomCallTaggingRequest& setCallTagNameList(string callTagNameList) { DARABONBA_PTR_SET_VALUE(callTagNameList_, callTagNameList) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ModifyCustomCallTaggingRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyCustomCallTaggingRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // number Field Functions 
    bool hasNumber() const { return this->number_ != nullptr;};
    void deleteNumber() { this->number_ = nullptr;};
    inline string number() const { DARABONBA_PTR_GET_DEFAULT(number_, "") };
    inline ModifyCustomCallTaggingRequest& setNumber(string number) { DARABONBA_PTR_SET_VALUE(number_, number) };


  protected:
    std::shared_ptr<string> callTagNameList_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> number_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
