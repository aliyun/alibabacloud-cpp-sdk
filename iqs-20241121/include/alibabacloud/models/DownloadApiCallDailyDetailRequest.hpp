// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DOWNLOADAPICALLDAILYDETAILREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DOWNLOADAPICALLDAILYDETAILREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DownloadApiCallDailyDetailCmd.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IQS20241121
{
namespace Models
{
  class DownloadApiCallDailyDetailRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DownloadApiCallDailyDetailRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, DownloadApiCallDailyDetailRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    DownloadApiCallDailyDetailRequest() = default ;
    DownloadApiCallDailyDetailRequest(const DownloadApiCallDailyDetailRequest &) = default ;
    DownloadApiCallDailyDetailRequest(DownloadApiCallDailyDetailRequest &&) = default ;
    DownloadApiCallDailyDetailRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DownloadApiCallDailyDetailRequest() = default ;
    DownloadApiCallDailyDetailRequest& operator=(const DownloadApiCallDailyDetailRequest &) = default ;
    DownloadApiCallDailyDetailRequest& operator=(DownloadApiCallDailyDetailRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const DownloadApiCallDailyDetailCmd & getBody() const { DARABONBA_PTR_GET_CONST(body_, DownloadApiCallDailyDetailCmd) };
    inline DownloadApiCallDailyDetailCmd getBody() { DARABONBA_PTR_GET(body_, DownloadApiCallDailyDetailCmd) };
    inline DownloadApiCallDailyDetailRequest& setBody(const DownloadApiCallDailyDetailCmd & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline DownloadApiCallDailyDetailRequest& setBody(DownloadApiCallDailyDetailCmd && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<DownloadApiCallDailyDetailCmd> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IQS20241121
#endif
