// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUSERCONFIGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUSERCONFIGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeUserConfigsResponseBodyConfigs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeUserConfigsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUserConfigsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Configs, configs_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUserConfigsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Configs, configs_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeUserConfigsResponseBody() = default ;
    DescribeUserConfigsResponseBody(const DescribeUserConfigsResponseBody &) = default ;
    DescribeUserConfigsResponseBody(DescribeUserConfigsResponseBody &&) = default ;
    DescribeUserConfigsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUserConfigsResponseBody() = default ;
    DescribeUserConfigsResponseBody& operator=(const DescribeUserConfigsResponseBody &) = default ;
    DescribeUserConfigsResponseBody& operator=(DescribeUserConfigsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->configs_ == nullptr
        && return this->requestId_ == nullptr; };
    // configs Field Functions 
    bool hasConfigs() const { return this->configs_ != nullptr;};
    void deleteConfigs() { this->configs_ = nullptr;};
    inline const DescribeUserConfigsResponseBodyConfigs & configs() const { DARABONBA_PTR_GET_CONST(configs_, DescribeUserConfigsResponseBodyConfigs) };
    inline DescribeUserConfigsResponseBodyConfigs configs() { DARABONBA_PTR_GET(configs_, DescribeUserConfigsResponseBodyConfigs) };
    inline DescribeUserConfigsResponseBody& setConfigs(const DescribeUserConfigsResponseBodyConfigs & configs) { DARABONBA_PTR_SET_VALUE(configs_, configs) };
    inline DescribeUserConfigsResponseBody& setConfigs(DescribeUserConfigsResponseBodyConfigs && configs) { DARABONBA_PTR_SET_RVALUE(configs_, configs) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeUserConfigsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The configurations of the specified feature.
    std::shared_ptr<DescribeUserConfigsResponseBodyConfigs> configs_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
