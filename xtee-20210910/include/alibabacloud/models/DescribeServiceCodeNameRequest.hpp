// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESERVICECODENAMEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESERVICECODENAMEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeServiceCodeNameRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeServiceCodeNameRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(Tab, tab_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeServiceCodeNameRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(Tab, tab_);
    };
    DescribeServiceCodeNameRequest() = default ;
    DescribeServiceCodeNameRequest(const DescribeServiceCodeNameRequest &) = default ;
    DescribeServiceCodeNameRequest(DescribeServiceCodeNameRequest &&) = default ;
    DescribeServiceCodeNameRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeServiceCodeNameRequest() = default ;
    DescribeServiceCodeNameRequest& operator=(const DescribeServiceCodeNameRequest &) = default ;
    DescribeServiceCodeNameRequest& operator=(DescribeServiceCodeNameRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->lang_ != nullptr
        && this->tab_ != nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeServiceCodeNameRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // tab Field Functions 
    bool hasTab() const { return this->tab_ != nullptr;};
    void deleteTab() { this->tab_ = nullptr;};
    inline string tab() const { DARABONBA_PTR_GET_DEFAULT(tab_, "") };
    inline DescribeServiceCodeNameRequest& setTab(string tab) { DARABONBA_PTR_SET_VALUE(tab_, tab) };


  protected:
    // Sets the language type for requests and received messages, default value is **zh**. Values: 
    // - **zh**: Chinese
    // - **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    // Scenario.
    std::shared_ptr<string> tab_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
