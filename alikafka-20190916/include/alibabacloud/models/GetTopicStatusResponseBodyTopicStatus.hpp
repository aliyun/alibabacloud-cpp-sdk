// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTOPICSTATUSRESPONSEBODYTOPICSTATUS_HPP_
#define ALIBABACLOUD_MODELS_GETTOPICSTATUSRESPONSEBODYTOPICSTATUS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetTopicStatusResponseBodyTopicStatusOffsetTable.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alikafka20190916
{
namespace Models
{
  class GetTopicStatusResponseBodyTopicStatus : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTopicStatusResponseBodyTopicStatus& obj) { 
      DARABONBA_PTR_TO_JSON(LastTimeStamp, lastTimeStamp_);
      DARABONBA_PTR_TO_JSON(OffsetTable, offsetTable_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, GetTopicStatusResponseBodyTopicStatus& obj) { 
      DARABONBA_PTR_FROM_JSON(LastTimeStamp, lastTimeStamp_);
      DARABONBA_PTR_FROM_JSON(OffsetTable, offsetTable_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    GetTopicStatusResponseBodyTopicStatus() = default ;
    GetTopicStatusResponseBodyTopicStatus(const GetTopicStatusResponseBodyTopicStatus &) = default ;
    GetTopicStatusResponseBodyTopicStatus(GetTopicStatusResponseBodyTopicStatus &&) = default ;
    GetTopicStatusResponseBodyTopicStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTopicStatusResponseBodyTopicStatus() = default ;
    GetTopicStatusResponseBodyTopicStatus& operator=(const GetTopicStatusResponseBodyTopicStatus &) = default ;
    GetTopicStatusResponseBodyTopicStatus& operator=(GetTopicStatusResponseBodyTopicStatus &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->lastTimeStamp_ != nullptr
        && this->offsetTable_ != nullptr && this->totalCount_ != nullptr; };
    // lastTimeStamp Field Functions 
    bool hasLastTimeStamp() const { return this->lastTimeStamp_ != nullptr;};
    void deleteLastTimeStamp() { this->lastTimeStamp_ = nullptr;};
    inline int64_t lastTimeStamp() const { DARABONBA_PTR_GET_DEFAULT(lastTimeStamp_, 0L) };
    inline GetTopicStatusResponseBodyTopicStatus& setLastTimeStamp(int64_t lastTimeStamp) { DARABONBA_PTR_SET_VALUE(lastTimeStamp_, lastTimeStamp) };


    // offsetTable Field Functions 
    bool hasOffsetTable() const { return this->offsetTable_ != nullptr;};
    void deleteOffsetTable() { this->offsetTable_ = nullptr;};
    inline const Models::GetTopicStatusResponseBodyTopicStatusOffsetTable & offsetTable() const { DARABONBA_PTR_GET_CONST(offsetTable_, Models::GetTopicStatusResponseBodyTopicStatusOffsetTable) };
    inline Models::GetTopicStatusResponseBodyTopicStatusOffsetTable offsetTable() { DARABONBA_PTR_GET(offsetTable_, Models::GetTopicStatusResponseBodyTopicStatusOffsetTable) };
    inline GetTopicStatusResponseBodyTopicStatus& setOffsetTable(const Models::GetTopicStatusResponseBodyTopicStatusOffsetTable & offsetTable) { DARABONBA_PTR_SET_VALUE(offsetTable_, offsetTable) };
    inline GetTopicStatusResponseBodyTopicStatus& setOffsetTable(Models::GetTopicStatusResponseBodyTopicStatusOffsetTable && offsetTable) { DARABONBA_PTR_SET_RVALUE(offsetTable_, offsetTable) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline GetTopicStatusResponseBodyTopicStatus& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The time when the last consumed message was generated.
    std::shared_ptr<int64_t> lastTimeStamp_ = nullptr;
    // The information about offsets in the topic.
    std::shared_ptr<Models::GetTopicStatusResponseBodyTopicStatusOffsetTable> offsetTable_ = nullptr;
    // The number of messages in the topic.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alikafka20190916
#endif
