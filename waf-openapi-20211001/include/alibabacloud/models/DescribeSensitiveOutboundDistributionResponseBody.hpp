// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESENSITIVEOUTBOUNDDISTRIBUTIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESENSITIVEOUTBOUNDDISTRIBUTIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeSensitiveOutboundDistributionResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeSensitiveOutboundDistributionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSensitiveOutboundDistributionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSensitiveOutboundDistributionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeSensitiveOutboundDistributionResponseBody() = default ;
    DescribeSensitiveOutboundDistributionResponseBody(const DescribeSensitiveOutboundDistributionResponseBody &) = default ;
    DescribeSensitiveOutboundDistributionResponseBody(DescribeSensitiveOutboundDistributionResponseBody &&) = default ;
    DescribeSensitiveOutboundDistributionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSensitiveOutboundDistributionResponseBody() = default ;
    DescribeSensitiveOutboundDistributionResponseBody& operator=(const DescribeSensitiveOutboundDistributionResponseBody &) = default ;
    DescribeSensitiveOutboundDistributionResponseBody& operator=(DescribeSensitiveOutboundDistributionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && return this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<DescribeSensitiveOutboundDistributionResponseBodyData> & data() const { DARABONBA_PTR_GET_CONST(data_, vector<DescribeSensitiveOutboundDistributionResponseBodyData>) };
    inline vector<DescribeSensitiveOutboundDistributionResponseBodyData> data() { DARABONBA_PTR_GET(data_, vector<DescribeSensitiveOutboundDistributionResponseBodyData>) };
    inline DescribeSensitiveOutboundDistributionResponseBody& setData(const vector<DescribeSensitiveOutboundDistributionResponseBodyData> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeSensitiveOutboundDistributionResponseBody& setData(vector<DescribeSensitiveOutboundDistributionResponseBodyData> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSensitiveOutboundDistributionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The traffic distribution of personal information records involved in cross-border data transfer.
    std::shared_ptr<vector<DescribeSensitiveOutboundDistributionResponseBodyData>> data_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
