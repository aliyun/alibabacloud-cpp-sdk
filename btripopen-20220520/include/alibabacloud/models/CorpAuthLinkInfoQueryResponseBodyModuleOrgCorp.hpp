// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CORPAUTHLINKINFOQUERYRESPONSEBODYMODULEORGCORP_HPP_
#define ALIBABACLOUD_MODELS_CORPAUTHLINKINFOQUERYRESPONSEBODYMODULEORGCORP_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class CorpAuthLinkInfoQueryResponseBodyModuleOrgCorp : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CorpAuthLinkInfoQueryResponseBodyModuleOrgCorp& obj) { 
      DARABONBA_PTR_TO_JSON(corp_name, corpName_);
      DARABONBA_PTR_TO_JSON(open_corp_id, openCorpId_);
      DARABONBA_PTR_TO_JSON(true_corp_id, trueCorpId_);
    };
    friend void from_json(const Darabonba::Json& j, CorpAuthLinkInfoQueryResponseBodyModuleOrgCorp& obj) { 
      DARABONBA_PTR_FROM_JSON(corp_name, corpName_);
      DARABONBA_PTR_FROM_JSON(open_corp_id, openCorpId_);
      DARABONBA_PTR_FROM_JSON(true_corp_id, trueCorpId_);
    };
    CorpAuthLinkInfoQueryResponseBodyModuleOrgCorp() = default ;
    CorpAuthLinkInfoQueryResponseBodyModuleOrgCorp(const CorpAuthLinkInfoQueryResponseBodyModuleOrgCorp &) = default ;
    CorpAuthLinkInfoQueryResponseBodyModuleOrgCorp(CorpAuthLinkInfoQueryResponseBodyModuleOrgCorp &&) = default ;
    CorpAuthLinkInfoQueryResponseBodyModuleOrgCorp(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CorpAuthLinkInfoQueryResponseBodyModuleOrgCorp() = default ;
    CorpAuthLinkInfoQueryResponseBodyModuleOrgCorp& operator=(const CorpAuthLinkInfoQueryResponseBodyModuleOrgCorp &) = default ;
    CorpAuthLinkInfoQueryResponseBodyModuleOrgCorp& operator=(CorpAuthLinkInfoQueryResponseBodyModuleOrgCorp &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->corpName_ != nullptr
        && this->openCorpId_ != nullptr && this->trueCorpId_ != nullptr; };
    // corpName Field Functions 
    bool hasCorpName() const { return this->corpName_ != nullptr;};
    void deleteCorpName() { this->corpName_ = nullptr;};
    inline string corpName() const { DARABONBA_PTR_GET_DEFAULT(corpName_, "") };
    inline CorpAuthLinkInfoQueryResponseBodyModuleOrgCorp& setCorpName(string corpName) { DARABONBA_PTR_SET_VALUE(corpName_, corpName) };


    // openCorpId Field Functions 
    bool hasOpenCorpId() const { return this->openCorpId_ != nullptr;};
    void deleteOpenCorpId() { this->openCorpId_ = nullptr;};
    inline string openCorpId() const { DARABONBA_PTR_GET_DEFAULT(openCorpId_, "") };
    inline CorpAuthLinkInfoQueryResponseBodyModuleOrgCorp& setOpenCorpId(string openCorpId) { DARABONBA_PTR_SET_VALUE(openCorpId_, openCorpId) };


    // trueCorpId Field Functions 
    bool hasTrueCorpId() const { return this->trueCorpId_ != nullptr;};
    void deleteTrueCorpId() { this->trueCorpId_ = nullptr;};
    inline string trueCorpId() const { DARABONBA_PTR_GET_DEFAULT(trueCorpId_, "") };
    inline CorpAuthLinkInfoQueryResponseBodyModuleOrgCorp& setTrueCorpId(string trueCorpId) { DARABONBA_PTR_SET_VALUE(trueCorpId_, trueCorpId) };


  protected:
    std::shared_ptr<string> corpName_ = nullptr;
    std::shared_ptr<string> openCorpId_ = nullptr;
    std::shared_ptr<string> trueCorpId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
