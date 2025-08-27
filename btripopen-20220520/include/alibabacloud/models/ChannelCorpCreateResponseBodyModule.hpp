// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHANNELCORPCREATERESPONSEBODYMODULE_HPP_
#define ALIBABACLOUD_MODELS_CHANNELCORPCREATERESPONSEBODYMODULE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class ChannelCorpCreateResponseBodyModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChannelCorpCreateResponseBodyModule& obj) { 
      DARABONBA_PTR_TO_JSON(administrator_name, administratorName_);
      DARABONBA_PTR_TO_JSON(administrator_phone, administratorPhone_);
      DARABONBA_PTR_TO_JSON(corp_id, corpId_);
      DARABONBA_PTR_TO_JSON(corp_name, corpName_);
      DARABONBA_PTR_TO_JSON(open_agent_id, openAgentId_);
      DARABONBA_PTR_TO_JSON(user_id, userId_);
    };
    friend void from_json(const Darabonba::Json& j, ChannelCorpCreateResponseBodyModule& obj) { 
      DARABONBA_PTR_FROM_JSON(administrator_name, administratorName_);
      DARABONBA_PTR_FROM_JSON(administrator_phone, administratorPhone_);
      DARABONBA_PTR_FROM_JSON(corp_id, corpId_);
      DARABONBA_PTR_FROM_JSON(corp_name, corpName_);
      DARABONBA_PTR_FROM_JSON(open_agent_id, openAgentId_);
      DARABONBA_PTR_FROM_JSON(user_id, userId_);
    };
    ChannelCorpCreateResponseBodyModule() = default ;
    ChannelCorpCreateResponseBodyModule(const ChannelCorpCreateResponseBodyModule &) = default ;
    ChannelCorpCreateResponseBodyModule(ChannelCorpCreateResponseBodyModule &&) = default ;
    ChannelCorpCreateResponseBodyModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChannelCorpCreateResponseBodyModule() = default ;
    ChannelCorpCreateResponseBodyModule& operator=(const ChannelCorpCreateResponseBodyModule &) = default ;
    ChannelCorpCreateResponseBodyModule& operator=(ChannelCorpCreateResponseBodyModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->administratorName_ != nullptr
        && this->administratorPhone_ != nullptr && this->corpId_ != nullptr && this->corpName_ != nullptr && this->openAgentId_ != nullptr && this->userId_ != nullptr; };
    // administratorName Field Functions 
    bool hasAdministratorName() const { return this->administratorName_ != nullptr;};
    void deleteAdministratorName() { this->administratorName_ = nullptr;};
    inline string administratorName() const { DARABONBA_PTR_GET_DEFAULT(administratorName_, "") };
    inline ChannelCorpCreateResponseBodyModule& setAdministratorName(string administratorName) { DARABONBA_PTR_SET_VALUE(administratorName_, administratorName) };


    // administratorPhone Field Functions 
    bool hasAdministratorPhone() const { return this->administratorPhone_ != nullptr;};
    void deleteAdministratorPhone() { this->administratorPhone_ = nullptr;};
    inline string administratorPhone() const { DARABONBA_PTR_GET_DEFAULT(administratorPhone_, "") };
    inline ChannelCorpCreateResponseBodyModule& setAdministratorPhone(string administratorPhone) { DARABONBA_PTR_SET_VALUE(administratorPhone_, administratorPhone) };


    // corpId Field Functions 
    bool hasCorpId() const { return this->corpId_ != nullptr;};
    void deleteCorpId() { this->corpId_ = nullptr;};
    inline string corpId() const { DARABONBA_PTR_GET_DEFAULT(corpId_, "") };
    inline ChannelCorpCreateResponseBodyModule& setCorpId(string corpId) { DARABONBA_PTR_SET_VALUE(corpId_, corpId) };


    // corpName Field Functions 
    bool hasCorpName() const { return this->corpName_ != nullptr;};
    void deleteCorpName() { this->corpName_ = nullptr;};
    inline string corpName() const { DARABONBA_PTR_GET_DEFAULT(corpName_, "") };
    inline ChannelCorpCreateResponseBodyModule& setCorpName(string corpName) { DARABONBA_PTR_SET_VALUE(corpName_, corpName) };


    // openAgentId Field Functions 
    bool hasOpenAgentId() const { return this->openAgentId_ != nullptr;};
    void deleteOpenAgentId() { this->openAgentId_ = nullptr;};
    inline string openAgentId() const { DARABONBA_PTR_GET_DEFAULT(openAgentId_, "") };
    inline ChannelCorpCreateResponseBodyModule& setOpenAgentId(string openAgentId) { DARABONBA_PTR_SET_VALUE(openAgentId_, openAgentId) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline ChannelCorpCreateResponseBodyModule& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    std::shared_ptr<string> administratorName_ = nullptr;
    std::shared_ptr<string> administratorPhone_ = nullptr;
    std::shared_ptr<string> corpId_ = nullptr;
    std::shared_ptr<string> corpName_ = nullptr;
    std::shared_ptr<string> openAgentId_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
