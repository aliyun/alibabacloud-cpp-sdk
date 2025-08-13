// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPPLICATIONINSTANCELISTRESPONSEBODYDATARESULT_HPP_
#define ALIBABACLOUD_MODELS_GETAPPLICATIONINSTANCELISTRESPONSEBODYDATARESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetApplicationInstanceListResponseBodyDataResultTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class GetApplicationInstanceListResponseBodyDataResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetApplicationInstanceListResponseBodyDataResult& obj) { 
      DARABONBA_PTR_TO_JSON(Ip, ip_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, GetApplicationInstanceListResponseBodyDataResult& obj) { 
      DARABONBA_PTR_FROM_JSON(Ip, ip_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    GetApplicationInstanceListResponseBodyDataResult() = default ;
    GetApplicationInstanceListResponseBodyDataResult(const GetApplicationInstanceListResponseBodyDataResult &) = default ;
    GetApplicationInstanceListResponseBodyDataResult(GetApplicationInstanceListResponseBodyDataResult &&) = default ;
    GetApplicationInstanceListResponseBodyDataResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetApplicationInstanceListResponseBodyDataResult() = default ;
    GetApplicationInstanceListResponseBodyDataResult& operator=(const GetApplicationInstanceListResponseBodyDataResult &) = default ;
    GetApplicationInstanceListResponseBodyDataResult& operator=(GetApplicationInstanceListResponseBodyDataResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ip_ != nullptr
        && this->port_ != nullptr && this->tags_ != nullptr; };
    // ip Field Functions 
    bool hasIp() const { return this->ip_ != nullptr;};
    void deleteIp() { this->ip_ = nullptr;};
    inline string ip() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
    inline GetApplicationInstanceListResponseBodyDataResult& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline string port() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
    inline GetApplicationInstanceListResponseBodyDataResult& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::GetApplicationInstanceListResponseBodyDataResultTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::GetApplicationInstanceListResponseBodyDataResultTags>) };
    inline vector<Models::GetApplicationInstanceListResponseBodyDataResultTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::GetApplicationInstanceListResponseBodyDataResultTags>) };
    inline GetApplicationInstanceListResponseBodyDataResult& setTags(const vector<Models::GetApplicationInstanceListResponseBodyDataResultTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline GetApplicationInstanceListResponseBodyDataResult& setTags(vector<Models::GetApplicationInstanceListResponseBodyDataResultTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    // The node IP address.
    std::shared_ptr<string> ip_ = nullptr;
    // The application port.
    std::shared_ptr<string> port_ = nullptr;
    // The node tags.
    std::shared_ptr<vector<Models::GetApplicationInstanceListResponseBodyDataResultTags>> tags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
