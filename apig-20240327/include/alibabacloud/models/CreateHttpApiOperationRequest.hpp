// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEHTTPAPIOPERATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEHTTPAPIOPERATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/HttpApiOperation.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class CreateHttpApiOperationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateHttpApiOperationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(operations, operations_);
    };
    friend void from_json(const Darabonba::Json& j, CreateHttpApiOperationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(operations, operations_);
    };
    CreateHttpApiOperationRequest() = default ;
    CreateHttpApiOperationRequest(const CreateHttpApiOperationRequest &) = default ;
    CreateHttpApiOperationRequest(CreateHttpApiOperationRequest &&) = default ;
    CreateHttpApiOperationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateHttpApiOperationRequest() = default ;
    CreateHttpApiOperationRequest& operator=(const CreateHttpApiOperationRequest &) = default ;
    CreateHttpApiOperationRequest& operator=(CreateHttpApiOperationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->operations_ == nullptr; };
    // operations Field Functions 
    bool hasOperations() const { return this->operations_ != nullptr;};
    void deleteOperations() { this->operations_ = nullptr;};
    inline const vector<HttpApiOperation> & getOperations() const { DARABONBA_PTR_GET_CONST(operations_, vector<HttpApiOperation>) };
    inline vector<HttpApiOperation> getOperations() { DARABONBA_PTR_GET(operations_, vector<HttpApiOperation>) };
    inline CreateHttpApiOperationRequest& setOperations(const vector<HttpApiOperation> & operations) { DARABONBA_PTR_SET_VALUE(operations_, operations) };
    inline CreateHttpApiOperationRequest& setOperations(vector<HttpApiOperation> && operations) { DARABONBA_PTR_SET_RVALUE(operations_, operations) };


  protected:
    // List of operation definitions.
    shared_ptr<vector<HttpApiOperation>> operations_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
