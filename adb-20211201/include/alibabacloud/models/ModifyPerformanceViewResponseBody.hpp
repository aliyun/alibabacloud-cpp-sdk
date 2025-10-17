// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYPERFORMANCEVIEWRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYPERFORMANCEVIEWRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class ModifyPerformanceViewResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyPerformanceViewResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(ModifyStatus, modifyStatus_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyPerformanceViewResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(ModifyStatus, modifyStatus_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ModifyPerformanceViewResponseBody() = default ;
    ModifyPerformanceViewResponseBody(const ModifyPerformanceViewResponseBody &) = default ;
    ModifyPerformanceViewResponseBody(ModifyPerformanceViewResponseBody &&) = default ;
    ModifyPerformanceViewResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyPerformanceViewResponseBody() = default ;
    ModifyPerformanceViewResponseBody& operator=(const ModifyPerformanceViewResponseBody &) = default ;
    ModifyPerformanceViewResponseBody& operator=(ModifyPerformanceViewResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && return this->modifyStatus_ == nullptr && return this->requestId_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string accessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline ModifyPerformanceViewResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // modifyStatus Field Functions 
    bool hasModifyStatus() const { return this->modifyStatus_ != nullptr;};
    void deleteModifyStatus() { this->modifyStatus_ = nullptr;};
    inline string modifyStatus() const { DARABONBA_PTR_GET_DEFAULT(modifyStatus_, "") };
    inline ModifyPerformanceViewResponseBody& setModifyStatus(string modifyStatus) { DARABONBA_PTR_SET_VALUE(modifyStatus_, modifyStatus) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ModifyPerformanceViewResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details about the access denial. This parameter is returned only if Resource Access Management (RAM) permission verification failed.
    std::shared_ptr<string> accessDeniedDetail_ = nullptr;
    // The modification result. Valid values:
    // 
    // *   **SUCCESS**
    // *   **FAILED**
    std::shared_ptr<string> modifyStatus_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
