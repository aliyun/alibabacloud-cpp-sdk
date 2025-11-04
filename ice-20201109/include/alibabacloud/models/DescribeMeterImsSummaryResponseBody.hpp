// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMETERIMSSUMMARYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMETERIMSSUMMARYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeMeterImsSummaryResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class DescribeMeterImsSummaryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMeterImsSummaryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMeterImsSummaryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeMeterImsSummaryResponseBody() = default ;
    DescribeMeterImsSummaryResponseBody(const DescribeMeterImsSummaryResponseBody &) = default ;
    DescribeMeterImsSummaryResponseBody(DescribeMeterImsSummaryResponseBody &&) = default ;
    DescribeMeterImsSummaryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMeterImsSummaryResponseBody() = default ;
    DescribeMeterImsSummaryResponseBody& operator=(const DescribeMeterImsSummaryResponseBody &) = default ;
    DescribeMeterImsSummaryResponseBody& operator=(DescribeMeterImsSummaryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && return this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<DescribeMeterImsSummaryResponseBodyData> & data() const { DARABONBA_PTR_GET_CONST(data_, vector<DescribeMeterImsSummaryResponseBodyData>) };
    inline vector<DescribeMeterImsSummaryResponseBodyData> data() { DARABONBA_PTR_GET(data_, vector<DescribeMeterImsSummaryResponseBodyData>) };
    inline DescribeMeterImsSummaryResponseBody& setData(const vector<DescribeMeterImsSummaryResponseBodyData> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeMeterImsSummaryResponseBody& setData(vector<DescribeMeterImsSummaryResponseBodyData> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeMeterImsSummaryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The usage statistics of IMS.
    std::shared_ptr<vector<DescribeMeterImsSummaryResponseBodyData>> data_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
