// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEENABLEDCROSSREGIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEENABLEDCROSSREGIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class DescribeEnabledCrossRegionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEnabledCrossRegionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEnabledCrossRegionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeEnabledCrossRegionsResponseBody() = default ;
    DescribeEnabledCrossRegionsResponseBody(const DescribeEnabledCrossRegionsResponseBody &) = default ;
    DescribeEnabledCrossRegionsResponseBody(DescribeEnabledCrossRegionsResponseBody &&) = default ;
    DescribeEnabledCrossRegionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEnabledCrossRegionsResponseBody() = default ;
    DescribeEnabledCrossRegionsResponseBody& operator=(const DescribeEnabledCrossRegionsResponseBody &) = default ;
    DescribeEnabledCrossRegionsResponseBody& operator=(DescribeEnabledCrossRegionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Regions, regions_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Regions, regions_);
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
      virtual bool empty() const override { return this->regions_ == nullptr; };
      // regions Field Functions 
      bool hasRegions() const { return this->regions_ != nullptr;};
      void deleteRegions() { this->regions_ = nullptr;};
      inline const vector<string> & getRegions() const { DARABONBA_PTR_GET_CONST(regions_, vector<string>) };
      inline vector<string> getRegions() { DARABONBA_PTR_GET(regions_, vector<string>) };
      inline Data& setRegions(const vector<string> & regions) { DARABONBA_PTR_SET_VALUE(regions_, regions) };
      inline Data& setRegions(vector<string> && regions) { DARABONBA_PTR_SET_RVALUE(regions_, regions) };


    protected:
      shared_ptr<vector<string>> regions_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<DescribeEnabledCrossRegionsResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<DescribeEnabledCrossRegionsResponseBody::Data>) };
    inline vector<DescribeEnabledCrossRegionsResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<DescribeEnabledCrossRegionsResponseBody::Data>) };
    inline DescribeEnabledCrossRegionsResponseBody& setData(const vector<DescribeEnabledCrossRegionsResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeEnabledCrossRegionsResponseBody& setData(vector<DescribeEnabledCrossRegionsResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeEnabledCrossRegionsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeEnabledCrossRegionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeEnabledCrossRegionsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<vector<DescribeEnabledCrossRegionsResponseBody::Data>> data_ {};
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
