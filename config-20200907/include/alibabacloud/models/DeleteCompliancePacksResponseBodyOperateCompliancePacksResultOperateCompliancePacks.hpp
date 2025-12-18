// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETECOMPLIANCEPACKSRESPONSEBODYOPERATECOMPLIANCEPACKSRESULTOPERATECOMPLIANCEPACKS_HPP_
#define ALIBABACLOUD_MODELS_DELETECOMPLIANCEPACKSRESPONSEBODYOPERATECOMPLIANCEPACKSRESULTOPERATECOMPLIANCEPACKS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class DeleteCompliancePacksResponseBodyOperateCompliancePacksResultOperateCompliancePacks : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteCompliancePacksResponseBodyOperateCompliancePacksResultOperateCompliancePacks& obj) { 
      DARABONBA_PTR_TO_JSON(CompliancePackId, compliancePackId_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteCompliancePacksResponseBodyOperateCompliancePacksResultOperateCompliancePacks& obj) { 
      DARABONBA_PTR_FROM_JSON(CompliancePackId, compliancePackId_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DeleteCompliancePacksResponseBodyOperateCompliancePacksResultOperateCompliancePacks() = default ;
    DeleteCompliancePacksResponseBodyOperateCompliancePacksResultOperateCompliancePacks(const DeleteCompliancePacksResponseBodyOperateCompliancePacksResultOperateCompliancePacks &) = default ;
    DeleteCompliancePacksResponseBodyOperateCompliancePacksResultOperateCompliancePacks(DeleteCompliancePacksResponseBodyOperateCompliancePacksResultOperateCompliancePacks &&) = default ;
    DeleteCompliancePacksResponseBodyOperateCompliancePacksResultOperateCompliancePacks(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteCompliancePacksResponseBodyOperateCompliancePacksResultOperateCompliancePacks() = default ;
    DeleteCompliancePacksResponseBodyOperateCompliancePacksResultOperateCompliancePacks& operator=(const DeleteCompliancePacksResponseBodyOperateCompliancePacksResultOperateCompliancePacks &) = default ;
    DeleteCompliancePacksResponseBodyOperateCompliancePacksResultOperateCompliancePacks& operator=(DeleteCompliancePacksResponseBodyOperateCompliancePacksResultOperateCompliancePacks &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->compliancePackId_ == nullptr
        && return this->errorCode_ == nullptr && return this->success_ == nullptr; };
    // compliancePackId Field Functions 
    bool hasCompliancePackId() const { return this->compliancePackId_ != nullptr;};
    void deleteCompliancePackId() { this->compliancePackId_ = nullptr;};
    inline string compliancePackId() const { DARABONBA_PTR_GET_DEFAULT(compliancePackId_, "") };
    inline DeleteCompliancePacksResponseBodyOperateCompliancePacksResultOperateCompliancePacks& setCompliancePackId(string compliancePackId) { DARABONBA_PTR_SET_VALUE(compliancePackId_, compliancePackId) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline DeleteCompliancePacksResponseBodyOperateCompliancePacksResultOperateCompliancePacks& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DeleteCompliancePacksResponseBodyOperateCompliancePacksResultOperateCompliancePacks& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The ID of the compliance package.
    std::shared_ptr<string> compliancePackId_ = nullptr;
    // The error code returned.
    // 
    // *   If the compliance package is deleted, no error code is returned.
    // *   If the compliance package fails to be deleted, an error code is returned. For more information about error codes, see [Error codes](https://error-center.alibabacloud.com/status/product/Config).
    std::shared_ptr<string> errorCode_ = nullptr;
    // Indicates whether the request was successful. Valid values:
    // 
    // *   true: The request was successful.
    // *   false: The request failed.
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
