// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPLUGINSUMMARYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPLUGINSUMMARYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribePluginSummaryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePluginSummaryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(PluginName, pluginName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePluginSummaryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(PluginName, pluginName_);
    };
    DescribePluginSummaryRequest() = default ;
    DescribePluginSummaryRequest(const DescribePluginSummaryRequest &) = default ;
    DescribePluginSummaryRequest(DescribePluginSummaryRequest &&) = default ;
    DescribePluginSummaryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePluginSummaryRequest() = default ;
    DescribePluginSummaryRequest& operator=(const DescribePluginSummaryRequest &) = default ;
    DescribePluginSummaryRequest& operator=(DescribePluginSummaryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && return this->pluginName_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribePluginSummaryRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // pluginName Field Functions 
    bool hasPluginName() const { return this->pluginName_ != nullptr;};
    void deletePluginName() { this->pluginName_ = nullptr;};
    inline string pluginName() const { DARABONBA_PTR_GET_DEFAULT(pluginName_, "") };
    inline DescribePluginSummaryRequest& setPluginName(string pluginName) { DARABONBA_PTR_SET_VALUE(pluginName_, pluginName) };


  protected:
    // The language of the content within the request and response.**** Valid values:
    // 
    // *   **zh** (default)
    // *   **en**
    std::shared_ptr<string> lang_ = nullptr;
    // The name of the plug-in. Valid values:
    // 
    // *   alinet: AliNet.
    // *   alisecguard: client protection.
    // *   alihips: AliHips.
    std::shared_ptr<string> pluginName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
