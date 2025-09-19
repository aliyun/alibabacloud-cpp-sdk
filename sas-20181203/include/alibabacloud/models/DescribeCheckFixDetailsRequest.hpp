// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECHECKFIXDETAILSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECHECKFIXDETAILSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeCheckFixDetailsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCheckFixDetailsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CheckIds, checkIds_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(RiskId, riskId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCheckFixDetailsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckIds, checkIds_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(RiskId, riskId_);
    };
    DescribeCheckFixDetailsRequest() = default ;
    DescribeCheckFixDetailsRequest(const DescribeCheckFixDetailsRequest &) = default ;
    DescribeCheckFixDetailsRequest(DescribeCheckFixDetailsRequest &&) = default ;
    DescribeCheckFixDetailsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCheckFixDetailsRequest() = default ;
    DescribeCheckFixDetailsRequest& operator=(const DescribeCheckFixDetailsRequest &) = default ;
    DescribeCheckFixDetailsRequest& operator=(DescribeCheckFixDetailsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->checkIds_ != nullptr
        && this->lang_ != nullptr && this->riskId_ != nullptr; };
    // checkIds Field Functions 
    bool hasCheckIds() const { return this->checkIds_ != nullptr;};
    void deleteCheckIds() { this->checkIds_ = nullptr;};
    inline string checkIds() const { DARABONBA_PTR_GET_DEFAULT(checkIds_, "") };
    inline DescribeCheckFixDetailsRequest& setCheckIds(string checkIds) { DARABONBA_PTR_SET_VALUE(checkIds_, checkIds) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeCheckFixDetailsRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // riskId Field Functions 
    bool hasRiskId() const { return this->riskId_ != nullptr;};
    void deleteRiskId() { this->riskId_ = nullptr;};
    inline int64_t riskId() const { DARABONBA_PTR_GET_DEFAULT(riskId_, 0L) };
    inline DescribeCheckFixDetailsRequest& setRiskId(int64_t riskId) { DARABONBA_PTR_SET_VALUE(riskId_, riskId) };


  protected:
    // The ID of the risk item.
    // 
    // >  You can call the [DescribeRiskType](~~DescribeRiskType~~) operation to query the IDs of risk items.
    std::shared_ptr<string> checkIds_ = nullptr;
    // The language of the content within the request and response. Default value: **zh**. Valid values:
    // 
    // *   **zh**: Chinese
    // *   **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    // The ID of the baseline.
    // 
    // >  You can call the [DescribeCheckWarningSummary](https://help.aliyun.com/document_detail/116179.html) operation to query the IDs of baselines.
    std::shared_ptr<int64_t> riskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
