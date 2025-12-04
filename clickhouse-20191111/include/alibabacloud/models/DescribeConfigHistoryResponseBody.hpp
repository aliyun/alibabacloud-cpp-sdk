// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECONFIGHISTORYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECONFIGHISTORYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeConfigHistoryResponseBodyConfigHistoryItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20191111
{
namespace Models
{
  class DescribeConfigHistoryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeConfigHistoryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigHistoryItems, configHistoryItems_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeConfigHistoryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigHistoryItems, configHistoryItems_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeConfigHistoryResponseBody() = default ;
    DescribeConfigHistoryResponseBody(const DescribeConfigHistoryResponseBody &) = default ;
    DescribeConfigHistoryResponseBody(DescribeConfigHistoryResponseBody &&) = default ;
    DescribeConfigHistoryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeConfigHistoryResponseBody() = default ;
    DescribeConfigHistoryResponseBody& operator=(const DescribeConfigHistoryResponseBody &) = default ;
    DescribeConfigHistoryResponseBody& operator=(DescribeConfigHistoryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->configHistoryItems_ == nullptr
        && return this->requestId_ == nullptr; };
    // configHistoryItems Field Functions 
    bool hasConfigHistoryItems() const { return this->configHistoryItems_ != nullptr;};
    void deleteConfigHistoryItems() { this->configHistoryItems_ = nullptr;};
    inline const vector<DescribeConfigHistoryResponseBodyConfigHistoryItems> & configHistoryItems() const { DARABONBA_PTR_GET_CONST(configHistoryItems_, vector<DescribeConfigHistoryResponseBodyConfigHistoryItems>) };
    inline vector<DescribeConfigHistoryResponseBodyConfigHistoryItems> configHistoryItems() { DARABONBA_PTR_GET(configHistoryItems_, vector<DescribeConfigHistoryResponseBodyConfigHistoryItems>) };
    inline DescribeConfigHistoryResponseBody& setConfigHistoryItems(const vector<DescribeConfigHistoryResponseBodyConfigHistoryItems> & configHistoryItems) { DARABONBA_PTR_SET_VALUE(configHistoryItems_, configHistoryItems) };
    inline DescribeConfigHistoryResponseBody& setConfigHistoryItems(vector<DescribeConfigHistoryResponseBodyConfigHistoryItems> && configHistoryItems) { DARABONBA_PTR_SET_RVALUE(configHistoryItems_, configHistoryItems) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeConfigHistoryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The change records of the configuration parameters.
    std::shared_ptr<vector<DescribeConfigHistoryResponseBodyConfigHistoryItems>> configHistoryItems_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20191111
#endif
