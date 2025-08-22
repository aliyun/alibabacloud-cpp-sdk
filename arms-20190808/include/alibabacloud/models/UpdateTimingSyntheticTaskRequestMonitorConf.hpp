// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATETIMINGSYNTHETICTASKREQUESTMONITORCONF_HPP_
#define ALIBABACLOUD_MODELS_UPDATETIMINGSYNTHETICTASKREQUESTMONITORCONF_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateTimingSyntheticTaskRequestMonitorConfApiHTTP.hpp>
#include <alibabacloud/models/UpdateTimingSyntheticTaskRequestMonitorConfFileDownload.hpp>
#include <alibabacloud/models/UpdateTimingSyntheticTaskRequestMonitorConfNetDNS.hpp>
#include <alibabacloud/models/UpdateTimingSyntheticTaskRequestMonitorConfNetICMP.hpp>
#include <alibabacloud/models/UpdateTimingSyntheticTaskRequestMonitorConfNetTCP.hpp>
#include <alibabacloud/models/UpdateTimingSyntheticTaskRequestMonitorConfStream.hpp>
#include <alibabacloud/models/UpdateTimingSyntheticTaskRequestMonitorConfWebsite.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class UpdateTimingSyntheticTaskRequestMonitorConf : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateTimingSyntheticTaskRequestMonitorConf& obj) { 
      DARABONBA_PTR_TO_JSON(ApiHTTP, apiHTTP_);
      DARABONBA_PTR_TO_JSON(FileDownload, fileDownload_);
      DARABONBA_PTR_TO_JSON(NetDNS, netDNS_);
      DARABONBA_PTR_TO_JSON(NetICMP, netICMP_);
      DARABONBA_PTR_TO_JSON(NetTCP, netTCP_);
      DARABONBA_PTR_TO_JSON(Stream, stream_);
      DARABONBA_PTR_TO_JSON(Website, website_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateTimingSyntheticTaskRequestMonitorConf& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiHTTP, apiHTTP_);
      DARABONBA_PTR_FROM_JSON(FileDownload, fileDownload_);
      DARABONBA_PTR_FROM_JSON(NetDNS, netDNS_);
      DARABONBA_PTR_FROM_JSON(NetICMP, netICMP_);
      DARABONBA_PTR_FROM_JSON(NetTCP, netTCP_);
      DARABONBA_PTR_FROM_JSON(Stream, stream_);
      DARABONBA_PTR_FROM_JSON(Website, website_);
    };
    UpdateTimingSyntheticTaskRequestMonitorConf() = default ;
    UpdateTimingSyntheticTaskRequestMonitorConf(const UpdateTimingSyntheticTaskRequestMonitorConf &) = default ;
    UpdateTimingSyntheticTaskRequestMonitorConf(UpdateTimingSyntheticTaskRequestMonitorConf &&) = default ;
    UpdateTimingSyntheticTaskRequestMonitorConf(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateTimingSyntheticTaskRequestMonitorConf() = default ;
    UpdateTimingSyntheticTaskRequestMonitorConf& operator=(const UpdateTimingSyntheticTaskRequestMonitorConf &) = default ;
    UpdateTimingSyntheticTaskRequestMonitorConf& operator=(UpdateTimingSyntheticTaskRequestMonitorConf &&) = default ;
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
    inline const Models::UpdateTimingSyntheticTaskRequestMonitorConfApiHTTP & apiHTTP() const { DARABONBA_PTR_GET_CONST(apiHTTP_, Models::UpdateTimingSyntheticTaskRequestMonitorConfApiHTTP) };
    inline Models::UpdateTimingSyntheticTaskRequestMonitorConfApiHTTP apiHTTP() { DARABONBA_PTR_GET(apiHTTP_, Models::UpdateTimingSyntheticTaskRequestMonitorConfApiHTTP) };
    inline UpdateTimingSyntheticTaskRequestMonitorConf& setApiHTTP(const Models::UpdateTimingSyntheticTaskRequestMonitorConfApiHTTP & apiHTTP) { DARABONBA_PTR_SET_VALUE(apiHTTP_, apiHTTP) };
    inline UpdateTimingSyntheticTaskRequestMonitorConf& setApiHTTP(Models::UpdateTimingSyntheticTaskRequestMonitorConfApiHTTP && apiHTTP) { DARABONBA_PTR_SET_RVALUE(apiHTTP_, apiHTTP) };


    // fileDownload Field Functions 
    bool hasFileDownload() const { return this->fileDownload_ != nullptr;};
    void deleteFileDownload() { this->fileDownload_ = nullptr;};
    inline const Models::UpdateTimingSyntheticTaskRequestMonitorConfFileDownload & fileDownload() const { DARABONBA_PTR_GET_CONST(fileDownload_, Models::UpdateTimingSyntheticTaskRequestMonitorConfFileDownload) };
    inline Models::UpdateTimingSyntheticTaskRequestMonitorConfFileDownload fileDownload() { DARABONBA_PTR_GET(fileDownload_, Models::UpdateTimingSyntheticTaskRequestMonitorConfFileDownload) };
    inline UpdateTimingSyntheticTaskRequestMonitorConf& setFileDownload(const Models::UpdateTimingSyntheticTaskRequestMonitorConfFileDownload & fileDownload) { DARABONBA_PTR_SET_VALUE(fileDownload_, fileDownload) };
    inline UpdateTimingSyntheticTaskRequestMonitorConf& setFileDownload(Models::UpdateTimingSyntheticTaskRequestMonitorConfFileDownload && fileDownload) { DARABONBA_PTR_SET_RVALUE(fileDownload_, fileDownload) };


    // netDNS Field Functions 
    bool hasNetDNS() const { return this->netDNS_ != nullptr;};
    void deleteNetDNS() { this->netDNS_ = nullptr;};
    inline const Models::UpdateTimingSyntheticTaskRequestMonitorConfNetDNS & netDNS() const { DARABONBA_PTR_GET_CONST(netDNS_, Models::UpdateTimingSyntheticTaskRequestMonitorConfNetDNS) };
    inline Models::UpdateTimingSyntheticTaskRequestMonitorConfNetDNS netDNS() { DARABONBA_PTR_GET(netDNS_, Models::UpdateTimingSyntheticTaskRequestMonitorConfNetDNS) };
    inline UpdateTimingSyntheticTaskRequestMonitorConf& setNetDNS(const Models::UpdateTimingSyntheticTaskRequestMonitorConfNetDNS & netDNS) { DARABONBA_PTR_SET_VALUE(netDNS_, netDNS) };
    inline UpdateTimingSyntheticTaskRequestMonitorConf& setNetDNS(Models::UpdateTimingSyntheticTaskRequestMonitorConfNetDNS && netDNS) { DARABONBA_PTR_SET_RVALUE(netDNS_, netDNS) };


    // netICMP Field Functions 
    bool hasNetICMP() const { return this->netICMP_ != nullptr;};
    void deleteNetICMP() { this->netICMP_ = nullptr;};
    inline const Models::UpdateTimingSyntheticTaskRequestMonitorConfNetICMP & netICMP() const { DARABONBA_PTR_GET_CONST(netICMP_, Models::UpdateTimingSyntheticTaskRequestMonitorConfNetICMP) };
    inline Models::UpdateTimingSyntheticTaskRequestMonitorConfNetICMP netICMP() { DARABONBA_PTR_GET(netICMP_, Models::UpdateTimingSyntheticTaskRequestMonitorConfNetICMP) };
    inline UpdateTimingSyntheticTaskRequestMonitorConf& setNetICMP(const Models::UpdateTimingSyntheticTaskRequestMonitorConfNetICMP & netICMP) { DARABONBA_PTR_SET_VALUE(netICMP_, netICMP) };
    inline UpdateTimingSyntheticTaskRequestMonitorConf& setNetICMP(Models::UpdateTimingSyntheticTaskRequestMonitorConfNetICMP && netICMP) { DARABONBA_PTR_SET_RVALUE(netICMP_, netICMP) };


    // netTCP Field Functions 
    bool hasNetTCP() const { return this->netTCP_ != nullptr;};
    void deleteNetTCP() { this->netTCP_ = nullptr;};
    inline const Models::UpdateTimingSyntheticTaskRequestMonitorConfNetTCP & netTCP() const { DARABONBA_PTR_GET_CONST(netTCP_, Models::UpdateTimingSyntheticTaskRequestMonitorConfNetTCP) };
    inline Models::UpdateTimingSyntheticTaskRequestMonitorConfNetTCP netTCP() { DARABONBA_PTR_GET(netTCP_, Models::UpdateTimingSyntheticTaskRequestMonitorConfNetTCP) };
    inline UpdateTimingSyntheticTaskRequestMonitorConf& setNetTCP(const Models::UpdateTimingSyntheticTaskRequestMonitorConfNetTCP & netTCP) { DARABONBA_PTR_SET_VALUE(netTCP_, netTCP) };
    inline UpdateTimingSyntheticTaskRequestMonitorConf& setNetTCP(Models::UpdateTimingSyntheticTaskRequestMonitorConfNetTCP && netTCP) { DARABONBA_PTR_SET_RVALUE(netTCP_, netTCP) };


    // stream Field Functions 
    bool hasStream() const { return this->stream_ != nullptr;};
    void deleteStream() { this->stream_ = nullptr;};
    inline const Models::UpdateTimingSyntheticTaskRequestMonitorConfStream & stream() const { DARABONBA_PTR_GET_CONST(stream_, Models::UpdateTimingSyntheticTaskRequestMonitorConfStream) };
    inline Models::UpdateTimingSyntheticTaskRequestMonitorConfStream stream() { DARABONBA_PTR_GET(stream_, Models::UpdateTimingSyntheticTaskRequestMonitorConfStream) };
    inline UpdateTimingSyntheticTaskRequestMonitorConf& setStream(const Models::UpdateTimingSyntheticTaskRequestMonitorConfStream & stream) { DARABONBA_PTR_SET_VALUE(stream_, stream) };
    inline UpdateTimingSyntheticTaskRequestMonitorConf& setStream(Models::UpdateTimingSyntheticTaskRequestMonitorConfStream && stream) { DARABONBA_PTR_SET_RVALUE(stream_, stream) };


    // website Field Functions 
    bool hasWebsite() const { return this->website_ != nullptr;};
    void deleteWebsite() { this->website_ = nullptr;};
    inline const Models::UpdateTimingSyntheticTaskRequestMonitorConfWebsite & website() const { DARABONBA_PTR_GET_CONST(website_, Models::UpdateTimingSyntheticTaskRequestMonitorConfWebsite) };
    inline Models::UpdateTimingSyntheticTaskRequestMonitorConfWebsite website() { DARABONBA_PTR_GET(website_, Models::UpdateTimingSyntheticTaskRequestMonitorConfWebsite) };
    inline UpdateTimingSyntheticTaskRequestMonitorConf& setWebsite(const Models::UpdateTimingSyntheticTaskRequestMonitorConfWebsite & website) { DARABONBA_PTR_SET_VALUE(website_, website) };
    inline UpdateTimingSyntheticTaskRequestMonitorConf& setWebsite(Models::UpdateTimingSyntheticTaskRequestMonitorConfWebsite && website) { DARABONBA_PTR_SET_RVALUE(website_, website) };


  protected:
    // The parameters of the HTTP(S) synthetic test.
    std::shared_ptr<Models::UpdateTimingSyntheticTaskRequestMonitorConfApiHTTP> apiHTTP_ = nullptr;
    // The parameters of file downloading.
    std::shared_ptr<Models::UpdateTimingSyntheticTaskRequestMonitorConfFileDownload> fileDownload_ = nullptr;
    // The parameters of the DNS synthetic test.
    std::shared_ptr<Models::UpdateTimingSyntheticTaskRequestMonitorConfNetDNS> netDNS_ = nullptr;
    // The parameters of the ICMP synthetic test.
    std::shared_ptr<Models::UpdateTimingSyntheticTaskRequestMonitorConfNetICMP> netICMP_ = nullptr;
    // The parameters of the TCP synthetic test.
    std::shared_ptr<Models::UpdateTimingSyntheticTaskRequestMonitorConfNetTCP> netTCP_ = nullptr;
    // The parameters of the streaming-media synthetic test.
    std::shared_ptr<Models::UpdateTimingSyntheticTaskRequestMonitorConfStream> stream_ = nullptr;
    // The parameters of the website speed measurement.
    std::shared_ptr<Models::UpdateTimingSyntheticTaskRequestMonitorConfWebsite> website_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
