// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETECHECKPOLICYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DELETECHECKPOLICYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DeleteCheckPolicyResponseBodyPolicys.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DeleteCheckPolicyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteCheckPolicyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Policys, policys_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteCheckPolicyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Policys, policys_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DeleteCheckPolicyResponseBody() = default ;
    DeleteCheckPolicyResponseBody(const DeleteCheckPolicyResponseBody &) = default ;
    DeleteCheckPolicyResponseBody(DeleteCheckPolicyResponseBody &&) = default ;
    DeleteCheckPolicyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteCheckPolicyResponseBody() = default ;
    DeleteCheckPolicyResponseBody& operator=(const DeleteCheckPolicyResponseBody &) = default ;
    DeleteCheckPolicyResponseBody& operator=(DeleteCheckPolicyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->policys_ != nullptr
        && this->requestId_ != nullptr; };
    // policys Field Functions 
    bool hasPolicys() const { return this->policys_ != nullptr;};
    void deletePolicys() { this->policys_ = nullptr;};
    inline const vector<DeleteCheckPolicyResponseBodyPolicys> & policys() const { DARABONBA_PTR_GET_CONST(policys_, vector<DeleteCheckPolicyResponseBodyPolicys>) };
    inline vector<DeleteCheckPolicyResponseBodyPolicys> policys() { DARABONBA_PTR_GET(policys_, vector<DeleteCheckPolicyResponseBodyPolicys>) };
    inline DeleteCheckPolicyResponseBody& setPolicys(const vector<DeleteCheckPolicyResponseBodyPolicys> & policys) { DARABONBA_PTR_SET_VALUE(policys_, policys) };
    inline DeleteCheckPolicyResponseBody& setPolicys(vector<DeleteCheckPolicyResponseBodyPolicys> && policys) { DARABONBA_PTR_SET_RVALUE(policys_, policys) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DeleteCheckPolicyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<DeleteCheckPolicyResponseBodyPolicys>> policys_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
