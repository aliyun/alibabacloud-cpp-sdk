// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECDNUSERCONFIGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECDNUSERCONFIGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeCdnUserConfigsResponseBodyConfigs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeCdnUserConfigsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCdnUserConfigsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Configs, configs_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCdnUserConfigsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Configs, configs_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeCdnUserConfigsResponseBody() = default ;
    DescribeCdnUserConfigsResponseBody(const DescribeCdnUserConfigsResponseBody &) = default ;
    DescribeCdnUserConfigsResponseBody(DescribeCdnUserConfigsResponseBody &&) = default ;
    DescribeCdnUserConfigsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCdnUserConfigsResponseBody() = default ;
    DescribeCdnUserConfigsResponseBody& operator=(const DescribeCdnUserConfigsResponseBody &) = default ;
    DescribeCdnUserConfigsResponseBody& operator=(DescribeCdnUserConfigsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->configs_ != nullptr
        && this->requestId_ != nullptr; };
    // configs Field Functions 
    bool hasConfigs() const { return this->configs_ != nullptr;};
    void deleteConfigs() { this->configs_ = nullptr;};
    inline const vector<DescribeCdnUserConfigsResponseBodyConfigs> & configs() const { DARABONBA_PTR_GET_CONST(configs_, vector<DescribeCdnUserConfigsResponseBodyConfigs>) };
    inline vector<DescribeCdnUserConfigsResponseBodyConfigs> configs() { DARABONBA_PTR_GET(configs_, vector<DescribeCdnUserConfigsResponseBodyConfigs>) };
    inline DescribeCdnUserConfigsResponseBody& setConfigs(const vector<DescribeCdnUserConfigsResponseBodyConfigs> & configs) { DARABONBA_PTR_SET_VALUE(configs_, configs) };
    inline DescribeCdnUserConfigsResponseBody& setConfigs(vector<DescribeCdnUserConfigsResponseBodyConfigs> && configs) { DARABONBA_PTR_SET_RVALUE(configs_, configs) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCdnUserConfigsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The user configurations.
    std::shared_ptr<vector<DescribeCdnUserConfigsResponseBodyConfigs>> configs_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
