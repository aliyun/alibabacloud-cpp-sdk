// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGROUPSTRUCTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGROUPSTRUCTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeGroupStructRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGroupStructRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGroupStructRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
    };
    DescribeGroupStructRequest() = default ;
    DescribeGroupStructRequest(const DescribeGroupStructRequest &) = default ;
    DescribeGroupStructRequest(DescribeGroupStructRequest &&) = default ;
    DescribeGroupStructRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGroupStructRequest() = default ;
    DescribeGroupStructRequest& operator=(const DescribeGroupStructRequest &) = default ;
    DescribeGroupStructRequest& operator=(DescribeGroupStructRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeGroupStructRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


  protected:
    // The language of the content within the request and response. Default value: **zh**. Valid values:
    // 
    // *   **zh**: Chinese
    // *   **en**: English
    std::shared_ptr<string> lang_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
