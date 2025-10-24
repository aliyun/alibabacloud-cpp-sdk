// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDEFENSERESOURCEOWNERUIDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDEFENSERESOURCEOWNERUIDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDefenseResourceOwnerUidResponseBodyOwnerInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeDefenseResourceOwnerUidResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDefenseResourceOwnerUidResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(OwnerInfos, ownerInfos_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDefenseResourceOwnerUidResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(OwnerInfos, ownerInfos_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDefenseResourceOwnerUidResponseBody() = default ;
    DescribeDefenseResourceOwnerUidResponseBody(const DescribeDefenseResourceOwnerUidResponseBody &) = default ;
    DescribeDefenseResourceOwnerUidResponseBody(DescribeDefenseResourceOwnerUidResponseBody &&) = default ;
    DescribeDefenseResourceOwnerUidResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDefenseResourceOwnerUidResponseBody() = default ;
    DescribeDefenseResourceOwnerUidResponseBody& operator=(const DescribeDefenseResourceOwnerUidResponseBody &) = default ;
    DescribeDefenseResourceOwnerUidResponseBody& operator=(DescribeDefenseResourceOwnerUidResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ownerInfos_ == nullptr
        && return this->requestId_ == nullptr; };
    // ownerInfos Field Functions 
    bool hasOwnerInfos() const { return this->ownerInfos_ != nullptr;};
    void deleteOwnerInfos() { this->ownerInfos_ = nullptr;};
    inline const vector<DescribeDefenseResourceOwnerUidResponseBodyOwnerInfos> & ownerInfos() const { DARABONBA_PTR_GET_CONST(ownerInfos_, vector<DescribeDefenseResourceOwnerUidResponseBodyOwnerInfos>) };
    inline vector<DescribeDefenseResourceOwnerUidResponseBodyOwnerInfos> ownerInfos() { DARABONBA_PTR_GET(ownerInfos_, vector<DescribeDefenseResourceOwnerUidResponseBodyOwnerInfos>) };
    inline DescribeDefenseResourceOwnerUidResponseBody& setOwnerInfos(const vector<DescribeDefenseResourceOwnerUidResponseBodyOwnerInfos> & ownerInfos) { DARABONBA_PTR_SET_VALUE(ownerInfos_, ownerInfos) };
    inline DescribeDefenseResourceOwnerUidResponseBody& setOwnerInfos(vector<DescribeDefenseResourceOwnerUidResponseBodyOwnerInfos> && ownerInfos) { DARABONBA_PTR_SET_RVALUE(ownerInfos_, ownerInfos) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDefenseResourceOwnerUidResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<DescribeDefenseResourceOwnerUidResponseBodyOwnerInfos>> ownerInfos_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
