// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEQUERYCONFIGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEQUERYCONFIGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeQueryConfigsResponseBodyConfigs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribeQueryConfigsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeQueryConfigsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Configs, configs_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeQueryConfigsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Configs, configs_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeQueryConfigsResponseBody() = default ;
    DescribeQueryConfigsResponseBody(const DescribeQueryConfigsResponseBody &) = default ;
    DescribeQueryConfigsResponseBody(DescribeQueryConfigsResponseBody &&) = default ;
    DescribeQueryConfigsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeQueryConfigsResponseBody() = default ;
    DescribeQueryConfigsResponseBody& operator=(const DescribeQueryConfigsResponseBody &) = default ;
    DescribeQueryConfigsResponseBody& operator=(DescribeQueryConfigsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->configs_ != nullptr
        && this->requestId_ != nullptr; };
    // configs Field Functions 
    bool hasConfigs() const { return this->configs_ != nullptr;};
    void deleteConfigs() { this->configs_ = nullptr;};
    inline const vector<DescribeQueryConfigsResponseBodyConfigs> & configs() const { DARABONBA_PTR_GET_CONST(configs_, vector<DescribeQueryConfigsResponseBodyConfigs>) };
    inline vector<DescribeQueryConfigsResponseBodyConfigs> configs() { DARABONBA_PTR_GET(configs_, vector<DescribeQueryConfigsResponseBodyConfigs>) };
    inline DescribeQueryConfigsResponseBody& setConfigs(const vector<DescribeQueryConfigsResponseBodyConfigs> & configs) { DARABONBA_PTR_SET_VALUE(configs_, configs) };
    inline DescribeQueryConfigsResponseBody& setConfigs(vector<DescribeQueryConfigsResponseBodyConfigs> && configs) { DARABONBA_PTR_SET_RVALUE(configs_, configs) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeQueryConfigsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<DescribeQueryConfigsResponseBodyConfigs>> configs_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
