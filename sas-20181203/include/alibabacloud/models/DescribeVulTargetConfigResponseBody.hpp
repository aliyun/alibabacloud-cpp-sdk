// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVULTARGETCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVULTARGETCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeVulTargetConfigResponseBodyTargetConfigs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeVulTargetConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVulTargetConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TargetConfigs, targetConfigs_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVulTargetConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TargetConfigs, targetConfigs_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeVulTargetConfigResponseBody() = default ;
    DescribeVulTargetConfigResponseBody(const DescribeVulTargetConfigResponseBody &) = default ;
    DescribeVulTargetConfigResponseBody(DescribeVulTargetConfigResponseBody &&) = default ;
    DescribeVulTargetConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVulTargetConfigResponseBody() = default ;
    DescribeVulTargetConfigResponseBody& operator=(const DescribeVulTargetConfigResponseBody &) = default ;
    DescribeVulTargetConfigResponseBody& operator=(DescribeVulTargetConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->targetConfigs_ == nullptr && return this->totalCount_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVulTargetConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // targetConfigs Field Functions 
    bool hasTargetConfigs() const { return this->targetConfigs_ != nullptr;};
    void deleteTargetConfigs() { this->targetConfigs_ = nullptr;};
    inline const vector<DescribeVulTargetConfigResponseBodyTargetConfigs> & targetConfigs() const { DARABONBA_PTR_GET_CONST(targetConfigs_, vector<DescribeVulTargetConfigResponseBodyTargetConfigs>) };
    inline vector<DescribeVulTargetConfigResponseBodyTargetConfigs> targetConfigs() { DARABONBA_PTR_GET(targetConfigs_, vector<DescribeVulTargetConfigResponseBodyTargetConfigs>) };
    inline DescribeVulTargetConfigResponseBody& setTargetConfigs(const vector<DescribeVulTargetConfigResponseBodyTargetConfigs> & targetConfigs) { DARABONBA_PTR_SET_VALUE(targetConfigs_, targetConfigs) };
    inline DescribeVulTargetConfigResponseBody& setTargetConfigs(vector<DescribeVulTargetConfigResponseBodyTargetConfigs> && targetConfigs) { DARABONBA_PTR_SET_RVALUE(targetConfigs_, targetConfigs) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeVulTargetConfigResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // An array that consists of the configurations.
    std::shared_ptr<vector<DescribeVulTargetConfigResponseBodyTargetConfigs>> targetConfigs_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
