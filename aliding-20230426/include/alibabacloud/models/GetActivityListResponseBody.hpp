// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETACTIVITYLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETACTIVITYLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetActivityListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetActivityListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(result, result_);
      DARABONBA_PTR_TO_JSON(vendorRequestId, vendorRequestId_);
      DARABONBA_PTR_TO_JSON(vendorType, vendorType_);
    };
    friend void from_json(const Darabonba::Json& j, GetActivityListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(result, result_);
      DARABONBA_PTR_FROM_JSON(vendorRequestId, vendorRequestId_);
      DARABONBA_PTR_FROM_JSON(vendorType, vendorType_);
    };
    GetActivityListResponseBody() = default ;
    GetActivityListResponseBody(const GetActivityListResponseBody &) = default ;
    GetActivityListResponseBody(GetActivityListResponseBody &&) = default ;
    GetActivityListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetActivityListResponseBody() = default ;
    GetActivityListResponseBody& operator=(const GetActivityListResponseBody &) = default ;
    GetActivityListResponseBody& operator=(GetActivityListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(ActivityId, activityId_);
        DARABONBA_PTR_TO_JSON(ActivityName, activityName_);
        DARABONBA_PTR_TO_JSON(ActivityNameInEnglish, activityNameInEnglish_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(ActivityId, activityId_);
        DARABONBA_PTR_FROM_JSON(ActivityName, activityName_);
        DARABONBA_PTR_FROM_JSON(ActivityNameInEnglish, activityNameInEnglish_);
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
      virtual bool empty() const override { return this->activityId_ == nullptr
        && this->activityName_ == nullptr && this->activityNameInEnglish_ == nullptr; };
      // activityId Field Functions 
      bool hasActivityId() const { return this->activityId_ != nullptr;};
      void deleteActivityId() { this->activityId_ = nullptr;};
      inline string getActivityId() const { DARABONBA_PTR_GET_DEFAULT(activityId_, "") };
      inline Result& setActivityId(string activityId) { DARABONBA_PTR_SET_VALUE(activityId_, activityId) };


      // activityName Field Functions 
      bool hasActivityName() const { return this->activityName_ != nullptr;};
      void deleteActivityName() { this->activityName_ = nullptr;};
      inline string getActivityName() const { DARABONBA_PTR_GET_DEFAULT(activityName_, "") };
      inline Result& setActivityName(string activityName) { DARABONBA_PTR_SET_VALUE(activityName_, activityName) };


      // activityNameInEnglish Field Functions 
      bool hasActivityNameInEnglish() const { return this->activityNameInEnglish_ != nullptr;};
      void deleteActivityNameInEnglish() { this->activityNameInEnglish_ = nullptr;};
      inline string getActivityNameInEnglish() const { DARABONBA_PTR_GET_DEFAULT(activityNameInEnglish_, "") };
      inline Result& setActivityNameInEnglish(string activityNameInEnglish) { DARABONBA_PTR_SET_VALUE(activityNameInEnglish_, activityNameInEnglish) };


    protected:
      shared_ptr<string> activityId_ {};
      shared_ptr<string> activityName_ {};
      shared_ptr<string> activityNameInEnglish_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr && this->vendorRequestId_ == nullptr && this->vendorType_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetActivityListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<GetActivityListResponseBody::Result> & getResult() const { DARABONBA_PTR_GET_CONST(result_, vector<GetActivityListResponseBody::Result>) };
    inline vector<GetActivityListResponseBody::Result> getResult() { DARABONBA_PTR_GET(result_, vector<GetActivityListResponseBody::Result>) };
    inline GetActivityListResponseBody& setResult(const vector<GetActivityListResponseBody::Result> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline GetActivityListResponseBody& setResult(vector<GetActivityListResponseBody::Result> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // vendorRequestId Field Functions 
    bool hasVendorRequestId() const { return this->vendorRequestId_ != nullptr;};
    void deleteVendorRequestId() { this->vendorRequestId_ = nullptr;};
    inline string getVendorRequestId() const { DARABONBA_PTR_GET_DEFAULT(vendorRequestId_, "") };
    inline GetActivityListResponseBody& setVendorRequestId(string vendorRequestId) { DARABONBA_PTR_SET_VALUE(vendorRequestId_, vendorRequestId) };


    // vendorType Field Functions 
    bool hasVendorType() const { return this->vendorType_ != nullptr;};
    void deleteVendorType() { this->vendorType_ = nullptr;};
    inline string getVendorType() const { DARABONBA_PTR_GET_DEFAULT(vendorType_, "") };
    inline GetActivityListResponseBody& setVendorType(string vendorType) { DARABONBA_PTR_SET_VALUE(vendorType_, vendorType) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<GetActivityListResponseBody::Result>> result_ {};
    shared_ptr<string> vendorRequestId_ {};
    shared_ptr<string> vendorType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
