// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUPDATETASKRESULTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETUPDATETASKRESULTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetUpdateTaskResultRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUpdateTaskResultRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OperationId, operationId_);
    };
    friend void from_json(const Darabonba::Json& j, GetUpdateTaskResultRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OperationId, operationId_);
    };
    GetUpdateTaskResultRequest() = default ;
    GetUpdateTaskResultRequest(const GetUpdateTaskResultRequest &) = default ;
    GetUpdateTaskResultRequest(GetUpdateTaskResultRequest &&) = default ;
    GetUpdateTaskResultRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUpdateTaskResultRequest() = default ;
    GetUpdateTaskResultRequest& operator=(const GetUpdateTaskResultRequest &) = default ;
    GetUpdateTaskResultRequest& operator=(GetUpdateTaskResultRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->operationId_ == nullptr; };
    // operationId Field Functions 
    bool hasOperationId() const { return this->operationId_ != nullptr;};
    void deleteOperationId() { this->operationId_ = nullptr;};
    inline string getOperationId() const { DARABONBA_PTR_GET_DEFAULT(operationId_, "") };
    inline GetUpdateTaskResultRequest& setOperationId(string operationId) { DARABONBA_PTR_SET_VALUE(operationId_, operationId) };


  protected:
    // The operation ID, which is used to query the result of the asynchronous node update. You can obtain this ID from the UpdateTaskAsync operation.
    // 
    // This parameter is required.
    shared_ptr<string> operationId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
