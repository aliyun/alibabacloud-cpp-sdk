// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TESTDATASOURCECONNECTIVITYRESPONSEBODYCONNECTIVITY_HPP_
#define ALIBABACLOUD_MODELS_TESTDATASOURCECONNECTIVITYRESPONSEBODYCONNECTIVITY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/TestDataSourceConnectivityResponseBodyConnectivityDetailLogs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class TestDataSourceConnectivityResponseBodyConnectivity : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TestDataSourceConnectivityResponseBodyConnectivity& obj) { 
      DARABONBA_PTR_TO_JSON(ConnectMessage, connectMessage_);
      DARABONBA_PTR_TO_JSON(ConnectState, connectState_);
      DARABONBA_PTR_TO_JSON(DetailLogs, detailLogs_);
    };
    friend void from_json(const Darabonba::Json& j, TestDataSourceConnectivityResponseBodyConnectivity& obj) { 
      DARABONBA_PTR_FROM_JSON(ConnectMessage, connectMessage_);
      DARABONBA_PTR_FROM_JSON(ConnectState, connectState_);
      DARABONBA_PTR_FROM_JSON(DetailLogs, detailLogs_);
    };
    TestDataSourceConnectivityResponseBodyConnectivity() = default ;
    TestDataSourceConnectivityResponseBodyConnectivity(const TestDataSourceConnectivityResponseBodyConnectivity &) = default ;
    TestDataSourceConnectivityResponseBodyConnectivity(TestDataSourceConnectivityResponseBodyConnectivity &&) = default ;
    TestDataSourceConnectivityResponseBodyConnectivity(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TestDataSourceConnectivityResponseBodyConnectivity() = default ;
    TestDataSourceConnectivityResponseBodyConnectivity& operator=(const TestDataSourceConnectivityResponseBodyConnectivity &) = default ;
    TestDataSourceConnectivityResponseBodyConnectivity& operator=(TestDataSourceConnectivityResponseBodyConnectivity &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->connectMessage_ == nullptr
        && return this->connectState_ == nullptr && return this->detailLogs_ == nullptr; };
    // connectMessage Field Functions 
    bool hasConnectMessage() const { return this->connectMessage_ != nullptr;};
    void deleteConnectMessage() { this->connectMessage_ = nullptr;};
    inline string connectMessage() const { DARABONBA_PTR_GET_DEFAULT(connectMessage_, "") };
    inline TestDataSourceConnectivityResponseBodyConnectivity& setConnectMessage(string connectMessage) { DARABONBA_PTR_SET_VALUE(connectMessage_, connectMessage) };


    // connectState Field Functions 
    bool hasConnectState() const { return this->connectState_ != nullptr;};
    void deleteConnectState() { this->connectState_ = nullptr;};
    inline string connectState() const { DARABONBA_PTR_GET_DEFAULT(connectState_, "") };
    inline TestDataSourceConnectivityResponseBodyConnectivity& setConnectState(string connectState) { DARABONBA_PTR_SET_VALUE(connectState_, connectState) };


    // detailLogs Field Functions 
    bool hasDetailLogs() const { return this->detailLogs_ != nullptr;};
    void deleteDetailLogs() { this->detailLogs_ = nullptr;};
    inline const vector<Models::TestDataSourceConnectivityResponseBodyConnectivityDetailLogs> & detailLogs() const { DARABONBA_PTR_GET_CONST(detailLogs_, vector<Models::TestDataSourceConnectivityResponseBodyConnectivityDetailLogs>) };
    inline vector<Models::TestDataSourceConnectivityResponseBodyConnectivityDetailLogs> detailLogs() { DARABONBA_PTR_GET(detailLogs_, vector<Models::TestDataSourceConnectivityResponseBodyConnectivityDetailLogs>) };
    inline TestDataSourceConnectivityResponseBodyConnectivity& setDetailLogs(const vector<Models::TestDataSourceConnectivityResponseBodyConnectivityDetailLogs> & detailLogs) { DARABONBA_PTR_SET_VALUE(detailLogs_, detailLogs) };
    inline TestDataSourceConnectivityResponseBodyConnectivity& setDetailLogs(vector<Models::TestDataSourceConnectivityResponseBodyConnectivityDetailLogs> && detailLogs) { DARABONBA_PTR_SET_RVALUE(detailLogs_, detailLogs) };


  protected:
    // The error message returned if the connectivity test fails. No such a message is returned if the connectivity test is successful.
    std::shared_ptr<string> connectMessage_ = nullptr;
    // The result of the connectivity test. Valid values: Connectable: The network can be connected. ConfigError: The network can be connected, but the configurations are incorrect. Unreachable: The network cannot be connected. Unsupport: An error is reported due to other causes. For example, the desired resource group is being initialized.
    std::shared_ptr<string> connectState_ = nullptr;
    // The detailed logs of each step in the connectivity test.
    std::shared_ptr<vector<Models::TestDataSourceConnectivityResponseBodyConnectivityDetailLogs>> detailLogs_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
