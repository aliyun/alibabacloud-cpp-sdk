// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHYBRIDCLOUDUNASSIGNEDMACHINESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHYBRIDCLOUDUNASSIGNEDMACHINESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeHybridCloudUnassignedMachinesResponseBodyUnassignedMachines.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeHybridCloudUnassignedMachinesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHybridCloudUnassignedMachinesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(UnassignedMachines, unassignedMachines_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHybridCloudUnassignedMachinesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(UnassignedMachines, unassignedMachines_);
    };
    DescribeHybridCloudUnassignedMachinesResponseBody() = default ;
    DescribeHybridCloudUnassignedMachinesResponseBody(const DescribeHybridCloudUnassignedMachinesResponseBody &) = default ;
    DescribeHybridCloudUnassignedMachinesResponseBody(DescribeHybridCloudUnassignedMachinesResponseBody &&) = default ;
    DescribeHybridCloudUnassignedMachinesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHybridCloudUnassignedMachinesResponseBody() = default ;
    DescribeHybridCloudUnassignedMachinesResponseBody& operator=(const DescribeHybridCloudUnassignedMachinesResponseBody &) = default ;
    DescribeHybridCloudUnassignedMachinesResponseBody& operator=(DescribeHybridCloudUnassignedMachinesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->totalCount_ == nullptr && return this->unassignedMachines_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeHybridCloudUnassignedMachinesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeHybridCloudUnassignedMachinesResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // unassignedMachines Field Functions 
    bool hasUnassignedMachines() const { return this->unassignedMachines_ != nullptr;};
    void deleteUnassignedMachines() { this->unassignedMachines_ = nullptr;};
    inline const vector<DescribeHybridCloudUnassignedMachinesResponseBodyUnassignedMachines> & unassignedMachines() const { DARABONBA_PTR_GET_CONST(unassignedMachines_, vector<DescribeHybridCloudUnassignedMachinesResponseBodyUnassignedMachines>) };
    inline vector<DescribeHybridCloudUnassignedMachinesResponseBodyUnassignedMachines> unassignedMachines() { DARABONBA_PTR_GET(unassignedMachines_, vector<DescribeHybridCloudUnassignedMachinesResponseBodyUnassignedMachines>) };
    inline DescribeHybridCloudUnassignedMachinesResponseBody& setUnassignedMachines(const vector<DescribeHybridCloudUnassignedMachinesResponseBodyUnassignedMachines> & unassignedMachines) { DARABONBA_PTR_SET_VALUE(unassignedMachines_, unassignedMachines) };
    inline DescribeHybridCloudUnassignedMachinesResponseBody& setUnassignedMachines(vector<DescribeHybridCloudUnassignedMachinesResponseBodyUnassignedMachines> && unassignedMachines) { DARABONBA_PTR_SET_RVALUE(unassignedMachines_, unassignedMachines) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
    // The servers that are not assigned to the hybrid cloud cluster.
    std::shared_ptr<vector<DescribeHybridCloudUnassignedMachinesResponseBodyUnassignedMachines>> unassignedMachines_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
