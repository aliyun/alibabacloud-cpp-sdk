// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVULCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVULCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeVulConfigResponseBodyTargetConfigs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeVulConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVulConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TargetConfigs, targetConfigs_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVulConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TargetConfigs, targetConfigs_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeVulConfigResponseBody() = default ;
    DescribeVulConfigResponseBody(const DescribeVulConfigResponseBody &) = default ;
    DescribeVulConfigResponseBody(DescribeVulConfigResponseBody &&) = default ;
    DescribeVulConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVulConfigResponseBody() = default ;
    DescribeVulConfigResponseBody& operator=(const DescribeVulConfigResponseBody &) = default ;
    DescribeVulConfigResponseBody& operator=(DescribeVulConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->targetConfigs_ != nullptr && this->totalCount_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVulConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // targetConfigs Field Functions 
    bool hasTargetConfigs() const { return this->targetConfigs_ != nullptr;};
    void deleteTargetConfigs() { this->targetConfigs_ = nullptr;};
    inline const vector<DescribeVulConfigResponseBodyTargetConfigs> & targetConfigs() const { DARABONBA_PTR_GET_CONST(targetConfigs_, vector<DescribeVulConfigResponseBodyTargetConfigs>) };
    inline vector<DescribeVulConfigResponseBodyTargetConfigs> targetConfigs() { DARABONBA_PTR_GET(targetConfigs_, vector<DescribeVulConfigResponseBodyTargetConfigs>) };
    inline DescribeVulConfigResponseBody& setTargetConfigs(const vector<DescribeVulConfigResponseBodyTargetConfigs> & targetConfigs) { DARABONBA_PTR_SET_VALUE(targetConfigs_, targetConfigs) };
    inline DescribeVulConfigResponseBody& setTargetConfigs(vector<DescribeVulConfigResponseBodyTargetConfigs> && targetConfigs) { DARABONBA_PTR_SET_RVALUE(targetConfigs_, targetConfigs) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeVulConfigResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
    // An array that consists of the configurations of vulnerability management.
    std::shared_ptr<vector<DescribeVulConfigResponseBodyTargetConfigs>> targetConfigs_ = nullptr;
    // The total number of configurations.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
