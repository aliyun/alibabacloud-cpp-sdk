// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPLUGINTEMPLATESRESPONSEBODYTEMPLATESTEMPLATE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPLUGINTEMPLATESRESPONSEBODYTEMPLATESTEMPLATE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribePluginTemplatesResponseBodyTemplatesTemplate : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePluginTemplatesResponseBodyTemplatesTemplate& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DocumentAnchor, documentAnchor_);
      DARABONBA_PTR_TO_JSON(DocumentId, documentId_);
      DARABONBA_PTR_TO_JSON(Sample, sample_);
      DARABONBA_PTR_TO_JSON(Title, title_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePluginTemplatesResponseBodyTemplatesTemplate& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DocumentAnchor, documentAnchor_);
      DARABONBA_PTR_FROM_JSON(DocumentId, documentId_);
      DARABONBA_PTR_FROM_JSON(Sample, sample_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
    };
    DescribePluginTemplatesResponseBodyTemplatesTemplate() = default ;
    DescribePluginTemplatesResponseBodyTemplatesTemplate(const DescribePluginTemplatesResponseBodyTemplatesTemplate &) = default ;
    DescribePluginTemplatesResponseBodyTemplatesTemplate(DescribePluginTemplatesResponseBodyTemplatesTemplate &&) = default ;
    DescribePluginTemplatesResponseBodyTemplatesTemplate(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePluginTemplatesResponseBodyTemplatesTemplate() = default ;
    DescribePluginTemplatesResponseBodyTemplatesTemplate& operator=(const DescribePluginTemplatesResponseBodyTemplatesTemplate &) = default ;
    DescribePluginTemplatesResponseBodyTemplatesTemplate& operator=(DescribePluginTemplatesResponseBodyTemplatesTemplate &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && return this->documentAnchor_ == nullptr && return this->documentId_ == nullptr && return this->sample_ == nullptr && return this->title_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribePluginTemplatesResponseBodyTemplatesTemplate& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // documentAnchor Field Functions 
    bool hasDocumentAnchor() const { return this->documentAnchor_ != nullptr;};
    void deleteDocumentAnchor() { this->documentAnchor_ = nullptr;};
    inline string documentAnchor() const { DARABONBA_PTR_GET_DEFAULT(documentAnchor_, "") };
    inline DescribePluginTemplatesResponseBodyTemplatesTemplate& setDocumentAnchor(string documentAnchor) { DARABONBA_PTR_SET_VALUE(documentAnchor_, documentAnchor) };


    // documentId Field Functions 
    bool hasDocumentId() const { return this->documentId_ != nullptr;};
    void deleteDocumentId() { this->documentId_ = nullptr;};
    inline string documentId() const { DARABONBA_PTR_GET_DEFAULT(documentId_, "") };
    inline DescribePluginTemplatesResponseBodyTemplatesTemplate& setDocumentId(string documentId) { DARABONBA_PTR_SET_VALUE(documentId_, documentId) };


    // sample Field Functions 
    bool hasSample() const { return this->sample_ != nullptr;};
    void deleteSample() { this->sample_ = nullptr;};
    inline string sample() const { DARABONBA_PTR_GET_DEFAULT(sample_, "") };
    inline DescribePluginTemplatesResponseBodyTemplatesTemplate& setSample(string sample) { DARABONBA_PTR_SET_VALUE(sample_, sample) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline DescribePluginTemplatesResponseBodyTemplatesTemplate& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    // The description.
    std::shared_ptr<string> description_ = nullptr;
    // The document anchor point.
    std::shared_ptr<string> documentAnchor_ = nullptr;
    // The ID of the document.
    std::shared_ptr<string> documentId_ = nullptr;
    // The sample.
    std::shared_ptr<string> sample_ = nullptr;
    // The title of the plug-in template title.
    std::shared_ptr<string> title_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
