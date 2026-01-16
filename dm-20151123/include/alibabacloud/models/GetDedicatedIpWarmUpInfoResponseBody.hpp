// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDEDICATEDIPWARMUPINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDEDICATEDIPWARMUPINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dm20151123
{
namespace Models
{
  class GetDedicatedIpWarmUpInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDedicatedIpWarmUpInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Info, info_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetDedicatedIpWarmUpInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Info, info_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetDedicatedIpWarmUpInfoResponseBody() = default ;
    GetDedicatedIpWarmUpInfoResponseBody(const GetDedicatedIpWarmUpInfoResponseBody &) = default ;
    GetDedicatedIpWarmUpInfoResponseBody(GetDedicatedIpWarmUpInfoResponseBody &&) = default ;
    GetDedicatedIpWarmUpInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDedicatedIpWarmUpInfoResponseBody() = default ;
    GetDedicatedIpWarmUpInfoResponseBody& operator=(const GetDedicatedIpWarmUpInfoResponseBody &) = default ;
    GetDedicatedIpWarmUpInfoResponseBody& operator=(GetDedicatedIpWarmUpInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Info : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Info& obj) { 
        DARABONBA_PTR_TO_JSON(Esp, esp_);
        DARABONBA_PTR_TO_JSON(Finished, finished_);
      };
      friend void from_json(const Darabonba::Json& j, Info& obj) { 
        DARABONBA_PTR_FROM_JSON(Esp, esp_);
        DARABONBA_PTR_FROM_JSON(Finished, finished_);
      };
      Info() = default ;
      Info(const Info &) = default ;
      Info(Info &&) = default ;
      Info(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Info() = default ;
      Info& operator=(const Info &) = default ;
      Info& operator=(Info &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->esp_ == nullptr
        && this->finished_ == nullptr; };
      // esp Field Functions 
      bool hasEsp() const { return this->esp_ != nullptr;};
      void deleteEsp() { this->esp_ = nullptr;};
      inline string getEsp() const { DARABONBA_PTR_GET_DEFAULT(esp_, "") };
      inline Info& setEsp(string esp) { DARABONBA_PTR_SET_VALUE(esp_, esp) };


      // finished Field Functions 
      bool hasFinished() const { return this->finished_ != nullptr;};
      void deleteFinished() { this->finished_ = nullptr;};
      inline bool getFinished() const { DARABONBA_PTR_GET_DEFAULT(finished_, false) };
      inline Info& setFinished(bool finished) { DARABONBA_PTR_SET_VALUE(finished_, finished) };


    protected:
      shared_ptr<string> esp_ {};
      shared_ptr<bool> finished_ {};
    };

    virtual bool empty() const override { return this->info_ == nullptr
        && this->requestId_ == nullptr; };
    // info Field Functions 
    bool hasInfo() const { return this->info_ != nullptr;};
    void deleteInfo() { this->info_ = nullptr;};
    inline const vector<GetDedicatedIpWarmUpInfoResponseBody::Info> & getInfo() const { DARABONBA_PTR_GET_CONST(info_, vector<GetDedicatedIpWarmUpInfoResponseBody::Info>) };
    inline vector<GetDedicatedIpWarmUpInfoResponseBody::Info> getInfo() { DARABONBA_PTR_GET(info_, vector<GetDedicatedIpWarmUpInfoResponseBody::Info>) };
    inline GetDedicatedIpWarmUpInfoResponseBody& setInfo(const vector<GetDedicatedIpWarmUpInfoResponseBody::Info> & info) { DARABONBA_PTR_SET_VALUE(info_, info) };
    inline GetDedicatedIpWarmUpInfoResponseBody& setInfo(vector<GetDedicatedIpWarmUpInfoResponseBody::Info> && info) { DARABONBA_PTR_SET_RVALUE(info_, info) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDedicatedIpWarmUpInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<GetDedicatedIpWarmUpInfoResponseBody::Info>> info_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dm20151123
#endif
