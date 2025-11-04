// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMETERIMSMEDIACONVERTUHDUSAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMETERIMSMEDIACONVERTUHDUSAGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeMeterImsMediaConvertUHDUsageResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class DescribeMeterImsMediaConvertUHDUsageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMeterImsMediaConvertUHDUsageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMeterImsMediaConvertUHDUsageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeMeterImsMediaConvertUHDUsageResponseBody() = default ;
    DescribeMeterImsMediaConvertUHDUsageResponseBody(const DescribeMeterImsMediaConvertUHDUsageResponseBody &) = default ;
    DescribeMeterImsMediaConvertUHDUsageResponseBody(DescribeMeterImsMediaConvertUHDUsageResponseBody &&) = default ;
    DescribeMeterImsMediaConvertUHDUsageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMeterImsMediaConvertUHDUsageResponseBody() = default ;
    DescribeMeterImsMediaConvertUHDUsageResponseBody& operator=(const DescribeMeterImsMediaConvertUHDUsageResponseBody &) = default ;
    DescribeMeterImsMediaConvertUHDUsageResponseBody& operator=(DescribeMeterImsMediaConvertUHDUsageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && return this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<DescribeMeterImsMediaConvertUHDUsageResponseBodyData> & data() const { DARABONBA_PTR_GET_CONST(data_, vector<DescribeMeterImsMediaConvertUHDUsageResponseBodyData>) };
    inline vector<DescribeMeterImsMediaConvertUHDUsageResponseBodyData> data() { DARABONBA_PTR_GET(data_, vector<DescribeMeterImsMediaConvertUHDUsageResponseBodyData>) };
    inline DescribeMeterImsMediaConvertUHDUsageResponseBody& setData(const vector<DescribeMeterImsMediaConvertUHDUsageResponseBodyData> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeMeterImsMediaConvertUHDUsageResponseBody& setData(vector<DescribeMeterImsMediaConvertUHDUsageResponseBodyData> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeMeterImsMediaConvertUHDUsageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The usage statistics of IMS on UHD transcoding of MPS.
    std::shared_ptr<vector<DescribeMeterImsMediaConvertUHDUsageResponseBodyData>> data_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
