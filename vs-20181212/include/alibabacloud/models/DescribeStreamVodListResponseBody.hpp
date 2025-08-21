// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESTREAMVODLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESTREAMVODLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeStreamVodListResponseBodyRecords.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class DescribeStreamVodListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeStreamVodListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Records, records_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeStreamVodListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Records, records_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeStreamVodListResponseBody() = default ;
    DescribeStreamVodListResponseBody(const DescribeStreamVodListResponseBody &) = default ;
    DescribeStreamVodListResponseBody(DescribeStreamVodListResponseBody &&) = default ;
    DescribeStreamVodListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeStreamVodListResponseBody() = default ;
    DescribeStreamVodListResponseBody& operator=(const DescribeStreamVodListResponseBody &) = default ;
    DescribeStreamVodListResponseBody& operator=(DescribeStreamVodListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->records_ != nullptr
        && this->requestId_ != nullptr; };
    // records Field Functions 
    bool hasRecords() const { return this->records_ != nullptr;};
    void deleteRecords() { this->records_ = nullptr;};
    inline const vector<DescribeStreamVodListResponseBodyRecords> & records() const { DARABONBA_PTR_GET_CONST(records_, vector<DescribeStreamVodListResponseBodyRecords>) };
    inline vector<DescribeStreamVodListResponseBodyRecords> records() { DARABONBA_PTR_GET(records_, vector<DescribeStreamVodListResponseBodyRecords>) };
    inline DescribeStreamVodListResponseBody& setRecords(const vector<DescribeStreamVodListResponseBodyRecords> & records) { DARABONBA_PTR_SET_VALUE(records_, records) };
    inline DescribeStreamVodListResponseBody& setRecords(vector<DescribeStreamVodListResponseBodyRecords> && records) { DARABONBA_PTR_SET_RVALUE(records_, records) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeStreamVodListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<DescribeStreamVodListResponseBodyRecords>> records_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
