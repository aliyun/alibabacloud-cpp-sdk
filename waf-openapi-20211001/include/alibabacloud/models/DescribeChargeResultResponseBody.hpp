// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECHARGERESULTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECHARGERESULTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeChargeResultResponseBodyModuleDetails.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeChargeResultResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeChargeResultResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ModuleDetails, moduleDetails_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalSeCu, totalSeCu_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeChargeResultResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ModuleDetails, moduleDetails_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalSeCu, totalSeCu_);
    };
    DescribeChargeResultResponseBody() = default ;
    DescribeChargeResultResponseBody(const DescribeChargeResultResponseBody &) = default ;
    DescribeChargeResultResponseBody(DescribeChargeResultResponseBody &&) = default ;
    DescribeChargeResultResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeChargeResultResponseBody() = default ;
    DescribeChargeResultResponseBody& operator=(const DescribeChargeResultResponseBody &) = default ;
    DescribeChargeResultResponseBody& operator=(DescribeChargeResultResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->moduleDetails_ == nullptr
        && return this->requestId_ == nullptr && return this->totalSeCu_ == nullptr; };
    // moduleDetails Field Functions 
    bool hasModuleDetails() const { return this->moduleDetails_ != nullptr;};
    void deleteModuleDetails() { this->moduleDetails_ = nullptr;};
    inline const vector<DescribeChargeResultResponseBodyModuleDetails> & moduleDetails() const { DARABONBA_PTR_GET_CONST(moduleDetails_, vector<DescribeChargeResultResponseBodyModuleDetails>) };
    inline vector<DescribeChargeResultResponseBodyModuleDetails> moduleDetails() { DARABONBA_PTR_GET(moduleDetails_, vector<DescribeChargeResultResponseBodyModuleDetails>) };
    inline DescribeChargeResultResponseBody& setModuleDetails(const vector<DescribeChargeResultResponseBodyModuleDetails> & moduleDetails) { DARABONBA_PTR_SET_VALUE(moduleDetails_, moduleDetails) };
    inline DescribeChargeResultResponseBody& setModuleDetails(vector<DescribeChargeResultResponseBodyModuleDetails> && moduleDetails) { DARABONBA_PTR_SET_RVALUE(moduleDetails_, moduleDetails) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeChargeResultResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalSeCu Field Functions 
    bool hasTotalSeCu() const { return this->totalSeCu_ != nullptr;};
    void deleteTotalSeCu() { this->totalSeCu_ = nullptr;};
    inline double totalSeCu() const { DARABONBA_PTR_GET_DEFAULT(totalSeCu_, 0.0) };
    inline DescribeChargeResultResponseBody& setTotalSeCu(double totalSeCu) { DARABONBA_PTR_SET_VALUE(totalSeCu_, totalSeCu) };


  protected:
    std::shared_ptr<vector<DescribeChargeResultResponseBodyModuleDetails>> moduleDetails_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<double> totalSeCu_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
