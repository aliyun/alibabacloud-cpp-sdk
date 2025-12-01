// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECONFIGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECONFIGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeConfigsResponseBodyConfigList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sddp20190103
{
namespace Models
{
  class DescribeConfigsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeConfigsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigList, configList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeConfigsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigList, configList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeConfigsResponseBody() = default ;
    DescribeConfigsResponseBody(const DescribeConfigsResponseBody &) = default ;
    DescribeConfigsResponseBody(DescribeConfigsResponseBody &&) = default ;
    DescribeConfigsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeConfigsResponseBody() = default ;
    DescribeConfigsResponseBody& operator=(const DescribeConfigsResponseBody &) = default ;
    DescribeConfigsResponseBody& operator=(DescribeConfigsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->configList_ == nullptr
        && return this->requestId_ == nullptr; };
    // configList Field Functions 
    bool hasConfigList() const { return this->configList_ != nullptr;};
    void deleteConfigList() { this->configList_ = nullptr;};
    inline const vector<DescribeConfigsResponseBodyConfigList> & configList() const { DARABONBA_PTR_GET_CONST(configList_, vector<DescribeConfigsResponseBodyConfigList>) };
    inline vector<DescribeConfigsResponseBodyConfigList> configList() { DARABONBA_PTR_GET(configList_, vector<DescribeConfigsResponseBodyConfigList>) };
    inline DescribeConfigsResponseBody& setConfigList(const vector<DescribeConfigsResponseBodyConfigList> & configList) { DARABONBA_PTR_SET_VALUE(configList_, configList) };
    inline DescribeConfigsResponseBody& setConfigList(vector<DescribeConfigsResponseBodyConfigList> && configList) { DARABONBA_PTR_SET_RVALUE(configList_, configList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeConfigsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // An array that consists of common configuration items for alerts.
    std::shared_ptr<vector<DescribeConfigsResponseBodyConfigList>> configList_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sddp20190103
#endif
