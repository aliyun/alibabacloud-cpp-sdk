// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECUSTVARIABLECONFIGLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECUSTVARIABLECONFIGLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeCustVariableConfigListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCustVariableConfigListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(bizType, bizType_);
      DARABONBA_PTR_TO_JSON(regId, regId_);
      DARABONBA_PTR_TO_JSON(timeType, timeType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCustVariableConfigListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(bizType, bizType_);
      DARABONBA_PTR_FROM_JSON(regId, regId_);
      DARABONBA_PTR_FROM_JSON(timeType, timeType_);
    };
    DescribeCustVariableConfigListRequest() = default ;
    DescribeCustVariableConfigListRequest(const DescribeCustVariableConfigListRequest &) = default ;
    DescribeCustVariableConfigListRequest(DescribeCustVariableConfigListRequest &&) = default ;
    DescribeCustVariableConfigListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCustVariableConfigListRequest() = default ;
    DescribeCustVariableConfigListRequest& operator=(const DescribeCustVariableConfigListRequest &) = default ;
    DescribeCustVariableConfigListRequest& operator=(DescribeCustVariableConfigListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && return this->bizType_ == nullptr && return this->regId_ == nullptr && return this->timeType_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeCustVariableConfigListRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // bizType Field Functions 
    bool hasBizType() const { return this->bizType_ != nullptr;};
    void deleteBizType() { this->bizType_ = nullptr;};
    inline string bizType() const { DARABONBA_PTR_GET_DEFAULT(bizType_, "") };
    inline DescribeCustVariableConfigListRequest& setBizType(string bizType) { DARABONBA_PTR_SET_VALUE(bizType_, bizType) };


    // regId Field Functions 
    bool hasRegId() const { return this->regId_ != nullptr;};
    void deleteRegId() { this->regId_ = nullptr;};
    inline string regId() const { DARABONBA_PTR_GET_DEFAULT(regId_, "") };
    inline DescribeCustVariableConfigListRequest& setRegId(string regId) { DARABONBA_PTR_SET_VALUE(regId_, regId) };


    // timeType Field Functions 
    bool hasTimeType() const { return this->timeType_ != nullptr;};
    void deleteTimeType() { this->timeType_ = nullptr;};
    inline string timeType() const { DARABONBA_PTR_GET_DEFAULT(timeType_, "") };
    inline DescribeCustVariableConfigListRequest& setTimeType(string timeType) { DARABONBA_PTR_SET_VALUE(timeType_, timeType) };


  protected:
    // Set the language type for requests and received messages, default value is **zh**. Values: 
    // - **zh**: Chinese
    // - **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    // Configuration type
    // 
    // This parameter is required.
    std::shared_ptr<string> bizType_ = nullptr;
    // Region code
    std::shared_ptr<string> regId_ = nullptr;
    // Time type
    std::shared_ptr<string> timeType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
