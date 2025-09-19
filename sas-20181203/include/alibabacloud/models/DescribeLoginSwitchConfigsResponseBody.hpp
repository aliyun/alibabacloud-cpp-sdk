// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELOGINSWITCHCONFIGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELOGINSWITCHCONFIGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeLoginSwitchConfigsResponseBodyConfigList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeLoginSwitchConfigsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLoginSwitchConfigsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigList, configList_);
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLoginSwitchConfigsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigList, configList_);
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeLoginSwitchConfigsResponseBody() = default ;
    DescribeLoginSwitchConfigsResponseBody(const DescribeLoginSwitchConfigsResponseBody &) = default ;
    DescribeLoginSwitchConfigsResponseBody(DescribeLoginSwitchConfigsResponseBody &&) = default ;
    DescribeLoginSwitchConfigsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLoginSwitchConfigsResponseBody() = default ;
    DescribeLoginSwitchConfigsResponseBody& operator=(const DescribeLoginSwitchConfigsResponseBody &) = default ;
    DescribeLoginSwitchConfigsResponseBody& operator=(DescribeLoginSwitchConfigsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->configList_ != nullptr
        && this->count_ != nullptr && this->requestId_ != nullptr; };
    // configList Field Functions 
    bool hasConfigList() const { return this->configList_ != nullptr;};
    void deleteConfigList() { this->configList_ = nullptr;};
    inline const vector<DescribeLoginSwitchConfigsResponseBodyConfigList> & configList() const { DARABONBA_PTR_GET_CONST(configList_, vector<DescribeLoginSwitchConfigsResponseBodyConfigList>) };
    inline vector<DescribeLoginSwitchConfigsResponseBodyConfigList> configList() { DARABONBA_PTR_GET(configList_, vector<DescribeLoginSwitchConfigsResponseBodyConfigList>) };
    inline DescribeLoginSwitchConfigsResponseBody& setConfigList(const vector<DescribeLoginSwitchConfigsResponseBodyConfigList> & configList) { DARABONBA_PTR_SET_VALUE(configList_, configList) };
    inline DescribeLoginSwitchConfigsResponseBody& setConfigList(vector<DescribeLoginSwitchConfigsResponseBodyConfigList> && configList) { DARABONBA_PTR_SET_RVALUE(configList_, configList) };


    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline DescribeLoginSwitchConfigsResponseBody& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLoginSwitchConfigsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The configuration item returned.
    std::shared_ptr<vector<DescribeLoginSwitchConfigsResponseBodyConfigList>> configList_ = nullptr;
    // The number of returned configuration items.
    std::shared_ptr<int32_t> count_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
