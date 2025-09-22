// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FINDGUESTTICKETRECORDRESPONSEBODYDATACHANNELLEVELINFO_HPP_
#define ALIBABACLOUD_MODELS_FINDGUESTTICKETRECORDRESPONSEBODYDATACHANNELLEVELINFO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/FindGuestTicketRecordResponseBodyDataChannelLevelInfoLevelOneOwner.hpp>
#include <alibabacloud/models/FindGuestTicketRecordResponseBodyDataChannelLevelInfoLevelThreeOwner.hpp>
#include <alibabacloud/models/FindGuestTicketRecordResponseBodyDataChannelLevelInfoLevelTwoOwner.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MarketingEvent20210101
{
namespace Models
{
  class FindGuestTicketRecordResponseBodyDataChannelLevelInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FindGuestTicketRecordResponseBodyDataChannelLevelInfo& obj) { 
      DARABONBA_PTR_TO_JSON(ChannelId, channelId_);
      DARABONBA_PTR_TO_JSON(ChannelName, channelName_);
      DARABONBA_PTR_TO_JSON(LevelOneChannelName, levelOneChannelName_);
      DARABONBA_PTR_TO_JSON(LevelOneOwner, levelOneOwner_);
      DARABONBA_PTR_TO_JSON(LevelThreeChannelName, levelThreeChannelName_);
      DARABONBA_PTR_TO_JSON(LevelThreeOwner, levelThreeOwner_);
      DARABONBA_PTR_TO_JSON(LevelTwoChannelName, levelTwoChannelName_);
      DARABONBA_PTR_TO_JSON(LevelTwoOwner, levelTwoOwner_);
    };
    friend void from_json(const Darabonba::Json& j, FindGuestTicketRecordResponseBodyDataChannelLevelInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(ChannelId, channelId_);
      DARABONBA_PTR_FROM_JSON(ChannelName, channelName_);
      DARABONBA_PTR_FROM_JSON(LevelOneChannelName, levelOneChannelName_);
      DARABONBA_PTR_FROM_JSON(LevelOneOwner, levelOneOwner_);
      DARABONBA_PTR_FROM_JSON(LevelThreeChannelName, levelThreeChannelName_);
      DARABONBA_PTR_FROM_JSON(LevelThreeOwner, levelThreeOwner_);
      DARABONBA_PTR_FROM_JSON(LevelTwoChannelName, levelTwoChannelName_);
      DARABONBA_PTR_FROM_JSON(LevelTwoOwner, levelTwoOwner_);
    };
    FindGuestTicketRecordResponseBodyDataChannelLevelInfo() = default ;
    FindGuestTicketRecordResponseBodyDataChannelLevelInfo(const FindGuestTicketRecordResponseBodyDataChannelLevelInfo &) = default ;
    FindGuestTicketRecordResponseBodyDataChannelLevelInfo(FindGuestTicketRecordResponseBodyDataChannelLevelInfo &&) = default ;
    FindGuestTicketRecordResponseBodyDataChannelLevelInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FindGuestTicketRecordResponseBodyDataChannelLevelInfo() = default ;
    FindGuestTicketRecordResponseBodyDataChannelLevelInfo& operator=(const FindGuestTicketRecordResponseBodyDataChannelLevelInfo &) = default ;
    FindGuestTicketRecordResponseBodyDataChannelLevelInfo& operator=(FindGuestTicketRecordResponseBodyDataChannelLevelInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->channelId_ != nullptr
        && this->channelName_ != nullptr && this->levelOneChannelName_ != nullptr && this->levelOneOwner_ != nullptr && this->levelThreeChannelName_ != nullptr && this->levelThreeOwner_ != nullptr
        && this->levelTwoChannelName_ != nullptr && this->levelTwoOwner_ != nullptr; };
    // channelId Field Functions 
    bool hasChannelId() const { return this->channelId_ != nullptr;};
    void deleteChannelId() { this->channelId_ = nullptr;};
    inline int64_t channelId() const { DARABONBA_PTR_GET_DEFAULT(channelId_, 0L) };
    inline FindGuestTicketRecordResponseBodyDataChannelLevelInfo& setChannelId(int64_t channelId) { DARABONBA_PTR_SET_VALUE(channelId_, channelId) };


    // channelName Field Functions 
    bool hasChannelName() const { return this->channelName_ != nullptr;};
    void deleteChannelName() { this->channelName_ = nullptr;};
    inline string channelName() const { DARABONBA_PTR_GET_DEFAULT(channelName_, "") };
    inline FindGuestTicketRecordResponseBodyDataChannelLevelInfo& setChannelName(string channelName) { DARABONBA_PTR_SET_VALUE(channelName_, channelName) };


    // levelOneChannelName Field Functions 
    bool hasLevelOneChannelName() const { return this->levelOneChannelName_ != nullptr;};
    void deleteLevelOneChannelName() { this->levelOneChannelName_ = nullptr;};
    inline string levelOneChannelName() const { DARABONBA_PTR_GET_DEFAULT(levelOneChannelName_, "") };
    inline FindGuestTicketRecordResponseBodyDataChannelLevelInfo& setLevelOneChannelName(string levelOneChannelName) { DARABONBA_PTR_SET_VALUE(levelOneChannelName_, levelOneChannelName) };


    // levelOneOwner Field Functions 
    bool hasLevelOneOwner() const { return this->levelOneOwner_ != nullptr;};
    void deleteLevelOneOwner() { this->levelOneOwner_ = nullptr;};
    inline const vector<Models::FindGuestTicketRecordResponseBodyDataChannelLevelInfoLevelOneOwner> & levelOneOwner() const { DARABONBA_PTR_GET_CONST(levelOneOwner_, vector<Models::FindGuestTicketRecordResponseBodyDataChannelLevelInfoLevelOneOwner>) };
    inline vector<Models::FindGuestTicketRecordResponseBodyDataChannelLevelInfoLevelOneOwner> levelOneOwner() { DARABONBA_PTR_GET(levelOneOwner_, vector<Models::FindGuestTicketRecordResponseBodyDataChannelLevelInfoLevelOneOwner>) };
    inline FindGuestTicketRecordResponseBodyDataChannelLevelInfo& setLevelOneOwner(const vector<Models::FindGuestTicketRecordResponseBodyDataChannelLevelInfoLevelOneOwner> & levelOneOwner) { DARABONBA_PTR_SET_VALUE(levelOneOwner_, levelOneOwner) };
    inline FindGuestTicketRecordResponseBodyDataChannelLevelInfo& setLevelOneOwner(vector<Models::FindGuestTicketRecordResponseBodyDataChannelLevelInfoLevelOneOwner> && levelOneOwner) { DARABONBA_PTR_SET_RVALUE(levelOneOwner_, levelOneOwner) };


    // levelThreeChannelName Field Functions 
    bool hasLevelThreeChannelName() const { return this->levelThreeChannelName_ != nullptr;};
    void deleteLevelThreeChannelName() { this->levelThreeChannelName_ = nullptr;};
    inline string levelThreeChannelName() const { DARABONBA_PTR_GET_DEFAULT(levelThreeChannelName_, "") };
    inline FindGuestTicketRecordResponseBodyDataChannelLevelInfo& setLevelThreeChannelName(string levelThreeChannelName) { DARABONBA_PTR_SET_VALUE(levelThreeChannelName_, levelThreeChannelName) };


    // levelThreeOwner Field Functions 
    bool hasLevelThreeOwner() const { return this->levelThreeOwner_ != nullptr;};
    void deleteLevelThreeOwner() { this->levelThreeOwner_ = nullptr;};
    inline const vector<Models::FindGuestTicketRecordResponseBodyDataChannelLevelInfoLevelThreeOwner> & levelThreeOwner() const { DARABONBA_PTR_GET_CONST(levelThreeOwner_, vector<Models::FindGuestTicketRecordResponseBodyDataChannelLevelInfoLevelThreeOwner>) };
    inline vector<Models::FindGuestTicketRecordResponseBodyDataChannelLevelInfoLevelThreeOwner> levelThreeOwner() { DARABONBA_PTR_GET(levelThreeOwner_, vector<Models::FindGuestTicketRecordResponseBodyDataChannelLevelInfoLevelThreeOwner>) };
    inline FindGuestTicketRecordResponseBodyDataChannelLevelInfo& setLevelThreeOwner(const vector<Models::FindGuestTicketRecordResponseBodyDataChannelLevelInfoLevelThreeOwner> & levelThreeOwner) { DARABONBA_PTR_SET_VALUE(levelThreeOwner_, levelThreeOwner) };
    inline FindGuestTicketRecordResponseBodyDataChannelLevelInfo& setLevelThreeOwner(vector<Models::FindGuestTicketRecordResponseBodyDataChannelLevelInfoLevelThreeOwner> && levelThreeOwner) { DARABONBA_PTR_SET_RVALUE(levelThreeOwner_, levelThreeOwner) };


    // levelTwoChannelName Field Functions 
    bool hasLevelTwoChannelName() const { return this->levelTwoChannelName_ != nullptr;};
    void deleteLevelTwoChannelName() { this->levelTwoChannelName_ = nullptr;};
    inline string levelTwoChannelName() const { DARABONBA_PTR_GET_DEFAULT(levelTwoChannelName_, "") };
    inline FindGuestTicketRecordResponseBodyDataChannelLevelInfo& setLevelTwoChannelName(string levelTwoChannelName) { DARABONBA_PTR_SET_VALUE(levelTwoChannelName_, levelTwoChannelName) };


    // levelTwoOwner Field Functions 
    bool hasLevelTwoOwner() const { return this->levelTwoOwner_ != nullptr;};
    void deleteLevelTwoOwner() { this->levelTwoOwner_ = nullptr;};
    inline const vector<Models::FindGuestTicketRecordResponseBodyDataChannelLevelInfoLevelTwoOwner> & levelTwoOwner() const { DARABONBA_PTR_GET_CONST(levelTwoOwner_, vector<Models::FindGuestTicketRecordResponseBodyDataChannelLevelInfoLevelTwoOwner>) };
    inline vector<Models::FindGuestTicketRecordResponseBodyDataChannelLevelInfoLevelTwoOwner> levelTwoOwner() { DARABONBA_PTR_GET(levelTwoOwner_, vector<Models::FindGuestTicketRecordResponseBodyDataChannelLevelInfoLevelTwoOwner>) };
    inline FindGuestTicketRecordResponseBodyDataChannelLevelInfo& setLevelTwoOwner(const vector<Models::FindGuestTicketRecordResponseBodyDataChannelLevelInfoLevelTwoOwner> & levelTwoOwner) { DARABONBA_PTR_SET_VALUE(levelTwoOwner_, levelTwoOwner) };
    inline FindGuestTicketRecordResponseBodyDataChannelLevelInfo& setLevelTwoOwner(vector<Models::FindGuestTicketRecordResponseBodyDataChannelLevelInfoLevelTwoOwner> && levelTwoOwner) { DARABONBA_PTR_SET_RVALUE(levelTwoOwner_, levelTwoOwner) };


  protected:
    std::shared_ptr<int64_t> channelId_ = nullptr;
    std::shared_ptr<string> channelName_ = nullptr;
    std::shared_ptr<string> levelOneChannelName_ = nullptr;
    std::shared_ptr<vector<Models::FindGuestTicketRecordResponseBodyDataChannelLevelInfoLevelOneOwner>> levelOneOwner_ = nullptr;
    std::shared_ptr<string> levelThreeChannelName_ = nullptr;
    std::shared_ptr<vector<Models::FindGuestTicketRecordResponseBodyDataChannelLevelInfoLevelThreeOwner>> levelThreeOwner_ = nullptr;
    std::shared_ptr<string> levelTwoChannelName_ = nullptr;
    std::shared_ptr<vector<Models::FindGuestTicketRecordResponseBodyDataChannelLevelInfoLevelTwoOwner>> levelTwoOwner_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MarketingEvent20210101
#endif
