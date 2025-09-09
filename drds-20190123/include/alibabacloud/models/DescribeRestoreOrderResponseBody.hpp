// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERESTOREORDERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERESTOREORDERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeRestoreOrderResponseBodyRestoreOrderDO.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Drds20190123
{
namespace Models
{
  class DescribeRestoreOrderResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRestoreOrderResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RestoreOrderDO, restoreOrderDO_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRestoreOrderResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RestoreOrderDO, restoreOrderDO_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeRestoreOrderResponseBody() = default ;
    DescribeRestoreOrderResponseBody(const DescribeRestoreOrderResponseBody &) = default ;
    DescribeRestoreOrderResponseBody(DescribeRestoreOrderResponseBody &&) = default ;
    DescribeRestoreOrderResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRestoreOrderResponseBody() = default ;
    DescribeRestoreOrderResponseBody& operator=(const DescribeRestoreOrderResponseBody &) = default ;
    DescribeRestoreOrderResponseBody& operator=(DescribeRestoreOrderResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->restoreOrderDO_ != nullptr && this->success_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRestoreOrderResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // restoreOrderDO Field Functions 
    bool hasRestoreOrderDO() const { return this->restoreOrderDO_ != nullptr;};
    void deleteRestoreOrderDO() { this->restoreOrderDO_ = nullptr;};
    inline const DescribeRestoreOrderResponseBodyRestoreOrderDO & restoreOrderDO() const { DARABONBA_PTR_GET_CONST(restoreOrderDO_, DescribeRestoreOrderResponseBodyRestoreOrderDO) };
    inline DescribeRestoreOrderResponseBodyRestoreOrderDO restoreOrderDO() { DARABONBA_PTR_GET(restoreOrderDO_, DescribeRestoreOrderResponseBodyRestoreOrderDO) };
    inline DescribeRestoreOrderResponseBody& setRestoreOrderDO(const DescribeRestoreOrderResponseBodyRestoreOrderDO & restoreOrderDO) { DARABONBA_PTR_SET_VALUE(restoreOrderDO_, restoreOrderDO) };
    inline DescribeRestoreOrderResponseBody& setRestoreOrderDO(DescribeRestoreOrderResponseBodyRestoreOrderDO && restoreOrderDO) { DARABONBA_PTR_SET_RVALUE(restoreOrderDO_, restoreOrderDO) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeRestoreOrderResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The returned data object.
    std::shared_ptr<DescribeRestoreOrderResponseBodyRestoreOrderDO> restoreOrderDO_ = nullptr;
    // Indicates whether the request was successful.
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Drds20190123
#endif
