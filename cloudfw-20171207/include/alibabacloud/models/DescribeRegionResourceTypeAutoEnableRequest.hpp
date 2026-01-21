// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEREGIONRESOURCETYPEAUTOENABLEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEREGIONRESOURCETYPEAUTOENABLEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeRegionResourceTypeAutoEnableRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRegionResourceTypeAutoEnableRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRegionResourceTypeAutoEnableRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
    };
    DescribeRegionResourceTypeAutoEnableRequest() = default ;
    DescribeRegionResourceTypeAutoEnableRequest(const DescribeRegionResourceTypeAutoEnableRequest &) = default ;
    DescribeRegionResourceTypeAutoEnableRequest(DescribeRegionResourceTypeAutoEnableRequest &&) = default ;
    DescribeRegionResourceTypeAutoEnableRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRegionResourceTypeAutoEnableRequest() = default ;
    DescribeRegionResourceTypeAutoEnableRequest& operator=(const DescribeRegionResourceTypeAutoEnableRequest &) = default ;
    DescribeRegionResourceTypeAutoEnableRequest& operator=(DescribeRegionResourceTypeAutoEnableRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeRegionResourceTypeAutoEnableRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


  protected:
    shared_ptr<string> lang_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
