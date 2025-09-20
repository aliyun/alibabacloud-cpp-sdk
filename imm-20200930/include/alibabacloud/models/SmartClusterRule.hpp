// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SMARTCLUSTERRULE_HPP_
#define ALIBABACLOUD_MODELS_SMARTCLUSTERRULE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class SmartClusterRule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SmartClusterRule& obj) { 
      DARABONBA_PTR_TO_JSON(Keywords, keywords_);
      DARABONBA_PTR_TO_JSON(Sensitivity, sensitivity_);
    };
    friend void from_json(const Darabonba::Json& j, SmartClusterRule& obj) { 
      DARABONBA_PTR_FROM_JSON(Keywords, keywords_);
      DARABONBA_PTR_FROM_JSON(Sensitivity, sensitivity_);
    };
    SmartClusterRule() = default ;
    SmartClusterRule(const SmartClusterRule &) = default ;
    SmartClusterRule(SmartClusterRule &&) = default ;
    SmartClusterRule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SmartClusterRule() = default ;
    SmartClusterRule& operator=(const SmartClusterRule &) = default ;
    SmartClusterRule& operator=(SmartClusterRule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->keywords_ != nullptr
        && this->sensitivity_ != nullptr; };
    // keywords Field Functions 
    bool hasKeywords() const { return this->keywords_ != nullptr;};
    void deleteKeywords() { this->keywords_ = nullptr;};
    inline const vector<string> & keywords() const { DARABONBA_PTR_GET_CONST(keywords_, vector<string>) };
    inline vector<string> keywords() { DARABONBA_PTR_GET(keywords_, vector<string>) };
    inline SmartClusterRule& setKeywords(const vector<string> & keywords) { DARABONBA_PTR_SET_VALUE(keywords_, keywords) };
    inline SmartClusterRule& setKeywords(vector<string> && keywords) { DARABONBA_PTR_SET_RVALUE(keywords_, keywords) };


    // sensitivity Field Functions 
    bool hasSensitivity() const { return this->sensitivity_ != nullptr;};
    void deleteSensitivity() { this->sensitivity_ = nullptr;};
    inline float sensitivity() const { DARABONBA_PTR_GET_DEFAULT(sensitivity_, 0.0) };
    inline SmartClusterRule& setSensitivity(float sensitivity) { DARABONBA_PTR_SET_VALUE(sensitivity_, sensitivity) };


  protected:
    std::shared_ptr<vector<string>> keywords_ = nullptr;
    std::shared_ptr<float> sensitivity_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
