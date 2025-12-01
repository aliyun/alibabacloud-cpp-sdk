// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECONFIGSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECONFIGSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sddp20190103
{
namespace Models
{
  class DescribeConfigsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeConfigsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeConfigsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
    };
    DescribeConfigsRequest() = default ;
    DescribeConfigsRequest(const DescribeConfigsRequest &) = default ;
    DescribeConfigsRequest(DescribeConfigsRequest &&) = default ;
    DescribeConfigsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeConfigsRequest() = default ;
    DescribeConfigsRequest& operator=(const DescribeConfigsRequest &) = default ;
    DescribeConfigsRequest& operator=(DescribeConfigsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeConfigsRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


  protected:
    // The language of the content within the request and response. Valid values:
    // 
    // *   **zh**: Chinese
    // *   **en**: English
    std::shared_ptr<string> lang_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sddp20190103
#endif
