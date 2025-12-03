// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEWORKITEMREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEWORKITEMREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class UpdateWorkItemRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateWorkItemRequest& obj) { 
      DARABONBA_PTR_TO_JSON(fieldType, fieldType_);
      DARABONBA_PTR_TO_JSON(identifier, identifier_);
      DARABONBA_PTR_TO_JSON(propertyKey, propertyKey_);
      DARABONBA_PTR_TO_JSON(propertyValue, propertyValue_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateWorkItemRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(fieldType, fieldType_);
      DARABONBA_PTR_FROM_JSON(identifier, identifier_);
      DARABONBA_PTR_FROM_JSON(propertyKey, propertyKey_);
      DARABONBA_PTR_FROM_JSON(propertyValue, propertyValue_);
    };
    UpdateWorkItemRequest() = default ;
    UpdateWorkItemRequest(const UpdateWorkItemRequest &) = default ;
    UpdateWorkItemRequest(UpdateWorkItemRequest &&) = default ;
    UpdateWorkItemRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateWorkItemRequest() = default ;
    UpdateWorkItemRequest& operator=(const UpdateWorkItemRequest &) = default ;
    UpdateWorkItemRequest& operator=(UpdateWorkItemRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fieldType_ == nullptr
        && return this->identifier_ == nullptr && return this->propertyKey_ == nullptr && return this->propertyValue_ == nullptr; };
    // fieldType Field Functions 
    bool hasFieldType() const { return this->fieldType_ != nullptr;};
    void deleteFieldType() { this->fieldType_ = nullptr;};
    inline string fieldType() const { DARABONBA_PTR_GET_DEFAULT(fieldType_, "") };
    inline UpdateWorkItemRequest& setFieldType(string fieldType) { DARABONBA_PTR_SET_VALUE(fieldType_, fieldType) };


    // identifier Field Functions 
    bool hasIdentifier() const { return this->identifier_ != nullptr;};
    void deleteIdentifier() { this->identifier_ = nullptr;};
    inline string identifier() const { DARABONBA_PTR_GET_DEFAULT(identifier_, "") };
    inline UpdateWorkItemRequest& setIdentifier(string identifier) { DARABONBA_PTR_SET_VALUE(identifier_, identifier) };


    // propertyKey Field Functions 
    bool hasPropertyKey() const { return this->propertyKey_ != nullptr;};
    void deletePropertyKey() { this->propertyKey_ = nullptr;};
    inline string propertyKey() const { DARABONBA_PTR_GET_DEFAULT(propertyKey_, "") };
    inline UpdateWorkItemRequest& setPropertyKey(string propertyKey) { DARABONBA_PTR_SET_VALUE(propertyKey_, propertyKey) };


    // propertyValue Field Functions 
    bool hasPropertyValue() const { return this->propertyValue_ != nullptr;};
    void deletePropertyValue() { this->propertyValue_ = nullptr;};
    inline string propertyValue() const { DARABONBA_PTR_GET_DEFAULT(propertyValue_, "") };
    inline UpdateWorkItemRequest& setPropertyValue(string propertyValue) { DARABONBA_PTR_SET_VALUE(propertyValue_, propertyValue) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> fieldType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> identifier_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> propertyKey_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> propertyValue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
