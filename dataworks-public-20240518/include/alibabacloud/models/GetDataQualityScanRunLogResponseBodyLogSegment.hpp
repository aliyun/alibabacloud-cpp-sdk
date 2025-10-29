// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATAQUALITYSCANRUNLOGRESPONSEBODYLOGSEGMENT_HPP_
#define ALIBABACLOUD_MODELS_GETDATAQUALITYSCANRUNLOGRESPONSEBODYLOGSEGMENT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetDataQualityScanRunLogResponseBodyLogSegment : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataQualityScanRunLogResponseBodyLogSegment& obj) { 
      DARABONBA_PTR_TO_JSON(Log, log_);
      DARABONBA_PTR_TO_JSON(NextOffset, nextOffset_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataQualityScanRunLogResponseBodyLogSegment& obj) { 
      DARABONBA_PTR_FROM_JSON(Log, log_);
      DARABONBA_PTR_FROM_JSON(NextOffset, nextOffset_);
    };
    GetDataQualityScanRunLogResponseBodyLogSegment() = default ;
    GetDataQualityScanRunLogResponseBodyLogSegment(const GetDataQualityScanRunLogResponseBodyLogSegment &) = default ;
    GetDataQualityScanRunLogResponseBodyLogSegment(GetDataQualityScanRunLogResponseBodyLogSegment &&) = default ;
    GetDataQualityScanRunLogResponseBodyLogSegment(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataQualityScanRunLogResponseBodyLogSegment() = default ;
    GetDataQualityScanRunLogResponseBodyLogSegment& operator=(const GetDataQualityScanRunLogResponseBodyLogSegment &) = default ;
    GetDataQualityScanRunLogResponseBodyLogSegment& operator=(GetDataQualityScanRunLogResponseBodyLogSegment &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->log_ == nullptr
        && return this->nextOffset_ == nullptr; };
    // log Field Functions 
    bool hasLog() const { return this->log_ != nullptr;};
    void deleteLog() { this->log_ = nullptr;};
    inline string log() const { DARABONBA_PTR_GET_DEFAULT(log_, "") };
    inline GetDataQualityScanRunLogResponseBodyLogSegment& setLog(string log) { DARABONBA_PTR_SET_VALUE(log_, log) };


    // nextOffset Field Functions 
    bool hasNextOffset() const { return this->nextOffset_ != nullptr;};
    void deleteNextOffset() { this->nextOffset_ = nullptr;};
    inline int64_t nextOffset() const { DARABONBA_PTR_GET_DEFAULT(nextOffset_, 0L) };
    inline GetDataQualityScanRunLogResponseBodyLogSegment& setNextOffset(int64_t nextOffset) { DARABONBA_PTR_SET_VALUE(nextOffset_, nextOffset) };


  protected:
    // The task log.
    std::shared_ptr<string> log_ = nullptr;
    // The starting offset of the next log segment. A value of -1 indicates that all logs have been read.
    std::shared_ptr<int64_t> nextOffset_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
