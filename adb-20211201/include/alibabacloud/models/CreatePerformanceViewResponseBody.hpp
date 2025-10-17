// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPERFORMANCEVIEWRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEPERFORMANCEVIEWRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class CreatePerformanceViewResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePerformanceViewResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(CreateStatus, createStatus_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePerformanceViewResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(CreateStatus, createStatus_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreatePerformanceViewResponseBody() = default ;
    CreatePerformanceViewResponseBody(const CreatePerformanceViewResponseBody &) = default ;
    CreatePerformanceViewResponseBody(CreatePerformanceViewResponseBody &&) = default ;
    CreatePerformanceViewResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePerformanceViewResponseBody() = default ;
    CreatePerformanceViewResponseBody& operator=(const CreatePerformanceViewResponseBody &) = default ;
    CreatePerformanceViewResponseBody& operator=(CreatePerformanceViewResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && return this->createStatus_ == nullptr && return this->requestId_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string accessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline CreatePerformanceViewResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // createStatus Field Functions 
    bool hasCreateStatus() const { return this->createStatus_ != nullptr;};
    void deleteCreateStatus() { this->createStatus_ = nullptr;};
    inline string createStatus() const { DARABONBA_PTR_GET_DEFAULT(createStatus_, "") };
    inline CreatePerformanceViewResponseBody& setCreateStatus(string createStatus) { DARABONBA_PTR_SET_VALUE(createStatus_, createStatus) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreatePerformanceViewResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details about the access denial.
    // 
    // >  This parameter is returned only if Resource Access Management (RAM) permission verification failed.
    std::shared_ptr<string> accessDeniedDetail_ = nullptr;
    // The creation result. Valid values:
    // 
    // *   **SUCCESS**
    // *   **FAILED**
    std::shared_ptr<string> createStatus_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
