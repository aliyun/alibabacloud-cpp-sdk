// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETARGETRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETARGETRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeTargetResponseBodyTargets.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeTargetResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTargetResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Targets, targets_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTargetResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Targets, targets_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeTargetResponseBody() = default ;
    DescribeTargetResponseBody(const DescribeTargetResponseBody &) = default ;
    DescribeTargetResponseBody(DescribeTargetResponseBody &&) = default ;
    DescribeTargetResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTargetResponseBody() = default ;
    DescribeTargetResponseBody& operator=(const DescribeTargetResponseBody &) = default ;
    DescribeTargetResponseBody& operator=(DescribeTargetResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->targets_ == nullptr && return this->totalCount_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeTargetResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // targets Field Functions 
    bool hasTargets() const { return this->targets_ != nullptr;};
    void deleteTargets() { this->targets_ = nullptr;};
    inline const vector<DescribeTargetResponseBodyTargets> & targets() const { DARABONBA_PTR_GET_CONST(targets_, vector<DescribeTargetResponseBodyTargets>) };
    inline vector<DescribeTargetResponseBodyTargets> targets() { DARABONBA_PTR_GET(targets_, vector<DescribeTargetResponseBodyTargets>) };
    inline DescribeTargetResponseBody& setTargets(const vector<DescribeTargetResponseBodyTargets> & targets) { DARABONBA_PTR_SET_VALUE(targets_, targets) };
    inline DescribeTargetResponseBody& setTargets(vector<DescribeTargetResponseBodyTargets> && targets) { DARABONBA_PTR_SET_RVALUE(targets_, targets) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeTargetResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The information about the server.
    std::shared_ptr<vector<DescribeTargetResponseBodyTargets>> targets_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
