// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPOLARCLAWMCPSERVERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPOLARCLAWMCPSERVERSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribePolarClawMCPServersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePolarClawMCPServersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(ServerList, serverList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePolarClawMCPServersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(ServerList, serverList_);
    };
    DescribePolarClawMCPServersRequest() = default ;
    DescribePolarClawMCPServersRequest(const DescribePolarClawMCPServersRequest &) = default ;
    DescribePolarClawMCPServersRequest(DescribePolarClawMCPServersRequest &&) = default ;
    DescribePolarClawMCPServersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePolarClawMCPServersRequest() = default ;
    DescribePolarClawMCPServersRequest& operator=(const DescribePolarClawMCPServersRequest &) = default ;
    DescribePolarClawMCPServersRequest& operator=(DescribePolarClawMCPServersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationId_ == nullptr
        && this->serverList_ == nullptr; };
    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline DescribePolarClawMCPServersRequest& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // serverList Field Functions 
    bool hasServerList() const { return this->serverList_ != nullptr;};
    void deleteServerList() { this->serverList_ = nullptr;};
    inline const vector<string> & getServerList() const { DARABONBA_PTR_GET_CONST(serverList_, vector<string>) };
    inline vector<string> getServerList() { DARABONBA_PTR_GET(serverList_, vector<string>) };
    inline DescribePolarClawMCPServersRequest& setServerList(const vector<string> & serverList) { DARABONBA_PTR_SET_VALUE(serverList_, serverList) };
    inline DescribePolarClawMCPServersRequest& setServerList(vector<string> && serverList) { DARABONBA_PTR_SET_RVALUE(serverList_, serverList) };


  protected:
    // This parameter is required.
    shared_ptr<string> applicationId_ {};
    shared_ptr<vector<string>> serverList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
