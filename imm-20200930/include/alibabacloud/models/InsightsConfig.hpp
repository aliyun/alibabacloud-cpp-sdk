// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INSIGHTSCONFIG_HPP_
#define ALIBABACLOUD_MODELS_INSIGHTSCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class InsightsConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InsightsConfig& obj) { 
      DARABONBA_PTR_TO_JSON(Language, language_);
    };
    friend void from_json(const Darabonba::Json& j, InsightsConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(Language, language_);
    };
    InsightsConfig() = default ;
    InsightsConfig(const InsightsConfig &) = default ;
    InsightsConfig(InsightsConfig &&) = default ;
    InsightsConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InsightsConfig() = default ;
    InsightsConfig& operator=(const InsightsConfig &) = default ;
    InsightsConfig& operator=(InsightsConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->language_ == nullptr; };
    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string getLanguage() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline InsightsConfig& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


  protected:
    shared_ptr<string> language_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
