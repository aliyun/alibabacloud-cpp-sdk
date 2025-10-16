// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEOUTGOINGDESTINATIONIPRESPONSEBODYDSTIPLISTAPPLICATIONPORTLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEOUTGOINGDESTINATIONIPRESPONSEBODYDSTIPLISTAPPLICATIONPORTLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeOutgoingDestinationIPResponseBodyDstIPListApplicationPortList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeOutgoingDestinationIPResponseBodyDstIPListApplicationPortList& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationName, applicationName_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(UnknownReason, unknownReason_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeOutgoingDestinationIPResponseBodyDstIPListApplicationPortList& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationName, applicationName_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(UnknownReason, unknownReason_);
    };
    DescribeOutgoingDestinationIPResponseBodyDstIPListApplicationPortList() = default ;
    DescribeOutgoingDestinationIPResponseBodyDstIPListApplicationPortList(const DescribeOutgoingDestinationIPResponseBodyDstIPListApplicationPortList &) = default ;
    DescribeOutgoingDestinationIPResponseBodyDstIPListApplicationPortList(DescribeOutgoingDestinationIPResponseBodyDstIPListApplicationPortList &&) = default ;
    DescribeOutgoingDestinationIPResponseBodyDstIPListApplicationPortList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeOutgoingDestinationIPResponseBodyDstIPListApplicationPortList() = default ;
    DescribeOutgoingDestinationIPResponseBodyDstIPListApplicationPortList& operator=(const DescribeOutgoingDestinationIPResponseBodyDstIPListApplicationPortList &) = default ;
    DescribeOutgoingDestinationIPResponseBodyDstIPListApplicationPortList& operator=(DescribeOutgoingDestinationIPResponseBodyDstIPListApplicationPortList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationName_ == nullptr
        && return this->port_ == nullptr && return this->unknownReason_ == nullptr; };
    // applicationName Field Functions 
    bool hasApplicationName() const { return this->applicationName_ != nullptr;};
    void deleteApplicationName() { this->applicationName_ = nullptr;};
    inline string applicationName() const { DARABONBA_PTR_GET_DEFAULT(applicationName_, "") };
    inline DescribeOutgoingDestinationIPResponseBodyDstIPListApplicationPortList& setApplicationName(string applicationName) { DARABONBA_PTR_SET_VALUE(applicationName_, applicationName) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline int32_t port() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
    inline DescribeOutgoingDestinationIPResponseBodyDstIPListApplicationPortList& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // unknownReason Field Functions 
    bool hasUnknownReason() const { return this->unknownReason_ != nullptr;};
    void deleteUnknownReason() { this->unknownReason_ = nullptr;};
    inline const vector<string> & unknownReason() const { DARABONBA_PTR_GET_CONST(unknownReason_, vector<string>) };
    inline vector<string> unknownReason() { DARABONBA_PTR_GET(unknownReason_, vector<string>) };
    inline DescribeOutgoingDestinationIPResponseBodyDstIPListApplicationPortList& setUnknownReason(const vector<string> & unknownReason) { DARABONBA_PTR_SET_VALUE(unknownReason_, unknownReason) };
    inline DescribeOutgoingDestinationIPResponseBodyDstIPListApplicationPortList& setUnknownReason(vector<string> && unknownReason) { DARABONBA_PTR_SET_RVALUE(unknownReason_, unknownReason) };


  protected:
    // The application type used in the access control policy. Valid values:
    // 
    // *   **FTP**
    // *   **HTTP**
    // *   **HTTPS**
    // *   **Memcache**
    // *   **MongoDB**
    // *   **MQTT**
    // *   **MySQL**
    // *   **RDP**
    // *   **Redis**
    // *   **SMTP**
    // *   **SMTPS**
    // *   **SSH**
    // *   **SSL_No_Cert**
    // *   **SSL**
    // *   **VNC**
    // 
    // >  The value of this parameter depends on the value of the Proto parameter. If you set Proto to TCP, you can set ApplicationNameList to any valid value. If you configure both ApplicationNameList and ApplicationName, only the value of ApplicationNameList is used.
    std::shared_ptr<string> applicationName_ = nullptr;
    // The application port.
    std::shared_ptr<int32_t> port_ = nullptr;
    // List of reasons for failing to analyze the protocol when it is identified as Unknown.
    std::shared_ptr<vector<string>> unknownReason_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
