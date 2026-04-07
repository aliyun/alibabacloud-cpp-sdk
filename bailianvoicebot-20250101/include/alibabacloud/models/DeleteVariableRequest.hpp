// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEVARIABLEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEVARIABLEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BailianVoiceBot20250101
{
namespace Models
{
  class DeleteVariableRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteVariableRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BusinessUnitId, businessUnitId_);
      DARABONBA_PTR_TO_JSON(VariableId, variableId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteVariableRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BusinessUnitId, businessUnitId_);
      DARABONBA_PTR_FROM_JSON(VariableId, variableId_);
    };
    DeleteVariableRequest() = default ;
    DeleteVariableRequest(const DeleteVariableRequest &) = default ;
    DeleteVariableRequest(DeleteVariableRequest &&) = default ;
    DeleteVariableRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteVariableRequest() = default ;
    DeleteVariableRequest& operator=(const DeleteVariableRequest &) = default ;
    DeleteVariableRequest& operator=(DeleteVariableRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->businessUnitId_ == nullptr
        && this->variableId_ == nullptr; };
    // businessUnitId Field Functions 
    bool hasBusinessUnitId() const { return this->businessUnitId_ != nullptr;};
    void deleteBusinessUnitId() { this->businessUnitId_ = nullptr;};
    inline string getBusinessUnitId() const { DARABONBA_PTR_GET_DEFAULT(businessUnitId_, "") };
    inline DeleteVariableRequest& setBusinessUnitId(string businessUnitId) { DARABONBA_PTR_SET_VALUE(businessUnitId_, businessUnitId) };


    // variableId Field Functions 
    bool hasVariableId() const { return this->variableId_ != nullptr;};
    void deleteVariableId() { this->variableId_ = nullptr;};
    inline string getVariableId() const { DARABONBA_PTR_GET_DEFAULT(variableId_, "") };
    inline DeleteVariableRequest& setVariableId(string variableId) { DARABONBA_PTR_SET_VALUE(variableId_, variableId) };


  protected:
    shared_ptr<string> businessUnitId_ {};
    shared_ptr<string> variableId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BailianVoiceBot20250101
#endif
