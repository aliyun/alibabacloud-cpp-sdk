// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECUSTOMCALLTAGGINGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECUSTOMCALLTAGGINGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class CreateCustomCallTaggingRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCustomCallTaggingRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CustomNumberList, customNumberList_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCustomCallTaggingRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomNumberList, customNumberList_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    CreateCustomCallTaggingRequest() = default ;
    CreateCustomCallTaggingRequest(const CreateCustomCallTaggingRequest &) = default ;
    CreateCustomCallTaggingRequest(CreateCustomCallTaggingRequest &&) = default ;
    CreateCustomCallTaggingRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCustomCallTaggingRequest() = default ;
    CreateCustomCallTaggingRequest& operator=(const CreateCustomCallTaggingRequest &) = default ;
    CreateCustomCallTaggingRequest& operator=(CreateCustomCallTaggingRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->customNumberList_ == nullptr
        && return this->instanceId_ == nullptr; };
    // customNumberList Field Functions 
    bool hasCustomNumberList() const { return this->customNumberList_ != nullptr;};
    void deleteCustomNumberList() { this->customNumberList_ = nullptr;};
    inline string customNumberList() const { DARABONBA_PTR_GET_DEFAULT(customNumberList_, "") };
    inline CreateCustomCallTaggingRequest& setCustomNumberList(string customNumberList) { DARABONBA_PTR_SET_VALUE(customNumberList_, customNumberList) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateCustomCallTaggingRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> customNumberList_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
