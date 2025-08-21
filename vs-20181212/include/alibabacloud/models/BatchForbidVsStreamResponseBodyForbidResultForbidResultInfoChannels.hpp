// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHFORBIDVSSTREAMRESPONSEBODYFORBIDRESULTFORBIDRESULTINFOCHANNELS_HPP_
#define ALIBABACLOUD_MODELS_BATCHFORBIDVSSTREAMRESPONSEBODYFORBIDRESULTFORBIDRESULTINFOCHANNELS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class BatchForbidVsStreamResponseBodyForbidResultForbidResultInfoChannels : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchForbidVsStreamResponseBodyForbidResultForbidResultInfoChannels& obj) { 
      DARABONBA_PTR_TO_JSON(Channel, channel_);
    };
    friend void from_json(const Darabonba::Json& j, BatchForbidVsStreamResponseBodyForbidResultForbidResultInfoChannels& obj) { 
      DARABONBA_PTR_FROM_JSON(Channel, channel_);
    };
    BatchForbidVsStreamResponseBodyForbidResultForbidResultInfoChannels() = default ;
    BatchForbidVsStreamResponseBodyForbidResultForbidResultInfoChannels(const BatchForbidVsStreamResponseBodyForbidResultForbidResultInfoChannels &) = default ;
    BatchForbidVsStreamResponseBodyForbidResultForbidResultInfoChannels(BatchForbidVsStreamResponseBodyForbidResultForbidResultInfoChannels &&) = default ;
    BatchForbidVsStreamResponseBodyForbidResultForbidResultInfoChannels(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchForbidVsStreamResponseBodyForbidResultForbidResultInfoChannels() = default ;
    BatchForbidVsStreamResponseBodyForbidResultForbidResultInfoChannels& operator=(const BatchForbidVsStreamResponseBodyForbidResultForbidResultInfoChannels &) = default ;
    BatchForbidVsStreamResponseBodyForbidResultForbidResultInfoChannels& operator=(BatchForbidVsStreamResponseBodyForbidResultForbidResultInfoChannels &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->channel_ != nullptr; };
    // channel Field Functions 
    bool hasChannel() const { return this->channel_ != nullptr;};
    void deleteChannel() { this->channel_ = nullptr;};
    inline const vector<string> & channel() const { DARABONBA_PTR_GET_CONST(channel_, vector<string>) };
    inline vector<string> channel() { DARABONBA_PTR_GET(channel_, vector<string>) };
    inline BatchForbidVsStreamResponseBodyForbidResultForbidResultInfoChannels& setChannel(const vector<string> & channel) { DARABONBA_PTR_SET_VALUE(channel_, channel) };
    inline BatchForbidVsStreamResponseBodyForbidResultForbidResultInfoChannels& setChannel(vector<string> && channel) { DARABONBA_PTR_SET_RVALUE(channel_, channel) };


  protected:
    std::shared_ptr<vector<string>> channel_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
