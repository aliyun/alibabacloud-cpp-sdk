// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMCOUNTRESPONSEBODYSTREAMCOUNTINFOSSTREAMCOUNTINFO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMCOUNTRESPONSEBODYSTREAMCOUNTINFOSSTREAMCOUNTINFO_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeLiveStreamCountResponseBodyStreamCountInfosStreamCountInfoStreamCountDetails.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveStreamCountResponseBodyStreamCountInfosStreamCountInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveStreamCountResponseBodyStreamCountInfosStreamCountInfo& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(Limit, limit_);
      DARABONBA_PTR_TO_JSON(StreamCountDetails, streamCountDetails_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveStreamCountResponseBodyStreamCountInfosStreamCountInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(Limit, limit_);
      DARABONBA_PTR_FROM_JSON(StreamCountDetails, streamCountDetails_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DescribeLiveStreamCountResponseBodyStreamCountInfosStreamCountInfo() = default ;
    DescribeLiveStreamCountResponseBodyStreamCountInfosStreamCountInfo(const DescribeLiveStreamCountResponseBodyStreamCountInfosStreamCountInfo &) = default ;
    DescribeLiveStreamCountResponseBodyStreamCountInfosStreamCountInfo(DescribeLiveStreamCountResponseBodyStreamCountInfosStreamCountInfo &&) = default ;
    DescribeLiveStreamCountResponseBodyStreamCountInfosStreamCountInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveStreamCountResponseBodyStreamCountInfosStreamCountInfo() = default ;
    DescribeLiveStreamCountResponseBodyStreamCountInfosStreamCountInfo& operator=(const DescribeLiveStreamCountResponseBodyStreamCountInfosStreamCountInfo &) = default ;
    DescribeLiveStreamCountResponseBodyStreamCountInfosStreamCountInfo& operator=(DescribeLiveStreamCountResponseBodyStreamCountInfosStreamCountInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->count_ == nullptr
        && return this->limit_ == nullptr && return this->streamCountDetails_ == nullptr && return this->type_ == nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int64_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
    inline DescribeLiveStreamCountResponseBodyStreamCountInfosStreamCountInfo& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // limit Field Functions 
    bool hasLimit() const { return this->limit_ != nullptr;};
    void deleteLimit() { this->limit_ = nullptr;};
    inline int64_t limit() const { DARABONBA_PTR_GET_DEFAULT(limit_, 0L) };
    inline DescribeLiveStreamCountResponseBodyStreamCountInfosStreamCountInfo& setLimit(int64_t limit) { DARABONBA_PTR_SET_VALUE(limit_, limit) };


    // streamCountDetails Field Functions 
    bool hasStreamCountDetails() const { return this->streamCountDetails_ != nullptr;};
    void deleteStreamCountDetails() { this->streamCountDetails_ = nullptr;};
    inline const Models::DescribeLiveStreamCountResponseBodyStreamCountInfosStreamCountInfoStreamCountDetails & streamCountDetails() const { DARABONBA_PTR_GET_CONST(streamCountDetails_, Models::DescribeLiveStreamCountResponseBodyStreamCountInfosStreamCountInfoStreamCountDetails) };
    inline Models::DescribeLiveStreamCountResponseBodyStreamCountInfosStreamCountInfoStreamCountDetails streamCountDetails() { DARABONBA_PTR_GET(streamCountDetails_, Models::DescribeLiveStreamCountResponseBodyStreamCountInfosStreamCountInfoStreamCountDetails) };
    inline DescribeLiveStreamCountResponseBodyStreamCountInfosStreamCountInfo& setStreamCountDetails(const Models::DescribeLiveStreamCountResponseBodyStreamCountInfosStreamCountInfoStreamCountDetails & streamCountDetails) { DARABONBA_PTR_SET_VALUE(streamCountDetails_, streamCountDetails) };
    inline DescribeLiveStreamCountResponseBodyStreamCountInfosStreamCountInfo& setStreamCountDetails(Models::DescribeLiveStreamCountResponseBodyStreamCountInfosStreamCountInfoStreamCountDetails && streamCountDetails) { DARABONBA_PTR_SET_RVALUE(streamCountDetails_, streamCountDetails) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeLiveStreamCountResponseBodyStreamCountInfosStreamCountInfo& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The number of online streams.
    std::shared_ptr<int64_t> count_ = nullptr;
    // The maximum allowed number of concurrently ingested streams. This parameter is available only to users in the whitelist.
    std::shared_ptr<int64_t> limit_ = nullptr;
    // The information about the live streams.
    std::shared_ptr<Models::DescribeLiveStreamCountResponseBodyStreamCountInfosStreamCountInfoStreamCountDetails> streamCountDetails_ = nullptr;
    // The type of the live stream. Valid values:
    // 
    // *   **raw**: source streams
    // *   **trans**: transcoded streams
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
