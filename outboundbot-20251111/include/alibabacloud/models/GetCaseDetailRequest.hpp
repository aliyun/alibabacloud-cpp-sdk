// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCASEDETAILREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETCASEDETAILREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20251111
{
namespace Models
{
  class GetCaseDetailRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCaseDetailRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CaseId, caseId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
    };
    friend void from_json(const Darabonba::Json& j, GetCaseDetailRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CaseId, caseId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
    };
    GetCaseDetailRequest() = default ;
    GetCaseDetailRequest(const GetCaseDetailRequest &) = default ;
    GetCaseDetailRequest(GetCaseDetailRequest &&) = default ;
    GetCaseDetailRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCaseDetailRequest() = default ;
    GetCaseDetailRequest& operator=(const GetCaseDetailRequest &) = default ;
    GetCaseDetailRequest& operator=(GetCaseDetailRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->caseId_ == nullptr
        && this->instanceId_ == nullptr && this->productCode_ == nullptr; };
    // caseId Field Functions 
    bool hasCaseId() const { return this->caseId_ != nullptr;};
    void deleteCaseId() { this->caseId_ = nullptr;};
    inline string getCaseId() const { DARABONBA_PTR_GET_DEFAULT(caseId_, "") };
    inline GetCaseDetailRequest& setCaseId(string caseId) { DARABONBA_PTR_SET_VALUE(caseId_, caseId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetCaseDetailRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string getProductCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline GetCaseDetailRequest& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


  protected:
    // The case ID.
    // 
    // This parameter is required.
    shared_ptr<string> caseId_ {};
    // The instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The product code.
    shared_ptr<string> productCode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20251111
#endif
