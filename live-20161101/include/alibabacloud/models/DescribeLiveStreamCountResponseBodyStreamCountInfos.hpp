// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMCOUNTRESPONSEBODYSTREAMCOUNTINFOS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMCOUNTRESPONSEBODYSTREAMCOUNTINFOS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeLiveStreamCountResponseBodyStreamCountInfosStreamCountInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveStreamCountResponseBodyStreamCountInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveStreamCountResponseBodyStreamCountInfos& obj) { 
      DARABONBA_PTR_TO_JSON(StreamCountInfo, streamCountInfo_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveStreamCountResponseBodyStreamCountInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(StreamCountInfo, streamCountInfo_);
    };
    DescribeLiveStreamCountResponseBodyStreamCountInfos() = default ;
    DescribeLiveStreamCountResponseBodyStreamCountInfos(const DescribeLiveStreamCountResponseBodyStreamCountInfos &) = default ;
    DescribeLiveStreamCountResponseBodyStreamCountInfos(DescribeLiveStreamCountResponseBodyStreamCountInfos &&) = default ;
    DescribeLiveStreamCountResponseBodyStreamCountInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveStreamCountResponseBodyStreamCountInfos() = default ;
    DescribeLiveStreamCountResponseBodyStreamCountInfos& operator=(const DescribeLiveStreamCountResponseBodyStreamCountInfos &) = default ;
    DescribeLiveStreamCountResponseBodyStreamCountInfos& operator=(DescribeLiveStreamCountResponseBodyStreamCountInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->streamCountInfo_ != nullptr; };
    // streamCountInfo Field Functions 
    bool hasStreamCountInfo() const { return this->streamCountInfo_ != nullptr;};
    void deleteStreamCountInfo() { this->streamCountInfo_ = nullptr;};
    inline const vector<Models::DescribeLiveStreamCountResponseBodyStreamCountInfosStreamCountInfo> & streamCountInfo() const { DARABONBA_PTR_GET_CONST(streamCountInfo_, vector<Models::DescribeLiveStreamCountResponseBodyStreamCountInfosStreamCountInfo>) };
    inline vector<Models::DescribeLiveStreamCountResponseBodyStreamCountInfosStreamCountInfo> streamCountInfo() { DARABONBA_PTR_GET(streamCountInfo_, vector<Models::DescribeLiveStreamCountResponseBodyStreamCountInfosStreamCountInfo>) };
    inline DescribeLiveStreamCountResponseBodyStreamCountInfos& setStreamCountInfo(const vector<Models::DescribeLiveStreamCountResponseBodyStreamCountInfosStreamCountInfo> & streamCountInfo) { DARABONBA_PTR_SET_VALUE(streamCountInfo_, streamCountInfo) };
    inline DescribeLiveStreamCountResponseBodyStreamCountInfos& setStreamCountInfo(vector<Models::DescribeLiveStreamCountResponseBodyStreamCountInfosStreamCountInfo> && streamCountInfo) { DARABONBA_PTR_SET_RVALUE(streamCountInfo_, streamCountInfo) };


  protected:
    std::shared_ptr<vector<Models::DescribeLiveStreamCountResponseBodyStreamCountInfosStreamCountInfo>> streamCountInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
