// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEWORKITEMFIELDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEWORKITEMFIELDREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateWorkitemFieldRequestUpdateWorkitemPropertyRequest.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class UpdateWorkitemFieldRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateWorkitemFieldRequest& obj) { 
      DARABONBA_PTR_TO_JSON(updateWorkitemPropertyRequest, updateWorkitemPropertyRequest_);
      DARABONBA_PTR_TO_JSON(workitemIdentifier, workitemIdentifier_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateWorkitemFieldRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(updateWorkitemPropertyRequest, updateWorkitemPropertyRequest_);
      DARABONBA_PTR_FROM_JSON(workitemIdentifier, workitemIdentifier_);
    };
    UpdateWorkitemFieldRequest() = default ;
    UpdateWorkitemFieldRequest(const UpdateWorkitemFieldRequest &) = default ;
    UpdateWorkitemFieldRequest(UpdateWorkitemFieldRequest &&) = default ;
    UpdateWorkitemFieldRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateWorkitemFieldRequest() = default ;
    UpdateWorkitemFieldRequest& operator=(const UpdateWorkitemFieldRequest &) = default ;
    UpdateWorkitemFieldRequest& operator=(UpdateWorkitemFieldRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->updateWorkitemPropertyRequest_ == nullptr
        && return this->workitemIdentifier_ == nullptr; };
    // updateWorkitemPropertyRequest Field Functions 
    bool hasUpdateWorkitemPropertyRequest() const { return this->updateWorkitemPropertyRequest_ != nullptr;};
    void deleteUpdateWorkitemPropertyRequest() { this->updateWorkitemPropertyRequest_ = nullptr;};
    inline const vector<UpdateWorkitemFieldRequestUpdateWorkitemPropertyRequest> & updateWorkitemPropertyRequest() const { DARABONBA_PTR_GET_CONST(updateWorkitemPropertyRequest_, vector<UpdateWorkitemFieldRequestUpdateWorkitemPropertyRequest>) };
    inline vector<UpdateWorkitemFieldRequestUpdateWorkitemPropertyRequest> updateWorkitemPropertyRequest() { DARABONBA_PTR_GET(updateWorkitemPropertyRequest_, vector<UpdateWorkitemFieldRequestUpdateWorkitemPropertyRequest>) };
    inline UpdateWorkitemFieldRequest& setUpdateWorkitemPropertyRequest(const vector<UpdateWorkitemFieldRequestUpdateWorkitemPropertyRequest> & updateWorkitemPropertyRequest) { DARABONBA_PTR_SET_VALUE(updateWorkitemPropertyRequest_, updateWorkitemPropertyRequest) };
    inline UpdateWorkitemFieldRequest& setUpdateWorkitemPropertyRequest(vector<UpdateWorkitemFieldRequestUpdateWorkitemPropertyRequest> && updateWorkitemPropertyRequest) { DARABONBA_PTR_SET_RVALUE(updateWorkitemPropertyRequest_, updateWorkitemPropertyRequest) };


    // workitemIdentifier Field Functions 
    bool hasWorkitemIdentifier() const { return this->workitemIdentifier_ != nullptr;};
    void deleteWorkitemIdentifier() { this->workitemIdentifier_ = nullptr;};
    inline string workitemIdentifier() const { DARABONBA_PTR_GET_DEFAULT(workitemIdentifier_, "") };
    inline UpdateWorkitemFieldRequest& setWorkitemIdentifier(string workitemIdentifier) { DARABONBA_PTR_SET_VALUE(workitemIdentifier_, workitemIdentifier) };


  protected:
    // This parameter is required.
    std::shared_ptr<vector<UpdateWorkitemFieldRequestUpdateWorkitemPropertyRequest>> updateWorkitemPropertyRequest_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> workitemIdentifier_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
