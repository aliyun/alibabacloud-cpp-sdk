// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECONFIGMAPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECONFIGMAPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class DescribeConfigMapRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeConfigMapRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigMapId, configMapId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeConfigMapRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigMapId, configMapId_);
    };
    DescribeConfigMapRequest() = default ;
    DescribeConfigMapRequest(const DescribeConfigMapRequest &) = default ;
    DescribeConfigMapRequest(DescribeConfigMapRequest &&) = default ;
    DescribeConfigMapRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeConfigMapRequest() = default ;
    DescribeConfigMapRequest& operator=(const DescribeConfigMapRequest &) = default ;
    DescribeConfigMapRequest& operator=(DescribeConfigMapRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->configMapId_ == nullptr; };
    // configMapId Field Functions 
    bool hasConfigMapId() const { return this->configMapId_ != nullptr;};
    void deleteConfigMapId() { this->configMapId_ = nullptr;};
    inline int64_t configMapId() const { DARABONBA_PTR_GET_DEFAULT(configMapId_, 0L) };
    inline DescribeConfigMapRequest& setConfigMapId(int64_t configMapId) { DARABONBA_PTR_SET_VALUE(configMapId_, configMapId) };


  protected:
    // The ID of the ConfigMap whose details you want to query. You can call the [ListNamespacedConfigMaps](https://help.aliyun.com/document_detail/176917.html) operation to obtain the ID of a ConfigMap.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> configMapId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
