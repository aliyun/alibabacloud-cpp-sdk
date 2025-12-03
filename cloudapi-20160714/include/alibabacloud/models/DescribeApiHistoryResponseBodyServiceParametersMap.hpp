// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPIHISTORYRESPONSEBODYSERVICEPARAMETERSMAP_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPIHISTORYRESPONSEBODYSERVICEPARAMETERSMAP_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeApiHistoryResponseBodyServiceParametersMapServiceParameterMap.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeApiHistoryResponseBodyServiceParametersMap : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApiHistoryResponseBodyServiceParametersMap& obj) { 
      DARABONBA_PTR_TO_JSON(ServiceParameterMap, serviceParameterMap_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApiHistoryResponseBodyServiceParametersMap& obj) { 
      DARABONBA_PTR_FROM_JSON(ServiceParameterMap, serviceParameterMap_);
    };
    DescribeApiHistoryResponseBodyServiceParametersMap() = default ;
    DescribeApiHistoryResponseBodyServiceParametersMap(const DescribeApiHistoryResponseBodyServiceParametersMap &) = default ;
    DescribeApiHistoryResponseBodyServiceParametersMap(DescribeApiHistoryResponseBodyServiceParametersMap &&) = default ;
    DescribeApiHistoryResponseBodyServiceParametersMap(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApiHistoryResponseBodyServiceParametersMap() = default ;
    DescribeApiHistoryResponseBodyServiceParametersMap& operator=(const DescribeApiHistoryResponseBodyServiceParametersMap &) = default ;
    DescribeApiHistoryResponseBodyServiceParametersMap& operator=(DescribeApiHistoryResponseBodyServiceParametersMap &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->serviceParameterMap_ == nullptr; };
    // serviceParameterMap Field Functions 
    bool hasServiceParameterMap() const { return this->serviceParameterMap_ != nullptr;};
    void deleteServiceParameterMap() { this->serviceParameterMap_ = nullptr;};
    inline const vector<Models::DescribeApiHistoryResponseBodyServiceParametersMapServiceParameterMap> & serviceParameterMap() const { DARABONBA_PTR_GET_CONST(serviceParameterMap_, vector<Models::DescribeApiHistoryResponseBodyServiceParametersMapServiceParameterMap>) };
    inline vector<Models::DescribeApiHistoryResponseBodyServiceParametersMapServiceParameterMap> serviceParameterMap() { DARABONBA_PTR_GET(serviceParameterMap_, vector<Models::DescribeApiHistoryResponseBodyServiceParametersMapServiceParameterMap>) };
    inline DescribeApiHistoryResponseBodyServiceParametersMap& setServiceParameterMap(const vector<Models::DescribeApiHistoryResponseBodyServiceParametersMapServiceParameterMap> & serviceParameterMap) { DARABONBA_PTR_SET_VALUE(serviceParameterMap_, serviceParameterMap) };
    inline DescribeApiHistoryResponseBodyServiceParametersMap& setServiceParameterMap(vector<Models::DescribeApiHistoryResponseBodyServiceParametersMapServiceParameterMap> && serviceParameterMap) { DARABONBA_PTR_SET_RVALUE(serviceParameterMap_, serviceParameterMap) };


  protected:
    std::shared_ptr<vector<Models::DescribeApiHistoryResponseBodyServiceParametersMapServiceParameterMap>> serviceParameterMap_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
