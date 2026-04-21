// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MEDICALKNOWLEDGEINFO_HPP_
#define ALIBABACLOUD_MODELS_MEDICALKNOWLEDGEINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IQS20241111
{
namespace Models
{
  class MedicalKnowledgeInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MedicalKnowledgeInfo& obj) { 
      DARABONBA_PTR_TO_JSON(content, content_);
      DARABONBA_PTR_TO_JSON(url, url_);
    };
    friend void from_json(const Darabonba::Json& j, MedicalKnowledgeInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(content, content_);
      DARABONBA_PTR_FROM_JSON(url, url_);
    };
    MedicalKnowledgeInfo() = default ;
    MedicalKnowledgeInfo(const MedicalKnowledgeInfo &) = default ;
    MedicalKnowledgeInfo(MedicalKnowledgeInfo &&) = default ;
    MedicalKnowledgeInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MedicalKnowledgeInfo() = default ;
    MedicalKnowledgeInfo& operator=(const MedicalKnowledgeInfo &) = default ;
    MedicalKnowledgeInfo& operator=(MedicalKnowledgeInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->content_ == nullptr
        && this->url_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline MedicalKnowledgeInfo& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline MedicalKnowledgeInfo& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    shared_ptr<string> content_ {};
    shared_ptr<string> url_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IQS20241111
#endif
