// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETACCOUNTRELATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETACCOUNTRELATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class GetAccountRelationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAccountRelationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RelationId, relationId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAccountRelationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RelationId, relationId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetAccountRelationRequest() = default ;
    GetAccountRelationRequest(const GetAccountRelationRequest &) = default ;
    GetAccountRelationRequest(GetAccountRelationRequest &&) = default ;
    GetAccountRelationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAccountRelationRequest() = default ;
    GetAccountRelationRequest& operator=(const GetAccountRelationRequest &) = default ;
    GetAccountRelationRequest& operator=(GetAccountRelationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->relationId_ != nullptr
        && this->requestId_ != nullptr; };
    // relationId Field Functions 
    bool hasRelationId() const { return this->relationId_ != nullptr;};
    void deleteRelationId() { this->relationId_ = nullptr;};
    inline int64_t relationId() const { DARABONBA_PTR_GET_DEFAULT(relationId_, 0L) };
    inline GetAccountRelationRequest& setRelationId(int64_t relationId) { DARABONBA_PTR_SET_VALUE(relationId_, relationId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAccountRelationRequest& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the financial relationship. Value returned by calling the AddAccountRelation operation.
    std::shared_ptr<int64_t> relationId_ = nullptr;
    // The unique ID of the request. The ID is used to mark a request and troubleshoot a problem.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
