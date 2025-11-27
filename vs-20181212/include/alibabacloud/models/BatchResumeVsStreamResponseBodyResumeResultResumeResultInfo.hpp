// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHRESUMEVSSTREAMRESPONSEBODYRESUMERESULTRESUMERESULTINFO_HPP_
#define ALIBABACLOUD_MODELS_BATCHRESUMEVSSTREAMRESPONSEBODYRESUMERESULTRESUMERESULTINFO_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/BatchResumeVsStreamResponseBodyResumeResultResumeResultInfoChannels.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class BatchResumeVsStreamResponseBodyResumeResultResumeResultInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchResumeVsStreamResponseBodyResumeResultResumeResultInfo& obj) { 
      DARABONBA_PTR_TO_JSON(Channels, channels_);
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(Detail, detail_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, BatchResumeVsStreamResponseBodyResumeResultResumeResultInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(Channels, channels_);
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(Detail, detail_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    BatchResumeVsStreamResponseBodyResumeResultResumeResultInfo() = default ;
    BatchResumeVsStreamResponseBodyResumeResultResumeResultInfo(const BatchResumeVsStreamResponseBodyResumeResultResumeResultInfo &) = default ;
    BatchResumeVsStreamResponseBodyResumeResultResumeResultInfo(BatchResumeVsStreamResponseBodyResumeResultResumeResultInfo &&) = default ;
    BatchResumeVsStreamResponseBodyResumeResultResumeResultInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchResumeVsStreamResponseBodyResumeResultResumeResultInfo() = default ;
    BatchResumeVsStreamResponseBodyResumeResultResumeResultInfo& operator=(const BatchResumeVsStreamResponseBodyResumeResultResumeResultInfo &) = default ;
    BatchResumeVsStreamResponseBodyResumeResultResumeResultInfo& operator=(BatchResumeVsStreamResponseBodyResumeResultResumeResultInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->channels_ == nullptr
        && return this->count_ == nullptr && return this->detail_ == nullptr && return this->result_ == nullptr; };
    // channels Field Functions 
    bool hasChannels() const { return this->channels_ != nullptr;};
    void deleteChannels() { this->channels_ = nullptr;};
    inline const Models::BatchResumeVsStreamResponseBodyResumeResultResumeResultInfoChannels & channels() const { DARABONBA_PTR_GET_CONST(channels_, Models::BatchResumeVsStreamResponseBodyResumeResultResumeResultInfoChannels) };
    inline Models::BatchResumeVsStreamResponseBodyResumeResultResumeResultInfoChannels channels() { DARABONBA_PTR_GET(channels_, Models::BatchResumeVsStreamResponseBodyResumeResultResumeResultInfoChannels) };
    inline BatchResumeVsStreamResponseBodyResumeResultResumeResultInfo& setChannels(const Models::BatchResumeVsStreamResponseBodyResumeResultResumeResultInfoChannels & channels) { DARABONBA_PTR_SET_VALUE(channels_, channels) };
    inline BatchResumeVsStreamResponseBodyResumeResultResumeResultInfo& setChannels(Models::BatchResumeVsStreamResponseBodyResumeResultResumeResultInfoChannels && channels) { DARABONBA_PTR_SET_RVALUE(channels_, channels) };


    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline BatchResumeVsStreamResponseBodyResumeResultResumeResultInfo& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // detail Field Functions 
    bool hasDetail() const { return this->detail_ != nullptr;};
    void deleteDetail() { this->detail_ = nullptr;};
    inline string detail() const { DARABONBA_PTR_GET_DEFAULT(detail_, "") };
    inline BatchResumeVsStreamResponseBodyResumeResultResumeResultInfo& setDetail(string detail) { DARABONBA_PTR_SET_VALUE(detail_, detail) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline string result() const { DARABONBA_PTR_GET_DEFAULT(result_, "") };
    inline BatchResumeVsStreamResponseBodyResumeResultResumeResultInfo& setResult(string result) { DARABONBA_PTR_SET_VALUE(result_, result) };


  protected:
    std::shared_ptr<Models::BatchResumeVsStreamResponseBodyResumeResultResumeResultInfoChannels> channels_ = nullptr;
    std::shared_ptr<int32_t> count_ = nullptr;
    std::shared_ptr<string> detail_ = nullptr;
    std::shared_ptr<string> result_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
