// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEDOMAINONLINEUSERNUMRESPONSEBODYONLINEUSERINFOLIVESTREAMONLINEUSERNUMINFOINFOSINFO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEDOMAINONLINEUSERNUMRESPONSEBODYONLINEUSERINFOLIVESTREAMONLINEUSERNUMINFOINFOSINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveDomainOnlineUserNumResponseBodyOnlineUserInfoLiveStreamOnlineUserNumInfoInfosInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveDomainOnlineUserNumResponseBodyOnlineUserInfoLiveStreamOnlineUserNumInfoInfosInfo& obj) { 
      DARABONBA_PTR_TO_JSON(TranscodeTemplate, transcodeTemplate_);
      DARABONBA_PTR_TO_JSON(UserNumber, userNumber_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveDomainOnlineUserNumResponseBodyOnlineUserInfoLiveStreamOnlineUserNumInfoInfosInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(TranscodeTemplate, transcodeTemplate_);
      DARABONBA_PTR_FROM_JSON(UserNumber, userNumber_);
    };
    DescribeLiveDomainOnlineUserNumResponseBodyOnlineUserInfoLiveStreamOnlineUserNumInfoInfosInfo() = default ;
    DescribeLiveDomainOnlineUserNumResponseBodyOnlineUserInfoLiveStreamOnlineUserNumInfoInfosInfo(const DescribeLiveDomainOnlineUserNumResponseBodyOnlineUserInfoLiveStreamOnlineUserNumInfoInfosInfo &) = default ;
    DescribeLiveDomainOnlineUserNumResponseBodyOnlineUserInfoLiveStreamOnlineUserNumInfoInfosInfo(DescribeLiveDomainOnlineUserNumResponseBodyOnlineUserInfoLiveStreamOnlineUserNumInfoInfosInfo &&) = default ;
    DescribeLiveDomainOnlineUserNumResponseBodyOnlineUserInfoLiveStreamOnlineUserNumInfoInfosInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveDomainOnlineUserNumResponseBodyOnlineUserInfoLiveStreamOnlineUserNumInfoInfosInfo() = default ;
    DescribeLiveDomainOnlineUserNumResponseBodyOnlineUserInfoLiveStreamOnlineUserNumInfoInfosInfo& operator=(const DescribeLiveDomainOnlineUserNumResponseBodyOnlineUserInfoLiveStreamOnlineUserNumInfoInfosInfo &) = default ;
    DescribeLiveDomainOnlineUserNumResponseBodyOnlineUserInfoLiveStreamOnlineUserNumInfoInfosInfo& operator=(DescribeLiveDomainOnlineUserNumResponseBodyOnlineUserInfoLiveStreamOnlineUserNumInfoInfosInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->transcodeTemplate_ == nullptr
        && return this->userNumber_ == nullptr; };
    // transcodeTemplate Field Functions 
    bool hasTranscodeTemplate() const { return this->transcodeTemplate_ != nullptr;};
    void deleteTranscodeTemplate() { this->transcodeTemplate_ = nullptr;};
    inline string transcodeTemplate() const { DARABONBA_PTR_GET_DEFAULT(transcodeTemplate_, "") };
    inline DescribeLiveDomainOnlineUserNumResponseBodyOnlineUserInfoLiveStreamOnlineUserNumInfoInfosInfo& setTranscodeTemplate(string transcodeTemplate) { DARABONBA_PTR_SET_VALUE(transcodeTemplate_, transcodeTemplate) };


    // userNumber Field Functions 
    bool hasUserNumber() const { return this->userNumber_ != nullptr;};
    void deleteUserNumber() { this->userNumber_ = nullptr;};
    inline int64_t userNumber() const { DARABONBA_PTR_GET_DEFAULT(userNumber_, 0L) };
    inline DescribeLiveDomainOnlineUserNumResponseBodyOnlineUserInfoLiveStreamOnlineUserNumInfoInfosInfo& setUserNumber(int64_t userNumber) { DARABONBA_PTR_SET_VALUE(userNumber_, userNumber) };


  protected:
    // The transcoding template. A value of origin indicates that the stream is a source stream.
    std::shared_ptr<string> transcodeTemplate_ = nullptr;
    // The number of online users for the stream, which can be a source stream or transcoded stream.
    std::shared_ptr<int64_t> userNumber_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
