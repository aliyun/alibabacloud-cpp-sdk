// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDESKTOPMETADATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDESKTOPMETADATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDesktopMetadataResponseBodyDesktops.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeDesktopMetadataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDesktopMetadataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Desktops, desktops_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDesktopMetadataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Desktops, desktops_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDesktopMetadataResponseBody() = default ;
    DescribeDesktopMetadataResponseBody(const DescribeDesktopMetadataResponseBody &) = default ;
    DescribeDesktopMetadataResponseBody(DescribeDesktopMetadataResponseBody &&) = default ;
    DescribeDesktopMetadataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDesktopMetadataResponseBody() = default ;
    DescribeDesktopMetadataResponseBody& operator=(const DescribeDesktopMetadataResponseBody &) = default ;
    DescribeDesktopMetadataResponseBody& operator=(DescribeDesktopMetadataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->desktops_ == nullptr
        && return this->nextToken_ == nullptr && return this->requestId_ == nullptr; };
    // desktops Field Functions 
    bool hasDesktops() const { return this->desktops_ != nullptr;};
    void deleteDesktops() { this->desktops_ = nullptr;};
    inline const vector<DescribeDesktopMetadataResponseBodyDesktops> & desktops() const { DARABONBA_PTR_GET_CONST(desktops_, vector<DescribeDesktopMetadataResponseBodyDesktops>) };
    inline vector<DescribeDesktopMetadataResponseBodyDesktops> desktops() { DARABONBA_PTR_GET(desktops_, vector<DescribeDesktopMetadataResponseBodyDesktops>) };
    inline DescribeDesktopMetadataResponseBody& setDesktops(const vector<DescribeDesktopMetadataResponseBodyDesktops> & desktops) { DARABONBA_PTR_SET_VALUE(desktops_, desktops) };
    inline DescribeDesktopMetadataResponseBody& setDesktops(vector<DescribeDesktopMetadataResponseBodyDesktops> && desktops) { DARABONBA_PTR_SET_RVALUE(desktops_, desktops) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeDesktopMetadataResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDesktopMetadataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<DescribeDesktopMetadataResponseBodyDesktops>> desktops_ = nullptr;
    std::shared_ptr<string> nextToken_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
