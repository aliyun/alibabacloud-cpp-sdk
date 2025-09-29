// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNSEARCHGENERATIONRESPONSEBODYPAYLOADOUTPUTMESSAGESSEARCHRESULTTEXTS_HPP_
#define ALIBABACLOUD_MODELS_RUNSEARCHGENERATIONRESPONSEBODYPAYLOADOUTPUTMESSAGESSEARCHRESULTTEXTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class RunSearchGenerationResponseBodyPayloadOutputMessagesSearchResultTexts : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunSearchGenerationResponseBodyPayloadOutputMessagesSearchResultTexts& obj) { 
      DARABONBA_PTR_TO_JSON(DocUuid, docUuid_);
    };
    friend void from_json(const Darabonba::Json& j, RunSearchGenerationResponseBodyPayloadOutputMessagesSearchResultTexts& obj) { 
      DARABONBA_PTR_FROM_JSON(DocUuid, docUuid_);
    };
    RunSearchGenerationResponseBodyPayloadOutputMessagesSearchResultTexts() = default ;
    RunSearchGenerationResponseBodyPayloadOutputMessagesSearchResultTexts(const RunSearchGenerationResponseBodyPayloadOutputMessagesSearchResultTexts &) = default ;
    RunSearchGenerationResponseBodyPayloadOutputMessagesSearchResultTexts(RunSearchGenerationResponseBodyPayloadOutputMessagesSearchResultTexts &&) = default ;
    RunSearchGenerationResponseBodyPayloadOutputMessagesSearchResultTexts(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunSearchGenerationResponseBodyPayloadOutputMessagesSearchResultTexts() = default ;
    RunSearchGenerationResponseBodyPayloadOutputMessagesSearchResultTexts& operator=(const RunSearchGenerationResponseBodyPayloadOutputMessagesSearchResultTexts &) = default ;
    RunSearchGenerationResponseBodyPayloadOutputMessagesSearchResultTexts& operator=(RunSearchGenerationResponseBodyPayloadOutputMessagesSearchResultTexts &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->docUuid_ != nullptr; };
    // docUuid Field Functions 
    bool hasDocUuid() const { return this->docUuid_ != nullptr;};
    void deleteDocUuid() { this->docUuid_ = nullptr;};
    inline string docUuid() const { DARABONBA_PTR_GET_DEFAULT(docUuid_, "") };
    inline RunSearchGenerationResponseBodyPayloadOutputMessagesSearchResultTexts& setDocUuid(string docUuid) { DARABONBA_PTR_SET_VALUE(docUuid_, docUuid) };


  protected:
    std::shared_ptr<string> docUuid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
