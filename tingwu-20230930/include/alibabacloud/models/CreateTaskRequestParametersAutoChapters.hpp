// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETASKREQUESTPARAMETERSAUTOCHAPTERS_HPP_
#define ALIBABACLOUD_MODELS_CREATETASKREQUESTPARAMETERSAUTOCHAPTERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Tingwu20230930
{
namespace Models
{
  class CreateTaskRequestParametersAutoChapters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTaskRequestParametersAutoChapters& obj) { 
      DARABONBA_PTR_TO_JSON(ChapterGranularity, chapterGranularity_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTaskRequestParametersAutoChapters& obj) { 
      DARABONBA_PTR_FROM_JSON(ChapterGranularity, chapterGranularity_);
    };
    CreateTaskRequestParametersAutoChapters() = default ;
    CreateTaskRequestParametersAutoChapters(const CreateTaskRequestParametersAutoChapters &) = default ;
    CreateTaskRequestParametersAutoChapters(CreateTaskRequestParametersAutoChapters &&) = default ;
    CreateTaskRequestParametersAutoChapters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTaskRequestParametersAutoChapters() = default ;
    CreateTaskRequestParametersAutoChapters& operator=(const CreateTaskRequestParametersAutoChapters &) = default ;
    CreateTaskRequestParametersAutoChapters& operator=(CreateTaskRequestParametersAutoChapters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->chapterGranularity_ != nullptr; };
    // chapterGranularity Field Functions 
    bool hasChapterGranularity() const { return this->chapterGranularity_ != nullptr;};
    void deleteChapterGranularity() { this->chapterGranularity_ = nullptr;};
    inline string chapterGranularity() const { DARABONBA_PTR_GET_DEFAULT(chapterGranularity_, "") };
    inline CreateTaskRequestParametersAutoChapters& setChapterGranularity(string chapterGranularity) { DARABONBA_PTR_SET_VALUE(chapterGranularity_, chapterGranularity) };


  protected:
    std::shared_ptr<string> chapterGranularity_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Tingwu20230930
#endif
