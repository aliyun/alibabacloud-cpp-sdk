// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPSPROGRESSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPSPROGRESSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeApsProgressResponseBodyApsHiveProgress.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeApsProgressResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApsProgressResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ApsHiveProgress, apsHiveProgress_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SuccessPercentage, successPercentage_);
      DARABONBA_PTR_TO_JSON(SuccessTableCount, successTableCount_);
      DARABONBA_PTR_TO_JSON(TotalTableCount, totalTableCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApsProgressResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ApsHiveProgress, apsHiveProgress_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SuccessPercentage, successPercentage_);
      DARABONBA_PTR_FROM_JSON(SuccessTableCount, successTableCount_);
      DARABONBA_PTR_FROM_JSON(TotalTableCount, totalTableCount_);
    };
    DescribeApsProgressResponseBody() = default ;
    DescribeApsProgressResponseBody(const DescribeApsProgressResponseBody &) = default ;
    DescribeApsProgressResponseBody(DescribeApsProgressResponseBody &&) = default ;
    DescribeApsProgressResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApsProgressResponseBody() = default ;
    DescribeApsProgressResponseBody& operator=(const DescribeApsProgressResponseBody &) = default ;
    DescribeApsProgressResponseBody& operator=(DescribeApsProgressResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apsHiveProgress_ == nullptr
        && return this->requestId_ == nullptr && return this->successPercentage_ == nullptr && return this->successTableCount_ == nullptr && return this->totalTableCount_ == nullptr; };
    // apsHiveProgress Field Functions 
    bool hasApsHiveProgress() const { return this->apsHiveProgress_ != nullptr;};
    void deleteApsHiveProgress() { this->apsHiveProgress_ = nullptr;};
    inline const vector<DescribeApsProgressResponseBodyApsHiveProgress> & apsHiveProgress() const { DARABONBA_PTR_GET_CONST(apsHiveProgress_, vector<DescribeApsProgressResponseBodyApsHiveProgress>) };
    inline vector<DescribeApsProgressResponseBodyApsHiveProgress> apsHiveProgress() { DARABONBA_PTR_GET(apsHiveProgress_, vector<DescribeApsProgressResponseBodyApsHiveProgress>) };
    inline DescribeApsProgressResponseBody& setApsHiveProgress(const vector<DescribeApsProgressResponseBodyApsHiveProgress> & apsHiveProgress) { DARABONBA_PTR_SET_VALUE(apsHiveProgress_, apsHiveProgress) };
    inline DescribeApsProgressResponseBody& setApsHiveProgress(vector<DescribeApsProgressResponseBodyApsHiveProgress> && apsHiveProgress) { DARABONBA_PTR_SET_RVALUE(apsHiveProgress_, apsHiveProgress) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeApsProgressResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // successPercentage Field Functions 
    bool hasSuccessPercentage() const { return this->successPercentage_ != nullptr;};
    void deleteSuccessPercentage() { this->successPercentage_ = nullptr;};
    inline int32_t successPercentage() const { DARABONBA_PTR_GET_DEFAULT(successPercentage_, 0) };
    inline DescribeApsProgressResponseBody& setSuccessPercentage(int32_t successPercentage) { DARABONBA_PTR_SET_VALUE(successPercentage_, successPercentage) };


    // successTableCount Field Functions 
    bool hasSuccessTableCount() const { return this->successTableCount_ != nullptr;};
    void deleteSuccessTableCount() { this->successTableCount_ = nullptr;};
    inline int32_t successTableCount() const { DARABONBA_PTR_GET_DEFAULT(successTableCount_, 0) };
    inline DescribeApsProgressResponseBody& setSuccessTableCount(int32_t successTableCount) { DARABONBA_PTR_SET_VALUE(successTableCount_, successTableCount) };


    // totalTableCount Field Functions 
    bool hasTotalTableCount() const { return this->totalTableCount_ != nullptr;};
    void deleteTotalTableCount() { this->totalTableCount_ = nullptr;};
    inline int32_t totalTableCount() const { DARABONBA_PTR_GET_DEFAULT(totalTableCount_, 0) };
    inline DescribeApsProgressResponseBody& setTotalTableCount(int32_t totalTableCount) { DARABONBA_PTR_SET_VALUE(totalTableCount_, totalTableCount) };


  protected:
    // The migration progress.
    std::shared_ptr<vector<DescribeApsProgressResponseBodyApsHiveProgress>> apsHiveProgress_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The success rate.
    std::shared_ptr<int32_t> successPercentage_ = nullptr;
    // The total number of migrated tables returned.
    std::shared_ptr<int32_t> successTableCount_ = nullptr;
    // The total number of tables to be migrated.
    std::shared_ptr<int32_t> totalTableCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
