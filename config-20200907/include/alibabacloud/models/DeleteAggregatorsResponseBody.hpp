// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEAGGREGATORSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DELETEAGGREGATORSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DeleteAggregatorsResponseBodyOperateAggregatorsResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class DeleteAggregatorsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteAggregatorsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(OperateAggregatorsResult, operateAggregatorsResult_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteAggregatorsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(OperateAggregatorsResult, operateAggregatorsResult_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DeleteAggregatorsResponseBody() = default ;
    DeleteAggregatorsResponseBody(const DeleteAggregatorsResponseBody &) = default ;
    DeleteAggregatorsResponseBody(DeleteAggregatorsResponseBody &&) = default ;
    DeleteAggregatorsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteAggregatorsResponseBody() = default ;
    DeleteAggregatorsResponseBody& operator=(const DeleteAggregatorsResponseBody &) = default ;
    DeleteAggregatorsResponseBody& operator=(DeleteAggregatorsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->operateAggregatorsResult_ == nullptr
        && return this->requestId_ == nullptr; };
    // operateAggregatorsResult Field Functions 
    bool hasOperateAggregatorsResult() const { return this->operateAggregatorsResult_ != nullptr;};
    void deleteOperateAggregatorsResult() { this->operateAggregatorsResult_ = nullptr;};
    inline const DeleteAggregatorsResponseBodyOperateAggregatorsResult & operateAggregatorsResult() const { DARABONBA_PTR_GET_CONST(operateAggregatorsResult_, DeleteAggregatorsResponseBodyOperateAggregatorsResult) };
    inline DeleteAggregatorsResponseBodyOperateAggregatorsResult operateAggregatorsResult() { DARABONBA_PTR_GET(operateAggregatorsResult_, DeleteAggregatorsResponseBodyOperateAggregatorsResult) };
    inline DeleteAggregatorsResponseBody& setOperateAggregatorsResult(const DeleteAggregatorsResponseBodyOperateAggregatorsResult & operateAggregatorsResult) { DARABONBA_PTR_SET_VALUE(operateAggregatorsResult_, operateAggregatorsResult) };
    inline DeleteAggregatorsResponseBody& setOperateAggregatorsResult(DeleteAggregatorsResponseBodyOperateAggregatorsResult && operateAggregatorsResult) { DARABONBA_PTR_SET_RVALUE(operateAggregatorsResult_, operateAggregatorsResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DeleteAggregatorsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned result.
    std::shared_ptr<DeleteAggregatorsResponseBodyOperateAggregatorsResult> operateAggregatorsResult_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
