// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CORPAUTHLINKINFOQUERYRESPONSEBODYMODULE_HPP_
#define ALIBABACLOUD_MODELS_CORPAUTHLINKINFOQUERYRESPONSEBODYMODULE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CorpAuthLinkInfoQueryResponseBodyModuleLinkCorps.hpp>
#include <alibabacloud/models/CorpAuthLinkInfoQueryResponseBodyModuleOrgCorp.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class CorpAuthLinkInfoQueryResponseBodyModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CorpAuthLinkInfoQueryResponseBodyModule& obj) { 
      DARABONBA_PTR_TO_JSON(link_corps, linkCorps_);
      DARABONBA_PTR_TO_JSON(org_corp, orgCorp_);
    };
    friend void from_json(const Darabonba::Json& j, CorpAuthLinkInfoQueryResponseBodyModule& obj) { 
      DARABONBA_PTR_FROM_JSON(link_corps, linkCorps_);
      DARABONBA_PTR_FROM_JSON(org_corp, orgCorp_);
    };
    CorpAuthLinkInfoQueryResponseBodyModule() = default ;
    CorpAuthLinkInfoQueryResponseBodyModule(const CorpAuthLinkInfoQueryResponseBodyModule &) = default ;
    CorpAuthLinkInfoQueryResponseBodyModule(CorpAuthLinkInfoQueryResponseBodyModule &&) = default ;
    CorpAuthLinkInfoQueryResponseBodyModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CorpAuthLinkInfoQueryResponseBodyModule() = default ;
    CorpAuthLinkInfoQueryResponseBodyModule& operator=(const CorpAuthLinkInfoQueryResponseBodyModule &) = default ;
    CorpAuthLinkInfoQueryResponseBodyModule& operator=(CorpAuthLinkInfoQueryResponseBodyModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->linkCorps_ != nullptr
        && this->orgCorp_ != nullptr; };
    // linkCorps Field Functions 
    bool hasLinkCorps() const { return this->linkCorps_ != nullptr;};
    void deleteLinkCorps() { this->linkCorps_ = nullptr;};
    inline const vector<Models::CorpAuthLinkInfoQueryResponseBodyModuleLinkCorps> & linkCorps() const { DARABONBA_PTR_GET_CONST(linkCorps_, vector<Models::CorpAuthLinkInfoQueryResponseBodyModuleLinkCorps>) };
    inline vector<Models::CorpAuthLinkInfoQueryResponseBodyModuleLinkCorps> linkCorps() { DARABONBA_PTR_GET(linkCorps_, vector<Models::CorpAuthLinkInfoQueryResponseBodyModuleLinkCorps>) };
    inline CorpAuthLinkInfoQueryResponseBodyModule& setLinkCorps(const vector<Models::CorpAuthLinkInfoQueryResponseBodyModuleLinkCorps> & linkCorps) { DARABONBA_PTR_SET_VALUE(linkCorps_, linkCorps) };
    inline CorpAuthLinkInfoQueryResponseBodyModule& setLinkCorps(vector<Models::CorpAuthLinkInfoQueryResponseBodyModuleLinkCorps> && linkCorps) { DARABONBA_PTR_SET_RVALUE(linkCorps_, linkCorps) };


    // orgCorp Field Functions 
    bool hasOrgCorp() const { return this->orgCorp_ != nullptr;};
    void deleteOrgCorp() { this->orgCorp_ = nullptr;};
    inline const Models::CorpAuthLinkInfoQueryResponseBodyModuleOrgCorp & orgCorp() const { DARABONBA_PTR_GET_CONST(orgCorp_, Models::CorpAuthLinkInfoQueryResponseBodyModuleOrgCorp) };
    inline Models::CorpAuthLinkInfoQueryResponseBodyModuleOrgCorp orgCorp() { DARABONBA_PTR_GET(orgCorp_, Models::CorpAuthLinkInfoQueryResponseBodyModuleOrgCorp) };
    inline CorpAuthLinkInfoQueryResponseBodyModule& setOrgCorp(const Models::CorpAuthLinkInfoQueryResponseBodyModuleOrgCorp & orgCorp) { DARABONBA_PTR_SET_VALUE(orgCorp_, orgCorp) };
    inline CorpAuthLinkInfoQueryResponseBodyModule& setOrgCorp(Models::CorpAuthLinkInfoQueryResponseBodyModuleOrgCorp && orgCorp) { DARABONBA_PTR_SET_RVALUE(orgCorp_, orgCorp) };


  protected:
    std::shared_ptr<vector<Models::CorpAuthLinkInfoQueryResponseBodyModuleLinkCorps>> linkCorps_ = nullptr;
    std::shared_ptr<Models::CorpAuthLinkInfoQueryResponseBodyModuleOrgCorp> orgCorp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
