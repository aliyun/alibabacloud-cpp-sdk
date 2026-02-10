// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINSECURESUGGESTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINSECURESUGGESTSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeDomainSecureSuggestsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainSecureSuggestsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(SourceIp, sourceIp_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainSecureSuggestsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(SourceIp, sourceIp_);
    };
    DescribeDomainSecureSuggestsRequest() = default ;
    DescribeDomainSecureSuggestsRequest(const DescribeDomainSecureSuggestsRequest &) = default ;
    DescribeDomainSecureSuggestsRequest(DescribeDomainSecureSuggestsRequest &&) = default ;
    DescribeDomainSecureSuggestsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainSecureSuggestsRequest() = default ;
    DescribeDomainSecureSuggestsRequest& operator=(const DescribeDomainSecureSuggestsRequest &) = default ;
    DescribeDomainSecureSuggestsRequest& operator=(DescribeDomainSecureSuggestsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && this->sourceIp_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeDomainSecureSuggestsRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string getSourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline DescribeDomainSecureSuggestsRequest& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


  protected:
    // Sets the language type for requests and received messages, default is **zh**. Values:
    // - **zh**: Chinese
    // - **en**: English
    shared_ptr<string> lang_ {};
    // The IP address of the access source.
    shared_ptr<string> sourceIp_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
