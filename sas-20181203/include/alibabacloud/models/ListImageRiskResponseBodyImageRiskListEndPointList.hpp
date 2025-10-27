// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTIMAGERISKRESPONSEBODYIMAGERISKLISTENDPOINTLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTIMAGERISKRESPONSEBODYIMAGERISKLISTENDPOINTLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListImageRiskResponseBodyImageRiskListEndPointList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListImageRiskResponseBodyImageRiskListEndPointList& obj) { 
      DARABONBA_PTR_TO_JSON(Domains, domains_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListImageRiskResponseBodyImageRiskListEndPointList& obj) { 
      DARABONBA_PTR_FROM_JSON(Domains, domains_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ListImageRiskResponseBodyImageRiskListEndPointList() = default ;
    ListImageRiskResponseBodyImageRiskListEndPointList(const ListImageRiskResponseBodyImageRiskListEndPointList &) = default ;
    ListImageRiskResponseBodyImageRiskListEndPointList(ListImageRiskResponseBodyImageRiskListEndPointList &&) = default ;
    ListImageRiskResponseBodyImageRiskListEndPointList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListImageRiskResponseBodyImageRiskListEndPointList() = default ;
    ListImageRiskResponseBodyImageRiskListEndPointList& operator=(const ListImageRiskResponseBodyImageRiskListEndPointList &) = default ;
    ListImageRiskResponseBodyImageRiskListEndPointList& operator=(ListImageRiskResponseBodyImageRiskListEndPointList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domains_ == nullptr
        && return this->type_ == nullptr; };
    // domains Field Functions 
    bool hasDomains() const { return this->domains_ != nullptr;};
    void deleteDomains() { this->domains_ = nullptr;};
    inline const vector<string> & domains() const { DARABONBA_PTR_GET_CONST(domains_, vector<string>) };
    inline vector<string> domains() { DARABONBA_PTR_GET(domains_, vector<string>) };
    inline ListImageRiskResponseBodyImageRiskListEndPointList& setDomains(const vector<string> & domains) { DARABONBA_PTR_SET_VALUE(domains_, domains) };
    inline ListImageRiskResponseBodyImageRiskListEndPointList& setDomains(vector<string> && domains) { DARABONBA_PTR_SET_RVALUE(domains_, domains) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListImageRiskResponseBodyImageRiskListEndPointList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // An array that consists the details of the domain name in the endpoint.
    std::shared_ptr<vector<string>> domains_ = nullptr;
    // The type of the domain name in the endpoint. Valid values:
    // 
    // *   **internet**: Internet
    // *   **intranet**: internal network
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
