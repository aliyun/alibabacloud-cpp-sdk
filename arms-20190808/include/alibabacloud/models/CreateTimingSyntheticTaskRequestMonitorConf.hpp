// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETIMINGSYNTHETICTASKREQUESTMONITORCONF_HPP_
#define ALIBABACLOUD_MODELS_CREATETIMINGSYNTHETICTASKREQUESTMONITORCONF_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateTimingSyntheticTaskRequestMonitorConfApiHTTP.hpp>
#include <alibabacloud/models/CreateTimingSyntheticTaskRequestMonitorConfFileDownload.hpp>
#include <alibabacloud/models/CreateTimingSyntheticTaskRequestMonitorConfNetDNS.hpp>
#include <alibabacloud/models/CreateTimingSyntheticTaskRequestMonitorConfNetICMP.hpp>
#include <alibabacloud/models/CreateTimingSyntheticTaskRequestMonitorConfNetTCP.hpp>
#include <alibabacloud/models/CreateTimingSyntheticTaskRequestMonitorConfStream.hpp>
#include <alibabacloud/models/CreateTimingSyntheticTaskRequestMonitorConfWebsite.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class CreateTimingSyntheticTaskRequestMonitorConf : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTimingSyntheticTaskRequestMonitorConf& obj) { 
      DARABONBA_PTR_TO_JSON(ApiHTTP, apiHTTP_);
      DARABONBA_PTR_TO_JSON(FileDownload, fileDownload_);
      DARABONBA_PTR_TO_JSON(NetDNS, netDNS_);
      DARABONBA_PTR_TO_JSON(NetICMP, netICMP_);
      DARABONBA_PTR_TO_JSON(NetTCP, netTCP_);
      DARABONBA_PTR_TO_JSON(Stream, stream_);
      DARABONBA_PTR_TO_JSON(Website, website_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTimingSyntheticTaskRequestMonitorConf& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiHTTP, apiHTTP_);
      DARABONBA_PTR_FROM_JSON(FileDownload, fileDownload_);
      DARABONBA_PTR_FROM_JSON(NetDNS, netDNS_);
      DARABONBA_PTR_FROM_JSON(NetICMP, netICMP_);
      DARABONBA_PTR_FROM_JSON(NetTCP, netTCP_);
      DARABONBA_PTR_FROM_JSON(Stream, stream_);
      DARABONBA_PTR_FROM_JSON(Website, website_);
    };
    CreateTimingSyntheticTaskRequestMonitorConf() = default ;
    CreateTimingSyntheticTaskRequestMonitorConf(const CreateTimingSyntheticTaskRequestMonitorConf &) = default ;
    CreateTimingSyntheticTaskRequestMonitorConf(CreateTimingSyntheticTaskRequestMonitorConf &&) = default ;
    CreateTimingSyntheticTaskRequestMonitorConf(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTimingSyntheticTaskRequestMonitorConf() = default ;
    CreateTimingSyntheticTaskRequestMonitorConf& operator=(const CreateTimingSyntheticTaskRequestMonitorConf &) = default ;
    CreateTimingSyntheticTaskRequestMonitorConf& operator=(CreateTimingSyntheticTaskRequestMonitorConf &&) = default ;
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
    inline const Models::CreateTimingSyntheticTaskRequestMonitorConfApiHTTP & apiHTTP() const { DARABONBA_PTR_GET_CONST(apiHTTP_, Models::CreateTimingSyntheticTaskRequestMonitorConfApiHTTP) };
    inline Models::CreateTimingSyntheticTaskRequestMonitorConfApiHTTP apiHTTP() { DARABONBA_PTR_GET(apiHTTP_, Models::CreateTimingSyntheticTaskRequestMonitorConfApiHTTP) };
    inline CreateTimingSyntheticTaskRequestMonitorConf& setApiHTTP(const Models::CreateTimingSyntheticTaskRequestMonitorConfApiHTTP & apiHTTP) { DARABONBA_PTR_SET_VALUE(apiHTTP_, apiHTTP) };
    inline CreateTimingSyntheticTaskRequestMonitorConf& setApiHTTP(Models::CreateTimingSyntheticTaskRequestMonitorConfApiHTTP && apiHTTP) { DARABONBA_PTR_SET_RVALUE(apiHTTP_, apiHTTP) };


    // fileDownload Field Functions 
    bool hasFileDownload() const { return this->fileDownload_ != nullptr;};
    void deleteFileDownload() { this->fileDownload_ = nullptr;};
    inline const Models::CreateTimingSyntheticTaskRequestMonitorConfFileDownload & fileDownload() const { DARABONBA_PTR_GET_CONST(fileDownload_, Models::CreateTimingSyntheticTaskRequestMonitorConfFileDownload) };
    inline Models::CreateTimingSyntheticTaskRequestMonitorConfFileDownload fileDownload() { DARABONBA_PTR_GET(fileDownload_, Models::CreateTimingSyntheticTaskRequestMonitorConfFileDownload) };
    inline CreateTimingSyntheticTaskRequestMonitorConf& setFileDownload(const Models::CreateTimingSyntheticTaskRequestMonitorConfFileDownload & fileDownload) { DARABONBA_PTR_SET_VALUE(fileDownload_, fileDownload) };
    inline CreateTimingSyntheticTaskRequestMonitorConf& setFileDownload(Models::CreateTimingSyntheticTaskRequestMonitorConfFileDownload && fileDownload) { DARABONBA_PTR_SET_RVALUE(fileDownload_, fileDownload) };


    // netDNS Field Functions 
    bool hasNetDNS() const { return this->netDNS_ != nullptr;};
    void deleteNetDNS() { this->netDNS_ = nullptr;};
    inline const Models::CreateTimingSyntheticTaskRequestMonitorConfNetDNS & netDNS() const { DARABONBA_PTR_GET_CONST(netDNS_, Models::CreateTimingSyntheticTaskRequestMonitorConfNetDNS) };
    inline Models::CreateTimingSyntheticTaskRequestMonitorConfNetDNS netDNS() { DARABONBA_PTR_GET(netDNS_, Models::CreateTimingSyntheticTaskRequestMonitorConfNetDNS) };
    inline CreateTimingSyntheticTaskRequestMonitorConf& setNetDNS(const Models::CreateTimingSyntheticTaskRequestMonitorConfNetDNS & netDNS) { DARABONBA_PTR_SET_VALUE(netDNS_, netDNS) };
    inline CreateTimingSyntheticTaskRequestMonitorConf& setNetDNS(Models::CreateTimingSyntheticTaskRequestMonitorConfNetDNS && netDNS) { DARABONBA_PTR_SET_RVALUE(netDNS_, netDNS) };


    // netICMP Field Functions 
    bool hasNetICMP() const { return this->netICMP_ != nullptr;};
    void deleteNetICMP() { this->netICMP_ = nullptr;};
    inline const Models::CreateTimingSyntheticTaskRequestMonitorConfNetICMP & netICMP() const { DARABONBA_PTR_GET_CONST(netICMP_, Models::CreateTimingSyntheticTaskRequestMonitorConfNetICMP) };
    inline Models::CreateTimingSyntheticTaskRequestMonitorConfNetICMP netICMP() { DARABONBA_PTR_GET(netICMP_, Models::CreateTimingSyntheticTaskRequestMonitorConfNetICMP) };
    inline CreateTimingSyntheticTaskRequestMonitorConf& setNetICMP(const Models::CreateTimingSyntheticTaskRequestMonitorConfNetICMP & netICMP) { DARABONBA_PTR_SET_VALUE(netICMP_, netICMP) };
    inline CreateTimingSyntheticTaskRequestMonitorConf& setNetICMP(Models::CreateTimingSyntheticTaskRequestMonitorConfNetICMP && netICMP) { DARABONBA_PTR_SET_RVALUE(netICMP_, netICMP) };


    // netTCP Field Functions 
    bool hasNetTCP() const { return this->netTCP_ != nullptr;};
    void deleteNetTCP() { this->netTCP_ = nullptr;};
    inline const Models::CreateTimingSyntheticTaskRequestMonitorConfNetTCP & netTCP() const { DARABONBA_PTR_GET_CONST(netTCP_, Models::CreateTimingSyntheticTaskRequestMonitorConfNetTCP) };
    inline Models::CreateTimingSyntheticTaskRequestMonitorConfNetTCP netTCP() { DARABONBA_PTR_GET(netTCP_, Models::CreateTimingSyntheticTaskRequestMonitorConfNetTCP) };
    inline CreateTimingSyntheticTaskRequestMonitorConf& setNetTCP(const Models::CreateTimingSyntheticTaskRequestMonitorConfNetTCP & netTCP) { DARABONBA_PTR_SET_VALUE(netTCP_, netTCP) };
    inline CreateTimingSyntheticTaskRequestMonitorConf& setNetTCP(Models::CreateTimingSyntheticTaskRequestMonitorConfNetTCP && netTCP) { DARABONBA_PTR_SET_RVALUE(netTCP_, netTCP) };


    // stream Field Functions 
    bool hasStream() const { return this->stream_ != nullptr;};
    void deleteStream() { this->stream_ = nullptr;};
    inline const Models::CreateTimingSyntheticTaskRequestMonitorConfStream & stream() const { DARABONBA_PTR_GET_CONST(stream_, Models::CreateTimingSyntheticTaskRequestMonitorConfStream) };
    inline Models::CreateTimingSyntheticTaskRequestMonitorConfStream stream() { DARABONBA_PTR_GET(stream_, Models::CreateTimingSyntheticTaskRequestMonitorConfStream) };
    inline CreateTimingSyntheticTaskRequestMonitorConf& setStream(const Models::CreateTimingSyntheticTaskRequestMonitorConfStream & stream) { DARABONBA_PTR_SET_VALUE(stream_, stream) };
    inline CreateTimingSyntheticTaskRequestMonitorConf& setStream(Models::CreateTimingSyntheticTaskRequestMonitorConfStream && stream) { DARABONBA_PTR_SET_RVALUE(stream_, stream) };


    // website Field Functions 
    bool hasWebsite() const { return this->website_ != nullptr;};
    void deleteWebsite() { this->website_ = nullptr;};
    inline const Models::CreateTimingSyntheticTaskRequestMonitorConfWebsite & website() const { DARABONBA_PTR_GET_CONST(website_, Models::CreateTimingSyntheticTaskRequestMonitorConfWebsite) };
    inline Models::CreateTimingSyntheticTaskRequestMonitorConfWebsite website() { DARABONBA_PTR_GET(website_, Models::CreateTimingSyntheticTaskRequestMonitorConfWebsite) };
    inline CreateTimingSyntheticTaskRequestMonitorConf& setWebsite(const Models::CreateTimingSyntheticTaskRequestMonitorConfWebsite & website) { DARABONBA_PTR_SET_VALUE(website_, website) };
    inline CreateTimingSyntheticTaskRequestMonitorConf& setWebsite(Models::CreateTimingSyntheticTaskRequestMonitorConfWebsite && website) { DARABONBA_PTR_SET_RVALUE(website_, website) };


  protected:
    // The parameters of the HTTP(S) synthetic test.
    std::shared_ptr<Models::CreateTimingSyntheticTaskRequestMonitorConfApiHTTP> apiHTTP_ = nullptr;
    // The parameters of file downloading.
    std::shared_ptr<Models::CreateTimingSyntheticTaskRequestMonitorConfFileDownload> fileDownload_ = nullptr;
    // The parameters of the DNS synthetic test. This parameter is required if the TaskType parameter is set to 3.
    std::shared_ptr<Models::CreateTimingSyntheticTaskRequestMonitorConfNetDNS> netDNS_ = nullptr;
    // The parameters of the ICMP synthetic test. This parameter is required if the TaskType parameter is set to 1.
    std::shared_ptr<Models::CreateTimingSyntheticTaskRequestMonitorConfNetICMP> netICMP_ = nullptr;
    // The parameters of the TCP synthetic test. This parameter is required if the TaskType parameter is set to 2.
    std::shared_ptr<Models::CreateTimingSyntheticTaskRequestMonitorConfNetTCP> netTCP_ = nullptr;
    // The parameters of the streaming-media synthetic test.
    std::shared_ptr<Models::CreateTimingSyntheticTaskRequestMonitorConfStream> stream_ = nullptr;
    // The parameters of the website speed measurement.
    std::shared_ptr<Models::CreateTimingSyntheticTaskRequestMonitorConfWebsite> website_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
