// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAININFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAININFOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeDomainInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(NeedDetailAttributes, needDetailAttributes_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(NeedDetailAttributes, needDetailAttributes_);
    };
    DescribeDomainInfoRequest() = default ;
    DescribeDomainInfoRequest(const DescribeDomainInfoRequest &) = default ;
    DescribeDomainInfoRequest(DescribeDomainInfoRequest &&) = default ;
    DescribeDomainInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainInfoRequest() = default ;
    DescribeDomainInfoRequest& operator=(const DescribeDomainInfoRequest &) = default ;
    DescribeDomainInfoRequest& operator=(DescribeDomainInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->domainName_ != nullptr
        && this->lang_ != nullptr && this->needDetailAttributes_ != nullptr; };
    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeDomainInfoRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeDomainInfoRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // needDetailAttributes Field Functions 
    bool hasNeedDetailAttributes() const { return this->needDetailAttributes_ != nullptr;};
    void deleteNeedDetailAttributes() { this->needDetailAttributes_ = nullptr;};
    inline bool needDetailAttributes() const { DARABONBA_PTR_GET_DEFAULT(needDetailAttributes_, false) };
    inline DescribeDomainInfoRequest& setNeedDetailAttributes(bool needDetailAttributes) { DARABONBA_PTR_SET_VALUE(needDetailAttributes_, needDetailAttributes) };


  protected:
    // The domain name.
    // 
    // This parameter is required.
    std::shared_ptr<string> domainName_ = nullptr;
    // The language type.
    std::shared_ptr<string> lang_ = nullptr;
    // Specifies whether detailed attributes are required. Default value: **false**, which indicates that detailed attributes are not returned.
    // 
    // If you set this parameter to **true**, the values of the following parameters are returned: LineType, MinTtl, RecordLineTreeJson, RecordLines, LineCode, LineDisplayName, LineName, RegionLines, and SlaveDns.
    std::shared_ptr<bool> needDetailAttributes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
