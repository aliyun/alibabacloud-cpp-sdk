// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DISTAPPLICATIONDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DISTAPPLICATIONDATARESPONSEBODY_HPP_
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
  class DistApplicationDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DistApplicationDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DistInstanceIds, distInstanceIds_);
      DARABONBA_PTR_TO_JSON(DistInstanceTotalCount, distInstanceTotalCount_);
      DARABONBA_PTR_TO_JSON(DistResults, distResults_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DistApplicationDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DistInstanceIds, distInstanceIds_);
      DARABONBA_PTR_FROM_JSON(DistInstanceTotalCount, distInstanceTotalCount_);
      DARABONBA_PTR_FROM_JSON(DistResults, distResults_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DistApplicationDataResponseBody() = default ;
    DistApplicationDataResponseBody(const DistApplicationDataResponseBody &) = default ;
    DistApplicationDataResponseBody(DistApplicationDataResponseBody &&) = default ;
    DistApplicationDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DistApplicationDataResponseBody() = default ;
    DistApplicationDataResponseBody& operator=(const DistApplicationDataResponseBody &) = default ;
    DistApplicationDataResponseBody& operator=(DistApplicationDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DistResults : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DistResults& obj) { 
        DARABONBA_PTR_TO_JSON(DistResult, distResult_);
      };
      friend void from_json(const Darabonba::Json& j, DistResults& obj) { 
        DARABONBA_PTR_FROM_JSON(DistResult, distResult_);
      };
      DistResults() = default ;
      DistResults(const DistResults &) = default ;
      DistResults(DistResults &&) = default ;
      DistResults(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DistResults() = default ;
      DistResults& operator=(const DistResults &) = default ;
      DistResults& operator=(DistResults &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DistResult : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DistResult& obj) { 
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(ResultCode, resultCode_);
          DARABONBA_PTR_TO_JSON(ResultDescrip, resultDescrip_);
          DARABONBA_PTR_TO_JSON(Version, version_);
        };
        friend void from_json(const Darabonba::Json& j, DistResult& obj) { 
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(ResultCode, resultCode_);
          DARABONBA_PTR_FROM_JSON(ResultDescrip, resultDescrip_);
          DARABONBA_PTR_FROM_JSON(Version, version_);
        };
        DistResult() = default ;
        DistResult(const DistResult &) = default ;
        DistResult(DistResult &&) = default ;
        DistResult(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DistResult() = default ;
        DistResult& operator=(const DistResult &) = default ;
        DistResult& operator=(DistResult &&) = default ;
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
        inline DistResult& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // resultCode Field Functions 
        bool hasResultCode() const { return this->resultCode_ != nullptr;};
        void deleteResultCode() { this->resultCode_ = nullptr;};
        inline int32_t getResultCode() const { DARABONBA_PTR_GET_DEFAULT(resultCode_, 0) };
        inline DistResult& setResultCode(int32_t resultCode) { DARABONBA_PTR_SET_VALUE(resultCode_, resultCode) };


        // resultDescrip Field Functions 
        bool hasResultDescrip() const { return this->resultDescrip_ != nullptr;};
        void deleteResultDescrip() { this->resultDescrip_ = nullptr;};
        inline string getResultDescrip() const { DARABONBA_PTR_GET_DEFAULT(resultDescrip_, "") };
        inline DistResult& setResultDescrip(string resultDescrip) { DARABONBA_PTR_SET_VALUE(resultDescrip_, resultDescrip) };


        // version Field Functions 
        bool hasVersion() const { return this->version_ != nullptr;};
        void deleteVersion() { this->version_ = nullptr;};
        inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
        inline DistResult& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


      protected:
        // The name of the data file.
        shared_ptr<string> name_ {};
        // The error code. The value is of the enumerated data type.
        shared_ptr<int32_t> resultCode_ {};
        // The description of the distribution result.
        shared_ptr<string> resultDescrip_ {};
        // The version number of the data file.
        shared_ptr<string> version_ {};
      };

      virtual bool empty() const override { return this->distResult_ == nullptr; };
      // distResult Field Functions 
      bool hasDistResult() const { return this->distResult_ != nullptr;};
      void deleteDistResult() { this->distResult_ = nullptr;};
      inline const vector<DistResults::DistResult> & getDistResult() const { DARABONBA_PTR_GET_CONST(distResult_, vector<DistResults::DistResult>) };
      inline vector<DistResults::DistResult> getDistResult() { DARABONBA_PTR_GET(distResult_, vector<DistResults::DistResult>) };
      inline DistResults& setDistResult(const vector<DistResults::DistResult> & distResult) { DARABONBA_PTR_SET_VALUE(distResult_, distResult) };
      inline DistResults& setDistResult(vector<DistResults::DistResult> && distResult) { DARABONBA_PTR_SET_RVALUE(distResult_, distResult) };


    protected:
      shared_ptr<vector<DistResults::DistResult>> distResult_ {};
    };

    class DistInstanceIds : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DistInstanceIds& obj) { 
        DARABONBA_PTR_TO_JSON(DistInstanceId, distInstanceId_);
      };
      friend void from_json(const Darabonba::Json& j, DistInstanceIds& obj) { 
        DARABONBA_PTR_FROM_JSON(DistInstanceId, distInstanceId_);
      };
      DistInstanceIds() = default ;
      DistInstanceIds(const DistInstanceIds &) = default ;
      DistInstanceIds(DistInstanceIds &&) = default ;
      DistInstanceIds(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DistInstanceIds() = default ;
      DistInstanceIds& operator=(const DistInstanceIds &) = default ;
      DistInstanceIds& operator=(DistInstanceIds &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->distInstanceId_ == nullptr; };
      // distInstanceId Field Functions 
      bool hasDistInstanceId() const { return this->distInstanceId_ != nullptr;};
      void deleteDistInstanceId() { this->distInstanceId_ = nullptr;};
      inline const vector<string> & getDistInstanceId() const { DARABONBA_PTR_GET_CONST(distInstanceId_, vector<string>) };
      inline vector<string> getDistInstanceId() { DARABONBA_PTR_GET(distInstanceId_, vector<string>) };
      inline DistInstanceIds& setDistInstanceId(const vector<string> & distInstanceId) { DARABONBA_PTR_SET_VALUE(distInstanceId_, distInstanceId) };
      inline DistInstanceIds& setDistInstanceId(vector<string> && distInstanceId) { DARABONBA_PTR_SET_RVALUE(distInstanceId_, distInstanceId) };


    protected:
      shared_ptr<vector<string>> distInstanceId_ {};
    };

    virtual bool empty() const override { return this->distInstanceIds_ == nullptr
        && this->distInstanceTotalCount_ == nullptr && this->distResults_ == nullptr && this->requestId_ == nullptr; };
    // distInstanceIds Field Functions 
    bool hasDistInstanceIds() const { return this->distInstanceIds_ != nullptr;};
    void deleteDistInstanceIds() { this->distInstanceIds_ = nullptr;};
    inline const DistApplicationDataResponseBody::DistInstanceIds & getDistInstanceIds() const { DARABONBA_PTR_GET_CONST(distInstanceIds_, DistApplicationDataResponseBody::DistInstanceIds) };
    inline DistApplicationDataResponseBody::DistInstanceIds getDistInstanceIds() { DARABONBA_PTR_GET(distInstanceIds_, DistApplicationDataResponseBody::DistInstanceIds) };
    inline DistApplicationDataResponseBody& setDistInstanceIds(const DistApplicationDataResponseBody::DistInstanceIds & distInstanceIds) { DARABONBA_PTR_SET_VALUE(distInstanceIds_, distInstanceIds) };
    inline DistApplicationDataResponseBody& setDistInstanceIds(DistApplicationDataResponseBody::DistInstanceIds && distInstanceIds) { DARABONBA_PTR_SET_RVALUE(distInstanceIds_, distInstanceIds) };


    // distInstanceTotalCount Field Functions 
    bool hasDistInstanceTotalCount() const { return this->distInstanceTotalCount_ != nullptr;};
    void deleteDistInstanceTotalCount() { this->distInstanceTotalCount_ = nullptr;};
    inline int32_t getDistInstanceTotalCount() const { DARABONBA_PTR_GET_DEFAULT(distInstanceTotalCount_, 0) };
    inline DistApplicationDataResponseBody& setDistInstanceTotalCount(int32_t distInstanceTotalCount) { DARABONBA_PTR_SET_VALUE(distInstanceTotalCount_, distInstanceTotalCount) };


    // distResults Field Functions 
    bool hasDistResults() const { return this->distResults_ != nullptr;};
    void deleteDistResults() { this->distResults_ = nullptr;};
    inline const DistApplicationDataResponseBody::DistResults & getDistResults() const { DARABONBA_PTR_GET_CONST(distResults_, DistApplicationDataResponseBody::DistResults) };
    inline DistApplicationDataResponseBody::DistResults getDistResults() { DARABONBA_PTR_GET(distResults_, DistApplicationDataResponseBody::DistResults) };
    inline DistApplicationDataResponseBody& setDistResults(const DistApplicationDataResponseBody::DistResults & distResults) { DARABONBA_PTR_SET_VALUE(distResults_, distResults) };
    inline DistApplicationDataResponseBody& setDistResults(DistApplicationDataResponseBody::DistResults && distResults) { DARABONBA_PTR_SET_RVALUE(distResults_, distResults) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DistApplicationDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The list of ENS instance IDs.
    shared_ptr<DistApplicationDataResponseBody::DistInstanceIds> distInstanceIds_ {};
    // The total number of ENS instance IDs.
    shared_ptr<int32_t> distInstanceTotalCount_ {};
    // The distribution result of the data file.
    shared_ptr<DistApplicationDataResponseBody::DistResults> distResults_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
