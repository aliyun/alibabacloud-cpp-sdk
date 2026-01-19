// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERECOMMENDVELOCITIESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERECOMMENDVELOCITIESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeRecommendVelocitiesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRecommendVelocitiesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(regId, regId_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRecommendVelocitiesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(regId, regId_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    DescribeRecommendVelocitiesRequest() = default ;
    DescribeRecommendVelocitiesRequest(const DescribeRecommendVelocitiesRequest &) = default ;
    DescribeRecommendVelocitiesRequest(DescribeRecommendVelocitiesRequest &&) = default ;
    DescribeRecommendVelocitiesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRecommendVelocitiesRequest() = default ;
    DescribeRecommendVelocitiesRequest& operator=(const DescribeRecommendVelocitiesRequest &) = default ;
    DescribeRecommendVelocitiesRequest& operator=(DescribeRecommendVelocitiesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && this->code_ == nullptr && this->regId_ == nullptr && this->type_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeRecommendVelocitiesRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeRecommendVelocitiesRequest& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // regId Field Functions 
    bool hasRegId() const { return this->regId_ != nullptr;};
    void deleteRegId() { this->regId_ = nullptr;};
    inline string getRegId() const { DARABONBA_PTR_GET_DEFAULT(regId_, "") };
    inline DescribeRecommendVelocitiesRequest& setRegId(string regId) { DARABONBA_PTR_SET_VALUE(regId_, regId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeRecommendVelocitiesRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // Sets the language type for requests and responses, with a default value of **zh**. Values:
    // - **zh**: Chinese
    // - **en**: English
    shared_ptr<string> lang_ {};
    // Metric code
    shared_ptr<string> code_ {};
    // Region ID
    shared_ptr<string> regId_ {};
    // Metric type
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
