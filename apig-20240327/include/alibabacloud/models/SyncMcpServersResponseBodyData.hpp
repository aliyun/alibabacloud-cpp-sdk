// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SYNCMCPSERVERSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_SYNCMCPSERVERSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SyncMCPServersResponseBodyDataFailedMcpServers.hpp>
#include <alibabacloud/models/SyncMCPServersResponseBodyDataSucceedMcpServers.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class SyncMCPServersResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SyncMCPServersResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(failedMcpServers, failedMcpServers_);
      DARABONBA_PTR_TO_JSON(succeedMcpServers, succeedMcpServers_);
    };
    friend void from_json(const Darabonba::Json& j, SyncMCPServersResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(failedMcpServers, failedMcpServers_);
      DARABONBA_PTR_FROM_JSON(succeedMcpServers, succeedMcpServers_);
    };
    SyncMCPServersResponseBodyData() = default ;
    SyncMCPServersResponseBodyData(const SyncMCPServersResponseBodyData &) = default ;
    SyncMCPServersResponseBodyData(SyncMCPServersResponseBodyData &&) = default ;
    SyncMCPServersResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SyncMCPServersResponseBodyData() = default ;
    SyncMCPServersResponseBodyData& operator=(const SyncMCPServersResponseBodyData &) = default ;
    SyncMCPServersResponseBodyData& operator=(SyncMCPServersResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->failedMcpServers_ == nullptr
        && return this->succeedMcpServers_ == nullptr; };
    // failedMcpServers Field Functions 
    bool hasFailedMcpServers() const { return this->failedMcpServers_ != nullptr;};
    void deleteFailedMcpServers() { this->failedMcpServers_ = nullptr;};
    inline const vector<Models::SyncMCPServersResponseBodyDataFailedMcpServers> & failedMcpServers() const { DARABONBA_PTR_GET_CONST(failedMcpServers_, vector<Models::SyncMCPServersResponseBodyDataFailedMcpServers>) };
    inline vector<Models::SyncMCPServersResponseBodyDataFailedMcpServers> failedMcpServers() { DARABONBA_PTR_GET(failedMcpServers_, vector<Models::SyncMCPServersResponseBodyDataFailedMcpServers>) };
    inline SyncMCPServersResponseBodyData& setFailedMcpServers(const vector<Models::SyncMCPServersResponseBodyDataFailedMcpServers> & failedMcpServers) { DARABONBA_PTR_SET_VALUE(failedMcpServers_, failedMcpServers) };
    inline SyncMCPServersResponseBodyData& setFailedMcpServers(vector<Models::SyncMCPServersResponseBodyDataFailedMcpServers> && failedMcpServers) { DARABONBA_PTR_SET_RVALUE(failedMcpServers_, failedMcpServers) };


    // succeedMcpServers Field Functions 
    bool hasSucceedMcpServers() const { return this->succeedMcpServers_ != nullptr;};
    void deleteSucceedMcpServers() { this->succeedMcpServers_ = nullptr;};
    inline const vector<Models::SyncMCPServersResponseBodyDataSucceedMcpServers> & succeedMcpServers() const { DARABONBA_PTR_GET_CONST(succeedMcpServers_, vector<Models::SyncMCPServersResponseBodyDataSucceedMcpServers>) };
    inline vector<Models::SyncMCPServersResponseBodyDataSucceedMcpServers> succeedMcpServers() { DARABONBA_PTR_GET(succeedMcpServers_, vector<Models::SyncMCPServersResponseBodyDataSucceedMcpServers>) };
    inline SyncMCPServersResponseBodyData& setSucceedMcpServers(const vector<Models::SyncMCPServersResponseBodyDataSucceedMcpServers> & succeedMcpServers) { DARABONBA_PTR_SET_VALUE(succeedMcpServers_, succeedMcpServers) };
    inline SyncMCPServersResponseBodyData& setSucceedMcpServers(vector<Models::SyncMCPServersResponseBodyDataSucceedMcpServers> && succeedMcpServers) { DARABONBA_PTR_SET_RVALUE(succeedMcpServers_, succeedMcpServers) };


  protected:
    std::shared_ptr<vector<Models::SyncMCPServersResponseBodyDataFailedMcpServers>> failedMcpServers_ = nullptr;
    std::shared_ptr<vector<Models::SyncMCPServersResponseBodyDataSucceedMcpServers>> succeedMcpServers_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
