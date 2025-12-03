// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGROUPQPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGROUPQPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeGroupQpsResponseBodyGroupQps.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeGroupQpsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGroupQpsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(GroupQps, groupQps_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGroupQpsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(GroupQps, groupQps_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeGroupQpsResponseBody() = default ;
    DescribeGroupQpsResponseBody(const DescribeGroupQpsResponseBody &) = default ;
    DescribeGroupQpsResponseBody(DescribeGroupQpsResponseBody &&) = default ;
    DescribeGroupQpsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGroupQpsResponseBody() = default ;
    DescribeGroupQpsResponseBody& operator=(const DescribeGroupQpsResponseBody &) = default ;
    DescribeGroupQpsResponseBody& operator=(DescribeGroupQpsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->groupQps_ == nullptr
        && return this->requestId_ == nullptr; };
    // groupQps Field Functions 
    bool hasGroupQps() const { return this->groupQps_ != nullptr;};
    void deleteGroupQps() { this->groupQps_ = nullptr;};
    inline const DescribeGroupQpsResponseBodyGroupQps & groupQps() const { DARABONBA_PTR_GET_CONST(groupQps_, DescribeGroupQpsResponseBodyGroupQps) };
    inline DescribeGroupQpsResponseBodyGroupQps groupQps() { DARABONBA_PTR_GET(groupQps_, DescribeGroupQpsResponseBodyGroupQps) };
    inline DescribeGroupQpsResponseBody& setGroupQps(const DescribeGroupQpsResponseBodyGroupQps & groupQps) { DARABONBA_PTR_SET_VALUE(groupQps_, groupQps) };
    inline DescribeGroupQpsResponseBody& setGroupQps(DescribeGroupQpsResponseBodyGroupQps && groupQps) { DARABONBA_PTR_SET_RVALUE(groupQps_, groupQps) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeGroupQpsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The number of requests directed to the API group.
    std::shared_ptr<DescribeGroupQpsResponseBodyGroupQps> groupQps_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
