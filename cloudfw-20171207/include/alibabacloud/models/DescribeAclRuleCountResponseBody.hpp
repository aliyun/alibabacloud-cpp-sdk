// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEACLRULECOUNTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEACLRULECOUNTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeAclRuleCountResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAclRuleCountResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InternetInAclCount, internetInAclCount_);
      DARABONBA_PTR_TO_JSON(InternetOutAclCount, internetOutAclCount_);
      DARABONBA_PTR_TO_JSON(NatInAclCount, natInAclCount_);
      DARABONBA_PTR_TO_JSON(NatOutAclCount, natOutAclCount_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalAclCount, totalAclCount_);
      DARABONBA_PTR_TO_JSON(VpcAclCount, vpcAclCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAclRuleCountResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InternetInAclCount, internetInAclCount_);
      DARABONBA_PTR_FROM_JSON(InternetOutAclCount, internetOutAclCount_);
      DARABONBA_PTR_FROM_JSON(NatInAclCount, natInAclCount_);
      DARABONBA_PTR_FROM_JSON(NatOutAclCount, natOutAclCount_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalAclCount, totalAclCount_);
      DARABONBA_PTR_FROM_JSON(VpcAclCount, vpcAclCount_);
    };
    DescribeAclRuleCountResponseBody() = default ;
    DescribeAclRuleCountResponseBody(const DescribeAclRuleCountResponseBody &) = default ;
    DescribeAclRuleCountResponseBody(DescribeAclRuleCountResponseBody &&) = default ;
    DescribeAclRuleCountResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAclRuleCountResponseBody() = default ;
    DescribeAclRuleCountResponseBody& operator=(const DescribeAclRuleCountResponseBody &) = default ;
    DescribeAclRuleCountResponseBody& operator=(DescribeAclRuleCountResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->internetInAclCount_ == nullptr
        && return this->internetOutAclCount_ == nullptr && return this->natInAclCount_ == nullptr && return this->natOutAclCount_ == nullptr && return this->requestId_ == nullptr && return this->totalAclCount_ == nullptr
        && return this->vpcAclCount_ == nullptr; };
    // internetInAclCount Field Functions 
    bool hasInternetInAclCount() const { return this->internetInAclCount_ != nullptr;};
    void deleteInternetInAclCount() { this->internetInAclCount_ = nullptr;};
    inline int32_t internetInAclCount() const { DARABONBA_PTR_GET_DEFAULT(internetInAclCount_, 0) };
    inline DescribeAclRuleCountResponseBody& setInternetInAclCount(int32_t internetInAclCount) { DARABONBA_PTR_SET_VALUE(internetInAclCount_, internetInAclCount) };


    // internetOutAclCount Field Functions 
    bool hasInternetOutAclCount() const { return this->internetOutAclCount_ != nullptr;};
    void deleteInternetOutAclCount() { this->internetOutAclCount_ = nullptr;};
    inline int32_t internetOutAclCount() const { DARABONBA_PTR_GET_DEFAULT(internetOutAclCount_, 0) };
    inline DescribeAclRuleCountResponseBody& setInternetOutAclCount(int32_t internetOutAclCount) { DARABONBA_PTR_SET_VALUE(internetOutAclCount_, internetOutAclCount) };


    // natInAclCount Field Functions 
    bool hasNatInAclCount() const { return this->natInAclCount_ != nullptr;};
    void deleteNatInAclCount() { this->natInAclCount_ = nullptr;};
    inline int32_t natInAclCount() const { DARABONBA_PTR_GET_DEFAULT(natInAclCount_, 0) };
    inline DescribeAclRuleCountResponseBody& setNatInAclCount(int32_t natInAclCount) { DARABONBA_PTR_SET_VALUE(natInAclCount_, natInAclCount) };


    // natOutAclCount Field Functions 
    bool hasNatOutAclCount() const { return this->natOutAclCount_ != nullptr;};
    void deleteNatOutAclCount() { this->natOutAclCount_ = nullptr;};
    inline int32_t natOutAclCount() const { DARABONBA_PTR_GET_DEFAULT(natOutAclCount_, 0) };
    inline DescribeAclRuleCountResponseBody& setNatOutAclCount(int32_t natOutAclCount) { DARABONBA_PTR_SET_VALUE(natOutAclCount_, natOutAclCount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAclRuleCountResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalAclCount Field Functions 
    bool hasTotalAclCount() const { return this->totalAclCount_ != nullptr;};
    void deleteTotalAclCount() { this->totalAclCount_ = nullptr;};
    inline int32_t totalAclCount() const { DARABONBA_PTR_GET_DEFAULT(totalAclCount_, 0) };
    inline DescribeAclRuleCountResponseBody& setTotalAclCount(int32_t totalAclCount) { DARABONBA_PTR_SET_VALUE(totalAclCount_, totalAclCount) };


    // vpcAclCount Field Functions 
    bool hasVpcAclCount() const { return this->vpcAclCount_ != nullptr;};
    void deleteVpcAclCount() { this->vpcAclCount_ = nullptr;};
    inline int32_t vpcAclCount() const { DARABONBA_PTR_GET_DEFAULT(vpcAclCount_, 0) };
    inline DescribeAclRuleCountResponseBody& setVpcAclCount(int32_t vpcAclCount) { DARABONBA_PTR_SET_VALUE(vpcAclCount_, vpcAclCount) };


  protected:
    std::shared_ptr<int32_t> internetInAclCount_ = nullptr;
    std::shared_ptr<int32_t> internetOutAclCount_ = nullptr;
    std::shared_ptr<int32_t> natInAclCount_ = nullptr;
    std::shared_ptr<int32_t> natOutAclCount_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int32_t> totalAclCount_ = nullptr;
    std::shared_ptr<int32_t> vpcAclCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
