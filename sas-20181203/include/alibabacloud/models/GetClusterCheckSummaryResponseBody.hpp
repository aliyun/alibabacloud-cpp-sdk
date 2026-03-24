// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCLUSTERCHECKSUMMARYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCLUSTERCHECKSUMMARYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetClusterCheckSummaryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetClusterCheckSummaryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetClusterCheckSummaryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetClusterCheckSummaryResponseBody() = default ;
    GetClusterCheckSummaryResponseBody(const GetClusterCheckSummaryResponseBody &) = default ;
    GetClusterCheckSummaryResponseBody(GetClusterCheckSummaryResponseBody &&) = default ;
    GetClusterCheckSummaryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetClusterCheckSummaryResponseBody() = default ;
    GetClusterCheckSummaryResponseBody& operator=(const GetClusterCheckSummaryResponseBody &) = default ;
    GetClusterCheckSummaryResponseBody& operator=(GetClusterCheckSummaryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(NotPassCount, notPassCount_);
        DARABONBA_PTR_TO_JSON(NotPassHighCount, notPassHighCount_);
        DARABONBA_PTR_TO_JSON(NotPassLowCount, notPassLowCount_);
        DARABONBA_PTR_TO_JSON(NotPassMediumCount, notPassMediumCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(NotPassCount, notPassCount_);
        DARABONBA_PTR_FROM_JSON(NotPassHighCount, notPassHighCount_);
        DARABONBA_PTR_FROM_JSON(NotPassLowCount, notPassLowCount_);
        DARABONBA_PTR_FROM_JSON(NotPassMediumCount, notPassMediumCount_);
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
      virtual bool empty() const override { return this->notPassCount_ == nullptr
        && this->notPassHighCount_ == nullptr && this->notPassLowCount_ == nullptr && this->notPassMediumCount_ == nullptr; };
      // notPassCount Field Functions 
      bool hasNotPassCount() const { return this->notPassCount_ != nullptr;};
      void deleteNotPassCount() { this->notPassCount_ = nullptr;};
      inline int32_t getNotPassCount() const { DARABONBA_PTR_GET_DEFAULT(notPassCount_, 0) };
      inline Data& setNotPassCount(int32_t notPassCount) { DARABONBA_PTR_SET_VALUE(notPassCount_, notPassCount) };


      // notPassHighCount Field Functions 
      bool hasNotPassHighCount() const { return this->notPassHighCount_ != nullptr;};
      void deleteNotPassHighCount() { this->notPassHighCount_ = nullptr;};
      inline int32_t getNotPassHighCount() const { DARABONBA_PTR_GET_DEFAULT(notPassHighCount_, 0) };
      inline Data& setNotPassHighCount(int32_t notPassHighCount) { DARABONBA_PTR_SET_VALUE(notPassHighCount_, notPassHighCount) };


      // notPassLowCount Field Functions 
      bool hasNotPassLowCount() const { return this->notPassLowCount_ != nullptr;};
      void deleteNotPassLowCount() { this->notPassLowCount_ = nullptr;};
      inline int32_t getNotPassLowCount() const { DARABONBA_PTR_GET_DEFAULT(notPassLowCount_, 0) };
      inline Data& setNotPassLowCount(int32_t notPassLowCount) { DARABONBA_PTR_SET_VALUE(notPassLowCount_, notPassLowCount) };


      // notPassMediumCount Field Functions 
      bool hasNotPassMediumCount() const { return this->notPassMediumCount_ != nullptr;};
      void deleteNotPassMediumCount() { this->notPassMediumCount_ = nullptr;};
      inline int32_t getNotPassMediumCount() const { DARABONBA_PTR_GET_DEFAULT(notPassMediumCount_, 0) };
      inline Data& setNotPassMediumCount(int32_t notPassMediumCount) { DARABONBA_PTR_SET_VALUE(notPassMediumCount_, notPassMediumCount) };


    protected:
      // Total number of items that failed the check.
      shared_ptr<int32_t> notPassCount_ {};
      // Number of high-risk inspection items that have not passed.
      shared_ptr<int32_t> notPassHighCount_ {};
      // Number of low-risk inspection items that have not passed.
      shared_ptr<int32_t> notPassLowCount_ {};
      // Number of medium-risk failed inspection items.
      shared_ptr<int32_t> notPassMediumCount_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetClusterCheckSummaryResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetClusterCheckSummaryResponseBody::Data) };
    inline GetClusterCheckSummaryResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetClusterCheckSummaryResponseBody::Data) };
    inline GetClusterCheckSummaryResponseBody& setData(const GetClusterCheckSummaryResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetClusterCheckSummaryResponseBody& setData(GetClusterCheckSummaryResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetClusterCheckSummaryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Return data.
    shared_ptr<GetClusterCheckSummaryResponseBody::Data> data_ {};
    // Request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
