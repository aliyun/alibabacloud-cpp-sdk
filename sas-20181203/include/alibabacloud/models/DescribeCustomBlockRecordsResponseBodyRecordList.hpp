// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECUSTOMBLOCKRECORDSRESPONSEBODYRECORDLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECUSTOMBLOCKRECORDSRESPONSEBODYRECORDLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeCustomBlockRecordsResponseBodyRecordListTargetList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeCustomBlockRecordsResponseBodyRecordList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCustomBlockRecordsResponseBodyRecordList& obj) { 
      DARABONBA_PTR_TO_JSON(BlockExpireDate, blockExpireDate_);
      DARABONBA_PTR_TO_JSON(BlockIp, blockIp_);
      DARABONBA_PTR_TO_JSON(Bound, bound_);
      DARABONBA_PTR_TO_JSON(EnableCount, enableCount_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(ServerCount, serverCount_);
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TargetList, targetList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCustomBlockRecordsResponseBodyRecordList& obj) { 
      DARABONBA_PTR_FROM_JSON(BlockExpireDate, blockExpireDate_);
      DARABONBA_PTR_FROM_JSON(BlockIp, blockIp_);
      DARABONBA_PTR_FROM_JSON(Bound, bound_);
      DARABONBA_PTR_FROM_JSON(EnableCount, enableCount_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(ServerCount, serverCount_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TargetList, targetList_);
    };
    DescribeCustomBlockRecordsResponseBodyRecordList() = default ;
    DescribeCustomBlockRecordsResponseBodyRecordList(const DescribeCustomBlockRecordsResponseBodyRecordList &) = default ;
    DescribeCustomBlockRecordsResponseBodyRecordList(DescribeCustomBlockRecordsResponseBodyRecordList &&) = default ;
    DescribeCustomBlockRecordsResponseBodyRecordList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCustomBlockRecordsResponseBodyRecordList() = default ;
    DescribeCustomBlockRecordsResponseBodyRecordList& operator=(const DescribeCustomBlockRecordsResponseBodyRecordList &) = default ;
    DescribeCustomBlockRecordsResponseBodyRecordList& operator=(DescribeCustomBlockRecordsResponseBodyRecordList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->blockExpireDate_ != nullptr
        && this->blockIp_ != nullptr && this->bound_ != nullptr && this->enableCount_ != nullptr && this->id_ != nullptr && this->serverCount_ != nullptr
        && this->source_ != nullptr && this->status_ != nullptr && this->targetList_ != nullptr; };
    // blockExpireDate Field Functions 
    bool hasBlockExpireDate() const { return this->blockExpireDate_ != nullptr;};
    void deleteBlockExpireDate() { this->blockExpireDate_ = nullptr;};
    inline int64_t blockExpireDate() const { DARABONBA_PTR_GET_DEFAULT(blockExpireDate_, 0L) };
    inline DescribeCustomBlockRecordsResponseBodyRecordList& setBlockExpireDate(int64_t blockExpireDate) { DARABONBA_PTR_SET_VALUE(blockExpireDate_, blockExpireDate) };


    // blockIp Field Functions 
    bool hasBlockIp() const { return this->blockIp_ != nullptr;};
    void deleteBlockIp() { this->blockIp_ = nullptr;};
    inline string blockIp() const { DARABONBA_PTR_GET_DEFAULT(blockIp_, "") };
    inline DescribeCustomBlockRecordsResponseBodyRecordList& setBlockIp(string blockIp) { DARABONBA_PTR_SET_VALUE(blockIp_, blockIp) };


    // bound Field Functions 
    bool hasBound() const { return this->bound_ != nullptr;};
    void deleteBound() { this->bound_ = nullptr;};
    inline string bound() const { DARABONBA_PTR_GET_DEFAULT(bound_, "") };
    inline DescribeCustomBlockRecordsResponseBodyRecordList& setBound(string bound) { DARABONBA_PTR_SET_VALUE(bound_, bound) };


    // enableCount Field Functions 
    bool hasEnableCount() const { return this->enableCount_ != nullptr;};
    void deleteEnableCount() { this->enableCount_ = nullptr;};
    inline int32_t enableCount() const { DARABONBA_PTR_GET_DEFAULT(enableCount_, 0) };
    inline DescribeCustomBlockRecordsResponseBodyRecordList& setEnableCount(int32_t enableCount) { DARABONBA_PTR_SET_VALUE(enableCount_, enableCount) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline DescribeCustomBlockRecordsResponseBodyRecordList& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // serverCount Field Functions 
    bool hasServerCount() const { return this->serverCount_ != nullptr;};
    void deleteServerCount() { this->serverCount_ = nullptr;};
    inline int32_t serverCount() const { DARABONBA_PTR_GET_DEFAULT(serverCount_, 0) };
    inline DescribeCustomBlockRecordsResponseBodyRecordList& setServerCount(int32_t serverCount) { DARABONBA_PTR_SET_VALUE(serverCount_, serverCount) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline DescribeCustomBlockRecordsResponseBodyRecordList& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline DescribeCustomBlockRecordsResponseBodyRecordList& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // targetList Field Functions 
    bool hasTargetList() const { return this->targetList_ != nullptr;};
    void deleteTargetList() { this->targetList_ = nullptr;};
    inline const vector<Models::DescribeCustomBlockRecordsResponseBodyRecordListTargetList> & targetList() const { DARABONBA_PTR_GET_CONST(targetList_, vector<Models::DescribeCustomBlockRecordsResponseBodyRecordListTargetList>) };
    inline vector<Models::DescribeCustomBlockRecordsResponseBodyRecordListTargetList> targetList() { DARABONBA_PTR_GET(targetList_, vector<Models::DescribeCustomBlockRecordsResponseBodyRecordListTargetList>) };
    inline DescribeCustomBlockRecordsResponseBodyRecordList& setTargetList(const vector<Models::DescribeCustomBlockRecordsResponseBodyRecordListTargetList> & targetList) { DARABONBA_PTR_SET_VALUE(targetList_, targetList) };
    inline DescribeCustomBlockRecordsResponseBodyRecordList& setTargetList(vector<Models::DescribeCustomBlockRecordsResponseBodyRecordListTargetList> && targetList) { DARABONBA_PTR_SET_RVALUE(targetList_, targetList) };


  protected:
    // The timestamp generated when the block action on the IP address becomes invalid.
    std::shared_ptr<int64_t> blockExpireDate_ = nullptr;
    // The blocked IP address.
    std::shared_ptr<string> blockIp_ = nullptr;
    // The direction of the traffic that is sent by the blocked IP address. Valid values:
    // 
    // *   **in**
    // *   **out**
    std::shared_ptr<string> bound_ = nullptr;
    // The number of servers for which the defense rule is enabled.
    std::shared_ptr<int32_t> enableCount_ = nullptr;
    // The record ID.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The total number of servers on which the IP address is blocked.
    std::shared_ptr<int32_t> serverCount_ = nullptr;
    // The source of the defense rule.
    std::shared_ptr<string> source_ = nullptr;
    // The status of the defense rule against brute-force attacks. Valid values:
    // 
    // *   **0**: invalid.
    // *   **1**: enabled.
    // *   **2**: failed.
    std::shared_ptr<int32_t> status_ = nullptr;
    // The servers for which the defense rule is enabled.
    std::shared_ptr<vector<Models::DescribeCustomBlockRecordsResponseBodyRecordListTargetList>> targetList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
