// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESPECREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESPECREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class DescribeSpecRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSpecRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizRegionId, bizRegionId_);
      DARABONBA_PTR_TO_JSON(MatrixSpec, matrixSpec_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(SaleMode, saleMode_);
      DARABONBA_PTR_TO_JSON(SpecIds, specIds_);
      DARABONBA_PTR_TO_JSON(SpecStatus, specStatus_);
      DARABONBA_PTR_TO_JSON(SpecType, specType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSpecRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizRegionId, bizRegionId_);
      DARABONBA_PTR_FROM_JSON(MatrixSpec, matrixSpec_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(SaleMode, saleMode_);
      DARABONBA_PTR_FROM_JSON(SpecIds, specIds_);
      DARABONBA_PTR_FROM_JSON(SpecStatus, specStatus_);
      DARABONBA_PTR_FROM_JSON(SpecType, specType_);
    };
    DescribeSpecRequest() = default ;
    DescribeSpecRequest(const DescribeSpecRequest &) = default ;
    DescribeSpecRequest(DescribeSpecRequest &&) = default ;
    DescribeSpecRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSpecRequest() = default ;
    DescribeSpecRequest& operator=(const DescribeSpecRequest &) = default ;
    DescribeSpecRequest& operator=(DescribeSpecRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bizRegionId_ != nullptr
        && this->matrixSpec_ != nullptr && this->maxResults_ != nullptr && this->nextToken_ != nullptr && this->saleMode_ != nullptr && this->specIds_ != nullptr
        && this->specStatus_ != nullptr && this->specType_ != nullptr; };
    // bizRegionId Field Functions 
    bool hasBizRegionId() const { return this->bizRegionId_ != nullptr;};
    void deleteBizRegionId() { this->bizRegionId_ = nullptr;};
    inline string bizRegionId() const { DARABONBA_PTR_GET_DEFAULT(bizRegionId_, "") };
    inline DescribeSpecRequest& setBizRegionId(string bizRegionId) { DARABONBA_PTR_SET_VALUE(bizRegionId_, bizRegionId) };


    // matrixSpec Field Functions 
    bool hasMatrixSpec() const { return this->matrixSpec_ != nullptr;};
    void deleteMatrixSpec() { this->matrixSpec_ = nullptr;};
    inline string matrixSpec() const { DARABONBA_PTR_GET_DEFAULT(matrixSpec_, "") };
    inline DescribeSpecRequest& setMatrixSpec(string matrixSpec) { DARABONBA_PTR_SET_VALUE(matrixSpec_, matrixSpec) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeSpecRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeSpecRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // saleMode Field Functions 
    bool hasSaleMode() const { return this->saleMode_ != nullptr;};
    void deleteSaleMode() { this->saleMode_ = nullptr;};
    inline string saleMode() const { DARABONBA_PTR_GET_DEFAULT(saleMode_, "") };
    inline DescribeSpecRequest& setSaleMode(string saleMode) { DARABONBA_PTR_SET_VALUE(saleMode_, saleMode) };


    // specIds Field Functions 
    bool hasSpecIds() const { return this->specIds_ != nullptr;};
    void deleteSpecIds() { this->specIds_ = nullptr;};
    inline const vector<string> & specIds() const { DARABONBA_PTR_GET_CONST(specIds_, vector<string>) };
    inline vector<string> specIds() { DARABONBA_PTR_GET(specIds_, vector<string>) };
    inline DescribeSpecRequest& setSpecIds(const vector<string> & specIds) { DARABONBA_PTR_SET_VALUE(specIds_, specIds) };
    inline DescribeSpecRequest& setSpecIds(vector<string> && specIds) { DARABONBA_PTR_SET_RVALUE(specIds_, specIds) };


    // specStatus Field Functions 
    bool hasSpecStatus() const { return this->specStatus_ != nullptr;};
    void deleteSpecStatus() { this->specStatus_ = nullptr;};
    inline string specStatus() const { DARABONBA_PTR_GET_DEFAULT(specStatus_, "") };
    inline DescribeSpecRequest& setSpecStatus(string specStatus) { DARABONBA_PTR_SET_VALUE(specStatus_, specStatus) };


    // specType Field Functions 
    bool hasSpecType() const { return this->specType_ != nullptr;};
    void deleteSpecType() { this->specType_ = nullptr;};
    inline string specType() const { DARABONBA_PTR_GET_DEFAULT(specType_, "") };
    inline DescribeSpecRequest& setSpecType(string specType) { DARABONBA_PTR_SET_VALUE(specType_, specType) };


  protected:
    std::shared_ptr<string> bizRegionId_ = nullptr;
    // The matrix specification.
    // 
    // Valid values:
    // 
    // *   cpm.gn6.gx1
    std::shared_ptr<string> matrixSpec_ = nullptr;
    // The maximum number of items to return per page in a paginated query. The value range is 1 to 100, with a default value of 100.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // Indicates the starting position for reading. If left empty, it starts from the beginning.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The purchase mode of cloud mobile phones.
    // 
    // Valid values:
    // 
    // *   Instance (default): the instance group mode.
    // *   Node: the matrix mode [whitelisted].
    std::shared_ptr<string> saleMode_ = nullptr;
    // List of specification IDs.
    std::shared_ptr<vector<string>> specIds_ = nullptr;
    // Specification status.
    std::shared_ptr<string> specStatus_ = nullptr;
    // Specification type.
    std::shared_ptr<string> specType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
