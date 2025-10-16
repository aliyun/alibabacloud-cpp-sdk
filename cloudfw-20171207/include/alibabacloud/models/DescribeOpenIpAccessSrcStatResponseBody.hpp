// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEOPENIPACCESSSRCSTATRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEOPENIPACCESSSRCSTATRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeOpenIpAccessSrcStatResponseBodyStatList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeOpenIpAccessSrcStatResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeOpenIpAccessSrcStatResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StatList, statList_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeOpenIpAccessSrcStatResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StatList, statList_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeOpenIpAccessSrcStatResponseBody() = default ;
    DescribeOpenIpAccessSrcStatResponseBody(const DescribeOpenIpAccessSrcStatResponseBody &) = default ;
    DescribeOpenIpAccessSrcStatResponseBody(DescribeOpenIpAccessSrcStatResponseBody &&) = default ;
    DescribeOpenIpAccessSrcStatResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeOpenIpAccessSrcStatResponseBody() = default ;
    DescribeOpenIpAccessSrcStatResponseBody& operator=(const DescribeOpenIpAccessSrcStatResponseBody &) = default ;
    DescribeOpenIpAccessSrcStatResponseBody& operator=(DescribeOpenIpAccessSrcStatResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->statList_ == nullptr && return this->totalCount_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeOpenIpAccessSrcStatResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // statList Field Functions 
    bool hasStatList() const { return this->statList_ != nullptr;};
    void deleteStatList() { this->statList_ = nullptr;};
    inline const vector<DescribeOpenIpAccessSrcStatResponseBodyStatList> & statList() const { DARABONBA_PTR_GET_CONST(statList_, vector<DescribeOpenIpAccessSrcStatResponseBodyStatList>) };
    inline vector<DescribeOpenIpAccessSrcStatResponseBodyStatList> statList() { DARABONBA_PTR_GET(statList_, vector<DescribeOpenIpAccessSrcStatResponseBodyStatList>) };
    inline DescribeOpenIpAccessSrcStatResponseBody& setStatList(const vector<DescribeOpenIpAccessSrcStatResponseBodyStatList> & statList) { DARABONBA_PTR_SET_VALUE(statList_, statList) };
    inline DescribeOpenIpAccessSrcStatResponseBody& setStatList(vector<DescribeOpenIpAccessSrcStatResponseBodyStatList> && statList) { DARABONBA_PTR_SET_RVALUE(statList_, statList) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeOpenIpAccessSrcStatResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<vector<DescribeOpenIpAccessSrcStatResponseBodyStatList>> statList_ = nullptr;
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
