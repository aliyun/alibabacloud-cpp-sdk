// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDEFAULTIPSCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDEFAULTIPSCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeDefaultIPSConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDefaultIPSConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDefaultIPSConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
    };
    DescribeDefaultIPSConfigRequest() = default ;
    DescribeDefaultIPSConfigRequest(const DescribeDefaultIPSConfigRequest &) = default ;
    DescribeDefaultIPSConfigRequest(DescribeDefaultIPSConfigRequest &&) = default ;
    DescribeDefaultIPSConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDefaultIPSConfigRequest() = default ;
    DescribeDefaultIPSConfigRequest& operator=(const DescribeDefaultIPSConfigRequest &) = default ;
    DescribeDefaultIPSConfigRequest& operator=(DescribeDefaultIPSConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeDefaultIPSConfigRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


  protected:
    // The language of the content within the response. Valid values:
    // 
    // *   **zh** (default)
    // *   **en**
    std::shared_ptr<string> lang_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
