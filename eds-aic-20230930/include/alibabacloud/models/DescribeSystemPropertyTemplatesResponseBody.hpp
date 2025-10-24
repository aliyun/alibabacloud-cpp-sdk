// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESYSTEMPROPERTYTEMPLATESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESYSTEMPROPERTYTEMPLATESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeSystemPropertyTemplatesResponseBodySystemPropertyTemplateModel.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class DescribeSystemPropertyTemplatesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSystemPropertyTemplatesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SystemPropertyTemplateModel, systemPropertyTemplateModel_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSystemPropertyTemplatesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SystemPropertyTemplateModel, systemPropertyTemplateModel_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeSystemPropertyTemplatesResponseBody() = default ;
    DescribeSystemPropertyTemplatesResponseBody(const DescribeSystemPropertyTemplatesResponseBody &) = default ;
    DescribeSystemPropertyTemplatesResponseBody(DescribeSystemPropertyTemplatesResponseBody &&) = default ;
    DescribeSystemPropertyTemplatesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSystemPropertyTemplatesResponseBody() = default ;
    DescribeSystemPropertyTemplatesResponseBody& operator=(const DescribeSystemPropertyTemplatesResponseBody &) = default ;
    DescribeSystemPropertyTemplatesResponseBody& operator=(DescribeSystemPropertyTemplatesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->nextToken_ == nullptr
        && return this->requestId_ == nullptr && return this->systemPropertyTemplateModel_ == nullptr && return this->totalCount_ == nullptr; };
    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeSystemPropertyTemplatesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSystemPropertyTemplatesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // systemPropertyTemplateModel Field Functions 
    bool hasSystemPropertyTemplateModel() const { return this->systemPropertyTemplateModel_ != nullptr;};
    void deleteSystemPropertyTemplateModel() { this->systemPropertyTemplateModel_ = nullptr;};
    inline const vector<DescribeSystemPropertyTemplatesResponseBodySystemPropertyTemplateModel> & systemPropertyTemplateModel() const { DARABONBA_PTR_GET_CONST(systemPropertyTemplateModel_, vector<DescribeSystemPropertyTemplatesResponseBodySystemPropertyTemplateModel>) };
    inline vector<DescribeSystemPropertyTemplatesResponseBodySystemPropertyTemplateModel> systemPropertyTemplateModel() { DARABONBA_PTR_GET(systemPropertyTemplateModel_, vector<DescribeSystemPropertyTemplatesResponseBodySystemPropertyTemplateModel>) };
    inline DescribeSystemPropertyTemplatesResponseBody& setSystemPropertyTemplateModel(const vector<DescribeSystemPropertyTemplatesResponseBodySystemPropertyTemplateModel> & systemPropertyTemplateModel) { DARABONBA_PTR_SET_VALUE(systemPropertyTemplateModel_, systemPropertyTemplateModel) };
    inline DescribeSystemPropertyTemplatesResponseBody& setSystemPropertyTemplateModel(vector<DescribeSystemPropertyTemplatesResponseBodySystemPropertyTemplateModel> && systemPropertyTemplateModel) { DARABONBA_PTR_SET_RVALUE(systemPropertyTemplateModel_, systemPropertyTemplateModel) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeSystemPropertyTemplatesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<string> nextToken_ = nullptr;
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<vector<DescribeSystemPropertyTemplatesResponseBodySystemPropertyTemplateModel>> systemPropertyTemplateModel_ = nullptr;
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
