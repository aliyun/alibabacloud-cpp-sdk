// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDESKTOPGROUPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDESKTOPGROUPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDesktopGroupsResponseBodyDesktopGroups.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeDesktopGroupsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDesktopGroupsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DesktopGroups, desktopGroups_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDesktopGroupsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DesktopGroups, desktopGroups_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDesktopGroupsResponseBody() = default ;
    DescribeDesktopGroupsResponseBody(const DescribeDesktopGroupsResponseBody &) = default ;
    DescribeDesktopGroupsResponseBody(DescribeDesktopGroupsResponseBody &&) = default ;
    DescribeDesktopGroupsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDesktopGroupsResponseBody() = default ;
    DescribeDesktopGroupsResponseBody& operator=(const DescribeDesktopGroupsResponseBody &) = default ;
    DescribeDesktopGroupsResponseBody& operator=(DescribeDesktopGroupsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->desktopGroups_ == nullptr
        && return this->nextToken_ == nullptr && return this->requestId_ == nullptr; };
    // desktopGroups Field Functions 
    bool hasDesktopGroups() const { return this->desktopGroups_ != nullptr;};
    void deleteDesktopGroups() { this->desktopGroups_ = nullptr;};
    inline const vector<DescribeDesktopGroupsResponseBodyDesktopGroups> & desktopGroups() const { DARABONBA_PTR_GET_CONST(desktopGroups_, vector<DescribeDesktopGroupsResponseBodyDesktopGroups>) };
    inline vector<DescribeDesktopGroupsResponseBodyDesktopGroups> desktopGroups() { DARABONBA_PTR_GET(desktopGroups_, vector<DescribeDesktopGroupsResponseBodyDesktopGroups>) };
    inline DescribeDesktopGroupsResponseBody& setDesktopGroups(const vector<DescribeDesktopGroupsResponseBodyDesktopGroups> & desktopGroups) { DARABONBA_PTR_SET_VALUE(desktopGroups_, desktopGroups) };
    inline DescribeDesktopGroupsResponseBody& setDesktopGroups(vector<DescribeDesktopGroupsResponseBodyDesktopGroups> && desktopGroups) { DARABONBA_PTR_SET_RVALUE(desktopGroups_, desktopGroups) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeDesktopGroupsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDesktopGroupsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The cloud computer shares.
    std::shared_ptr<vector<DescribeDesktopGroupsResponseBodyDesktopGroups>> desktopGroups_ = nullptr;
    // The returned value of NextToken is a pagination token, which can be used in the next request to retrieve a new page of results.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
