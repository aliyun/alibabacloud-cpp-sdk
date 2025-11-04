// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLIVETRANSCODEJOBRESPONSEBODYJOBOUTPUTSTREAMSTREAMINFOS_HPP_
#define ALIBABACLOUD_MODELS_GETLIVETRANSCODEJOBRESPONSEBODYJOBOUTPUTSTREAMSTREAMINFOS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetLiveTranscodeJobResponseBodyJobOutputStreamStreamInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLiveTranscodeJobResponseBodyJobOutputStreamStreamInfos& obj) { 
      DARABONBA_PTR_TO_JSON(OutputUrl, outputUrl_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, GetLiveTranscodeJobResponseBodyJobOutputStreamStreamInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(OutputUrl, outputUrl_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    GetLiveTranscodeJobResponseBodyJobOutputStreamStreamInfos() = default ;
    GetLiveTranscodeJobResponseBodyJobOutputStreamStreamInfos(const GetLiveTranscodeJobResponseBodyJobOutputStreamStreamInfos &) = default ;
    GetLiveTranscodeJobResponseBodyJobOutputStreamStreamInfos(GetLiveTranscodeJobResponseBodyJobOutputStreamStreamInfos &&) = default ;
    GetLiveTranscodeJobResponseBodyJobOutputStreamStreamInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLiveTranscodeJobResponseBodyJobOutputStreamStreamInfos() = default ;
    GetLiveTranscodeJobResponseBodyJobOutputStreamStreamInfos& operator=(const GetLiveTranscodeJobResponseBodyJobOutputStreamStreamInfos &) = default ;
    GetLiveTranscodeJobResponseBodyJobOutputStreamStreamInfos& operator=(GetLiveTranscodeJobResponseBodyJobOutputStreamStreamInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->outputUrl_ == nullptr
        && return this->type_ == nullptr; };
    // outputUrl Field Functions 
    bool hasOutputUrl() const { return this->outputUrl_ != nullptr;};
    void deleteOutputUrl() { this->outputUrl_ = nullptr;};
    inline string outputUrl() const { DARABONBA_PTR_GET_DEFAULT(outputUrl_, "") };
    inline GetLiveTranscodeJobResponseBodyJobOutputStreamStreamInfos& setOutputUrl(string outputUrl) { DARABONBA_PTR_SET_VALUE(outputUrl_, outputUrl) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetLiveTranscodeJobResponseBodyJobOutputStreamStreamInfos& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The URL of the output stream.
    std::shared_ptr<string> outputUrl_ = nullptr;
    // The type of the output stream protocol. Only the RTMP protocol is supported.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
