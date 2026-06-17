// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OPERATEAPPLICATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_OPERATEAPPLICATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class OperateApplicationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OperateApplicationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(Operation, operation_);
    };
    friend void from_json(const Darabonba::Json& j, OperateApplicationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(Operation, operation_);
    };
    OperateApplicationRequest() = default ;
    OperateApplicationRequest(const OperateApplicationRequest &) = default ;
    OperateApplicationRequest(OperateApplicationRequest &&) = default ;
    OperateApplicationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OperateApplicationRequest() = default ;
    OperateApplicationRequest& operator=(const OperateApplicationRequest &) = default ;
    OperateApplicationRequest& operator=(OperateApplicationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationId_ == nullptr
        && this->operation_ == nullptr; };
    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline OperateApplicationRequest& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // operation Field Functions 
    bool hasOperation() const { return this->operation_ != nullptr;};
    void deleteOperation() { this->operation_ = nullptr;};
    inline string getOperation() const { DARABONBA_PTR_GET_DEFAULT(operation_, "") };
    inline OperateApplicationRequest& setOperation(string operation) { DARABONBA_PTR_SET_VALUE(operation_, operation) };


  protected:
    // The application ID.
    shared_ptr<string> applicationId_ {};
    // The operation type. Valid values:
    // 
    // * **restart**: restart
    // * **stop**: stop
    // * **start**: start.
    shared_ptr<string> operation_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
