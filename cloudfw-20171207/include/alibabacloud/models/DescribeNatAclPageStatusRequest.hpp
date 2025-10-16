// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENATACLPAGESTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENATACLPAGESTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeNatAclPageStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNatAclPageStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNatAclPageStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
    };
    DescribeNatAclPageStatusRequest() = default ;
    DescribeNatAclPageStatusRequest(const DescribeNatAclPageStatusRequest &) = default ;
    DescribeNatAclPageStatusRequest(DescribeNatAclPageStatusRequest &&) = default ;
    DescribeNatAclPageStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNatAclPageStatusRequest() = default ;
    DescribeNatAclPageStatusRequest& operator=(const DescribeNatAclPageStatusRequest &) = default ;
    DescribeNatAclPageStatusRequest& operator=(DescribeNatAclPageStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeNatAclPageStatusRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


  protected:
    // The language of the content within the request and response. Valid values:
    // 
    // *   **zh** (default): Chinese
    // *   **en**: English
    std::shared_ptr<string> lang_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
