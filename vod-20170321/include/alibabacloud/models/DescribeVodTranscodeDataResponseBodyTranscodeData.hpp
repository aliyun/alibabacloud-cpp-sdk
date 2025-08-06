// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVODTRANSCODEDATARESPONSEBODYTRANSCODEDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVODTRANSCODEDATARESPONSEBODYTRANSCODEDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeVodTranscodeDataResponseBodyTranscodeDataTranscodeDataItem.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribeVodTranscodeDataResponseBodyTranscodeData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVodTranscodeDataResponseBodyTranscodeData& obj) { 
      DARABONBA_PTR_TO_JSON(TranscodeDataItem, transcodeDataItem_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVodTranscodeDataResponseBodyTranscodeData& obj) { 
      DARABONBA_PTR_FROM_JSON(TranscodeDataItem, transcodeDataItem_);
    };
    DescribeVodTranscodeDataResponseBodyTranscodeData() = default ;
    DescribeVodTranscodeDataResponseBodyTranscodeData(const DescribeVodTranscodeDataResponseBodyTranscodeData &) = default ;
    DescribeVodTranscodeDataResponseBodyTranscodeData(DescribeVodTranscodeDataResponseBodyTranscodeData &&) = default ;
    DescribeVodTranscodeDataResponseBodyTranscodeData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVodTranscodeDataResponseBodyTranscodeData() = default ;
    DescribeVodTranscodeDataResponseBodyTranscodeData& operator=(const DescribeVodTranscodeDataResponseBodyTranscodeData &) = default ;
    DescribeVodTranscodeDataResponseBodyTranscodeData& operator=(DescribeVodTranscodeDataResponseBodyTranscodeData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->transcodeDataItem_ != nullptr; };
    // transcodeDataItem Field Functions 
    bool hasTranscodeDataItem() const { return this->transcodeDataItem_ != nullptr;};
    void deleteTranscodeDataItem() { this->transcodeDataItem_ = nullptr;};
    inline const vector<Models::DescribeVodTranscodeDataResponseBodyTranscodeDataTranscodeDataItem> & transcodeDataItem() const { DARABONBA_PTR_GET_CONST(transcodeDataItem_, vector<Models::DescribeVodTranscodeDataResponseBodyTranscodeDataTranscodeDataItem>) };
    inline vector<Models::DescribeVodTranscodeDataResponseBodyTranscodeDataTranscodeDataItem> transcodeDataItem() { DARABONBA_PTR_GET(transcodeDataItem_, vector<Models::DescribeVodTranscodeDataResponseBodyTranscodeDataTranscodeDataItem>) };
    inline DescribeVodTranscodeDataResponseBodyTranscodeData& setTranscodeDataItem(const vector<Models::DescribeVodTranscodeDataResponseBodyTranscodeDataTranscodeDataItem> & transcodeDataItem) { DARABONBA_PTR_SET_VALUE(transcodeDataItem_, transcodeDataItem) };
    inline DescribeVodTranscodeDataResponseBodyTranscodeData& setTranscodeDataItem(vector<Models::DescribeVodTranscodeDataResponseBodyTranscodeDataTranscodeDataItem> && transcodeDataItem) { DARABONBA_PTR_SET_RVALUE(transcodeDataItem_, transcodeDataItem) };


  protected:
    std::shared_ptr<vector<Models::DescribeVodTranscodeDataResponseBodyTranscodeDataTranscodeDataItem>> transcodeDataItem_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
