// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEPERFORMANCEVIEWRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DELETEPERFORMANCEVIEWRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DeletePerformanceViewResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeletePerformanceViewResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(DeleteStatus, deleteStatus_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DeletePerformanceViewResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(DeleteStatus, deleteStatus_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DeletePerformanceViewResponseBody() = default ;
    DeletePerformanceViewResponseBody(const DeletePerformanceViewResponseBody &) = default ;
    DeletePerformanceViewResponseBody(DeletePerformanceViewResponseBody &&) = default ;
    DeletePerformanceViewResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeletePerformanceViewResponseBody() = default ;
    DeletePerformanceViewResponseBody& operator=(const DeletePerformanceViewResponseBody &) = default ;
    DeletePerformanceViewResponseBody& operator=(DeletePerformanceViewResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accessDeniedDetail_ != nullptr
        && this->deleteStatus_ != nullptr && this->requestId_ != nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string accessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline DeletePerformanceViewResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // deleteStatus Field Functions 
    bool hasDeleteStatus() const { return this->deleteStatus_ != nullptr;};
    void deleteDeleteStatus() { this->deleteStatus_ = nullptr;};
    inline bool deleteStatus() const { DARABONBA_PTR_GET_DEFAULT(deleteStatus_, false) };
    inline DeletePerformanceViewResponseBody& setDeleteStatus(bool deleteStatus) { DARABONBA_PTR_SET_VALUE(deleteStatus_, deleteStatus) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DeletePerformanceViewResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details about the access denial.
    // 
    // >  This parameter is returned only if Resource Access Management (RAM) permission verification failed.
    std::shared_ptr<string> accessDeniedDetail_ = nullptr;
    // The delete status.
    std::shared_ptr<bool> deleteStatus_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
