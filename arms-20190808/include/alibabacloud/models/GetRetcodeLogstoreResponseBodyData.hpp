// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRETCODELOGSTORERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETRETCODELOGSTORERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetRetcodeLogstoreResponseBodyDataRetcodeSLSConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class GetRetcodeLogstoreResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRetcodeLogstoreResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RetcodeSLSConfig, retcodeSLSConfig_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, GetRetcodeLogstoreResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RetcodeSLSConfig, retcodeSLSConfig_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    GetRetcodeLogstoreResponseBodyData() = default ;
    GetRetcodeLogstoreResponseBodyData(const GetRetcodeLogstoreResponseBodyData &) = default ;
    GetRetcodeLogstoreResponseBodyData(GetRetcodeLogstoreResponseBodyData &&) = default ;
    GetRetcodeLogstoreResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRetcodeLogstoreResponseBodyData() = default ;
    GetRetcodeLogstoreResponseBodyData& operator=(const GetRetcodeLogstoreResponseBodyData &) = default ;
    GetRetcodeLogstoreResponseBodyData& operator=(GetRetcodeLogstoreResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->message_ != nullptr
        && this->retcodeSLSConfig_ != nullptr && this->status_ != nullptr; };
    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetRetcodeLogstoreResponseBodyData& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // retcodeSLSConfig Field Functions 
    bool hasRetcodeSLSConfig() const { return this->retcodeSLSConfig_ != nullptr;};
    void deleteRetcodeSLSConfig() { this->retcodeSLSConfig_ = nullptr;};
    inline const Models::GetRetcodeLogstoreResponseBodyDataRetcodeSLSConfig & retcodeSLSConfig() const { DARABONBA_PTR_GET_CONST(retcodeSLSConfig_, Models::GetRetcodeLogstoreResponseBodyDataRetcodeSLSConfig) };
    inline Models::GetRetcodeLogstoreResponseBodyDataRetcodeSLSConfig retcodeSLSConfig() { DARABONBA_PTR_GET(retcodeSLSConfig_, Models::GetRetcodeLogstoreResponseBodyDataRetcodeSLSConfig) };
    inline GetRetcodeLogstoreResponseBodyData& setRetcodeSLSConfig(const Models::GetRetcodeLogstoreResponseBodyDataRetcodeSLSConfig & retcodeSLSConfig) { DARABONBA_PTR_SET_VALUE(retcodeSLSConfig_, retcodeSLSConfig) };
    inline GetRetcodeLogstoreResponseBodyData& setRetcodeSLSConfig(Models::GetRetcodeLogstoreResponseBodyDataRetcodeSLSConfig && retcodeSLSConfig) { DARABONBA_PTR_SET_RVALUE(retcodeSLSConfig_, retcodeSLSConfig) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetRetcodeLogstoreResponseBodyData& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The content of the log.
    std::shared_ptr<string> message_ = nullptr;
    // The information about Log Service.
    std::shared_ptr<Models::GetRetcodeLogstoreResponseBodyDataRetcodeSLSConfig> retcodeSLSConfig_ = nullptr;
    // The status of the request.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
