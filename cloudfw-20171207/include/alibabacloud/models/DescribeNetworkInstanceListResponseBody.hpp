// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENETWORKINSTANCELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENETWORKINSTANCELISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeNetworkInstanceListResponseBodyNetworkInstanceList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeNetworkInstanceListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNetworkInstanceListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NetworkInstanceList, networkInstanceList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNetworkInstanceListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NetworkInstanceList, networkInstanceList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeNetworkInstanceListResponseBody() = default ;
    DescribeNetworkInstanceListResponseBody(const DescribeNetworkInstanceListResponseBody &) = default ;
    DescribeNetworkInstanceListResponseBody(DescribeNetworkInstanceListResponseBody &&) = default ;
    DescribeNetworkInstanceListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNetworkInstanceListResponseBody() = default ;
    DescribeNetworkInstanceListResponseBody& operator=(const DescribeNetworkInstanceListResponseBody &) = default ;
    DescribeNetworkInstanceListResponseBody& operator=(DescribeNetworkInstanceListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->networkInstanceList_ == nullptr
        && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // networkInstanceList Field Functions 
    bool hasNetworkInstanceList() const { return this->networkInstanceList_ != nullptr;};
    void deleteNetworkInstanceList() { this->networkInstanceList_ = nullptr;};
    inline const vector<DescribeNetworkInstanceListResponseBodyNetworkInstanceList> & networkInstanceList() const { DARABONBA_PTR_GET_CONST(networkInstanceList_, vector<DescribeNetworkInstanceListResponseBodyNetworkInstanceList>) };
    inline vector<DescribeNetworkInstanceListResponseBodyNetworkInstanceList> networkInstanceList() { DARABONBA_PTR_GET(networkInstanceList_, vector<DescribeNetworkInstanceListResponseBodyNetworkInstanceList>) };
    inline DescribeNetworkInstanceListResponseBody& setNetworkInstanceList(const vector<DescribeNetworkInstanceListResponseBodyNetworkInstanceList> & networkInstanceList) { DARABONBA_PTR_SET_VALUE(networkInstanceList_, networkInstanceList) };
    inline DescribeNetworkInstanceListResponseBody& setNetworkInstanceList(vector<DescribeNetworkInstanceListResponseBodyNetworkInstanceList> && networkInstanceList) { DARABONBA_PTR_SET_RVALUE(networkInstanceList_, networkInstanceList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeNetworkInstanceListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeNetworkInstanceListResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<vector<DescribeNetworkInstanceListResponseBodyNetworkInstanceList>> networkInstanceList_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
