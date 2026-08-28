// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DOWNLOADAGENTSPECVIAOSSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DOWNLOADAGENTSPECVIAOSSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentCore20260804
{
namespace Models
{
  class DownloadAgentSpecViaOssRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DownloadAgentSpecViaOssRequest& obj) { 
      DARABONBA_PTR_TO_JSON(agentSpecVersion, agentSpecVersion_);
    };
    friend void from_json(const Darabonba::Json& j, DownloadAgentSpecViaOssRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(agentSpecVersion, agentSpecVersion_);
    };
    DownloadAgentSpecViaOssRequest() = default ;
    DownloadAgentSpecViaOssRequest(const DownloadAgentSpecViaOssRequest &) = default ;
    DownloadAgentSpecViaOssRequest(DownloadAgentSpecViaOssRequest &&) = default ;
    DownloadAgentSpecViaOssRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DownloadAgentSpecViaOssRequest() = default ;
    DownloadAgentSpecViaOssRequest& operator=(const DownloadAgentSpecViaOssRequest &) = default ;
    DownloadAgentSpecViaOssRequest& operator=(DownloadAgentSpecViaOssRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentSpecVersion_ == nullptr; };
    // agentSpecVersion Field Functions 
    bool hasAgentSpecVersion() const { return this->agentSpecVersion_ != nullptr;};
    void deleteAgentSpecVersion() { this->agentSpecVersion_ = nullptr;};
    inline string getAgentSpecVersion() const { DARABONBA_PTR_GET_DEFAULT(agentSpecVersion_, "") };
    inline DownloadAgentSpecViaOssRequest& setAgentSpecVersion(string agentSpecVersion) { DARABONBA_PTR_SET_VALUE(agentSpecVersion_, agentSpecVersion) };


  protected:
    // The version number. If not specified, the version corresponding to the latest label is downloaded.
    shared_ptr<string> agentSpecVersion_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentCore20260804
#endif
