// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REMOVETERMINALSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REMOVETERMINALSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class RemoveTerminalsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RemoveTerminalsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(ChannelId, channelId_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(TerminalIds, terminalIds_);
    };
    friend void from_json(const Darabonba::Json& j, RemoveTerminalsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(ChannelId, channelId_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(TerminalIds, terminalIds_);
    };
    RemoveTerminalsRequest() = default ;
    RemoveTerminalsRequest(const RemoveTerminalsRequest &) = default ;
    RemoveTerminalsRequest(RemoveTerminalsRequest &&) = default ;
    RemoveTerminalsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RemoveTerminalsRequest() = default ;
    RemoveTerminalsRequest& operator=(const RemoveTerminalsRequest &) = default ;
    RemoveTerminalsRequest& operator=(RemoveTerminalsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appId_ != nullptr
        && this->channelId_ != nullptr && this->ownerId_ != nullptr && this->terminalIds_ != nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline RemoveTerminalsRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // channelId Field Functions 
    bool hasChannelId() const { return this->channelId_ != nullptr;};
    void deleteChannelId() { this->channelId_ = nullptr;};
    inline string channelId() const { DARABONBA_PTR_GET_DEFAULT(channelId_, "") };
    inline RemoveTerminalsRequest& setChannelId(string channelId) { DARABONBA_PTR_SET_VALUE(channelId_, channelId) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline RemoveTerminalsRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // terminalIds Field Functions 
    bool hasTerminalIds() const { return this->terminalIds_ != nullptr;};
    void deleteTerminalIds() { this->terminalIds_ = nullptr;};
    inline const vector<string> & terminalIds() const { DARABONBA_PTR_GET_CONST(terminalIds_, vector<string>) };
    inline vector<string> terminalIds() { DARABONBA_PTR_GET(terminalIds_, vector<string>) };
    inline RemoveTerminalsRequest& setTerminalIds(const vector<string> & terminalIds) { DARABONBA_PTR_SET_VALUE(terminalIds_, terminalIds) };
    inline RemoveTerminalsRequest& setTerminalIds(vector<string> && terminalIds) { DARABONBA_PTR_SET_RVALUE(terminalIds_, terminalIds) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> channelId_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<string>> terminalIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
