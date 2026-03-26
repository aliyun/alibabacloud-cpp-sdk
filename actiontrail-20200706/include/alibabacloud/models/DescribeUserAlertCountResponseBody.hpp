// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUSERALERTCOUNTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUSERALERTCOUNTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Actiontrail20200706
{
namespace Models
{
  class DescribeUserAlertCountResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUserAlertCountResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUserAlertCountResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeUserAlertCountResponseBody() = default ;
    DescribeUserAlertCountResponseBody(const DescribeUserAlertCountResponseBody &) = default ;
    DescribeUserAlertCountResponseBody(DescribeUserAlertCountResponseBody &&) = default ;
    DescribeUserAlertCountResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUserAlertCountResponseBody() = default ;
    DescribeUserAlertCountResponseBody& operator=(const DescribeUserAlertCountResponseBody &) = default ;
    DescribeUserAlertCountResponseBody& operator=(DescribeUserAlertCountResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Counts, counts_);
        DARABONBA_PTR_TO_JSON(Dates, dates_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Counts, counts_);
        DARABONBA_PTR_FROM_JSON(Dates, dates_);
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
      virtual bool empty() const override { return this->counts_ == nullptr
        && this->dates_ == nullptr; };
      // counts Field Functions 
      bool hasCounts() const { return this->counts_ != nullptr;};
      void deleteCounts() { this->counts_ = nullptr;};
      inline const vector<int64_t> & getCounts() const { DARABONBA_PTR_GET_CONST(counts_, vector<int64_t>) };
      inline vector<int64_t> getCounts() { DARABONBA_PTR_GET(counts_, vector<int64_t>) };
      inline Data& setCounts(const vector<int64_t> & counts) { DARABONBA_PTR_SET_VALUE(counts_, counts) };
      inline Data& setCounts(vector<int64_t> && counts) { DARABONBA_PTR_SET_RVALUE(counts_, counts) };


      // dates Field Functions 
      bool hasDates() const { return this->dates_ != nullptr;};
      void deleteDates() { this->dates_ = nullptr;};
      inline const vector<string> & getDates() const { DARABONBA_PTR_GET_CONST(dates_, vector<string>) };
      inline vector<string> getDates() { DARABONBA_PTR_GET(dates_, vector<string>) };
      inline Data& setDates(const vector<string> & dates) { DARABONBA_PTR_SET_VALUE(dates_, dates) };
      inline Data& setDates(vector<string> && dates) { DARABONBA_PTR_SET_RVALUE(dates_, dates) };


    protected:
      shared_ptr<vector<int64_t>> counts_ {};
      shared_ptr<vector<string>> dates_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeUserAlertCountResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeUserAlertCountResponseBody::Data) };
    inline DescribeUserAlertCountResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeUserAlertCountResponseBody::Data) };
    inline DescribeUserAlertCountResponseBody& setData(const DescribeUserAlertCountResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeUserAlertCountResponseBody& setData(DescribeUserAlertCountResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeUserAlertCountResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<DescribeUserAlertCountResponseBody::Data> data_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Actiontrail20200706
#endif
