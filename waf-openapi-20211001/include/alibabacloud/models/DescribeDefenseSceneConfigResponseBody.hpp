// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDEFENSESCENECONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDEFENSESCENECONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeDefenseSceneConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDefenseSceneConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigValue, configValue_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDefenseSceneConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigValue, configValue_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDefenseSceneConfigResponseBody() = default ;
    DescribeDefenseSceneConfigResponseBody(const DescribeDefenseSceneConfigResponseBody &) = default ;
    DescribeDefenseSceneConfigResponseBody(DescribeDefenseSceneConfigResponseBody &&) = default ;
    DescribeDefenseSceneConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDefenseSceneConfigResponseBody() = default ;
    DescribeDefenseSceneConfigResponseBody& operator=(const DescribeDefenseSceneConfigResponseBody &) = default ;
    DescribeDefenseSceneConfigResponseBody& operator=(DescribeDefenseSceneConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->configValue_ != nullptr
        && this->requestId_ != nullptr; };
    // configValue Field Functions 
    bool hasConfigValue() const { return this->configValue_ != nullptr;};
    void deleteConfigValue() { this->configValue_ = nullptr;};
    inline string configValue() const { DARABONBA_PTR_GET_DEFAULT(configValue_, "") };
    inline DescribeDefenseSceneConfigResponseBody& setConfigValue(string configValue) { DARABONBA_PTR_SET_VALUE(configValue_, configValue) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDefenseSceneConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<string> configValue_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
