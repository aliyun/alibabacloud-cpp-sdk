// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDESKTOPOVERSOLDGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDESKTOPOVERSOLDGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeDesktopOversoldGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDesktopOversoldGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(OversoldGroupIds, oversoldGroupIds_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDesktopOversoldGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(OversoldGroupIds, oversoldGroupIds_);
    };
    DescribeDesktopOversoldGroupRequest() = default ;
    DescribeDesktopOversoldGroupRequest(const DescribeDesktopOversoldGroupRequest &) = default ;
    DescribeDesktopOversoldGroupRequest(DescribeDesktopOversoldGroupRequest &&) = default ;
    DescribeDesktopOversoldGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDesktopOversoldGroupRequest() = default ;
    DescribeDesktopOversoldGroupRequest& operator=(const DescribeDesktopOversoldGroupRequest &) = default ;
    DescribeDesktopOversoldGroupRequest& operator=(DescribeDesktopOversoldGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->maxResults_ == nullptr
        && return this->nextToken_ == nullptr && return this->oversoldGroupIds_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeDesktopOversoldGroupRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeDesktopOversoldGroupRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // oversoldGroupIds Field Functions 
    bool hasOversoldGroupIds() const { return this->oversoldGroupIds_ != nullptr;};
    void deleteOversoldGroupIds() { this->oversoldGroupIds_ = nullptr;};
    inline const vector<string> & oversoldGroupIds() const { DARABONBA_PTR_GET_CONST(oversoldGroupIds_, vector<string>) };
    inline vector<string> oversoldGroupIds() { DARABONBA_PTR_GET(oversoldGroupIds_, vector<string>) };
    inline DescribeDesktopOversoldGroupRequest& setOversoldGroupIds(const vector<string> & oversoldGroupIds) { DARABONBA_PTR_SET_VALUE(oversoldGroupIds_, oversoldGroupIds) };
    inline DescribeDesktopOversoldGroupRequest& setOversoldGroupIds(vector<string> && oversoldGroupIds) { DARABONBA_PTR_SET_RVALUE(oversoldGroupIds_, oversoldGroupIds) };


  protected:
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    std::shared_ptr<string> nextToken_ = nullptr;
    std::shared_ptr<vector<string>> oversoldGroupIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
