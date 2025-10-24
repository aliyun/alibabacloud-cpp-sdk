// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPISECABNORMALDOMAINSTATISTICRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPISECABNORMALDOMAINSTATISTICRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeApisecAbnormalDomainStatisticResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeApisecAbnormalDomainStatisticResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApisecAbnormalDomainStatisticResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApisecAbnormalDomainStatisticResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeApisecAbnormalDomainStatisticResponseBody() = default ;
    DescribeApisecAbnormalDomainStatisticResponseBody(const DescribeApisecAbnormalDomainStatisticResponseBody &) = default ;
    DescribeApisecAbnormalDomainStatisticResponseBody(DescribeApisecAbnormalDomainStatisticResponseBody &&) = default ;
    DescribeApisecAbnormalDomainStatisticResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApisecAbnormalDomainStatisticResponseBody() = default ;
    DescribeApisecAbnormalDomainStatisticResponseBody& operator=(const DescribeApisecAbnormalDomainStatisticResponseBody &) = default ;
    DescribeApisecAbnormalDomainStatisticResponseBody& operator=(DescribeApisecAbnormalDomainStatisticResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<DescribeApisecAbnormalDomainStatisticResponseBodyData> & data() const { DARABONBA_PTR_GET_CONST(data_, vector<DescribeApisecAbnormalDomainStatisticResponseBodyData>) };
    inline vector<DescribeApisecAbnormalDomainStatisticResponseBodyData> data() { DARABONBA_PTR_GET(data_, vector<DescribeApisecAbnormalDomainStatisticResponseBodyData>) };
    inline DescribeApisecAbnormalDomainStatisticResponseBody& setData(const vector<DescribeApisecAbnormalDomainStatisticResponseBodyData> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeApisecAbnormalDomainStatisticResponseBody& setData(vector<DescribeApisecAbnormalDomainStatisticResponseBodyData> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeApisecAbnormalDomainStatisticResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeApisecAbnormalDomainStatisticResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The response parameters.
    std::shared_ptr<vector<DescribeApisecAbnormalDomainStatisticResponseBodyData>> data_ = nullptr;
    // Id of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
