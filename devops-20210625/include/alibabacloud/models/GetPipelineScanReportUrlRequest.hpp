// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPIPELINESCANREPORTURLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETPIPELINESCANREPORTURLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class GetPipelineScanReportUrlRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPipelineScanReportUrlRequest& obj) { 
      DARABONBA_PTR_TO_JSON(reportPath, reportPath_);
    };
    friend void from_json(const Darabonba::Json& j, GetPipelineScanReportUrlRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(reportPath, reportPath_);
    };
    GetPipelineScanReportUrlRequest() = default ;
    GetPipelineScanReportUrlRequest(const GetPipelineScanReportUrlRequest &) = default ;
    GetPipelineScanReportUrlRequest(GetPipelineScanReportUrlRequest &&) = default ;
    GetPipelineScanReportUrlRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPipelineScanReportUrlRequest() = default ;
    GetPipelineScanReportUrlRequest& operator=(const GetPipelineScanReportUrlRequest &) = default ;
    GetPipelineScanReportUrlRequest& operator=(GetPipelineScanReportUrlRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->reportPath_ == nullptr; };
    // reportPath Field Functions 
    bool hasReportPath() const { return this->reportPath_ != nullptr;};
    void deleteReportPath() { this->reportPath_ = nullptr;};
    inline string reportPath() const { DARABONBA_PTR_GET_DEFAULT(reportPath_, "") };
    inline GetPipelineScanReportUrlRequest& setReportPath(string reportPath) { DARABONBA_PTR_SET_VALUE(reportPath_, reportPath) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> reportPath_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
