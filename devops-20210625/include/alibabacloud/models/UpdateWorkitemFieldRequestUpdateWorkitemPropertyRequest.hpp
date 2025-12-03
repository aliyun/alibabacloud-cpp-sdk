// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEWORKITEMFIELDREQUESTUPDATEWORKITEMPROPERTYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEWORKITEMFIELDREQUESTUPDATEWORKITEMPROPERTYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class UpdateWorkitemFieldRequestUpdateWorkitemPropertyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateWorkitemFieldRequestUpdateWorkitemPropertyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(fieldIdentifier, fieldIdentifier_);
      DARABONBA_PTR_TO_JSON(fieldValue, fieldValue_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateWorkitemFieldRequestUpdateWorkitemPropertyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(fieldIdentifier, fieldIdentifier_);
      DARABONBA_PTR_FROM_JSON(fieldValue, fieldValue_);
    };
    UpdateWorkitemFieldRequestUpdateWorkitemPropertyRequest() = default ;
    UpdateWorkitemFieldRequestUpdateWorkitemPropertyRequest(const UpdateWorkitemFieldRequestUpdateWorkitemPropertyRequest &) = default ;
    UpdateWorkitemFieldRequestUpdateWorkitemPropertyRequest(UpdateWorkitemFieldRequestUpdateWorkitemPropertyRequest &&) = default ;
    UpdateWorkitemFieldRequestUpdateWorkitemPropertyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateWorkitemFieldRequestUpdateWorkitemPropertyRequest() = default ;
    UpdateWorkitemFieldRequestUpdateWorkitemPropertyRequest& operator=(const UpdateWorkitemFieldRequestUpdateWorkitemPropertyRequest &) = default ;
    UpdateWorkitemFieldRequestUpdateWorkitemPropertyRequest& operator=(UpdateWorkitemFieldRequestUpdateWorkitemPropertyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fieldIdentifier_ == nullptr
        && return this->fieldValue_ == nullptr; };
    // fieldIdentifier Field Functions 
    bool hasFieldIdentifier() const { return this->fieldIdentifier_ != nullptr;};
    void deleteFieldIdentifier() { this->fieldIdentifier_ = nullptr;};
    inline string fieldIdentifier() const { DARABONBA_PTR_GET_DEFAULT(fieldIdentifier_, "") };
    inline UpdateWorkitemFieldRequestUpdateWorkitemPropertyRequest& setFieldIdentifier(string fieldIdentifier) { DARABONBA_PTR_SET_VALUE(fieldIdentifier_, fieldIdentifier) };


    // fieldValue Field Functions 
    bool hasFieldValue() const { return this->fieldValue_ != nullptr;};
    void deleteFieldValue() { this->fieldValue_ = nullptr;};
    inline string fieldValue() const { DARABONBA_PTR_GET_DEFAULT(fieldValue_, "") };
    inline UpdateWorkitemFieldRequestUpdateWorkitemPropertyRequest& setFieldValue(string fieldValue) { DARABONBA_PTR_SET_VALUE(fieldValue_, fieldValue) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> fieldIdentifier_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> fieldValue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
