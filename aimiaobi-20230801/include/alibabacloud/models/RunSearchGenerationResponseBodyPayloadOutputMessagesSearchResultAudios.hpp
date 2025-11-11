// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNSEARCHGENERATIONRESPONSEBODYPAYLOADOUTPUTMESSAGESSEARCHRESULTAUDIOS_HPP_
#define ALIBABACLOUD_MODELS_RUNSEARCHGENERATIONRESPONSEBODYPAYLOADOUTPUTMESSAGESSEARCHRESULTAUDIOS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class RunSearchGenerationResponseBodyPayloadOutputMessagesSearchResultAudios : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunSearchGenerationResponseBodyPayloadOutputMessagesSearchResultAudios& obj) { 
      DARABONBA_PTR_TO_JSON(MediaId, mediaId_);
    };
    friend void from_json(const Darabonba::Json& j, RunSearchGenerationResponseBodyPayloadOutputMessagesSearchResultAudios& obj) { 
      DARABONBA_PTR_FROM_JSON(MediaId, mediaId_);
    };
    RunSearchGenerationResponseBodyPayloadOutputMessagesSearchResultAudios() = default ;
    RunSearchGenerationResponseBodyPayloadOutputMessagesSearchResultAudios(const RunSearchGenerationResponseBodyPayloadOutputMessagesSearchResultAudios &) = default ;
    RunSearchGenerationResponseBodyPayloadOutputMessagesSearchResultAudios(RunSearchGenerationResponseBodyPayloadOutputMessagesSearchResultAudios &&) = default ;
    RunSearchGenerationResponseBodyPayloadOutputMessagesSearchResultAudios(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunSearchGenerationResponseBodyPayloadOutputMessagesSearchResultAudios() = default ;
    RunSearchGenerationResponseBodyPayloadOutputMessagesSearchResultAudios& operator=(const RunSearchGenerationResponseBodyPayloadOutputMessagesSearchResultAudios &) = default ;
    RunSearchGenerationResponseBodyPayloadOutputMessagesSearchResultAudios& operator=(RunSearchGenerationResponseBodyPayloadOutputMessagesSearchResultAudios &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->mediaId_ == nullptr; };
    // mediaId Field Functions 
    bool hasMediaId() const { return this->mediaId_ != nullptr;};
    void deleteMediaId() { this->mediaId_ = nullptr;};
    inline string mediaId() const { DARABONBA_PTR_GET_DEFAULT(mediaId_, "") };
    inline RunSearchGenerationResponseBodyPayloadOutputMessagesSearchResultAudios& setMediaId(string mediaId) { DARABONBA_PTR_SET_VALUE(mediaId_, mediaId) };


  protected:
    std::shared_ptr<string> mediaId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
