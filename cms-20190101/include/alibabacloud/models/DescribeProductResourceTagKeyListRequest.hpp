// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPRODUCTRESOURCETAGKEYLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPRODUCTRESOURCETAGKEYLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeProductResourceTagKeyListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeProductResourceTagKeyListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeProductResourceTagKeyListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DescribeProductResourceTagKeyListRequest() = default ;
    DescribeProductResourceTagKeyListRequest(const DescribeProductResourceTagKeyListRequest &) = default ;
    DescribeProductResourceTagKeyListRequest(DescribeProductResourceTagKeyListRequest &&) = default ;
    DescribeProductResourceTagKeyListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeProductResourceTagKeyListRequest() = default ;
    DescribeProductResourceTagKeyListRequest& operator=(const DescribeProductResourceTagKeyListRequest &) = default ;
    DescribeProductResourceTagKeyListRequest& operator=(DescribeProductResourceTagKeyListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->nextToken_ == nullptr
        && this->regionId_ == nullptr; };
    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeProductResourceTagKeyListRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeProductResourceTagKeyListRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The pagination token.
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
