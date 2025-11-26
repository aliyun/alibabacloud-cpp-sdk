// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEJOBGROUPRESPONSEBODYJOBGROUPFLASHSMSEXTRAS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEJOBGROUPRESPONSEBODYJOBGROUPFLASHSMSEXTRAS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class DescribeJobGroupResponseBodyJobGroupFlashSmsExtras : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeJobGroupResponseBodyJobGroupFlashSmsExtras& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigId, configId_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeJobGroupResponseBodyJobGroupFlashSmsExtras& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigId, configId_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
    };
    DescribeJobGroupResponseBodyJobGroupFlashSmsExtras() = default ;
    DescribeJobGroupResponseBodyJobGroupFlashSmsExtras(const DescribeJobGroupResponseBodyJobGroupFlashSmsExtras &) = default ;
    DescribeJobGroupResponseBodyJobGroupFlashSmsExtras(DescribeJobGroupResponseBodyJobGroupFlashSmsExtras &&) = default ;
    DescribeJobGroupResponseBodyJobGroupFlashSmsExtras(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeJobGroupResponseBodyJobGroupFlashSmsExtras() = default ;
    DescribeJobGroupResponseBodyJobGroupFlashSmsExtras& operator=(const DescribeJobGroupResponseBodyJobGroupFlashSmsExtras &) = default ;
    DescribeJobGroupResponseBodyJobGroupFlashSmsExtras& operator=(DescribeJobGroupResponseBodyJobGroupFlashSmsExtras &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->configId_ == nullptr
        && return this->templateId_ == nullptr; };
    // configId Field Functions 
    bool hasConfigId() const { return this->configId_ != nullptr;};
    void deleteConfigId() { this->configId_ = nullptr;};
    inline string configId() const { DARABONBA_PTR_GET_DEFAULT(configId_, "") };
    inline DescribeJobGroupResponseBodyJobGroupFlashSmsExtras& setConfigId(string configId) { DARABONBA_PTR_SET_VALUE(configId_, configId) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline DescribeJobGroupResponseBodyJobGroupFlashSmsExtras& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


  protected:
    std::shared_ptr<string> configId_ = nullptr;
    std::shared_ptr<string> templateId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
