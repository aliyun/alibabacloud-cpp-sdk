// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETYZDINSTANCETASKRESULTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETYZDINSTANCETASKRESULTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace UmengFinplus20220913
{
namespace Models
{
  class GetYzdInstanceTaskResultRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetYzdInstanceTaskResultRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, GetYzdInstanceTaskResultRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    GetYzdInstanceTaskResultRequest() = default ;
    GetYzdInstanceTaskResultRequest(const GetYzdInstanceTaskResultRequest &) = default ;
    GetYzdInstanceTaskResultRequest(GetYzdInstanceTaskResultRequest &&) = default ;
    GetYzdInstanceTaskResultRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetYzdInstanceTaskResultRequest() = default ;
    GetYzdInstanceTaskResultRequest& operator=(const GetYzdInstanceTaskResultRequest &) = default ;
    GetYzdInstanceTaskResultRequest& operator=(GetYzdInstanceTaskResultRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Body : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Body& obj) { 
        DARABONBA_PTR_TO_JSON(appId, appId_);
        DARABONBA_PTR_TO_JSON(rangeTimeEndTime, rangeTimeEndTime_);
        DARABONBA_PTR_TO_JSON(rangeTimeStartTime, rangeTimeStartTime_);
      };
      friend void from_json(const Darabonba::Json& j, Body& obj) { 
        DARABONBA_PTR_FROM_JSON(appId, appId_);
        DARABONBA_PTR_FROM_JSON(rangeTimeEndTime, rangeTimeEndTime_);
        DARABONBA_PTR_FROM_JSON(rangeTimeStartTime, rangeTimeStartTime_);
      };
      Body() = default ;
      Body(const Body &) = default ;
      Body(Body &&) = default ;
      Body(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Body() = default ;
      Body& operator=(const Body &) = default ;
      Body& operator=(Body &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->appId_ == nullptr
        && this->rangeTimeEndTime_ == nullptr && this->rangeTimeStartTime_ == nullptr; };
      // appId Field Functions 
      bool hasAppId() const { return this->appId_ != nullptr;};
      void deleteAppId() { this->appId_ = nullptr;};
      inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
      inline Body& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


      // rangeTimeEndTime Field Functions 
      bool hasRangeTimeEndTime() const { return this->rangeTimeEndTime_ != nullptr;};
      void deleteRangeTimeEndTime() { this->rangeTimeEndTime_ = nullptr;};
      inline string getRangeTimeEndTime() const { DARABONBA_PTR_GET_DEFAULT(rangeTimeEndTime_, "") };
      inline Body& setRangeTimeEndTime(string rangeTimeEndTime) { DARABONBA_PTR_SET_VALUE(rangeTimeEndTime_, rangeTimeEndTime) };


      // rangeTimeStartTime Field Functions 
      bool hasRangeTimeStartTime() const { return this->rangeTimeStartTime_ != nullptr;};
      void deleteRangeTimeStartTime() { this->rangeTimeStartTime_ = nullptr;};
      inline string getRangeTimeStartTime() const { DARABONBA_PTR_GET_DEFAULT(rangeTimeStartTime_, "") };
      inline Body& setRangeTimeStartTime(string rangeTimeStartTime) { DARABONBA_PTR_SET_VALUE(rangeTimeStartTime_, rangeTimeStartTime) };


    protected:
      shared_ptr<string> appId_ {};
      shared_ptr<string> rangeTimeEndTime_ {};
      shared_ptr<string> rangeTimeStartTime_ {};
    };

    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const GetYzdInstanceTaskResultRequest::Body & getBody() const { DARABONBA_PTR_GET_CONST(body_, GetYzdInstanceTaskResultRequest::Body) };
    inline GetYzdInstanceTaskResultRequest::Body getBody() { DARABONBA_PTR_GET(body_, GetYzdInstanceTaskResultRequest::Body) };
    inline GetYzdInstanceTaskResultRequest& setBody(const GetYzdInstanceTaskResultRequest::Body & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline GetYzdInstanceTaskResultRequest& setBody(GetYzdInstanceTaskResultRequest::Body && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<GetYzdInstanceTaskResultRequest::Body> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace UmengFinplus20220913
#endif
