// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSNAPSHOTSETTINGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSNAPSHOTSETTINGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EsServerless20230627
{
namespace Models
{
  class GetSnapshotSettingResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSnapshotSettingResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(result, result_);
    };
    friend void from_json(const Darabonba::Json& j, GetSnapshotSettingResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(result, result_);
    };
    GetSnapshotSettingResponseBody() = default ;
    GetSnapshotSettingResponseBody(const GetSnapshotSettingResponseBody &) = default ;
    GetSnapshotSettingResponseBody(GetSnapshotSettingResponseBody &&) = default ;
    GetSnapshotSettingResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSnapshotSettingResponseBody() = default ;
    GetSnapshotSettingResponseBody& operator=(const GetSnapshotSettingResponseBody &) = default ;
    GetSnapshotSettingResponseBody& operator=(GetSnapshotSettingResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(enable, enable_);
        DARABONBA_PTR_TO_JSON(quartzRegex, quartzRegex_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(enable, enable_);
        DARABONBA_PTR_FROM_JSON(quartzRegex, quartzRegex_);
      };
      Result() = default ;
      Result(const Result &) = default ;
      Result(Result &&) = default ;
      Result(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Result() = default ;
      Result& operator=(const Result &) = default ;
      Result& operator=(Result &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->enable_ == nullptr
        && this->quartzRegex_ == nullptr; };
      // enable Field Functions 
      bool hasEnable() const { return this->enable_ != nullptr;};
      void deleteEnable() { this->enable_ = nullptr;};
      inline bool getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
      inline Result& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


      // quartzRegex Field Functions 
      bool hasQuartzRegex() const { return this->quartzRegex_ != nullptr;};
      void deleteQuartzRegex() { this->quartzRegex_ = nullptr;};
      inline string getQuartzRegex() const { DARABONBA_PTR_GET_DEFAULT(quartzRegex_, "") };
      inline Result& setQuartzRegex(string quartzRegex) { DARABONBA_PTR_SET_VALUE(quartzRegex_, quartzRegex) };


    protected:
      shared_ptr<bool> enable_ {};
      shared_ptr<string> quartzRegex_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSnapshotSettingResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const GetSnapshotSettingResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, GetSnapshotSettingResponseBody::Result) };
    inline GetSnapshotSettingResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, GetSnapshotSettingResponseBody::Result) };
    inline GetSnapshotSettingResponseBody& setResult(const GetSnapshotSettingResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline GetSnapshotSettingResponseBody& setResult(GetSnapshotSettingResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<GetSnapshotSettingResponseBody::Result> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EsServerless20230627
#endif
