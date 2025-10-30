// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLUSTERV2USERKUBECONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLUSTERV2USERKUBECONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class DescribeClusterV2UserKubeconfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClusterV2UserKubeconfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(config, config_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClusterV2UserKubeconfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(config, config_);
    };
    DescribeClusterV2UserKubeconfigResponseBody() = default ;
    DescribeClusterV2UserKubeconfigResponseBody(const DescribeClusterV2UserKubeconfigResponseBody &) = default ;
    DescribeClusterV2UserKubeconfigResponseBody(DescribeClusterV2UserKubeconfigResponseBody &&) = default ;
    DescribeClusterV2UserKubeconfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClusterV2UserKubeconfigResponseBody() = default ;
    DescribeClusterV2UserKubeconfigResponseBody& operator=(const DescribeClusterV2UserKubeconfigResponseBody &) = default ;
    DescribeClusterV2UserKubeconfigResponseBody& operator=(DescribeClusterV2UserKubeconfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->config_ == nullptr; };
    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline string config() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
    inline DescribeClusterV2UserKubeconfigResponseBody& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


  protected:
    std::shared_ptr<string> config_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
