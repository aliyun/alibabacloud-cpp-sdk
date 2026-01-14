// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SYNCAPPINSTANCEFORPARTNERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SYNCAPPINSTANCEFORPARTNERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class SyncAppInstanceForPartnerResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SyncAppInstanceForPartnerResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, SyncAppInstanceForPartnerResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    SyncAppInstanceForPartnerResponseBody() = default ;
    SyncAppInstanceForPartnerResponseBody(const SyncAppInstanceForPartnerResponseBody &) = default ;
    SyncAppInstanceForPartnerResponseBody(SyncAppInstanceForPartnerResponseBody &&) = default ;
    SyncAppInstanceForPartnerResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SyncAppInstanceForPartnerResponseBody() = default ;
    SyncAppInstanceForPartnerResponseBody& operator=(const SyncAppInstanceForPartnerResponseBody &) = default ;
    SyncAppInstanceForPartnerResponseBody& operator=(SyncAppInstanceForPartnerResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AppInstance, appInstance_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AppInstance, appInstance_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class AppInstance : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AppInstance& obj) { 
          DARABONBA_PTR_TO_JSON(BizId, bizId_);
        };
        friend void from_json(const Darabonba::Json& j, AppInstance& obj) { 
          DARABONBA_PTR_FROM_JSON(BizId, bizId_);
        };
        AppInstance() = default ;
        AppInstance(const AppInstance &) = default ;
        AppInstance(AppInstance &&) = default ;
        AppInstance(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AppInstance() = default ;
        AppInstance& operator=(const AppInstance &) = default ;
        AppInstance& operator=(AppInstance &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->bizId_ == nullptr; };
        // bizId Field Functions 
        bool hasBizId() const { return this->bizId_ != nullptr;};
        void deleteBizId() { this->bizId_ = nullptr;};
        inline string getBizId() const { DARABONBA_PTR_GET_DEFAULT(bizId_, "") };
        inline AppInstance& setBizId(string bizId) { DARABONBA_PTR_SET_VALUE(bizId_, bizId) };


      protected:
        shared_ptr<string> bizId_ {};
      };

      virtual bool empty() const override { return this->appInstance_ == nullptr; };
      // appInstance Field Functions 
      bool hasAppInstance() const { return this->appInstance_ != nullptr;};
      void deleteAppInstance() { this->appInstance_ = nullptr;};
      inline const Data::AppInstance & getAppInstance() const { DARABONBA_PTR_GET_CONST(appInstance_, Data::AppInstance) };
      inline Data::AppInstance getAppInstance() { DARABONBA_PTR_GET(appInstance_, Data::AppInstance) };
      inline Data& setAppInstance(const Data::AppInstance & appInstance) { DARABONBA_PTR_SET_VALUE(appInstance_, appInstance) };
      inline Data& setAppInstance(Data::AppInstance && appInstance) { DARABONBA_PTR_SET_RVALUE(appInstance_, appInstance) };


    protected:
      shared_ptr<Data::AppInstance> appInstance_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const SyncAppInstanceForPartnerResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, SyncAppInstanceForPartnerResponseBody::Data) };
    inline SyncAppInstanceForPartnerResponseBody::Data getData() { DARABONBA_PTR_GET(data_, SyncAppInstanceForPartnerResponseBody::Data) };
    inline SyncAppInstanceForPartnerResponseBody& setData(const SyncAppInstanceForPartnerResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline SyncAppInstanceForPartnerResponseBody& setData(SyncAppInstanceForPartnerResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SyncAppInstanceForPartnerResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<SyncAppInstanceForPartnerResponseBody::Data> data_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
