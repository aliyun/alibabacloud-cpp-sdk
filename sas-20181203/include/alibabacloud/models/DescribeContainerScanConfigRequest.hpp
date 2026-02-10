// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECONTAINERSCANCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECONTAINERSCANCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeContainerScanConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeContainerScanConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeContainerScanConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
    };
    DescribeContainerScanConfigRequest() = default ;
    DescribeContainerScanConfigRequest(const DescribeContainerScanConfigRequest &) = default ;
    DescribeContainerScanConfigRequest(DescribeContainerScanConfigRequest &&) = default ;
    DescribeContainerScanConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeContainerScanConfigRequest() = default ;
    DescribeContainerScanConfigRequest& operator=(const DescribeContainerScanConfigRequest &) = default ;
    DescribeContainerScanConfigRequest& operator=(DescribeContainerScanConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeContainerScanConfigRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


  protected:
    // The language of the content within the request and response. Default value: **zh**. Valid values:
    // 
    // *   **zh**: Chinese
    // *   **en**: English
    shared_ptr<string> lang_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
