// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNACLFIELDSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNACLFIELDSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnAclFieldsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnAclFieldsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnAclFieldsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
    };
    DescribeDcdnAclFieldsRequest() = default ;
    DescribeDcdnAclFieldsRequest(const DescribeDcdnAclFieldsRequest &) = default ;
    DescribeDcdnAclFieldsRequest(DescribeDcdnAclFieldsRequest &&) = default ;
    DescribeDcdnAclFieldsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnAclFieldsRequest() = default ;
    DescribeDcdnAclFieldsRequest& operator=(const DescribeDcdnAclFieldsRequest &) = default ;
    DescribeDcdnAclFieldsRequest& operator=(DescribeDcdnAclFieldsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeDcdnAclFieldsRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


  protected:
    // The access language. Default value: en. Valid values:
    // 
    // *   **en**: English
    // *   **zh**: Chinese
    // 
    // This parameter is required.
    shared_ptr<string> lang_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
