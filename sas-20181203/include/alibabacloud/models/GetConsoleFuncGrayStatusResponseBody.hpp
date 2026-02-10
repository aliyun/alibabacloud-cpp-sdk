// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCONSOLEFUNCGRAYSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCONSOLEFUNCGRAYSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetConsoleFuncGrayStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetConsoleFuncGrayStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetConsoleFuncGrayStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetConsoleFuncGrayStatusResponseBody() = default ;
    GetConsoleFuncGrayStatusResponseBody(const GetConsoleFuncGrayStatusResponseBody &) = default ;
    GetConsoleFuncGrayStatusResponseBody(GetConsoleFuncGrayStatusResponseBody &&) = default ;
    GetConsoleFuncGrayStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetConsoleFuncGrayStatusResponseBody() = default ;
    GetConsoleFuncGrayStatusResponseBody& operator=(const GetConsoleFuncGrayStatusResponseBody &) = default ;
    GetConsoleFuncGrayStatusResponseBody& operator=(GetConsoleFuncGrayStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ExcludeApiList, excludeApiList_);
        DARABONBA_PTR_TO_JSON(Hit, hit_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ExcludeApiList, excludeApiList_);
        DARABONBA_PTR_FROM_JSON(Hit, hit_);
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
      class ExcludeApiList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ExcludeApiList& obj) { 
          DARABONBA_PTR_TO_JSON(Action, action_);
          DARABONBA_PTR_TO_JSON(Code, code_);
          DARABONBA_PTR_TO_JSON(Version, version_);
        };
        friend void from_json(const Darabonba::Json& j, ExcludeApiList& obj) { 
          DARABONBA_PTR_FROM_JSON(Action, action_);
          DARABONBA_PTR_FROM_JSON(Code, code_);
          DARABONBA_PTR_FROM_JSON(Version, version_);
        };
        ExcludeApiList() = default ;
        ExcludeApiList(const ExcludeApiList &) = default ;
        ExcludeApiList(ExcludeApiList &&) = default ;
        ExcludeApiList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ExcludeApiList() = default ;
        ExcludeApiList& operator=(const ExcludeApiList &) = default ;
        ExcludeApiList& operator=(ExcludeApiList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->action_ == nullptr
        && this->code_ == nullptr && this->version_ == nullptr; };
        // action Field Functions 
        bool hasAction() const { return this->action_ != nullptr;};
        void deleteAction() { this->action_ = nullptr;};
        inline string getAction() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
        inline ExcludeApiList& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


        // code Field Functions 
        bool hasCode() const { return this->code_ != nullptr;};
        void deleteCode() { this->code_ = nullptr;};
        inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
        inline ExcludeApiList& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


        // version Field Functions 
        bool hasVersion() const { return this->version_ != nullptr;};
        void deleteVersion() { this->version_ = nullptr;};
        inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
        inline ExcludeApiList& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


      protected:
        // Action corresponding to the API.
        shared_ptr<string> action_ {};
        // Product Code.
        shared_ptr<string> code_ {};
        // API version.
        shared_ptr<string> version_ {};
      };

      virtual bool empty() const override { return this->excludeApiList_ == nullptr
        && this->hit_ == nullptr; };
      // excludeApiList Field Functions 
      bool hasExcludeApiList() const { return this->excludeApiList_ != nullptr;};
      void deleteExcludeApiList() { this->excludeApiList_ = nullptr;};
      inline const vector<Data::ExcludeApiList> & getExcludeApiList() const { DARABONBA_PTR_GET_CONST(excludeApiList_, vector<Data::ExcludeApiList>) };
      inline vector<Data::ExcludeApiList> getExcludeApiList() { DARABONBA_PTR_GET(excludeApiList_, vector<Data::ExcludeApiList>) };
      inline Data& setExcludeApiList(const vector<Data::ExcludeApiList> & excludeApiList) { DARABONBA_PTR_SET_VALUE(excludeApiList_, excludeApiList) };
      inline Data& setExcludeApiList(vector<Data::ExcludeApiList> && excludeApiList) { DARABONBA_PTR_SET_RVALUE(excludeApiList_, excludeApiList) };


      // hit Field Functions 
      bool hasHit() const { return this->hit_ != nullptr;};
      void deleteHit() { this->hit_ = nullptr;};
      inline bool getHit() const { DARABONBA_PTR_GET_DEFAULT(hit_, false) };
      inline Data& setHit(bool hit) { DARABONBA_PTR_SET_VALUE(hit_, hit) };


    protected:
      // List of APIs not hit.
      shared_ptr<vector<Data::ExcludeApiList>> excludeApiList_ {};
      // Whether it hits the gray status.
      shared_ptr<bool> hit_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetConsoleFuncGrayStatusResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetConsoleFuncGrayStatusResponseBody::Data) };
    inline GetConsoleFuncGrayStatusResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetConsoleFuncGrayStatusResponseBody::Data) };
    inline GetConsoleFuncGrayStatusResponseBody& setData(const GetConsoleFuncGrayStatusResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetConsoleFuncGrayStatusResponseBody& setData(GetConsoleFuncGrayStatusResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetConsoleFuncGrayStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Return result.
    shared_ptr<GetConsoleFuncGrayStatusResponseBody::Data> data_ {};
    // The ID of this call request, which is a unique identifier generated by Alibaba Cloud for the request. It can be used to troubleshoot and pinpoint issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
