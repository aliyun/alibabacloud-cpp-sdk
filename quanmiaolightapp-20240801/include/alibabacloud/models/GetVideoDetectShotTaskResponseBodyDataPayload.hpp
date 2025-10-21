// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVIDEODETECTSHOTTASKRESPONSEBODYDATAPAYLOAD_HPP_
#define ALIBABACLOUD_MODELS_GETVIDEODETECTSHOTTASKRESPONSEBODYDATAPAYLOAD_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetVideoDetectShotTaskResponseBodyDataPayloadOutput.hpp>
#include <alibabacloud/models/GetVideoDetectShotTaskResponseBodyDataPayloadUsage.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuanMiaoLightApp20240801
{
namespace Models
{
  class GetVideoDetectShotTaskResponseBodyDataPayload : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetVideoDetectShotTaskResponseBodyDataPayload& obj) { 
      DARABONBA_PTR_TO_JSON(output, output_);
      DARABONBA_PTR_TO_JSON(usage, usage_);
    };
    friend void from_json(const Darabonba::Json& j, GetVideoDetectShotTaskResponseBodyDataPayload& obj) { 
      DARABONBA_PTR_FROM_JSON(output, output_);
      DARABONBA_PTR_FROM_JSON(usage, usage_);
    };
    GetVideoDetectShotTaskResponseBodyDataPayload() = default ;
    GetVideoDetectShotTaskResponseBodyDataPayload(const GetVideoDetectShotTaskResponseBodyDataPayload &) = default ;
    GetVideoDetectShotTaskResponseBodyDataPayload(GetVideoDetectShotTaskResponseBodyDataPayload &&) = default ;
    GetVideoDetectShotTaskResponseBodyDataPayload(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetVideoDetectShotTaskResponseBodyDataPayload() = default ;
    GetVideoDetectShotTaskResponseBodyDataPayload& operator=(const GetVideoDetectShotTaskResponseBodyDataPayload &) = default ;
    GetVideoDetectShotTaskResponseBodyDataPayload& operator=(GetVideoDetectShotTaskResponseBodyDataPayload &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->output_ == nullptr
        && return this->usage_ == nullptr; };
    // output Field Functions 
    bool hasOutput() const { return this->output_ != nullptr;};
    void deleteOutput() { this->output_ = nullptr;};
    inline const Models::GetVideoDetectShotTaskResponseBodyDataPayloadOutput & output() const { DARABONBA_PTR_GET_CONST(output_, Models::GetVideoDetectShotTaskResponseBodyDataPayloadOutput) };
    inline Models::GetVideoDetectShotTaskResponseBodyDataPayloadOutput output() { DARABONBA_PTR_GET(output_, Models::GetVideoDetectShotTaskResponseBodyDataPayloadOutput) };
    inline GetVideoDetectShotTaskResponseBodyDataPayload& setOutput(const Models::GetVideoDetectShotTaskResponseBodyDataPayloadOutput & output) { DARABONBA_PTR_SET_VALUE(output_, output) };
    inline GetVideoDetectShotTaskResponseBodyDataPayload& setOutput(Models::GetVideoDetectShotTaskResponseBodyDataPayloadOutput && output) { DARABONBA_PTR_SET_RVALUE(output_, output) };


    // usage Field Functions 
    bool hasUsage() const { return this->usage_ != nullptr;};
    void deleteUsage() { this->usage_ = nullptr;};
    inline const Models::GetVideoDetectShotTaskResponseBodyDataPayloadUsage & usage() const { DARABONBA_PTR_GET_CONST(usage_, Models::GetVideoDetectShotTaskResponseBodyDataPayloadUsage) };
    inline Models::GetVideoDetectShotTaskResponseBodyDataPayloadUsage usage() { DARABONBA_PTR_GET(usage_, Models::GetVideoDetectShotTaskResponseBodyDataPayloadUsage) };
    inline GetVideoDetectShotTaskResponseBodyDataPayload& setUsage(const Models::GetVideoDetectShotTaskResponseBodyDataPayloadUsage & usage) { DARABONBA_PTR_SET_VALUE(usage_, usage) };
    inline GetVideoDetectShotTaskResponseBodyDataPayload& setUsage(Models::GetVideoDetectShotTaskResponseBodyDataPayloadUsage && usage) { DARABONBA_PTR_SET_RVALUE(usage_, usage) };


  protected:
    std::shared_ptr<Models::GetVideoDetectShotTaskResponseBodyDataPayloadOutput> output_ = nullptr;
    std::shared_ptr<Models::GetVideoDetectShotTaskResponseBodyDataPayloadUsage> usage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuanMiaoLightApp20240801
#endif
