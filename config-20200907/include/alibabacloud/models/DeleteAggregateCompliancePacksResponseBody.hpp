// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEAGGREGATECOMPLIANCEPACKSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DELETEAGGREGATECOMPLIANCEPACKSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DeleteAggregateCompliancePacksResponseBodyOperateCompliancePacksResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class DeleteAggregateCompliancePacksResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteAggregateCompliancePacksResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(OperateCompliancePacksResult, operateCompliancePacksResult_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteAggregateCompliancePacksResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(OperateCompliancePacksResult, operateCompliancePacksResult_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DeleteAggregateCompliancePacksResponseBody() = default ;
    DeleteAggregateCompliancePacksResponseBody(const DeleteAggregateCompliancePacksResponseBody &) = default ;
    DeleteAggregateCompliancePacksResponseBody(DeleteAggregateCompliancePacksResponseBody &&) = default ;
    DeleteAggregateCompliancePacksResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteAggregateCompliancePacksResponseBody() = default ;
    DeleteAggregateCompliancePacksResponseBody& operator=(const DeleteAggregateCompliancePacksResponseBody &) = default ;
    DeleteAggregateCompliancePacksResponseBody& operator=(DeleteAggregateCompliancePacksResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->operateCompliancePacksResult_ == nullptr
        && return this->requestId_ == nullptr; };
    // operateCompliancePacksResult Field Functions 
    bool hasOperateCompliancePacksResult() const { return this->operateCompliancePacksResult_ != nullptr;};
    void deleteOperateCompliancePacksResult() { this->operateCompliancePacksResult_ = nullptr;};
    inline const DeleteAggregateCompliancePacksResponseBodyOperateCompliancePacksResult & operateCompliancePacksResult() const { DARABONBA_PTR_GET_CONST(operateCompliancePacksResult_, DeleteAggregateCompliancePacksResponseBodyOperateCompliancePacksResult) };
    inline DeleteAggregateCompliancePacksResponseBodyOperateCompliancePacksResult operateCompliancePacksResult() { DARABONBA_PTR_GET(operateCompliancePacksResult_, DeleteAggregateCompliancePacksResponseBodyOperateCompliancePacksResult) };
    inline DeleteAggregateCompliancePacksResponseBody& setOperateCompliancePacksResult(const DeleteAggregateCompliancePacksResponseBodyOperateCompliancePacksResult & operateCompliancePacksResult) { DARABONBA_PTR_SET_VALUE(operateCompliancePacksResult_, operateCompliancePacksResult) };
    inline DeleteAggregateCompliancePacksResponseBody& setOperateCompliancePacksResult(DeleteAggregateCompliancePacksResponseBodyOperateCompliancePacksResult && operateCompliancePacksResult) { DARABONBA_PTR_SET_RVALUE(operateCompliancePacksResult_, operateCompliancePacksResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DeleteAggregateCompliancePacksResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The results of the delete operations.
    std::shared_ptr<DeleteAggregateCompliancePacksResponseBodyOperateCompliancePacksResult> operateCompliancePacksResult_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
