// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECONDITIONIPBINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECONDITIONIPBINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class DescribeConditionIPBInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeConditionIPBInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DataId, dataId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeConditionIPBInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DataId, dataId_);
    };
    DescribeConditionIPBInfoRequest() = default ;
    DescribeConditionIPBInfoRequest(const DescribeConditionIPBInfoRequest &) = default ;
    DescribeConditionIPBInfoRequest(DescribeConditionIPBInfoRequest &&) = default ;
    DescribeConditionIPBInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeConditionIPBInfoRequest() = default ;
    DescribeConditionIPBInfoRequest& operator=(const DescribeConditionIPBInfoRequest &) = default ;
    DescribeConditionIPBInfoRequest& operator=(DescribeConditionIPBInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataId_ == nullptr; };
    // dataId Field Functions 
    bool hasDataId() const { return this->dataId_ != nullptr;};
    void deleteDataId() { this->dataId_ = nullptr;};
    inline string getDataId() const { DARABONBA_PTR_GET_DEFAULT(dataId_, "") };
    inline DescribeConditionIPBInfoRequest& setDataId(string dataId) { DARABONBA_PTR_SET_VALUE(dataId_, dataId) };


  protected:
    // The configuration ID. Valid values:
    // - condition_region_config_cn: provides a mapping list of region Chinese names and their corresponding codes.
    // - condition_region_config_en: provides a mapping list of region English names and their corresponding codes.
    // - condition_isp_config_cn: provides a mapping list of ISP Chinese names and their corresponding codes.
    // - condition_isp_config_en: provides a mapping list of ISP English names and their corresponding codes.
    // - condition_country_config_cn: provides a mapping list of country Chinese names and their corresponding codes.
    // - condition_country_config_en: provides a mapping list of country English names and their corresponding codes.
    // 
    // This parameter is required.
    shared_ptr<string> dataId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
