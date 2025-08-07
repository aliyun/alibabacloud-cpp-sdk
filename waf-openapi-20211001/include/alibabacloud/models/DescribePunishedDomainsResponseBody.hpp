// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPUNISHEDDOMAINSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPUNISHEDDOMAINSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribePunishedDomainsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePunishedDomainsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PunishedDomains, punishedDomains_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePunishedDomainsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PunishedDomains, punishedDomains_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribePunishedDomainsResponseBody() = default ;
    DescribePunishedDomainsResponseBody(const DescribePunishedDomainsResponseBody &) = default ;
    DescribePunishedDomainsResponseBody(DescribePunishedDomainsResponseBody &&) = default ;
    DescribePunishedDomainsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePunishedDomainsResponseBody() = default ;
    DescribePunishedDomainsResponseBody& operator=(const DescribePunishedDomainsResponseBody &) = default ;
    DescribePunishedDomainsResponseBody& operator=(DescribePunishedDomainsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->punishedDomains_ != nullptr
        && this->requestId_ != nullptr; };
    // punishedDomains Field Functions 
    bool hasPunishedDomains() const { return this->punishedDomains_ != nullptr;};
    void deletePunishedDomains() { this->punishedDomains_ = nullptr;};
    inline const vector<string> & punishedDomains() const { DARABONBA_PTR_GET_CONST(punishedDomains_, vector<string>) };
    inline vector<string> punishedDomains() { DARABONBA_PTR_GET(punishedDomains_, vector<string>) };
    inline DescribePunishedDomainsResponseBody& setPunishedDomains(const vector<string> & punishedDomains) { DARABONBA_PTR_SET_VALUE(punishedDomains_, punishedDomains) };
    inline DescribePunishedDomainsResponseBody& setPunishedDomains(vector<string> && punishedDomains) { DARABONBA_PTR_SET_RVALUE(punishedDomains_, punishedDomains) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePunishedDomainsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The domain names that are penalized for failing to obtain an ICP filing.
    std::shared_ptr<vector<string>> punishedDomains_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
