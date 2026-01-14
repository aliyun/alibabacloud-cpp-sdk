// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTEXTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTTEXTSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class ListTextsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTextsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(generationSource, generationSource_);
      DARABONBA_PTR_TO_JSON(industry, industry_);
      DARABONBA_PTR_TO_JSON(keyword, keyword_);
      DARABONBA_PTR_TO_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(publishStatus, publishStatus_);
      DARABONBA_PTR_TO_JSON(textStyleType, textStyleType_);
      DARABONBA_PTR_TO_JSON(textTheme, textTheme_);
    };
    friend void from_json(const Darabonba::Json& j, ListTextsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(generationSource, generationSource_);
      DARABONBA_PTR_FROM_JSON(industry, industry_);
      DARABONBA_PTR_FROM_JSON(keyword, keyword_);
      DARABONBA_PTR_FROM_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(publishStatus, publishStatus_);
      DARABONBA_PTR_FROM_JSON(textStyleType, textStyleType_);
      DARABONBA_PTR_FROM_JSON(textTheme, textTheme_);
    };
    ListTextsRequest() = default ;
    ListTextsRequest(const ListTextsRequest &) = default ;
    ListTextsRequest(ListTextsRequest &&) = default ;
    ListTextsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTextsRequest() = default ;
    ListTextsRequest& operator=(const ListTextsRequest &) = default ;
    ListTextsRequest& operator=(ListTextsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->generationSource_ == nullptr
        && this->industry_ == nullptr && this->keyword_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->publishStatus_ == nullptr
        && this->textStyleType_ == nullptr && this->textTheme_ == nullptr; };
    // generationSource Field Functions 
    bool hasGenerationSource() const { return this->generationSource_ != nullptr;};
    void deleteGenerationSource() { this->generationSource_ = nullptr;};
    inline string getGenerationSource() const { DARABONBA_PTR_GET_DEFAULT(generationSource_, "") };
    inline ListTextsRequest& setGenerationSource(string generationSource) { DARABONBA_PTR_SET_VALUE(generationSource_, generationSource) };


    // industry Field Functions 
    bool hasIndustry() const { return this->industry_ != nullptr;};
    void deleteIndustry() { this->industry_ = nullptr;};
    inline string getIndustry() const { DARABONBA_PTR_GET_DEFAULT(industry_, "") };
    inline ListTextsRequest& setIndustry(string industry) { DARABONBA_PTR_SET_VALUE(industry_, industry) };


    // keyword Field Functions 
    bool hasKeyword() const { return this->keyword_ != nullptr;};
    void deleteKeyword() { this->keyword_ = nullptr;};
    inline string getKeyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
    inline ListTextsRequest& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListTextsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListTextsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // publishStatus Field Functions 
    bool hasPublishStatus() const { return this->publishStatus_ != nullptr;};
    void deletePublishStatus() { this->publishStatus_ = nullptr;};
    inline string getPublishStatus() const { DARABONBA_PTR_GET_DEFAULT(publishStatus_, "") };
    inline ListTextsRequest& setPublishStatus(string publishStatus) { DARABONBA_PTR_SET_VALUE(publishStatus_, publishStatus) };


    // textStyleType Field Functions 
    bool hasTextStyleType() const { return this->textStyleType_ != nullptr;};
    void deleteTextStyleType() { this->textStyleType_ = nullptr;};
    inline string getTextStyleType() const { DARABONBA_PTR_GET_DEFAULT(textStyleType_, "") };
    inline ListTextsRequest& setTextStyleType(string textStyleType) { DARABONBA_PTR_SET_VALUE(textStyleType_, textStyleType) };


    // textTheme Field Functions 
    bool hasTextTheme() const { return this->textTheme_ != nullptr;};
    void deleteTextTheme() { this->textTheme_ = nullptr;};
    inline string getTextTheme() const { DARABONBA_PTR_GET_DEFAULT(textTheme_, "") };
    inline ListTextsRequest& setTextTheme(string textTheme) { DARABONBA_PTR_SET_VALUE(textTheme_, textTheme) };


  protected:
    shared_ptr<string> generationSource_ {};
    shared_ptr<string> industry_ {};
    shared_ptr<string> keyword_ {};
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> publishStatus_ {};
    shared_ptr<string> textStyleType_ {};
    shared_ptr<string> textTheme_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
