// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFIELDLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFIELDLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeFieldListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFieldListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(condition, condition_);
      DARABONBA_PTR_TO_JSON(inputs, inputs_);
      DARABONBA_PTR_TO_JSON(regId, regId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFieldListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(condition, condition_);
      DARABONBA_PTR_FROM_JSON(inputs, inputs_);
      DARABONBA_PTR_FROM_JSON(regId, regId_);
    };
    DescribeFieldListRequest() = default ;
    DescribeFieldListRequest(const DescribeFieldListRequest &) = default ;
    DescribeFieldListRequest(DescribeFieldListRequest &&) = default ;
    DescribeFieldListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFieldListRequest() = default ;
    DescribeFieldListRequest& operator=(const DescribeFieldListRequest &) = default ;
    DescribeFieldListRequest& operator=(DescribeFieldListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && return this->condition_ == nullptr && return this->inputs_ == nullptr && return this->regId_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeFieldListRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // condition Field Functions 
    bool hasCondition() const { return this->condition_ != nullptr;};
    void deleteCondition() { this->condition_ = nullptr;};
    inline string condition() const { DARABONBA_PTR_GET_DEFAULT(condition_, "") };
    inline DescribeFieldListRequest& setCondition(string condition) { DARABONBA_PTR_SET_VALUE(condition_, condition) };


    // inputs Field Functions 
    bool hasInputs() const { return this->inputs_ != nullptr;};
    void deleteInputs() { this->inputs_ = nullptr;};
    inline string inputs() const { DARABONBA_PTR_GET_DEFAULT(inputs_, "") };
    inline DescribeFieldListRequest& setInputs(string inputs) { DARABONBA_PTR_SET_VALUE(inputs_, inputs) };


    // regId Field Functions 
    bool hasRegId() const { return this->regId_ != nullptr;};
    void deleteRegId() { this->regId_ = nullptr;};
    inline string regId() const { DARABONBA_PTR_GET_DEFAULT(regId_, "") };
    inline DescribeFieldListRequest& setRegId(string regId) { DARABONBA_PTR_SET_VALUE(regId_, regId) };


  protected:
    // Sets the language type for requests and received messages, default value is **zh**. Values: 
    // - **zh**: Chinese
    // - **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    // Query input name or title
    std::shared_ptr<string> condition_ = nullptr;
    // Selected fields
    std::shared_ptr<string> inputs_ = nullptr;
    // Region code
    // 
    // This parameter is required.
    std::shared_ptr<string> regId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
