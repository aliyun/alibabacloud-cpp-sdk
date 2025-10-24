// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESPECRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESPECRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeSpecResponseBodySpecInfoModel.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class DescribeSpecResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSpecResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SpecInfoModel, specInfoModel_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSpecResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SpecInfoModel, specInfoModel_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeSpecResponseBody() = default ;
    DescribeSpecResponseBody(const DescribeSpecResponseBody &) = default ;
    DescribeSpecResponseBody(DescribeSpecResponseBody &&) = default ;
    DescribeSpecResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSpecResponseBody() = default ;
    DescribeSpecResponseBody& operator=(const DescribeSpecResponseBody &) = default ;
    DescribeSpecResponseBody& operator=(DescribeSpecResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->nextToken_ == nullptr
        && return this->requestId_ == nullptr && return this->specInfoModel_ == nullptr && return this->totalCount_ == nullptr; };
    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeSpecResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSpecResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // specInfoModel Field Functions 
    bool hasSpecInfoModel() const { return this->specInfoModel_ != nullptr;};
    void deleteSpecInfoModel() { this->specInfoModel_ = nullptr;};
    inline const vector<DescribeSpecResponseBodySpecInfoModel> & specInfoModel() const { DARABONBA_PTR_GET_CONST(specInfoModel_, vector<DescribeSpecResponseBodySpecInfoModel>) };
    inline vector<DescribeSpecResponseBodySpecInfoModel> specInfoModel() { DARABONBA_PTR_GET(specInfoModel_, vector<DescribeSpecResponseBodySpecInfoModel>) };
    inline DescribeSpecResponseBody& setSpecInfoModel(const vector<DescribeSpecResponseBodySpecInfoModel> & specInfoModel) { DARABONBA_PTR_SET_VALUE(specInfoModel_, specInfoModel) };
    inline DescribeSpecResponseBody& setSpecInfoModel(vector<DescribeSpecResponseBodySpecInfoModel> && specInfoModel) { DARABONBA_PTR_SET_RVALUE(specInfoModel_, specInfoModel) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeSpecResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // Indicates the current read position returned by this call. An empty value means that all data has been read.
    std::shared_ptr<string> nextToken_ = nullptr;
    // Request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The specifications.
    std::shared_ptr<vector<DescribeSpecResponseBodySpecInfoModel>> specInfoModel_ = nullptr;
    // Total number of items.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
