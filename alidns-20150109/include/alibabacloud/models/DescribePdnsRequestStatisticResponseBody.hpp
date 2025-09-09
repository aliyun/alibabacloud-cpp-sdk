// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPDNSREQUESTSTATISTICRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPDNSREQUESTSTATISTICRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribePdnsRequestStatisticResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribePdnsRequestStatisticResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePdnsRequestStatisticResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePdnsRequestStatisticResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribePdnsRequestStatisticResponseBody() = default ;
    DescribePdnsRequestStatisticResponseBody(const DescribePdnsRequestStatisticResponseBody &) = default ;
    DescribePdnsRequestStatisticResponseBody(DescribePdnsRequestStatisticResponseBody &&) = default ;
    DescribePdnsRequestStatisticResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePdnsRequestStatisticResponseBody() = default ;
    DescribePdnsRequestStatisticResponseBody& operator=(const DescribePdnsRequestStatisticResponseBody &) = default ;
    DescribePdnsRequestStatisticResponseBody& operator=(DescribePdnsRequestStatisticResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr
        && this->requestId_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<DescribePdnsRequestStatisticResponseBodyData> & data() const { DARABONBA_PTR_GET_CONST(data_, vector<DescribePdnsRequestStatisticResponseBodyData>) };
    inline vector<DescribePdnsRequestStatisticResponseBodyData> data() { DARABONBA_PTR_GET(data_, vector<DescribePdnsRequestStatisticResponseBodyData>) };
    inline DescribePdnsRequestStatisticResponseBody& setData(const vector<DescribePdnsRequestStatisticResponseBodyData> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribePdnsRequestStatisticResponseBody& setData(vector<DescribePdnsRequestStatisticResponseBodyData> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePdnsRequestStatisticResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The statistics on the DNS requests.
    std::shared_ptr<vector<DescribePdnsRequestStatisticResponseBodyData>> data_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
