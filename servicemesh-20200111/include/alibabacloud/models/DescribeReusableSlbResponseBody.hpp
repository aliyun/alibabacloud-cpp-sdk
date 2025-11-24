// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEREUSABLESLBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEREUSABLESLBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeReusableSlbResponseBodyReusableSlbList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class DescribeReusableSlbResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeReusableSlbResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ReusableSlbList, reusableSlbList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeReusableSlbResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ReusableSlbList, reusableSlbList_);
    };
    DescribeReusableSlbResponseBody() = default ;
    DescribeReusableSlbResponseBody(const DescribeReusableSlbResponseBody &) = default ;
    DescribeReusableSlbResponseBody(DescribeReusableSlbResponseBody &&) = default ;
    DescribeReusableSlbResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeReusableSlbResponseBody() = default ;
    DescribeReusableSlbResponseBody& operator=(const DescribeReusableSlbResponseBody &) = default ;
    DescribeReusableSlbResponseBody& operator=(DescribeReusableSlbResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->reusableSlbList_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeReusableSlbResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // reusableSlbList Field Functions 
    bool hasReusableSlbList() const { return this->reusableSlbList_ != nullptr;};
    void deleteReusableSlbList() { this->reusableSlbList_ = nullptr;};
    inline const vector<DescribeReusableSlbResponseBodyReusableSlbList> & reusableSlbList() const { DARABONBA_PTR_GET_CONST(reusableSlbList_, vector<DescribeReusableSlbResponseBodyReusableSlbList>) };
    inline vector<DescribeReusableSlbResponseBodyReusableSlbList> reusableSlbList() { DARABONBA_PTR_GET(reusableSlbList_, vector<DescribeReusableSlbResponseBodyReusableSlbList>) };
    inline DescribeReusableSlbResponseBody& setReusableSlbList(const vector<DescribeReusableSlbResponseBodyReusableSlbList> & reusableSlbList) { DARABONBA_PTR_SET_VALUE(reusableSlbList_, reusableSlbList) };
    inline DescribeReusableSlbResponseBody& setReusableSlbList(vector<DescribeReusableSlbResponseBodyReusableSlbList> && reusableSlbList) { DARABONBA_PTR_SET_RVALUE(reusableSlbList_, reusableSlbList) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The list of SLB instances that can be reused.
    std::shared_ptr<vector<DescribeReusableSlbResponseBodyReusableSlbList>> reusableSlbList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
