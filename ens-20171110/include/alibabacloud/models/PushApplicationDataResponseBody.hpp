// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUSHAPPLICATIONDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_PUSHAPPLICATIONDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class PushApplicationDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PushApplicationDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PushResults, pushResults_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, PushApplicationDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PushResults, pushResults_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    PushApplicationDataResponseBody() = default ;
    PushApplicationDataResponseBody(const PushApplicationDataResponseBody &) = default ;
    PushApplicationDataResponseBody(PushApplicationDataResponseBody &&) = default ;
    PushApplicationDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PushApplicationDataResponseBody() = default ;
    PushApplicationDataResponseBody& operator=(const PushApplicationDataResponseBody &) = default ;
    PushApplicationDataResponseBody& operator=(PushApplicationDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PushResults : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PushResults& obj) { 
        DARABONBA_PTR_TO_JSON(PushResult, pushResult_);
      };
      friend void from_json(const Darabonba::Json& j, PushResults& obj) { 
        DARABONBA_PTR_FROM_JSON(PushResult, pushResult_);
      };
      PushResults() = default ;
      PushResults(const PushResults &) = default ;
      PushResults(PushResults &&) = default ;
      PushResults(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PushResults() = default ;
      PushResults& operator=(const PushResults &) = default ;
      PushResults& operator=(PushResults &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class PushResult : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PushResult& obj) { 
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(ResultCode, resultCode_);
          DARABONBA_PTR_TO_JSON(ResultDescrip, resultDescrip_);
          DARABONBA_PTR_TO_JSON(Version, version_);
        };
        friend void from_json(const Darabonba::Json& j, PushResult& obj) { 
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(ResultCode, resultCode_);
          DARABONBA_PTR_FROM_JSON(ResultDescrip, resultDescrip_);
          DARABONBA_PTR_FROM_JSON(Version, version_);
        };
        PushResult() = default ;
        PushResult(const PushResult &) = default ;
        PushResult(PushResult &&) = default ;
        PushResult(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PushResult() = default ;
        PushResult& operator=(const PushResult &) = default ;
        PushResult& operator=(PushResult &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->name_ == nullptr
        && this->resultCode_ == nullptr && this->resultDescrip_ == nullptr && this->version_ == nullptr; };
        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline PushResult& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // resultCode Field Functions 
        bool hasResultCode() const { return this->resultCode_ != nullptr;};
        void deleteResultCode() { this->resultCode_ = nullptr;};
        inline int32_t getResultCode() const { DARABONBA_PTR_GET_DEFAULT(resultCode_, 0) };
        inline PushResult& setResultCode(int32_t resultCode) { DARABONBA_PTR_SET_VALUE(resultCode_, resultCode) };


        // resultDescrip Field Functions 
        bool hasResultDescrip() const { return this->resultDescrip_ != nullptr;};
        void deleteResultDescrip() { this->resultDescrip_ = nullptr;};
        inline string getResultDescrip() const { DARABONBA_PTR_GET_DEFAULT(resultDescrip_, "") };
        inline PushResult& setResultDescrip(string resultDescrip) { DARABONBA_PTR_SET_VALUE(resultDescrip_, resultDescrip) };


        // version Field Functions 
        bool hasVersion() const { return this->version_ != nullptr;};
        void deleteVersion() { this->version_ = nullptr;};
        inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
        inline PushResult& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


      protected:
        // The name of the data file.
        shared_ptr<string> name_ {};
        // The push result. The value is of the enumeration type. Valid values:
        // 
        // *   0: The push operation is successful.
        // *   100: The push operation has been performed and the file is pushed.
        // *   200: The push operation has been performed and the file is being pushed to specific file servers.
        // *   300: The push operation failed. You must trigger the push operation again. The ResultDescrip parameter indicates the error description.
        shared_ptr<int32_t> resultCode_ {};
        // The description of the push status.
        shared_ptr<string> resultDescrip_ {};
        // The version number of the data file.
        shared_ptr<string> version_ {};
      };

      virtual bool empty() const override { return this->pushResult_ == nullptr; };
      // pushResult Field Functions 
      bool hasPushResult() const { return this->pushResult_ != nullptr;};
      void deletePushResult() { this->pushResult_ = nullptr;};
      inline const vector<PushResults::PushResult> & getPushResult() const { DARABONBA_PTR_GET_CONST(pushResult_, vector<PushResults::PushResult>) };
      inline vector<PushResults::PushResult> getPushResult() { DARABONBA_PTR_GET(pushResult_, vector<PushResults::PushResult>) };
      inline PushResults& setPushResult(const vector<PushResults::PushResult> & pushResult) { DARABONBA_PTR_SET_VALUE(pushResult_, pushResult) };
      inline PushResults& setPushResult(vector<PushResults::PushResult> && pushResult) { DARABONBA_PTR_SET_RVALUE(pushResult_, pushResult) };


    protected:
      shared_ptr<vector<PushResults::PushResult>> pushResult_ {};
    };

    virtual bool empty() const override { return this->pushResults_ == nullptr
        && this->requestId_ == nullptr; };
    // pushResults Field Functions 
    bool hasPushResults() const { return this->pushResults_ != nullptr;};
    void deletePushResults() { this->pushResults_ = nullptr;};
    inline const PushApplicationDataResponseBody::PushResults & getPushResults() const { DARABONBA_PTR_GET_CONST(pushResults_, PushApplicationDataResponseBody::PushResults) };
    inline PushApplicationDataResponseBody::PushResults getPushResults() { DARABONBA_PTR_GET(pushResults_, PushApplicationDataResponseBody::PushResults) };
    inline PushApplicationDataResponseBody& setPushResults(const PushApplicationDataResponseBody::PushResults & pushResults) { DARABONBA_PTR_SET_VALUE(pushResults_, pushResults) };
    inline PushApplicationDataResponseBody& setPushResults(PushApplicationDataResponseBody::PushResults && pushResults) { DARABONBA_PTR_SET_RVALUE(pushResults_, pushResults) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline PushApplicationDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The push results of data files.
    shared_ptr<PushApplicationDataResponseBody::PushResults> pushResults_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
