// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATEDYNAMICDICTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GENERATEDYNAMICDICTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GenerateDynamicDictRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateDynamicDictRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ArgKeywords, argKeywords_);
      DARABONBA_PTR_TO_JSON(Domains, domains_);
      DARABONBA_PTR_TO_JSON(Names, names_);
      DARABONBA_PTR_TO_JSON(SourceIp, sourceIp_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateDynamicDictRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ArgKeywords, argKeywords_);
      DARABONBA_PTR_FROM_JSON(Domains, domains_);
      DARABONBA_PTR_FROM_JSON(Names, names_);
      DARABONBA_PTR_FROM_JSON(SourceIp, sourceIp_);
    };
    GenerateDynamicDictRequest() = default ;
    GenerateDynamicDictRequest(const GenerateDynamicDictRequest &) = default ;
    GenerateDynamicDictRequest(GenerateDynamicDictRequest &&) = default ;
    GenerateDynamicDictRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateDynamicDictRequest() = default ;
    GenerateDynamicDictRequest& operator=(const GenerateDynamicDictRequest &) = default ;
    GenerateDynamicDictRequest& operator=(GenerateDynamicDictRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->argKeywords_ != nullptr
        && this->domains_ != nullptr && this->names_ != nullptr && this->sourceIp_ != nullptr; };
    // argKeywords Field Functions 
    bool hasArgKeywords() const { return this->argKeywords_ != nullptr;};
    void deleteArgKeywords() { this->argKeywords_ = nullptr;};
    inline string argKeywords() const { DARABONBA_PTR_GET_DEFAULT(argKeywords_, "") };
    inline GenerateDynamicDictRequest& setArgKeywords(string argKeywords) { DARABONBA_PTR_SET_VALUE(argKeywords_, argKeywords) };


    // domains Field Functions 
    bool hasDomains() const { return this->domains_ != nullptr;};
    void deleteDomains() { this->domains_ = nullptr;};
    inline string domains() const { DARABONBA_PTR_GET_DEFAULT(domains_, "") };
    inline GenerateDynamicDictRequest& setDomains(string domains) { DARABONBA_PTR_SET_VALUE(domains_, domains) };


    // names Field Functions 
    bool hasNames() const { return this->names_ != nullptr;};
    void deleteNames() { this->names_ = nullptr;};
    inline string names() const { DARABONBA_PTR_GET_DEFAULT(names_, "") };
    inline GenerateDynamicDictRequest& setNames(string names) { DARABONBA_PTR_SET_VALUE(names_, names) };


    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string sourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline GenerateDynamicDictRequest& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


  protected:
    // The keyword of the dictionary.
    std::shared_ptr<string> argKeywords_ = nullptr;
    // The domain name for custom weak passwords.
    std::shared_ptr<string> domains_ = nullptr;
    // The company name for custom weak passwords.
    std::shared_ptr<string> names_ = nullptr;
    // The source IP address of the request.
    std::shared_ptr<string> sourceIp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
