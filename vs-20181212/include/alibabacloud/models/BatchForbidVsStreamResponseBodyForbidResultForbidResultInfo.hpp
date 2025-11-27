// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHFORBIDVSSTREAMRESPONSEBODYFORBIDRESULTFORBIDRESULTINFO_HPP_
#define ALIBABACLOUD_MODELS_BATCHFORBIDVSSTREAMRESPONSEBODYFORBIDRESULTFORBIDRESULTINFO_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/BatchForbidVsStreamResponseBodyForbidResultForbidResultInfoChannels.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class BatchForbidVsStreamResponseBodyForbidResultForbidResultInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchForbidVsStreamResponseBodyForbidResultForbidResultInfo& obj) { 
      DARABONBA_PTR_TO_JSON(Channels, channels_);
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(Detail, detail_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, BatchForbidVsStreamResponseBodyForbidResultForbidResultInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(Channels, channels_);
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(Detail, detail_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    BatchForbidVsStreamResponseBodyForbidResultForbidResultInfo() = default ;
    BatchForbidVsStreamResponseBodyForbidResultForbidResultInfo(const BatchForbidVsStreamResponseBodyForbidResultForbidResultInfo &) = default ;
    BatchForbidVsStreamResponseBodyForbidResultForbidResultInfo(BatchForbidVsStreamResponseBodyForbidResultForbidResultInfo &&) = default ;
    BatchForbidVsStreamResponseBodyForbidResultForbidResultInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchForbidVsStreamResponseBodyForbidResultForbidResultInfo() = default ;
    BatchForbidVsStreamResponseBodyForbidResultForbidResultInfo& operator=(const BatchForbidVsStreamResponseBodyForbidResultForbidResultInfo &) = default ;
    BatchForbidVsStreamResponseBodyForbidResultForbidResultInfo& operator=(BatchForbidVsStreamResponseBodyForbidResultForbidResultInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->channels_ == nullptr
        && return this->count_ == nullptr && return this->detail_ == nullptr && return this->result_ == nullptr; };
    // channels Field Functions 
    bool hasChannels() const { return this->channels_ != nullptr;};
    void deleteChannels() { this->channels_ = nullptr;};
    inline const Models::BatchForbidVsStreamResponseBodyForbidResultForbidResultInfoChannels & channels() const { DARABONBA_PTR_GET_CONST(channels_, Models::BatchForbidVsStreamResponseBodyForbidResultForbidResultInfoChannels) };
    inline Models::BatchForbidVsStreamResponseBodyForbidResultForbidResultInfoChannels channels() { DARABONBA_PTR_GET(channels_, Models::BatchForbidVsStreamResponseBodyForbidResultForbidResultInfoChannels) };
    inline BatchForbidVsStreamResponseBodyForbidResultForbidResultInfo& setChannels(const Models::BatchForbidVsStreamResponseBodyForbidResultForbidResultInfoChannels & channels) { DARABONBA_PTR_SET_VALUE(channels_, channels) };
    inline BatchForbidVsStreamResponseBodyForbidResultForbidResultInfo& setChannels(Models::BatchForbidVsStreamResponseBodyForbidResultForbidResultInfoChannels && channels) { DARABONBA_PTR_SET_RVALUE(channels_, channels) };


    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline BatchForbidVsStreamResponseBodyForbidResultForbidResultInfo& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // detail Field Functions 
    bool hasDetail() const { return this->detail_ != nullptr;};
    void deleteDetail() { this->detail_ = nullptr;};
    inline string detail() const { DARABONBA_PTR_GET_DEFAULT(detail_, "") };
    inline BatchForbidVsStreamResponseBodyForbidResultForbidResultInfo& setDetail(string detail) { DARABONBA_PTR_SET_VALUE(detail_, detail) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline string result() const { DARABONBA_PTR_GET_DEFAULT(result_, "") };
    inline BatchForbidVsStreamResponseBodyForbidResultForbidResultInfo& setResult(string result) { DARABONBA_PTR_SET_VALUE(result_, result) };


  protected:
    std::shared_ptr<Models::BatchForbidVsStreamResponseBodyForbidResultForbidResultInfoChannels> channels_ = nullptr;
    std::shared_ptr<int32_t> count_ = nullptr;
    std::shared_ptr<string> detail_ = nullptr;
    std::shared_ptr<string> result_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
