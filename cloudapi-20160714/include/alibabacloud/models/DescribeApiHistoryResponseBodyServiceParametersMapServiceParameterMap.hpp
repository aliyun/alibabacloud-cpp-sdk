// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPIHISTORYRESPONSEBODYSERVICEPARAMETERSMAPSERVICEPARAMETERMAP_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPIHISTORYRESPONSEBODYSERVICEPARAMETERSMAPSERVICEPARAMETERMAP_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeApiHistoryResponseBodyServiceParametersMapServiceParameterMap : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApiHistoryResponseBodyServiceParametersMapServiceParameterMap& obj) { 
      DARABONBA_PTR_TO_JSON(RequestParameterName, requestParameterName_);
      DARABONBA_PTR_TO_JSON(ServiceParameterName, serviceParameterName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApiHistoryResponseBodyServiceParametersMapServiceParameterMap& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestParameterName, requestParameterName_);
      DARABONBA_PTR_FROM_JSON(ServiceParameterName, serviceParameterName_);
    };
    DescribeApiHistoryResponseBodyServiceParametersMapServiceParameterMap() = default ;
    DescribeApiHistoryResponseBodyServiceParametersMapServiceParameterMap(const DescribeApiHistoryResponseBodyServiceParametersMapServiceParameterMap &) = default ;
    DescribeApiHistoryResponseBodyServiceParametersMapServiceParameterMap(DescribeApiHistoryResponseBodyServiceParametersMapServiceParameterMap &&) = default ;
    DescribeApiHistoryResponseBodyServiceParametersMapServiceParameterMap(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApiHistoryResponseBodyServiceParametersMapServiceParameterMap() = default ;
    DescribeApiHistoryResponseBodyServiceParametersMapServiceParameterMap& operator=(const DescribeApiHistoryResponseBodyServiceParametersMapServiceParameterMap &) = default ;
    DescribeApiHistoryResponseBodyServiceParametersMapServiceParameterMap& operator=(DescribeApiHistoryResponseBodyServiceParametersMapServiceParameterMap &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestParameterName_ == nullptr
        && return this->serviceParameterName_ == nullptr; };
    // requestParameterName Field Functions 
    bool hasRequestParameterName() const { return this->requestParameterName_ != nullptr;};
    void deleteRequestParameterName() { this->requestParameterName_ = nullptr;};
    inline string requestParameterName() const { DARABONBA_PTR_GET_DEFAULT(requestParameterName_, "") };
    inline DescribeApiHistoryResponseBodyServiceParametersMapServiceParameterMap& setRequestParameterName(string requestParameterName) { DARABONBA_PTR_SET_VALUE(requestParameterName_, requestParameterName) };


    // serviceParameterName Field Functions 
    bool hasServiceParameterName() const { return this->serviceParameterName_ != nullptr;};
    void deleteServiceParameterName() { this->serviceParameterName_ = nullptr;};
    inline string serviceParameterName() const { DARABONBA_PTR_GET_DEFAULT(serviceParameterName_, "") };
    inline DescribeApiHistoryResponseBodyServiceParametersMapServiceParameterMap& setServiceParameterName(string serviceParameterName) { DARABONBA_PTR_SET_VALUE(serviceParameterName_, serviceParameterName) };


  protected:
    // The corresponding frontend parameter name. The value must be contained in RequestParametersObject and match RequestParam.ApiParameterName.
    std::shared_ptr<string> requestParameterName_ = nullptr;
    // The mapped parameter name in the backend service.
    std::shared_ptr<string> serviceParameterName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
