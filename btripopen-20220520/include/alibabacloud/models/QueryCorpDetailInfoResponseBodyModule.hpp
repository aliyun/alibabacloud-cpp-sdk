// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCORPDETAILINFORESPONSEBODYMODULE_HPP_
#define ALIBABACLOUD_MODELS_QUERYCORPDETAILINFORESPONSEBODYMODULE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class QueryCorpDetailInfoResponseBodyModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryCorpDetailInfoResponseBodyModule& obj) { 
      DARABONBA_PTR_TO_JSON(corp_id, corpId_);
      DARABONBA_PTR_TO_JSON(corp_name, corpName_);
      DARABONBA_PTR_TO_JSON(open_agent_id, openAgentId_);
      DARABONBA_PTR_TO_JSON(super_admin_name, superAdminName_);
      DARABONBA_PTR_TO_JSON(super_admin_phone, superAdminPhone_);
      DARABONBA_PTR_TO_JSON(user_id, userId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryCorpDetailInfoResponseBodyModule& obj) { 
      DARABONBA_PTR_FROM_JSON(corp_id, corpId_);
      DARABONBA_PTR_FROM_JSON(corp_name, corpName_);
      DARABONBA_PTR_FROM_JSON(open_agent_id, openAgentId_);
      DARABONBA_PTR_FROM_JSON(super_admin_name, superAdminName_);
      DARABONBA_PTR_FROM_JSON(super_admin_phone, superAdminPhone_);
      DARABONBA_PTR_FROM_JSON(user_id, userId_);
    };
    QueryCorpDetailInfoResponseBodyModule() = default ;
    QueryCorpDetailInfoResponseBodyModule(const QueryCorpDetailInfoResponseBodyModule &) = default ;
    QueryCorpDetailInfoResponseBodyModule(QueryCorpDetailInfoResponseBodyModule &&) = default ;
    QueryCorpDetailInfoResponseBodyModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryCorpDetailInfoResponseBodyModule() = default ;
    QueryCorpDetailInfoResponseBodyModule& operator=(const QueryCorpDetailInfoResponseBodyModule &) = default ;
    QueryCorpDetailInfoResponseBodyModule& operator=(QueryCorpDetailInfoResponseBodyModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->corpId_ != nullptr
        && this->corpName_ != nullptr && this->openAgentId_ != nullptr && this->superAdminName_ != nullptr && this->superAdminPhone_ != nullptr && this->userId_ != nullptr; };
    // corpId Field Functions 
    bool hasCorpId() const { return this->corpId_ != nullptr;};
    void deleteCorpId() { this->corpId_ = nullptr;};
    inline string corpId() const { DARABONBA_PTR_GET_DEFAULT(corpId_, "") };
    inline QueryCorpDetailInfoResponseBodyModule& setCorpId(string corpId) { DARABONBA_PTR_SET_VALUE(corpId_, corpId) };


    // corpName Field Functions 
    bool hasCorpName() const { return this->corpName_ != nullptr;};
    void deleteCorpName() { this->corpName_ = nullptr;};
    inline string corpName() const { DARABONBA_PTR_GET_DEFAULT(corpName_, "") };
    inline QueryCorpDetailInfoResponseBodyModule& setCorpName(string corpName) { DARABONBA_PTR_SET_VALUE(corpName_, corpName) };


    // openAgentId Field Functions 
    bool hasOpenAgentId() const { return this->openAgentId_ != nullptr;};
    void deleteOpenAgentId() { this->openAgentId_ = nullptr;};
    inline string openAgentId() const { DARABONBA_PTR_GET_DEFAULT(openAgentId_, "") };
    inline QueryCorpDetailInfoResponseBodyModule& setOpenAgentId(string openAgentId) { DARABONBA_PTR_SET_VALUE(openAgentId_, openAgentId) };


    // superAdminName Field Functions 
    bool hasSuperAdminName() const { return this->superAdminName_ != nullptr;};
    void deleteSuperAdminName() { this->superAdminName_ = nullptr;};
    inline string superAdminName() const { DARABONBA_PTR_GET_DEFAULT(superAdminName_, "") };
    inline QueryCorpDetailInfoResponseBodyModule& setSuperAdminName(string superAdminName) { DARABONBA_PTR_SET_VALUE(superAdminName_, superAdminName) };


    // superAdminPhone Field Functions 
    bool hasSuperAdminPhone() const { return this->superAdminPhone_ != nullptr;};
    void deleteSuperAdminPhone() { this->superAdminPhone_ = nullptr;};
    inline string superAdminPhone() const { DARABONBA_PTR_GET_DEFAULT(superAdminPhone_, "") };
    inline QueryCorpDetailInfoResponseBodyModule& setSuperAdminPhone(string superAdminPhone) { DARABONBA_PTR_SET_VALUE(superAdminPhone_, superAdminPhone) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline QueryCorpDetailInfoResponseBodyModule& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    std::shared_ptr<string> corpId_ = nullptr;
    std::shared_ptr<string> corpName_ = nullptr;
    std::shared_ptr<string> openAgentId_ = nullptr;
    std::shared_ptr<string> superAdminName_ = nullptr;
    std::shared_ptr<string> superAdminPhone_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
