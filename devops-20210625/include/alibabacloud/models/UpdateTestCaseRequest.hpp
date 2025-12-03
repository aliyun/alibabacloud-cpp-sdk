// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATETESTCASEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATETESTCASEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateTestCaseRequestUpdateWorkitemPropertyRequest.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class UpdateTestCaseRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateTestCaseRequest& obj) { 
      DARABONBA_PTR_TO_JSON(updateWorkitemPropertyRequest, updateWorkitemPropertyRequest_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateTestCaseRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(updateWorkitemPropertyRequest, updateWorkitemPropertyRequest_);
    };
    UpdateTestCaseRequest() = default ;
    UpdateTestCaseRequest(const UpdateTestCaseRequest &) = default ;
    UpdateTestCaseRequest(UpdateTestCaseRequest &&) = default ;
    UpdateTestCaseRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateTestCaseRequest() = default ;
    UpdateTestCaseRequest& operator=(const UpdateTestCaseRequest &) = default ;
    UpdateTestCaseRequest& operator=(UpdateTestCaseRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->updateWorkitemPropertyRequest_ == nullptr; };
    // updateWorkitemPropertyRequest Field Functions 
    bool hasUpdateWorkitemPropertyRequest() const { return this->updateWorkitemPropertyRequest_ != nullptr;};
    void deleteUpdateWorkitemPropertyRequest() { this->updateWorkitemPropertyRequest_ = nullptr;};
    inline const vector<UpdateTestCaseRequestUpdateWorkitemPropertyRequest> & updateWorkitemPropertyRequest() const { DARABONBA_PTR_GET_CONST(updateWorkitemPropertyRequest_, vector<UpdateTestCaseRequestUpdateWorkitemPropertyRequest>) };
    inline vector<UpdateTestCaseRequestUpdateWorkitemPropertyRequest> updateWorkitemPropertyRequest() { DARABONBA_PTR_GET(updateWorkitemPropertyRequest_, vector<UpdateTestCaseRequestUpdateWorkitemPropertyRequest>) };
    inline UpdateTestCaseRequest& setUpdateWorkitemPropertyRequest(const vector<UpdateTestCaseRequestUpdateWorkitemPropertyRequest> & updateWorkitemPropertyRequest) { DARABONBA_PTR_SET_VALUE(updateWorkitemPropertyRequest_, updateWorkitemPropertyRequest) };
    inline UpdateTestCaseRequest& setUpdateWorkitemPropertyRequest(vector<UpdateTestCaseRequestUpdateWorkitemPropertyRequest> && updateWorkitemPropertyRequest) { DARABONBA_PTR_SET_RVALUE(updateWorkitemPropertyRequest_, updateWorkitemPropertyRequest) };


  protected:
    // This parameter is required.
    std::shared_ptr<vector<UpdateTestCaseRequestUpdateWorkitemPropertyRequest>> updateWorkitemPropertyRequest_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
