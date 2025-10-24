// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERESOURCESUPPORTREGIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERESOURCESUPPORTREGIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeResourceSupportRegionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeResourceSupportRegionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SupportRegions, supportRegions_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeResourceSupportRegionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SupportRegions, supportRegions_);
    };
    DescribeResourceSupportRegionsResponseBody() = default ;
    DescribeResourceSupportRegionsResponseBody(const DescribeResourceSupportRegionsResponseBody &) = default ;
    DescribeResourceSupportRegionsResponseBody(DescribeResourceSupportRegionsResponseBody &&) = default ;
    DescribeResourceSupportRegionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeResourceSupportRegionsResponseBody() = default ;
    DescribeResourceSupportRegionsResponseBody& operator=(const DescribeResourceSupportRegionsResponseBody &) = default ;
    DescribeResourceSupportRegionsResponseBody& operator=(DescribeResourceSupportRegionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->supportRegions_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeResourceSupportRegionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // supportRegions Field Functions 
    bool hasSupportRegions() const { return this->supportRegions_ != nullptr;};
    void deleteSupportRegions() { this->supportRegions_ = nullptr;};
    inline const vector<string> & supportRegions() const { DARABONBA_PTR_GET_CONST(supportRegions_, vector<string>) };
    inline vector<string> supportRegions() { DARABONBA_PTR_GET(supportRegions_, vector<string>) };
    inline DescribeResourceSupportRegionsResponseBody& setSupportRegions(const vector<string> & supportRegions) { DARABONBA_PTR_SET_VALUE(supportRegions_, supportRegions) };
    inline DescribeResourceSupportRegionsResponseBody& setSupportRegions(vector<string> && supportRegions) { DARABONBA_PTR_SET_RVALUE(supportRegions_, supportRegions) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // An array of region IDs of the CLB and ECS instances that are added to WAF in cloud native mode.
    std::shared_ptr<vector<string>> supportRegions_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
