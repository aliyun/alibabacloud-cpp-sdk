// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETRACEINFODETAILRESPONSEBODYTRACEINFODETAILEDGELIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETRACEINFODETAILRESPONSEBODYTRACEINFODETAILEDGELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeTraceInfoDetailResponseBodyTraceInfoDetailEdgeList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTraceInfoDetailResponseBodyTraceInfoDetailEdgeList& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(EndId, endId_);
      DARABONBA_PTR_TO_JSON(StartId, startId_);
      DARABONBA_PTR_TO_JSON(Time, time_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTraceInfoDetailResponseBodyTraceInfoDetailEdgeList& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(EndId, endId_);
      DARABONBA_PTR_FROM_JSON(StartId, startId_);
      DARABONBA_PTR_FROM_JSON(Time, time_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DescribeTraceInfoDetailResponseBodyTraceInfoDetailEdgeList() = default ;
    DescribeTraceInfoDetailResponseBodyTraceInfoDetailEdgeList(const DescribeTraceInfoDetailResponseBodyTraceInfoDetailEdgeList &) = default ;
    DescribeTraceInfoDetailResponseBodyTraceInfoDetailEdgeList(DescribeTraceInfoDetailResponseBodyTraceInfoDetailEdgeList &&) = default ;
    DescribeTraceInfoDetailResponseBodyTraceInfoDetailEdgeList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTraceInfoDetailResponseBodyTraceInfoDetailEdgeList() = default ;
    DescribeTraceInfoDetailResponseBodyTraceInfoDetailEdgeList& operator=(const DescribeTraceInfoDetailResponseBodyTraceInfoDetailEdgeList &) = default ;
    DescribeTraceInfoDetailResponseBodyTraceInfoDetailEdgeList& operator=(DescribeTraceInfoDetailResponseBodyTraceInfoDetailEdgeList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->count_ != nullptr
        && this->endId_ != nullptr && this->startId_ != nullptr && this->time_ != nullptr && this->type_ != nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline DescribeTraceInfoDetailResponseBodyTraceInfoDetailEdgeList& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // endId Field Functions 
    bool hasEndId() const { return this->endId_ != nullptr;};
    void deleteEndId() { this->endId_ = nullptr;};
    inline string endId() const { DARABONBA_PTR_GET_DEFAULT(endId_, "") };
    inline DescribeTraceInfoDetailResponseBodyTraceInfoDetailEdgeList& setEndId(string endId) { DARABONBA_PTR_SET_VALUE(endId_, endId) };


    // startId Field Functions 
    bool hasStartId() const { return this->startId_ != nullptr;};
    void deleteStartId() { this->startId_ = nullptr;};
    inline string startId() const { DARABONBA_PTR_GET_DEFAULT(startId_, "") };
    inline DescribeTraceInfoDetailResponseBodyTraceInfoDetailEdgeList& setStartId(string startId) { DARABONBA_PTR_SET_VALUE(startId_, startId) };


    // time Field Functions 
    bool hasTime() const { return this->time_ != nullptr;};
    void deleteTime() { this->time_ = nullptr;};
    inline string time() const { DARABONBA_PTR_GET_DEFAULT(time_, "") };
    inline DescribeTraceInfoDetailResponseBodyTraceInfoDetailEdgeList& setTime(string time) { DARABONBA_PTR_SET_VALUE(time_, time) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeTraceInfoDetailResponseBodyTraceInfoDetailEdgeList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The number of times.
    std::shared_ptr<int32_t> count_ = nullptr;
    // The ending vertex ID of the edge of the tracing diagram.
    std::shared_ptr<string> endId_ = nullptr;
    // The starting vertex ID of the edge of the tracing diagram.
    std::shared_ptr<string> startId_ = nullptr;
    // The point in time.
    std::shared_ptr<string> time_ = nullptr;
    // The type of the edge of the tracing diagram.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
