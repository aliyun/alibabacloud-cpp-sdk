// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ALERTRULELABELFILTER_HPP_
#define ALIBABACLOUD_MODELS_ALERTRULELABELFILTER_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class AlertRuleLabelFilter : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AlertRuleLabelFilter& obj) { 
      DARABONBA_PTR_TO_JSON(labels, labels_);
      DARABONBA_PTR_TO_JSON(opt, opt_);
    };
    friend void from_json(const Darabonba::Json& j, AlertRuleLabelFilter& obj) { 
      DARABONBA_PTR_FROM_JSON(labels, labels_);
      DARABONBA_PTR_FROM_JSON(opt, opt_);
    };
    AlertRuleLabelFilter() = default ;
    AlertRuleLabelFilter(const AlertRuleLabelFilter &) = default ;
    AlertRuleLabelFilter(AlertRuleLabelFilter &&) = default ;
    AlertRuleLabelFilter(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AlertRuleLabelFilter() = default ;
    AlertRuleLabelFilter& operator=(const AlertRuleLabelFilter &) = default ;
    AlertRuleLabelFilter& operator=(AlertRuleLabelFilter &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->labels_ != nullptr
        && this->opt_ != nullptr; };
    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline const map<string, string> & labels() const { DARABONBA_PTR_GET_CONST(labels_, map<string, string>) };
    inline map<string, string> labels() { DARABONBA_PTR_GET(labels_, map<string, string>) };
    inline AlertRuleLabelFilter& setLabels(const map<string, string> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
    inline AlertRuleLabelFilter& setLabels(map<string, string> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


    // opt Field Functions 
    bool hasOpt() const { return this->opt_ != nullptr;};
    void deleteOpt() { this->opt_ = nullptr;};
    inline string opt() const { DARABONBA_PTR_GET_DEFAULT(opt_, "") };
    inline AlertRuleLabelFilter& setOpt(string opt) { DARABONBA_PTR_SET_VALUE(opt_, opt) };


  protected:
    std::shared_ptr<map<string, string>> labels_ = nullptr;
    std::shared_ptr<string> opt_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
