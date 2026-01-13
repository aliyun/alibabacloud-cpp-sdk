// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DOWNLOADMETERINGDAILYDETAILREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DOWNLOADMETERINGDAILYDETAILREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DownloadMeteringDailyDetailCmd.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IQS20241121
{
namespace Models
{
  class DownloadMeteringDailyDetailRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DownloadMeteringDailyDetailRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, DownloadMeteringDailyDetailRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    DownloadMeteringDailyDetailRequest() = default ;
    DownloadMeteringDailyDetailRequest(const DownloadMeteringDailyDetailRequest &) = default ;
    DownloadMeteringDailyDetailRequest(DownloadMeteringDailyDetailRequest &&) = default ;
    DownloadMeteringDailyDetailRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DownloadMeteringDailyDetailRequest() = default ;
    DownloadMeteringDailyDetailRequest& operator=(const DownloadMeteringDailyDetailRequest &) = default ;
    DownloadMeteringDailyDetailRequest& operator=(DownloadMeteringDailyDetailRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const DownloadMeteringDailyDetailCmd & getBody() const { DARABONBA_PTR_GET_CONST(body_, DownloadMeteringDailyDetailCmd) };
    inline DownloadMeteringDailyDetailCmd getBody() { DARABONBA_PTR_GET(body_, DownloadMeteringDailyDetailCmd) };
    inline DownloadMeteringDailyDetailRequest& setBody(const DownloadMeteringDailyDetailCmd & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline DownloadMeteringDailyDetailRequest& setBody(DownloadMeteringDailyDetailCmd && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<DownloadMeteringDailyDetailCmd> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IQS20241121
#endif
