// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMAUDITRESPONSEBODYIMAGERESULTSRESULTRESULTSHINTWORDSINFO_HPP_
#define ALIBABACLOUD_MODELS_IMAUDITRESPONSEBODYIMAGERESULTSRESULTRESULTSHINTWORDSINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class ImAuditResponseBodyImageResultsResultResultsHintWordsInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImAuditResponseBodyImageResultsResultResultsHintWordsInfo& obj) { 
      DARABONBA_PTR_TO_JSON(context, context_);
    };
    friend void from_json(const Darabonba::Json& j, ImAuditResponseBodyImageResultsResultResultsHintWordsInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(context, context_);
    };
    ImAuditResponseBodyImageResultsResultResultsHintWordsInfo() = default ;
    ImAuditResponseBodyImageResultsResultResultsHintWordsInfo(const ImAuditResponseBodyImageResultsResultResultsHintWordsInfo &) = default ;
    ImAuditResponseBodyImageResultsResultResultsHintWordsInfo(ImAuditResponseBodyImageResultsResultResultsHintWordsInfo &&) = default ;
    ImAuditResponseBodyImageResultsResultResultsHintWordsInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImAuditResponseBodyImageResultsResultResultsHintWordsInfo() = default ;
    ImAuditResponseBodyImageResultsResultResultsHintWordsInfo& operator=(const ImAuditResponseBodyImageResultsResultResultsHintWordsInfo &) = default ;
    ImAuditResponseBodyImageResultsResultResultsHintWordsInfo& operator=(ImAuditResponseBodyImageResultsResultResultsHintWordsInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->context_ == nullptr; };
    // context Field Functions 
    bool hasContext() const { return this->context_ != nullptr;};
    void deleteContext() { this->context_ = nullptr;};
    inline string context() const { DARABONBA_PTR_GET_DEFAULT(context_, "") };
    inline ImAuditResponseBodyImageResultsResultResultsHintWordsInfo& setContext(string context) { DARABONBA_PTR_SET_VALUE(context_, context) };


  protected:
    // The term hit by the detected text.
    std::shared_ptr<string> context_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
