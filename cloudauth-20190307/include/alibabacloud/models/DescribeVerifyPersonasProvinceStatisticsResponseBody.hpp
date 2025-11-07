// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVERIFYPERSONASPROVINCESTATISTICSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVERIFYPERSONASPROVINCESTATISTICSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeVerifyPersonasProvinceStatisticsResponseBodyResultObject.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class DescribeVerifyPersonasProvinceStatisticsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVerifyPersonasProvinceStatisticsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultObject, resultObject_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVerifyPersonasProvinceStatisticsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultObject, resultObject_);
    };
    DescribeVerifyPersonasProvinceStatisticsResponseBody() = default ;
    DescribeVerifyPersonasProvinceStatisticsResponseBody(const DescribeVerifyPersonasProvinceStatisticsResponseBody &) = default ;
    DescribeVerifyPersonasProvinceStatisticsResponseBody(DescribeVerifyPersonasProvinceStatisticsResponseBody &&) = default ;
    DescribeVerifyPersonasProvinceStatisticsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVerifyPersonasProvinceStatisticsResponseBody() = default ;
    DescribeVerifyPersonasProvinceStatisticsResponseBody& operator=(const DescribeVerifyPersonasProvinceStatisticsResponseBody &) = default ;
    DescribeVerifyPersonasProvinceStatisticsResponseBody& operator=(DescribeVerifyPersonasProvinceStatisticsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->resultObject_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVerifyPersonasProvinceStatisticsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultObject Field Functions 
    bool hasResultObject() const { return this->resultObject_ != nullptr;};
    void deleteResultObject() { this->resultObject_ = nullptr;};
    inline const DescribeVerifyPersonasProvinceStatisticsResponseBodyResultObject & resultObject() const { DARABONBA_PTR_GET_CONST(resultObject_, DescribeVerifyPersonasProvinceStatisticsResponseBodyResultObject) };
    inline DescribeVerifyPersonasProvinceStatisticsResponseBodyResultObject resultObject() { DARABONBA_PTR_GET(resultObject_, DescribeVerifyPersonasProvinceStatisticsResponseBodyResultObject) };
    inline DescribeVerifyPersonasProvinceStatisticsResponseBody& setResultObject(const DescribeVerifyPersonasProvinceStatisticsResponseBodyResultObject & resultObject) { DARABONBA_PTR_SET_VALUE(resultObject_, resultObject) };
    inline DescribeVerifyPersonasProvinceStatisticsResponseBody& setResultObject(DescribeVerifyPersonasProvinceStatisticsResponseBodyResultObject && resultObject) { DARABONBA_PTR_SET_RVALUE(resultObject_, resultObject) };


  protected:
    // ID of this request.
    std::shared_ptr<string> requestId_ = nullptr;
    // Query result.
    std::shared_ptr<DescribeVerifyPersonasProvinceStatisticsResponseBodyResultObject> resultObject_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
