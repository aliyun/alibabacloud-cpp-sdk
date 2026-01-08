// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEURLMODERATIONRESULTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEURLMODERATIONRESULTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220302
{
namespace Models
{
  class DescribeUrlModerationResultResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUrlModerationResultResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Msg, msg_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUrlModerationResultResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Msg, msg_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeUrlModerationResultResponseBody() = default ;
    DescribeUrlModerationResultResponseBody(const DescribeUrlModerationResultResponseBody &) = default ;
    DescribeUrlModerationResultResponseBody(DescribeUrlModerationResultResponseBody &&) = default ;
    DescribeUrlModerationResultResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUrlModerationResultResponseBody() = default ;
    DescribeUrlModerationResultResponseBody& operator=(const DescribeUrlModerationResultResponseBody &) = default ;
    DescribeUrlModerationResultResponseBody& operator=(DescribeUrlModerationResultResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(DataId, dataId_);
        DARABONBA_PTR_TO_JSON(ExtraInfo, extraInfo_);
        DARABONBA_PTR_TO_JSON(ReqId, reqId_);
        DARABONBA_PTR_TO_JSON(Result, result_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(DataId, dataId_);
        DARABONBA_PTR_FROM_JSON(ExtraInfo, extraInfo_);
        DARABONBA_PTR_FROM_JSON(ReqId, reqId_);
        DARABONBA_PTR_FROM_JSON(Result, result_);
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
      class Result : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Result& obj) { 
          DARABONBA_PTR_TO_JSON(Confidence, confidence_);
          DARABONBA_PTR_TO_JSON(Label, label_);
        };
        friend void from_json(const Darabonba::Json& j, Result& obj) { 
          DARABONBA_PTR_FROM_JSON(Confidence, confidence_);
          DARABONBA_PTR_FROM_JSON(Label, label_);
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
        virtual bool empty() const override { return this->confidence_ == nullptr
        && this->label_ == nullptr; };
        // confidence Field Functions 
        bool hasConfidence() const { return this->confidence_ != nullptr;};
        void deleteConfidence() { this->confidence_ = nullptr;};
        inline float getConfidence() const { DARABONBA_PTR_GET_DEFAULT(confidence_, 0.0) };
        inline Result& setConfidence(float confidence) { DARABONBA_PTR_SET_VALUE(confidence_, confidence) };


        // label Field Functions 
        bool hasLabel() const { return this->label_ != nullptr;};
        void deleteLabel() { this->label_ = nullptr;};
        inline string getLabel() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
        inline Result& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


      protected:
        // The score of the confidence level. Valid values: 0 to 100. The value is accurate to two decimal places.
        shared_ptr<float> confidence_ {};
        // The labels returned after the asynchronous URL moderation.
        shared_ptr<string> label_ {};
      };

      class ExtraInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ExtraInfo& obj) { 
          DARABONBA_PTR_TO_JSON(IcpNo, icpNo_);
          DARABONBA_PTR_TO_JSON(IcpType, icpType_);
          DARABONBA_PTR_TO_JSON(SiteType, siteType_);
        };
        friend void from_json(const Darabonba::Json& j, ExtraInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(IcpNo, icpNo_);
          DARABONBA_PTR_FROM_JSON(IcpType, icpType_);
          DARABONBA_PTR_FROM_JSON(SiteType, siteType_);
        };
        ExtraInfo() = default ;
        ExtraInfo(const ExtraInfo &) = default ;
        ExtraInfo(ExtraInfo &&) = default ;
        ExtraInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ExtraInfo() = default ;
        ExtraInfo& operator=(const ExtraInfo &) = default ;
        ExtraInfo& operator=(ExtraInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->icpNo_ == nullptr
        && this->icpType_ == nullptr && this->siteType_ == nullptr; };
        // icpNo Field Functions 
        bool hasIcpNo() const { return this->icpNo_ != nullptr;};
        void deleteIcpNo() { this->icpNo_ = nullptr;};
        inline string getIcpNo() const { DARABONBA_PTR_GET_DEFAULT(icpNo_, "") };
        inline ExtraInfo& setIcpNo(string icpNo) { DARABONBA_PTR_SET_VALUE(icpNo_, icpNo) };


        // icpType Field Functions 
        bool hasIcpType() const { return this->icpType_ != nullptr;};
        void deleteIcpType() { this->icpType_ = nullptr;};
        inline string getIcpType() const { DARABONBA_PTR_GET_DEFAULT(icpType_, "") };
        inline ExtraInfo& setIcpType(string icpType) { DARABONBA_PTR_SET_VALUE(icpType_, icpType) };


        // siteType Field Functions 
        bool hasSiteType() const { return this->siteType_ != nullptr;};
        void deleteSiteType() { this->siteType_ = nullptr;};
        inline string getSiteType() const { DARABONBA_PTR_GET_DEFAULT(siteType_, "") };
        inline ExtraInfo& setSiteType(string siteType) { DARABONBA_PTR_SET_VALUE(siteType_, siteType) };


      protected:
        // The ICP number.
        shared_ptr<string> icpNo_ {};
        // The type of the ICP filing.
        shared_ptr<string> icpType_ {};
        // The type of site
        shared_ptr<string> siteType_ {};
      };

      virtual bool empty() const override { return this->dataId_ == nullptr
        && this->extraInfo_ == nullptr && this->reqId_ == nullptr && this->result_ == nullptr; };
      // dataId Field Functions 
      bool hasDataId() const { return this->dataId_ != nullptr;};
      void deleteDataId() { this->dataId_ = nullptr;};
      inline string getDataId() const { DARABONBA_PTR_GET_DEFAULT(dataId_, "") };
      inline Data& setDataId(string dataId) { DARABONBA_PTR_SET_VALUE(dataId_, dataId) };


      // extraInfo Field Functions 
      bool hasExtraInfo() const { return this->extraInfo_ != nullptr;};
      void deleteExtraInfo() { this->extraInfo_ = nullptr;};
      inline const Data::ExtraInfo & getExtraInfo() const { DARABONBA_PTR_GET_CONST(extraInfo_, Data::ExtraInfo) };
      inline Data::ExtraInfo getExtraInfo() { DARABONBA_PTR_GET(extraInfo_, Data::ExtraInfo) };
      inline Data& setExtraInfo(const Data::ExtraInfo & extraInfo) { DARABONBA_PTR_SET_VALUE(extraInfo_, extraInfo) };
      inline Data& setExtraInfo(Data::ExtraInfo && extraInfo) { DARABONBA_PTR_SET_RVALUE(extraInfo_, extraInfo) };


      // reqId Field Functions 
      bool hasReqId() const { return this->reqId_ != nullptr;};
      void deleteReqId() { this->reqId_ = nullptr;};
      inline string getReqId() const { DARABONBA_PTR_GET_DEFAULT(reqId_, "") };
      inline Data& setReqId(string reqId) { DARABONBA_PTR_SET_VALUE(reqId_, reqId) };


      // result Field Functions 
      bool hasResult() const { return this->result_ != nullptr;};
      void deleteResult() { this->result_ = nullptr;};
      inline const vector<Data::Result> & getResult() const { DARABONBA_PTR_GET_CONST(result_, vector<Data::Result>) };
      inline vector<Data::Result> getResult() { DARABONBA_PTR_GET(result_, vector<Data::Result>) };
      inline Data& setResult(const vector<Data::Result> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
      inline Data& setResult(vector<Data::Result> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    protected:
      // The value of dataId that is specified in the API request. If this parameter is not specified in the API request, this field is not available in the response.
      shared_ptr<string> dataId_ {};
      // The supplementary information.
      shared_ptr<Data::ExtraInfo> extraInfo_ {};
      // The ReqId field returned by an asynchronous URL moderation operation.
      shared_ptr<string> reqId_ {};
      // The returned results.
      shared_ptr<vector<Data::Result>> result_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->msg_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline DescribeUrlModerationResultResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeUrlModerationResultResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeUrlModerationResultResponseBody::Data) };
    inline DescribeUrlModerationResultResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeUrlModerationResultResponseBody::Data) };
    inline DescribeUrlModerationResultResponseBody& setData(const DescribeUrlModerationResultResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeUrlModerationResultResponseBody& setData(DescribeUrlModerationResultResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // msg Field Functions 
    bool hasMsg() const { return this->msg_ != nullptr;};
    void deleteMsg() { this->msg_ = nullptr;};
    inline string getMsg() const { DARABONBA_PTR_GET_DEFAULT(msg_, "") };
    inline DescribeUrlModerationResultResponseBody& setMsg(string msg) { DARABONBA_PTR_SET_VALUE(msg_, msg) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeUrlModerationResultResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned HTTP status code. The status code 200 indicates that the request was successful.
    shared_ptr<int32_t> code_ {};
    // The data returned.
    shared_ptr<DescribeUrlModerationResultResponseBody::Data> data_ {};
    // The message that is returned in response to the request.
    shared_ptr<string> msg_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220302
#endif
