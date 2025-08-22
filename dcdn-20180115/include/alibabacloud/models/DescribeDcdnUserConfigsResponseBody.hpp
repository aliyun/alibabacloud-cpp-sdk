// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNUSERCONFIGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNUSERCONFIGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDcdnUserConfigsResponseBodyConfigs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnUserConfigsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnUserConfigsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Configs, configs_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnUserConfigsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Configs, configs_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDcdnUserConfigsResponseBody() = default ;
    DescribeDcdnUserConfigsResponseBody(const DescribeDcdnUserConfigsResponseBody &) = default ;
    DescribeDcdnUserConfigsResponseBody(DescribeDcdnUserConfigsResponseBody &&) = default ;
    DescribeDcdnUserConfigsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnUserConfigsResponseBody() = default ;
    DescribeDcdnUserConfigsResponseBody& operator=(const DescribeDcdnUserConfigsResponseBody &) = default ;
    DescribeDcdnUserConfigsResponseBody& operator=(DescribeDcdnUserConfigsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->configs_ != nullptr
        && this->requestId_ != nullptr; };
    // configs Field Functions 
    bool hasConfigs() const { return this->configs_ != nullptr;};
    void deleteConfigs() { this->configs_ = nullptr;};
    inline const vector<DescribeDcdnUserConfigsResponseBodyConfigs> & configs() const { DARABONBA_PTR_GET_CONST(configs_, vector<DescribeDcdnUserConfigsResponseBodyConfigs>) };
    inline vector<DescribeDcdnUserConfigsResponseBodyConfigs> configs() { DARABONBA_PTR_GET(configs_, vector<DescribeDcdnUserConfigsResponseBodyConfigs>) };
    inline DescribeDcdnUserConfigsResponseBody& setConfigs(const vector<DescribeDcdnUserConfigsResponseBodyConfigs> & configs) { DARABONBA_PTR_SET_VALUE(configs_, configs) };
    inline DescribeDcdnUserConfigsResponseBody& setConfigs(vector<DescribeDcdnUserConfigsResponseBodyConfigs> && configs) { DARABONBA_PTR_SET_RVALUE(configs_, configs) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDcdnUserConfigsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The user configurations.
    std::shared_ptr<vector<DescribeDcdnUserConfigsResponseBodyConfigs>> configs_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
