// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDEFENSERECORDSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDEFENSERECORDSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDefenseRecordsResponseBodyDefenseRecords.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeDefenseRecordsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDefenseRecordsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DefenseRecords, defenseRecords_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDefenseRecordsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DefenseRecords, defenseRecords_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeDefenseRecordsResponseBody() = default ;
    DescribeDefenseRecordsResponseBody(const DescribeDefenseRecordsResponseBody &) = default ;
    DescribeDefenseRecordsResponseBody(DescribeDefenseRecordsResponseBody &&) = default ;
    DescribeDefenseRecordsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDefenseRecordsResponseBody() = default ;
    DescribeDefenseRecordsResponseBody& operator=(const DescribeDefenseRecordsResponseBody &) = default ;
    DescribeDefenseRecordsResponseBody& operator=(DescribeDefenseRecordsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->defenseRecords_ != nullptr
        && this->requestId_ != nullptr && this->totalCount_ != nullptr; };
    // defenseRecords Field Functions 
    bool hasDefenseRecords() const { return this->defenseRecords_ != nullptr;};
    void deleteDefenseRecords() { this->defenseRecords_ = nullptr;};
    inline const vector<DescribeDefenseRecordsResponseBodyDefenseRecords> & defenseRecords() const { DARABONBA_PTR_GET_CONST(defenseRecords_, vector<DescribeDefenseRecordsResponseBodyDefenseRecords>) };
    inline vector<DescribeDefenseRecordsResponseBodyDefenseRecords> defenseRecords() { DARABONBA_PTR_GET(defenseRecords_, vector<DescribeDefenseRecordsResponseBodyDefenseRecords>) };
    inline DescribeDefenseRecordsResponseBody& setDefenseRecords(const vector<DescribeDefenseRecordsResponseBodyDefenseRecords> & defenseRecords) { DARABONBA_PTR_SET_VALUE(defenseRecords_, defenseRecords) };
    inline DescribeDefenseRecordsResponseBody& setDefenseRecords(vector<DescribeDefenseRecordsResponseBodyDefenseRecords> && defenseRecords) { DARABONBA_PTR_SET_RVALUE(defenseRecords_, defenseRecords) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDefenseRecordsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeDefenseRecordsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // An array that consists of details of the log of an advanced mitigation session.
    std::shared_ptr<vector<DescribeDefenseRecordsResponseBodyDefenseRecords>> defenseRecords_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of advanced mitigation sessions.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
