// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAUDITRESULTRESPONSEBODYAIAUDITRESULT_HPP_
#define ALIBABACLOUD_MODELS_GETAUDITRESULTRESPONSEBODYAIAUDITRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetAuditResultResponseBodyAIAuditResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAuditResultResponseBodyAIAuditResult& obj) { 
      DARABONBA_PTR_TO_JSON(AbnormalModules, abnormalModules_);
      DARABONBA_PTR_TO_JSON(CoverResult, coverResult_);
      DARABONBA_PTR_TO_JSON(ImageResult, imageResult_);
      DARABONBA_PTR_TO_JSON(Label, label_);
      DARABONBA_PTR_TO_JSON(PornResult, pornResult_);
      DARABONBA_PTR_TO_JSON(TerrorismResult, terrorismResult_);
      DARABONBA_PTR_TO_JSON(TitleResult, titleResult_);
    };
    friend void from_json(const Darabonba::Json& j, GetAuditResultResponseBodyAIAuditResult& obj) { 
      DARABONBA_PTR_FROM_JSON(AbnormalModules, abnormalModules_);
      DARABONBA_PTR_FROM_JSON(CoverResult, coverResult_);
      DARABONBA_PTR_FROM_JSON(ImageResult, imageResult_);
      DARABONBA_PTR_FROM_JSON(Label, label_);
      DARABONBA_PTR_FROM_JSON(PornResult, pornResult_);
      DARABONBA_PTR_FROM_JSON(TerrorismResult, terrorismResult_);
      DARABONBA_PTR_FROM_JSON(TitleResult, titleResult_);
    };
    GetAuditResultResponseBodyAIAuditResult() = default ;
    GetAuditResultResponseBodyAIAuditResult(const GetAuditResultResponseBodyAIAuditResult &) = default ;
    GetAuditResultResponseBodyAIAuditResult(GetAuditResultResponseBodyAIAuditResult &&) = default ;
    GetAuditResultResponseBodyAIAuditResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAuditResultResponseBodyAIAuditResult() = default ;
    GetAuditResultResponseBodyAIAuditResult& operator=(const GetAuditResultResponseBodyAIAuditResult &) = default ;
    GetAuditResultResponseBodyAIAuditResult& operator=(GetAuditResultResponseBodyAIAuditResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->abnormalModules_ != nullptr
        && this->coverResult_ != nullptr && this->imageResult_ != nullptr && this->label_ != nullptr && this->pornResult_ != nullptr && this->terrorismResult_ != nullptr
        && this->titleResult_ != nullptr; };
    // abnormalModules Field Functions 
    bool hasAbnormalModules() const { return this->abnormalModules_ != nullptr;};
    void deleteAbnormalModules() { this->abnormalModules_ = nullptr;};
    inline string abnormalModules() const { DARABONBA_PTR_GET_DEFAULT(abnormalModules_, "") };
    inline GetAuditResultResponseBodyAIAuditResult& setAbnormalModules(string abnormalModules) { DARABONBA_PTR_SET_VALUE(abnormalModules_, abnormalModules) };


    // coverResult Field Functions 
    bool hasCoverResult() const { return this->coverResult_ != nullptr;};
    void deleteCoverResult() { this->coverResult_ = nullptr;};
    inline string coverResult() const { DARABONBA_PTR_GET_DEFAULT(coverResult_, "") };
    inline GetAuditResultResponseBodyAIAuditResult& setCoverResult(string coverResult) { DARABONBA_PTR_SET_VALUE(coverResult_, coverResult) };


    // imageResult Field Functions 
    bool hasImageResult() const { return this->imageResult_ != nullptr;};
    void deleteImageResult() { this->imageResult_ = nullptr;};
    inline string imageResult() const { DARABONBA_PTR_GET_DEFAULT(imageResult_, "") };
    inline GetAuditResultResponseBodyAIAuditResult& setImageResult(string imageResult) { DARABONBA_PTR_SET_VALUE(imageResult_, imageResult) };


    // label Field Functions 
    bool hasLabel() const { return this->label_ != nullptr;};
    void deleteLabel() { this->label_ = nullptr;};
    inline string label() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
    inline GetAuditResultResponseBodyAIAuditResult& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


    // pornResult Field Functions 
    bool hasPornResult() const { return this->pornResult_ != nullptr;};
    void deletePornResult() { this->pornResult_ = nullptr;};
    inline string pornResult() const { DARABONBA_PTR_GET_DEFAULT(pornResult_, "") };
    inline GetAuditResultResponseBodyAIAuditResult& setPornResult(string pornResult) { DARABONBA_PTR_SET_VALUE(pornResult_, pornResult) };


    // terrorismResult Field Functions 
    bool hasTerrorismResult() const { return this->terrorismResult_ != nullptr;};
    void deleteTerrorismResult() { this->terrorismResult_ = nullptr;};
    inline string terrorismResult() const { DARABONBA_PTR_GET_DEFAULT(terrorismResult_, "") };
    inline GetAuditResultResponseBodyAIAuditResult& setTerrorismResult(string terrorismResult) { DARABONBA_PTR_SET_VALUE(terrorismResult_, terrorismResult) };


    // titleResult Field Functions 
    bool hasTitleResult() const { return this->titleResult_ != nullptr;};
    void deleteTitleResult() { this->titleResult_ = nullptr;};
    inline string titleResult() const { DARABONBA_PTR_GET_DEFAULT(titleResult_, "") };
    inline GetAuditResultResponseBodyAIAuditResult& setTitleResult(string titleResult) { DARABONBA_PTR_SET_VALUE(titleResult_, titleResult) };


  protected:
    std::shared_ptr<string> abnormalModules_ = nullptr;
    std::shared_ptr<string> coverResult_ = nullptr;
    std::shared_ptr<string> imageResult_ = nullptr;
    std::shared_ptr<string> label_ = nullptr;
    std::shared_ptr<string> pornResult_ = nullptr;
    std::shared_ptr<string> terrorismResult_ = nullptr;
    std::shared_ptr<string> titleResult_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
