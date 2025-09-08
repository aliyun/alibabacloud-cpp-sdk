// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTWEBCUSTOMDOMAINOUTPUT_HPP_
#define ALIBABACLOUD_MODELS_LISTWEBCUSTOMDOMAINOUTPUT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/WebCustomDomain.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class ListWebCustomDomainOutput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListWebCustomDomainOutput& obj) { 
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(WebCustomDomains, webCustomDomains_);
    };
    friend void from_json(const Darabonba::Json& j, ListWebCustomDomainOutput& obj) { 
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(WebCustomDomains, webCustomDomains_);
    };
    ListWebCustomDomainOutput() = default ;
    ListWebCustomDomainOutput(const ListWebCustomDomainOutput &) = default ;
    ListWebCustomDomainOutput(ListWebCustomDomainOutput &&) = default ;
    ListWebCustomDomainOutput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListWebCustomDomainOutput() = default ;
    ListWebCustomDomainOutput& operator=(const ListWebCustomDomainOutput &) = default ;
    ListWebCustomDomainOutput& operator=(ListWebCustomDomainOutput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->nextToken_ != nullptr
        && this->webCustomDomains_ != nullptr; };
    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListWebCustomDomainOutput& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // webCustomDomains Field Functions 
    bool hasWebCustomDomains() const { return this->webCustomDomains_ != nullptr;};
    void deleteWebCustomDomains() { this->webCustomDomains_ = nullptr;};
    inline const vector<WebCustomDomain> & webCustomDomains() const { DARABONBA_PTR_GET_CONST(webCustomDomains_, vector<WebCustomDomain>) };
    inline vector<WebCustomDomain> webCustomDomains() { DARABONBA_PTR_GET(webCustomDomains_, vector<WebCustomDomain>) };
    inline ListWebCustomDomainOutput& setWebCustomDomains(const vector<WebCustomDomain> & webCustomDomains) { DARABONBA_PTR_SET_VALUE(webCustomDomains_, webCustomDomains) };
    inline ListWebCustomDomainOutput& setWebCustomDomains(vector<WebCustomDomain> && webCustomDomains) { DARABONBA_PTR_SET_RVALUE(webCustomDomains_, webCustomDomains) };


  protected:
    std::shared_ptr<string> nextToken_ = nullptr;
    std::shared_ptr<vector<WebCustomDomain>> webCustomDomains_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
