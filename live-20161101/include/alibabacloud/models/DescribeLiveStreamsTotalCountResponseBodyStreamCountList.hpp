// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMSTOTALCOUNTRESPONSEBODYSTREAMCOUNTLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMSTOTALCOUNTRESPONSEBODYSTREAMCOUNTLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeLiveStreamsTotalCountResponseBodyStreamCountListStreamCountInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveStreamsTotalCountResponseBodyStreamCountList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveStreamsTotalCountResponseBodyStreamCountList& obj) { 
      DARABONBA_PTR_TO_JSON(StreamCountInfos, streamCountInfos_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveStreamsTotalCountResponseBodyStreamCountList& obj) { 
      DARABONBA_PTR_FROM_JSON(StreamCountInfos, streamCountInfos_);
    };
    DescribeLiveStreamsTotalCountResponseBodyStreamCountList() = default ;
    DescribeLiveStreamsTotalCountResponseBodyStreamCountList(const DescribeLiveStreamsTotalCountResponseBodyStreamCountList &) = default ;
    DescribeLiveStreamsTotalCountResponseBodyStreamCountList(DescribeLiveStreamsTotalCountResponseBodyStreamCountList &&) = default ;
    DescribeLiveStreamsTotalCountResponseBodyStreamCountList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveStreamsTotalCountResponseBodyStreamCountList() = default ;
    DescribeLiveStreamsTotalCountResponseBodyStreamCountList& operator=(const DescribeLiveStreamsTotalCountResponseBodyStreamCountList &) = default ;
    DescribeLiveStreamsTotalCountResponseBodyStreamCountList& operator=(DescribeLiveStreamsTotalCountResponseBodyStreamCountList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->streamCountInfos_ != nullptr; };
    // streamCountInfos Field Functions 
    bool hasStreamCountInfos() const { return this->streamCountInfos_ != nullptr;};
    void deleteStreamCountInfos() { this->streamCountInfos_ = nullptr;};
    inline const vector<Models::DescribeLiveStreamsTotalCountResponseBodyStreamCountListStreamCountInfos> & streamCountInfos() const { DARABONBA_PTR_GET_CONST(streamCountInfos_, vector<Models::DescribeLiveStreamsTotalCountResponseBodyStreamCountListStreamCountInfos>) };
    inline vector<Models::DescribeLiveStreamsTotalCountResponseBodyStreamCountListStreamCountInfos> streamCountInfos() { DARABONBA_PTR_GET(streamCountInfos_, vector<Models::DescribeLiveStreamsTotalCountResponseBodyStreamCountListStreamCountInfos>) };
    inline DescribeLiveStreamsTotalCountResponseBodyStreamCountList& setStreamCountInfos(const vector<Models::DescribeLiveStreamsTotalCountResponseBodyStreamCountListStreamCountInfos> & streamCountInfos) { DARABONBA_PTR_SET_VALUE(streamCountInfos_, streamCountInfos) };
    inline DescribeLiveStreamsTotalCountResponseBodyStreamCountList& setStreamCountInfos(vector<Models::DescribeLiveStreamsTotalCountResponseBodyStreamCountListStreamCountInfos> && streamCountInfos) { DARABONBA_PTR_SET_RVALUE(streamCountInfos_, streamCountInfos) };


  protected:
    std::shared_ptr<vector<Models::DescribeLiveStreamsTotalCountResponseBodyStreamCountListStreamCountInfos>> streamCountInfos_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
