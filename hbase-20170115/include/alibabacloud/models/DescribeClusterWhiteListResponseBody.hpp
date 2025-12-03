// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLUSTERWHITELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLUSTERWHITELISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeClusterWhiteListResponseBodyGroupItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace HBase20170115
{
namespace Models
{
  class DescribeClusterWhiteListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClusterWhiteListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(GroupItems, groupItems_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClusterWhiteListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(GroupItems, groupItems_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeClusterWhiteListResponseBody() = default ;
    DescribeClusterWhiteListResponseBody(const DescribeClusterWhiteListResponseBody &) = default ;
    DescribeClusterWhiteListResponseBody(DescribeClusterWhiteListResponseBody &&) = default ;
    DescribeClusterWhiteListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClusterWhiteListResponseBody() = default ;
    DescribeClusterWhiteListResponseBody& operator=(const DescribeClusterWhiteListResponseBody &) = default ;
    DescribeClusterWhiteListResponseBody& operator=(DescribeClusterWhiteListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->groupItems_ == nullptr
        && return this->requestId_ == nullptr; };
    // groupItems Field Functions 
    bool hasGroupItems() const { return this->groupItems_ != nullptr;};
    void deleteGroupItems() { this->groupItems_ = nullptr;};
    inline const DescribeClusterWhiteListResponseBodyGroupItems & groupItems() const { DARABONBA_PTR_GET_CONST(groupItems_, DescribeClusterWhiteListResponseBodyGroupItems) };
    inline DescribeClusterWhiteListResponseBodyGroupItems groupItems() { DARABONBA_PTR_GET(groupItems_, DescribeClusterWhiteListResponseBodyGroupItems) };
    inline DescribeClusterWhiteListResponseBody& setGroupItems(const DescribeClusterWhiteListResponseBodyGroupItems & groupItems) { DARABONBA_PTR_SET_VALUE(groupItems_, groupItems) };
    inline DescribeClusterWhiteListResponseBody& setGroupItems(DescribeClusterWhiteListResponseBodyGroupItems && groupItems) { DARABONBA_PTR_SET_RVALUE(groupItems_, groupItems) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeClusterWhiteListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<DescribeClusterWhiteListResponseBodyGroupItems> groupItems_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace HBase20170115
#endif
