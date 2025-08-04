// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNWRITINGREQUESTWRITINGCONFIGTAGS_HPP_
#define ALIBABACLOUD_MODELS_RUNWRITINGREQUESTWRITINGCONFIGTAGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class RunWritingRequestWritingConfigTags : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunWritingRequestWritingConfigTags& obj) { 
      DARABONBA_PTR_TO_JSON(Keyword, keyword_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, RunWritingRequestWritingConfigTags& obj) { 
      DARABONBA_PTR_FROM_JSON(Keyword, keyword_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    RunWritingRequestWritingConfigTags() = default ;
    RunWritingRequestWritingConfigTags(const RunWritingRequestWritingConfigTags &) = default ;
    RunWritingRequestWritingConfigTags(RunWritingRequestWritingConfigTags &&) = default ;
    RunWritingRequestWritingConfigTags(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunWritingRequestWritingConfigTags() = default ;
    RunWritingRequestWritingConfigTags& operator=(const RunWritingRequestWritingConfigTags &) = default ;
    RunWritingRequestWritingConfigTags& operator=(RunWritingRequestWritingConfigTags &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->keyword_ != nullptr
        && this->tag_ != nullptr; };
    // keyword Field Functions 
    bool hasKeyword() const { return this->keyword_ != nullptr;};
    void deleteKeyword() { this->keyword_ = nullptr;};
    inline string keyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
    inline RunWritingRequestWritingConfigTags& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline string tag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
    inline RunWritingRequestWritingConfigTags& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


  protected:
    std::shared_ptr<string> keyword_ = nullptr;
    std::shared_ptr<string> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
