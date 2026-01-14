// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COUNTTEXTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_COUNTTEXTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class CountTextRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CountTextRequest& obj) { 
      DARABONBA_PTR_TO_JSON(generationSource, generationSource_);
      DARABONBA_PTR_TO_JSON(industry, industry_);
      DARABONBA_PTR_TO_JSON(publishStatus, publishStatus_);
      DARABONBA_PTR_TO_JSON(style, style_);
    };
    friend void from_json(const Darabonba::Json& j, CountTextRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(generationSource, generationSource_);
      DARABONBA_PTR_FROM_JSON(industry, industry_);
      DARABONBA_PTR_FROM_JSON(publishStatus, publishStatus_);
      DARABONBA_PTR_FROM_JSON(style, style_);
    };
    CountTextRequest() = default ;
    CountTextRequest(const CountTextRequest &) = default ;
    CountTextRequest(CountTextRequest &&) = default ;
    CountTextRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CountTextRequest() = default ;
    CountTextRequest& operator=(const CountTextRequest &) = default ;
    CountTextRequest& operator=(CountTextRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->generationSource_ == nullptr
        && this->industry_ == nullptr && this->publishStatus_ == nullptr && this->style_ == nullptr; };
    // generationSource Field Functions 
    bool hasGenerationSource() const { return this->generationSource_ != nullptr;};
    void deleteGenerationSource() { this->generationSource_ = nullptr;};
    inline string getGenerationSource() const { DARABONBA_PTR_GET_DEFAULT(generationSource_, "") };
    inline CountTextRequest& setGenerationSource(string generationSource) { DARABONBA_PTR_SET_VALUE(generationSource_, generationSource) };


    // industry Field Functions 
    bool hasIndustry() const { return this->industry_ != nullptr;};
    void deleteIndustry() { this->industry_ = nullptr;};
    inline string getIndustry() const { DARABONBA_PTR_GET_DEFAULT(industry_, "") };
    inline CountTextRequest& setIndustry(string industry) { DARABONBA_PTR_SET_VALUE(industry_, industry) };


    // publishStatus Field Functions 
    bool hasPublishStatus() const { return this->publishStatus_ != nullptr;};
    void deletePublishStatus() { this->publishStatus_ = nullptr;};
    inline string getPublishStatus() const { DARABONBA_PTR_GET_DEFAULT(publishStatus_, "") };
    inline CountTextRequest& setPublishStatus(string publishStatus) { DARABONBA_PTR_SET_VALUE(publishStatus_, publishStatus) };


    // style Field Functions 
    bool hasStyle() const { return this->style_ != nullptr;};
    void deleteStyle() { this->style_ = nullptr;};
    inline string getStyle() const { DARABONBA_PTR_GET_DEFAULT(style_, "") };
    inline CountTextRequest& setStyle(string style) { DARABONBA_PTR_SET_VALUE(style_, style) };


  protected:
    // API
    shared_ptr<string> generationSource_ {};
    shared_ptr<string> industry_ {};
    shared_ptr<string> publishStatus_ {};
    shared_ptr<string> style_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
