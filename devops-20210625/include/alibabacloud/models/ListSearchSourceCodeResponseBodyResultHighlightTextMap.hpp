// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSEARCHSOURCECODERESPONSEBODYRESULTHIGHLIGHTTEXTMAP_HPP_
#define ALIBABACLOUD_MODELS_LISTSEARCHSOURCECODERESPONSEBODYRESULTHIGHLIGHTTEXTMAP_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class ListSearchSourceCodeResponseBodyResultHighlightTextMap : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSearchSourceCodeResponseBodyResultHighlightTextMap& obj) { 
      DARABONBA_PTR_TO_JSON(clob, clob_);
      DARABONBA_PTR_TO_JSON(fileName, fileName_);
      DARABONBA_PTR_TO_JSON(language, language_);
      DARABONBA_PTR_TO_JSON(organizationId, organizationId_);
    };
    friend void from_json(const Darabonba::Json& j, ListSearchSourceCodeResponseBodyResultHighlightTextMap& obj) { 
      DARABONBA_PTR_FROM_JSON(clob, clob_);
      DARABONBA_PTR_FROM_JSON(fileName, fileName_);
      DARABONBA_PTR_FROM_JSON(language, language_);
      DARABONBA_PTR_FROM_JSON(organizationId, organizationId_);
    };
    ListSearchSourceCodeResponseBodyResultHighlightTextMap() = default ;
    ListSearchSourceCodeResponseBodyResultHighlightTextMap(const ListSearchSourceCodeResponseBodyResultHighlightTextMap &) = default ;
    ListSearchSourceCodeResponseBodyResultHighlightTextMap(ListSearchSourceCodeResponseBodyResultHighlightTextMap &&) = default ;
    ListSearchSourceCodeResponseBodyResultHighlightTextMap(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSearchSourceCodeResponseBodyResultHighlightTextMap() = default ;
    ListSearchSourceCodeResponseBodyResultHighlightTextMap& operator=(const ListSearchSourceCodeResponseBodyResultHighlightTextMap &) = default ;
    ListSearchSourceCodeResponseBodyResultHighlightTextMap& operator=(ListSearchSourceCodeResponseBodyResultHighlightTextMap &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clob_ == nullptr
        && return this->fileName_ == nullptr && return this->language_ == nullptr && return this->organizationId_ == nullptr; };
    // clob Field Functions 
    bool hasClob() const { return this->clob_ != nullptr;};
    void deleteClob() { this->clob_ = nullptr;};
    inline string clob() const { DARABONBA_PTR_GET_DEFAULT(clob_, "") };
    inline ListSearchSourceCodeResponseBodyResultHighlightTextMap& setClob(string clob) { DARABONBA_PTR_SET_VALUE(clob_, clob) };


    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string fileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline ListSearchSourceCodeResponseBodyResultHighlightTextMap& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string language() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline ListSearchSourceCodeResponseBodyResultHighlightTextMap& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


    // organizationId Field Functions 
    bool hasOrganizationId() const { return this->organizationId_ != nullptr;};
    void deleteOrganizationId() { this->organizationId_ = nullptr;};
    inline string organizationId() const { DARABONBA_PTR_GET_DEFAULT(organizationId_, "") };
    inline ListSearchSourceCodeResponseBodyResultHighlightTextMap& setOrganizationId(string organizationId) { DARABONBA_PTR_SET_VALUE(organizationId_, organizationId) };


  protected:
    std::shared_ptr<string> clob_ = nullptr;
    std::shared_ptr<string> fileName_ = nullptr;
    std::shared_ptr<string> language_ = nullptr;
    std::shared_ptr<string> organizationId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
