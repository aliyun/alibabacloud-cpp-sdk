// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDRDSINSTANCEMONITORRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDRDSINSTANCEMONITORRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDrdsInstanceMonitorResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Drds20190123
{
namespace Models
{
  class DescribeDrdsInstanceMonitorResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDrdsInstanceMonitorResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDrdsInstanceMonitorResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDrdsInstanceMonitorResponseBody() = default ;
    DescribeDrdsInstanceMonitorResponseBody(const DescribeDrdsInstanceMonitorResponseBody &) = default ;
    DescribeDrdsInstanceMonitorResponseBody(DescribeDrdsInstanceMonitorResponseBody &&) = default ;
    DescribeDrdsInstanceMonitorResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDrdsInstanceMonitorResponseBody() = default ;
    DescribeDrdsInstanceMonitorResponseBody& operator=(const DescribeDrdsInstanceMonitorResponseBody &) = default ;
    DescribeDrdsInstanceMonitorResponseBody& operator=(DescribeDrdsInstanceMonitorResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr
        && this->requestId_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<DescribeDrdsInstanceMonitorResponseBodyData> & data() const { DARABONBA_PTR_GET_CONST(data_, vector<DescribeDrdsInstanceMonitorResponseBodyData>) };
    inline vector<DescribeDrdsInstanceMonitorResponseBodyData> data() { DARABONBA_PTR_GET(data_, vector<DescribeDrdsInstanceMonitorResponseBodyData>) };
    inline DescribeDrdsInstanceMonitorResponseBody& setData(const vector<DescribeDrdsInstanceMonitorResponseBodyData> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeDrdsInstanceMonitorResponseBody& setData(vector<DescribeDrdsInstanceMonitorResponseBodyData> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDrdsInstanceMonitorResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The result set of the query.
    std::shared_ptr<vector<DescribeDrdsInstanceMonitorResponseBodyData>> data_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Drds20190123
#endif
