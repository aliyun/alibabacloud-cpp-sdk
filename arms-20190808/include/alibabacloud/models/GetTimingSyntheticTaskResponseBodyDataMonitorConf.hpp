// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTIMINGSYNTHETICTASKRESPONSEBODYDATAMONITORCONF_HPP_
#define ALIBABACLOUD_MODELS_GETTIMINGSYNTHETICTASKRESPONSEBODYDATAMONITORCONF_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetTimingSyntheticTaskResponseBodyDataMonitorConfApiHTTP.hpp>
#include <alibabacloud/models/GetTimingSyntheticTaskResponseBodyDataMonitorConfFileDownload.hpp>
#include <alibabacloud/models/GetTimingSyntheticTaskResponseBodyDataMonitorConfNetDNS.hpp>
#include <alibabacloud/models/GetTimingSyntheticTaskResponseBodyDataMonitorConfNetICMP.hpp>
#include <alibabacloud/models/GetTimingSyntheticTaskResponseBodyDataMonitorConfNetTCP.hpp>
#include <alibabacloud/models/GetTimingSyntheticTaskResponseBodyDataMonitorConfStream.hpp>
#include <alibabacloud/models/GetTimingSyntheticTaskResponseBodyDataMonitorConfWebsite.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class GetTimingSyntheticTaskResponseBodyDataMonitorConf : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTimingSyntheticTaskResponseBodyDataMonitorConf& obj) { 
      DARABONBA_PTR_TO_JSON(ApiHTTP, apiHTTP_);
      DARABONBA_PTR_TO_JSON(FileDownload, fileDownload_);
      DARABONBA_PTR_TO_JSON(NetDNS, netDNS_);
      DARABONBA_PTR_TO_JSON(NetICMP, netICMP_);
      DARABONBA_PTR_TO_JSON(NetTCP, netTCP_);
      DARABONBA_PTR_TO_JSON(Stream, stream_);
      DARABONBA_PTR_TO_JSON(Website, website_);
    };
    friend void from_json(const Darabonba::Json& j, GetTimingSyntheticTaskResponseBodyDataMonitorConf& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiHTTP, apiHTTP_);
      DARABONBA_PTR_FROM_JSON(FileDownload, fileDownload_);
      DARABONBA_PTR_FROM_JSON(NetDNS, netDNS_);
      DARABONBA_PTR_FROM_JSON(NetICMP, netICMP_);
      DARABONBA_PTR_FROM_JSON(NetTCP, netTCP_);
      DARABONBA_PTR_FROM_JSON(Stream, stream_);
      DARABONBA_PTR_FROM_JSON(Website, website_);
    };
    GetTimingSyntheticTaskResponseBodyDataMonitorConf() = default ;
    GetTimingSyntheticTaskResponseBodyDataMonitorConf(const GetTimingSyntheticTaskResponseBodyDataMonitorConf &) = default ;
    GetTimingSyntheticTaskResponseBodyDataMonitorConf(GetTimingSyntheticTaskResponseBodyDataMonitorConf &&) = default ;
    GetTimingSyntheticTaskResponseBodyDataMonitorConf(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTimingSyntheticTaskResponseBodyDataMonitorConf() = default ;
    GetTimingSyntheticTaskResponseBodyDataMonitorConf& operator=(const GetTimingSyntheticTaskResponseBodyDataMonitorConf &) = default ;
    GetTimingSyntheticTaskResponseBodyDataMonitorConf& operator=(GetTimingSyntheticTaskResponseBodyDataMonitorConf &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->apiHTTP_ != nullptr
        && this->fileDownload_ != nullptr && this->netDNS_ != nullptr && this->netICMP_ != nullptr && this->netTCP_ != nullptr && this->stream_ != nullptr
        && this->website_ != nullptr; };
    // apiHTTP Field Functions 
    bool hasApiHTTP() const { return this->apiHTTP_ != nullptr;};
    void deleteApiHTTP() { this->apiHTTP_ = nullptr;};
    inline const Models::GetTimingSyntheticTaskResponseBodyDataMonitorConfApiHTTP & apiHTTP() const { DARABONBA_PTR_GET_CONST(apiHTTP_, Models::GetTimingSyntheticTaskResponseBodyDataMonitorConfApiHTTP) };
    inline Models::GetTimingSyntheticTaskResponseBodyDataMonitorConfApiHTTP apiHTTP() { DARABONBA_PTR_GET(apiHTTP_, Models::GetTimingSyntheticTaskResponseBodyDataMonitorConfApiHTTP) };
    inline GetTimingSyntheticTaskResponseBodyDataMonitorConf& setApiHTTP(const Models::GetTimingSyntheticTaskResponseBodyDataMonitorConfApiHTTP & apiHTTP) { DARABONBA_PTR_SET_VALUE(apiHTTP_, apiHTTP) };
    inline GetTimingSyntheticTaskResponseBodyDataMonitorConf& setApiHTTP(Models::GetTimingSyntheticTaskResponseBodyDataMonitorConfApiHTTP && apiHTTP) { DARABONBA_PTR_SET_RVALUE(apiHTTP_, apiHTTP) };


    // fileDownload Field Functions 
    bool hasFileDownload() const { return this->fileDownload_ != nullptr;};
    void deleteFileDownload() { this->fileDownload_ = nullptr;};
    inline const Models::GetTimingSyntheticTaskResponseBodyDataMonitorConfFileDownload & fileDownload() const { DARABONBA_PTR_GET_CONST(fileDownload_, Models::GetTimingSyntheticTaskResponseBodyDataMonitorConfFileDownload) };
    inline Models::GetTimingSyntheticTaskResponseBodyDataMonitorConfFileDownload fileDownload() { DARABONBA_PTR_GET(fileDownload_, Models::GetTimingSyntheticTaskResponseBodyDataMonitorConfFileDownload) };
    inline GetTimingSyntheticTaskResponseBodyDataMonitorConf& setFileDownload(const Models::GetTimingSyntheticTaskResponseBodyDataMonitorConfFileDownload & fileDownload) { DARABONBA_PTR_SET_VALUE(fileDownload_, fileDownload) };
    inline GetTimingSyntheticTaskResponseBodyDataMonitorConf& setFileDownload(Models::GetTimingSyntheticTaskResponseBodyDataMonitorConfFileDownload && fileDownload) { DARABONBA_PTR_SET_RVALUE(fileDownload_, fileDownload) };


    // netDNS Field Functions 
    bool hasNetDNS() const { return this->netDNS_ != nullptr;};
    void deleteNetDNS() { this->netDNS_ = nullptr;};
    inline const Models::GetTimingSyntheticTaskResponseBodyDataMonitorConfNetDNS & netDNS() const { DARABONBA_PTR_GET_CONST(netDNS_, Models::GetTimingSyntheticTaskResponseBodyDataMonitorConfNetDNS) };
    inline Models::GetTimingSyntheticTaskResponseBodyDataMonitorConfNetDNS netDNS() { DARABONBA_PTR_GET(netDNS_, Models::GetTimingSyntheticTaskResponseBodyDataMonitorConfNetDNS) };
    inline GetTimingSyntheticTaskResponseBodyDataMonitorConf& setNetDNS(const Models::GetTimingSyntheticTaskResponseBodyDataMonitorConfNetDNS & netDNS) { DARABONBA_PTR_SET_VALUE(netDNS_, netDNS) };
    inline GetTimingSyntheticTaskResponseBodyDataMonitorConf& setNetDNS(Models::GetTimingSyntheticTaskResponseBodyDataMonitorConfNetDNS && netDNS) { DARABONBA_PTR_SET_RVALUE(netDNS_, netDNS) };


    // netICMP Field Functions 
    bool hasNetICMP() const { return this->netICMP_ != nullptr;};
    void deleteNetICMP() { this->netICMP_ = nullptr;};
    inline const Models::GetTimingSyntheticTaskResponseBodyDataMonitorConfNetICMP & netICMP() const { DARABONBA_PTR_GET_CONST(netICMP_, Models::GetTimingSyntheticTaskResponseBodyDataMonitorConfNetICMP) };
    inline Models::GetTimingSyntheticTaskResponseBodyDataMonitorConfNetICMP netICMP() { DARABONBA_PTR_GET(netICMP_, Models::GetTimingSyntheticTaskResponseBodyDataMonitorConfNetICMP) };
    inline GetTimingSyntheticTaskResponseBodyDataMonitorConf& setNetICMP(const Models::GetTimingSyntheticTaskResponseBodyDataMonitorConfNetICMP & netICMP) { DARABONBA_PTR_SET_VALUE(netICMP_, netICMP) };
    inline GetTimingSyntheticTaskResponseBodyDataMonitorConf& setNetICMP(Models::GetTimingSyntheticTaskResponseBodyDataMonitorConfNetICMP && netICMP) { DARABONBA_PTR_SET_RVALUE(netICMP_, netICMP) };


    // netTCP Field Functions 
    bool hasNetTCP() const { return this->netTCP_ != nullptr;};
    void deleteNetTCP() { this->netTCP_ = nullptr;};
    inline const Models::GetTimingSyntheticTaskResponseBodyDataMonitorConfNetTCP & netTCP() const { DARABONBA_PTR_GET_CONST(netTCP_, Models::GetTimingSyntheticTaskResponseBodyDataMonitorConfNetTCP) };
    inline Models::GetTimingSyntheticTaskResponseBodyDataMonitorConfNetTCP netTCP() { DARABONBA_PTR_GET(netTCP_, Models::GetTimingSyntheticTaskResponseBodyDataMonitorConfNetTCP) };
    inline GetTimingSyntheticTaskResponseBodyDataMonitorConf& setNetTCP(const Models::GetTimingSyntheticTaskResponseBodyDataMonitorConfNetTCP & netTCP) { DARABONBA_PTR_SET_VALUE(netTCP_, netTCP) };
    inline GetTimingSyntheticTaskResponseBodyDataMonitorConf& setNetTCP(Models::GetTimingSyntheticTaskResponseBodyDataMonitorConfNetTCP && netTCP) { DARABONBA_PTR_SET_RVALUE(netTCP_, netTCP) };


    // stream Field Functions 
    bool hasStream() const { return this->stream_ != nullptr;};
    void deleteStream() { this->stream_ = nullptr;};
    inline const Models::GetTimingSyntheticTaskResponseBodyDataMonitorConfStream & stream() const { DARABONBA_PTR_GET_CONST(stream_, Models::GetTimingSyntheticTaskResponseBodyDataMonitorConfStream) };
    inline Models::GetTimingSyntheticTaskResponseBodyDataMonitorConfStream stream() { DARABONBA_PTR_GET(stream_, Models::GetTimingSyntheticTaskResponseBodyDataMonitorConfStream) };
    inline GetTimingSyntheticTaskResponseBodyDataMonitorConf& setStream(const Models::GetTimingSyntheticTaskResponseBodyDataMonitorConfStream & stream) { DARABONBA_PTR_SET_VALUE(stream_, stream) };
    inline GetTimingSyntheticTaskResponseBodyDataMonitorConf& setStream(Models::GetTimingSyntheticTaskResponseBodyDataMonitorConfStream && stream) { DARABONBA_PTR_SET_RVALUE(stream_, stream) };


    // website Field Functions 
    bool hasWebsite() const { return this->website_ != nullptr;};
    void deleteWebsite() { this->website_ = nullptr;};
    inline const Models::GetTimingSyntheticTaskResponseBodyDataMonitorConfWebsite & website() const { DARABONBA_PTR_GET_CONST(website_, Models::GetTimingSyntheticTaskResponseBodyDataMonitorConfWebsite) };
    inline Models::GetTimingSyntheticTaskResponseBodyDataMonitorConfWebsite website() { DARABONBA_PTR_GET(website_, Models::GetTimingSyntheticTaskResponseBodyDataMonitorConfWebsite) };
    inline GetTimingSyntheticTaskResponseBodyDataMonitorConf& setWebsite(const Models::GetTimingSyntheticTaskResponseBodyDataMonitorConfWebsite & website) { DARABONBA_PTR_SET_VALUE(website_, website) };
    inline GetTimingSyntheticTaskResponseBodyDataMonitorConf& setWebsite(Models::GetTimingSyntheticTaskResponseBodyDataMonitorConfWebsite && website) { DARABONBA_PTR_SET_RVALUE(website_, website) };


  protected:
    // The parameters of the HTTP(S) synthetic test.
    std::shared_ptr<Models::GetTimingSyntheticTaskResponseBodyDataMonitorConfApiHTTP> apiHTTP_ = nullptr;
    // The file download parameters.
    std::shared_ptr<Models::GetTimingSyntheticTaskResponseBodyDataMonitorConfFileDownload> fileDownload_ = nullptr;
    // The DNS synthetic test parameters. This parameter is required if the TaskType parameter is set to 3.
    std::shared_ptr<Models::GetTimingSyntheticTaskResponseBodyDataMonitorConfNetDNS> netDNS_ = nullptr;
    // The ICMP synthetic test parameters. This parameter is required if the TaskType parameter is set to 1.
    std::shared_ptr<Models::GetTimingSyntheticTaskResponseBodyDataMonitorConfNetICMP> netICMP_ = nullptr;
    // The TCP synthetic tests parameters. This parameter is required if the TaskType parameter is set to 2.
    std::shared_ptr<Models::GetTimingSyntheticTaskResponseBodyDataMonitorConfNetTCP> netTCP_ = nullptr;
    // Streaming media dial test configuration.
    std::shared_ptr<Models::GetTimingSyntheticTaskResponseBodyDataMonitorConfStream> stream_ = nullptr;
    // The website-speed measurement parameters.
    std::shared_ptr<Models::GetTimingSyntheticTaskResponseBodyDataMonitorConfWebsite> website_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
