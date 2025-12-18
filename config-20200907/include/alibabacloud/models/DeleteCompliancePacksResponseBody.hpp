// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETECOMPLIANCEPACKSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DELETECOMPLIANCEPACKSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DeleteCompliancePacksResponseBodyOperateCompliancePacksResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class DeleteCompliancePacksResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteCompliancePacksResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(OperateCompliancePacksResult, operateCompliancePacksResult_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteCompliancePacksResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(OperateCompliancePacksResult, operateCompliancePacksResult_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DeleteCompliancePacksResponseBody() = default ;
    DeleteCompliancePacksResponseBody(const DeleteCompliancePacksResponseBody &) = default ;
    DeleteCompliancePacksResponseBody(DeleteCompliancePacksResponseBody &&) = default ;
    DeleteCompliancePacksResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteCompliancePacksResponseBody() = default ;
    DeleteCompliancePacksResponseBody& operator=(const DeleteCompliancePacksResponseBody &) = default ;
    DeleteCompliancePacksResponseBody& operator=(DeleteCompliancePacksResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->operateCompliancePacksResult_ == nullptr
        && return this->requestId_ == nullptr; };
    // operateCompliancePacksResult Field Functions 
    bool hasOperateCompliancePacksResult() const { return this->operateCompliancePacksResult_ != nullptr;};
    void deleteOperateCompliancePacksResult() { this->operateCompliancePacksResult_ = nullptr;};
    inline const DeleteCompliancePacksResponseBodyOperateCompliancePacksResult & operateCompliancePacksResult() const { DARABONBA_PTR_GET_CONST(operateCompliancePacksResult_, DeleteCompliancePacksResponseBodyOperateCompliancePacksResult) };
    inline DeleteCompliancePacksResponseBodyOperateCompliancePacksResult operateCompliancePacksResult() { DARABONBA_PTR_GET(operateCompliancePacksResult_, DeleteCompliancePacksResponseBodyOperateCompliancePacksResult) };
    inline DeleteCompliancePacksResponseBody& setOperateCompliancePacksResult(const DeleteCompliancePacksResponseBodyOperateCompliancePacksResult & operateCompliancePacksResult) { DARABONBA_PTR_SET_VALUE(operateCompliancePacksResult_, operateCompliancePacksResult) };
    inline DeleteCompliancePacksResponseBody& setOperateCompliancePacksResult(DeleteCompliancePacksResponseBodyOperateCompliancePacksResult && operateCompliancePacksResult) { DARABONBA_PTR_SET_RVALUE(operateCompliancePacksResult_, operateCompliancePacksResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DeleteCompliancePacksResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned result.
    std::shared_ptr<DeleteCompliancePacksResponseBodyOperateCompliancePacksResult> operateCompliancePacksResult_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
