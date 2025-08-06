// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVODSTATISRESPONSEBODYTRANSCODEDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVODSTATISRESPONSEBODYTRANSCODEDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribeVodStatisResponseBodyTranscodeData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVodStatisResponseBodyTranscodeData& obj) { 
      DARABONBA_PTR_TO_JSON(Duration, duration_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVodStatisResponseBodyTranscodeData& obj) { 
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
    };
    DescribeVodStatisResponseBodyTranscodeData() = default ;
    DescribeVodStatisResponseBodyTranscodeData(const DescribeVodStatisResponseBodyTranscodeData &) = default ;
    DescribeVodStatisResponseBodyTranscodeData(DescribeVodStatisResponseBodyTranscodeData &&) = default ;
    DescribeVodStatisResponseBodyTranscodeData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVodStatisResponseBodyTranscodeData() = default ;
    DescribeVodStatisResponseBodyTranscodeData& operator=(const DescribeVodStatisResponseBodyTranscodeData &) = default ;
    DescribeVodStatisResponseBodyTranscodeData& operator=(DescribeVodStatisResponseBodyTranscodeData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->duration_ != nullptr; };
    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline int64_t duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0L) };
    inline DescribeVodStatisResponseBodyTranscodeData& setDuration(int64_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


  protected:
    std::shared_ptr<int64_t> duration_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
