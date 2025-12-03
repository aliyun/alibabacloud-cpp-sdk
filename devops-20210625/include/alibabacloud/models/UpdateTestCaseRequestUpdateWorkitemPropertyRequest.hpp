// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATETESTCASEREQUESTUPDATEWORKITEMPROPERTYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATETESTCASEREQUESTUPDATEWORKITEMPROPERTYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class UpdateTestCaseRequestUpdateWorkitemPropertyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateTestCaseRequestUpdateWorkitemPropertyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(fieldIdentifier, fieldIdentifier_);
      DARABONBA_PTR_TO_JSON(fieldValue, fieldValue_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateTestCaseRequestUpdateWorkitemPropertyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(fieldIdentifier, fieldIdentifier_);
      DARABONBA_PTR_FROM_JSON(fieldValue, fieldValue_);
    };
    UpdateTestCaseRequestUpdateWorkitemPropertyRequest() = default ;
    UpdateTestCaseRequestUpdateWorkitemPropertyRequest(const UpdateTestCaseRequestUpdateWorkitemPropertyRequest &) = default ;
    UpdateTestCaseRequestUpdateWorkitemPropertyRequest(UpdateTestCaseRequestUpdateWorkitemPropertyRequest &&) = default ;
    UpdateTestCaseRequestUpdateWorkitemPropertyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateTestCaseRequestUpdateWorkitemPropertyRequest() = default ;
    UpdateTestCaseRequestUpdateWorkitemPropertyRequest& operator=(const UpdateTestCaseRequestUpdateWorkitemPropertyRequest &) = default ;
    UpdateTestCaseRequestUpdateWorkitemPropertyRequest& operator=(UpdateTestCaseRequestUpdateWorkitemPropertyRequest &&) = default ;
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
    inline UpdateTestCaseRequestUpdateWorkitemPropertyRequest& setFieldIdentifier(string fieldIdentifier) { DARABONBA_PTR_SET_VALUE(fieldIdentifier_, fieldIdentifier) };


    // fieldValue Field Functions 
    bool hasFieldValue() const { return this->fieldValue_ != nullptr;};
    void deleteFieldValue() { this->fieldValue_ = nullptr;};
    inline string fieldValue() const { DARABONBA_PTR_GET_DEFAULT(fieldValue_, "") };
    inline UpdateTestCaseRequestUpdateWorkitemPropertyRequest& setFieldValue(string fieldValue) { DARABONBA_PTR_SET_VALUE(fieldValue_, fieldValue) };


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
