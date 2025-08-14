// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMETERIMSEDITUSAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMETERIMSEDITUSAGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeMeterImsEditUsageResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class DescribeMeterImsEditUsageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMeterImsEditUsageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMeterImsEditUsageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeMeterImsEditUsageResponseBody() = default ;
    DescribeMeterImsEditUsageResponseBody(const DescribeMeterImsEditUsageResponseBody &) = default ;
    DescribeMeterImsEditUsageResponseBody(DescribeMeterImsEditUsageResponseBody &&) = default ;
    DescribeMeterImsEditUsageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMeterImsEditUsageResponseBody() = default ;
    DescribeMeterImsEditUsageResponseBody& operator=(const DescribeMeterImsEditUsageResponseBody &) = default ;
    DescribeMeterImsEditUsageResponseBody& operator=(DescribeMeterImsEditUsageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr
        && this->requestId_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<DescribeMeterImsEditUsageResponseBodyData> & data() const { DARABONBA_PTR_GET_CONST(data_, vector<DescribeMeterImsEditUsageResponseBodyData>) };
    inline vector<DescribeMeterImsEditUsageResponseBodyData> data() { DARABONBA_PTR_GET(data_, vector<DescribeMeterImsEditUsageResponseBodyData>) };
    inline DescribeMeterImsEditUsageResponseBody& setData(const vector<DescribeMeterImsEditUsageResponseBodyData> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeMeterImsEditUsageResponseBody& setData(vector<DescribeMeterImsEditUsageResponseBodyData> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeMeterImsEditUsageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The usage statistics of IMS on VOD editing.
    std::shared_ptr<vector<DescribeMeterImsEditUsageResponseBodyData>> data_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
