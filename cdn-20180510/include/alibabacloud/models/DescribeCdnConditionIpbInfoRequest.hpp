// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECDNCONDITIONIPBINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECDNCONDITIONIPBINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeCdnConditionIPBInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCdnConditionIPBInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DataId, dataId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCdnConditionIPBInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DataId, dataId_);
    };
    DescribeCdnConditionIPBInfoRequest() = default ;
    DescribeCdnConditionIPBInfoRequest(const DescribeCdnConditionIPBInfoRequest &) = default ;
    DescribeCdnConditionIPBInfoRequest(DescribeCdnConditionIPBInfoRequest &&) = default ;
    DescribeCdnConditionIPBInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCdnConditionIPBInfoRequest() = default ;
    DescribeCdnConditionIPBInfoRequest& operator=(const DescribeCdnConditionIPBInfoRequest &) = default ;
    DescribeCdnConditionIPBInfoRequest& operator=(DescribeCdnConditionIPBInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataId_ == nullptr; };
    // dataId Field Functions 
    bool hasDataId() const { return this->dataId_ != nullptr;};
    void deleteDataId() { this->dataId_ = nullptr;};
    inline string dataId() const { DARABONBA_PTR_GET_DEFAULT(dataId_, "") };
    inline DescribeCdnConditionIPBInfoRequest& setDataId(string dataId) { DARABONBA_PTR_SET_VALUE(dataId_, dataId) };


  protected:
    // The configuration ID. Valid values:
    // 
    // *   condition_region_config_cn
    // *   condition_region_config_en
    // *   condition_isp_config_cn
    // *   condition_isp_config_en
    // *   condition_country_config_cn
    // *   condition_country_config_en
    // 
    // This parameter is required.
    std::shared_ptr<string> dataId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
