// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEWUYINGSERVEREIPINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEWUYINGSERVEREIPINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeWuyingServerEipInfoResponseBodyEipInfoModel.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class DescribeWuyingServerEipInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeWuyingServerEipInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(EipInfoModel, eipInfoModel_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeWuyingServerEipInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(EipInfoModel, eipInfoModel_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeWuyingServerEipInfoResponseBody() = default ;
    DescribeWuyingServerEipInfoResponseBody(const DescribeWuyingServerEipInfoResponseBody &) = default ;
    DescribeWuyingServerEipInfoResponseBody(DescribeWuyingServerEipInfoResponseBody &&) = default ;
    DescribeWuyingServerEipInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeWuyingServerEipInfoResponseBody() = default ;
    DescribeWuyingServerEipInfoResponseBody& operator=(const DescribeWuyingServerEipInfoResponseBody &) = default ;
    DescribeWuyingServerEipInfoResponseBody& operator=(DescribeWuyingServerEipInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->eipInfoModel_ != nullptr
        && this->requestId_ != nullptr; };
    // eipInfoModel Field Functions 
    bool hasEipInfoModel() const { return this->eipInfoModel_ != nullptr;};
    void deleteEipInfoModel() { this->eipInfoModel_ = nullptr;};
    inline const DescribeWuyingServerEipInfoResponseBodyEipInfoModel & eipInfoModel() const { DARABONBA_PTR_GET_CONST(eipInfoModel_, DescribeWuyingServerEipInfoResponseBodyEipInfoModel) };
    inline DescribeWuyingServerEipInfoResponseBodyEipInfoModel eipInfoModel() { DARABONBA_PTR_GET(eipInfoModel_, DescribeWuyingServerEipInfoResponseBodyEipInfoModel) };
    inline DescribeWuyingServerEipInfoResponseBody& setEipInfoModel(const DescribeWuyingServerEipInfoResponseBodyEipInfoModel & eipInfoModel) { DARABONBA_PTR_SET_VALUE(eipInfoModel_, eipInfoModel) };
    inline DescribeWuyingServerEipInfoResponseBody& setEipInfoModel(DescribeWuyingServerEipInfoResponseBodyEipInfoModel && eipInfoModel) { DARABONBA_PTR_SET_RVALUE(eipInfoModel_, eipInfoModel) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeWuyingServerEipInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<DescribeWuyingServerEipInfoResponseBodyEipInfoModel> eipInfoModel_ = nullptr;
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
