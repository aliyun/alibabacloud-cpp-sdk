// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERESOURCETYPEAUTOENABLEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERESOURCETYPEAUTOENABLEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeResourceTypeAutoEnableRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeResourceTypeAutoEnableRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeResourceTypeAutoEnableRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
    };
    DescribeResourceTypeAutoEnableRequest() = default ;
    DescribeResourceTypeAutoEnableRequest(const DescribeResourceTypeAutoEnableRequest &) = default ;
    DescribeResourceTypeAutoEnableRequest(DescribeResourceTypeAutoEnableRequest &&) = default ;
    DescribeResourceTypeAutoEnableRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeResourceTypeAutoEnableRequest() = default ;
    DescribeResourceTypeAutoEnableRequest& operator=(const DescribeResourceTypeAutoEnableRequest &) = default ;
    DescribeResourceTypeAutoEnableRequest& operator=(DescribeResourceTypeAutoEnableRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeResourceTypeAutoEnableRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


  protected:
    std::shared_ptr<string> lang_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
