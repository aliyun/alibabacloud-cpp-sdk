// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEWEBCCRULESV2RESPONSEBODYWEBCCRULESRULEDETAILSTATISTICS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEWEBCCRULESV2RESPONSEBODYWEBCCRULESRULEDETAILSTATISTICS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeWebCCRulesV2ResponseBodyWebCCRulesRuleDetailStatistics : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeWebCCRulesV2ResponseBodyWebCCRulesRuleDetailStatistics& obj) { 
      DARABONBA_PTR_TO_JSON(Field, field_);
      DARABONBA_PTR_TO_JSON(HeaderName, headerName_);
      DARABONBA_PTR_TO_JSON(Mode, mode_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeWebCCRulesV2ResponseBodyWebCCRulesRuleDetailStatistics& obj) { 
      DARABONBA_PTR_FROM_JSON(Field, field_);
      DARABONBA_PTR_FROM_JSON(HeaderName, headerName_);
      DARABONBA_PTR_FROM_JSON(Mode, mode_);
    };
    DescribeWebCCRulesV2ResponseBodyWebCCRulesRuleDetailStatistics() = default ;
    DescribeWebCCRulesV2ResponseBodyWebCCRulesRuleDetailStatistics(const DescribeWebCCRulesV2ResponseBodyWebCCRulesRuleDetailStatistics &) = default ;
    DescribeWebCCRulesV2ResponseBodyWebCCRulesRuleDetailStatistics(DescribeWebCCRulesV2ResponseBodyWebCCRulesRuleDetailStatistics &&) = default ;
    DescribeWebCCRulesV2ResponseBodyWebCCRulesRuleDetailStatistics(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeWebCCRulesV2ResponseBodyWebCCRulesRuleDetailStatistics() = default ;
    DescribeWebCCRulesV2ResponseBodyWebCCRulesRuleDetailStatistics& operator=(const DescribeWebCCRulesV2ResponseBodyWebCCRulesRuleDetailStatistics &) = default ;
    DescribeWebCCRulesV2ResponseBodyWebCCRulesRuleDetailStatistics& operator=(DescribeWebCCRulesV2ResponseBodyWebCCRulesRuleDetailStatistics &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->field_ != nullptr
        && this->headerName_ != nullptr && this->mode_ != nullptr; };
    // field Field Functions 
    bool hasField() const { return this->field_ != nullptr;};
    void deleteField() { this->field_ = nullptr;};
    inline string field() const { DARABONBA_PTR_GET_DEFAULT(field_, "") };
    inline DescribeWebCCRulesV2ResponseBodyWebCCRulesRuleDetailStatistics& setField(string field) { DARABONBA_PTR_SET_VALUE(field_, field) };


    // headerName Field Functions 
    bool hasHeaderName() const { return this->headerName_ != nullptr;};
    void deleteHeaderName() { this->headerName_ = nullptr;};
    inline string headerName() const { DARABONBA_PTR_GET_DEFAULT(headerName_, "") };
    inline DescribeWebCCRulesV2ResponseBodyWebCCRulesRuleDetailStatistics& setHeaderName(string headerName) { DARABONBA_PTR_SET_VALUE(headerName_, headerName) };


    // mode Field Functions 
    bool hasMode() const { return this->mode_ != nullptr;};
    void deleteMode() { this->mode_ = nullptr;};
    inline string mode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
    inline DescribeWebCCRulesV2ResponseBodyWebCCRulesRuleDetailStatistics& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


  protected:
    // The statistical method. Valid values:
    // 
    // *   **ip**
    // *   **header**
    // *   **uri**
    std::shared_ptr<string> field_ = nullptr;
    // The name of the header. This parameter is required only when the Field parameter is set to header.
    std::shared_ptr<string> headerName_ = nullptr;
    // Indicates whether the system collects statistics after deduplication. Valid values:
    // 
    // *   **count**: The system collects statistics before deduplication.
    // *   **distinct**: The system collects statistics after deduplication.
    std::shared_ptr<string> mode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
