// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDOCUMENTRETRIEVERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTDOCUMENTRETRIEVERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class ListDocumentRetrieveResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDocumentRetrieveResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Essay, essay_);
      DARABONBA_PTR_TO_JSON(IssuingAuthority, issuingAuthority_);
      DARABONBA_PTR_TO_JSON(Link, link_);
      DARABONBA_PTR_TO_JSON(PublicationDate, publicationDate_);
      DARABONBA_PTR_TO_JSON(Title, title_);
    };
    friend void from_json(const Darabonba::Json& j, ListDocumentRetrieveResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Essay, essay_);
      DARABONBA_PTR_FROM_JSON(IssuingAuthority, issuingAuthority_);
      DARABONBA_PTR_FROM_JSON(Link, link_);
      DARABONBA_PTR_FROM_JSON(PublicationDate, publicationDate_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
    };
    ListDocumentRetrieveResponseBodyData() = default ;
    ListDocumentRetrieveResponseBodyData(const ListDocumentRetrieveResponseBodyData &) = default ;
    ListDocumentRetrieveResponseBodyData(ListDocumentRetrieveResponseBodyData &&) = default ;
    ListDocumentRetrieveResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDocumentRetrieveResponseBodyData() = default ;
    ListDocumentRetrieveResponseBodyData& operator=(const ListDocumentRetrieveResponseBodyData &) = default ;
    ListDocumentRetrieveResponseBodyData& operator=(ListDocumentRetrieveResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->essay_ == nullptr
        && return this->issuingAuthority_ == nullptr && return this->link_ == nullptr && return this->publicationDate_ == nullptr && return this->title_ == nullptr; };
    // essay Field Functions 
    bool hasEssay() const { return this->essay_ != nullptr;};
    void deleteEssay() { this->essay_ = nullptr;};
    inline string essay() const { DARABONBA_PTR_GET_DEFAULT(essay_, "") };
    inline ListDocumentRetrieveResponseBodyData& setEssay(string essay) { DARABONBA_PTR_SET_VALUE(essay_, essay) };


    // issuingAuthority Field Functions 
    bool hasIssuingAuthority() const { return this->issuingAuthority_ != nullptr;};
    void deleteIssuingAuthority() { this->issuingAuthority_ = nullptr;};
    inline string issuingAuthority() const { DARABONBA_PTR_GET_DEFAULT(issuingAuthority_, "") };
    inline ListDocumentRetrieveResponseBodyData& setIssuingAuthority(string issuingAuthority) { DARABONBA_PTR_SET_VALUE(issuingAuthority_, issuingAuthority) };


    // link Field Functions 
    bool hasLink() const { return this->link_ != nullptr;};
    void deleteLink() { this->link_ = nullptr;};
    inline string link() const { DARABONBA_PTR_GET_DEFAULT(link_, "") };
    inline ListDocumentRetrieveResponseBodyData& setLink(string link) { DARABONBA_PTR_SET_VALUE(link_, link) };


    // publicationDate Field Functions 
    bool hasPublicationDate() const { return this->publicationDate_ != nullptr;};
    void deletePublicationDate() { this->publicationDate_ = nullptr;};
    inline string publicationDate() const { DARABONBA_PTR_GET_DEFAULT(publicationDate_, "") };
    inline ListDocumentRetrieveResponseBodyData& setPublicationDate(string publicationDate) { DARABONBA_PTR_SET_VALUE(publicationDate_, publicationDate) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline ListDocumentRetrieveResponseBodyData& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    std::shared_ptr<string> essay_ = nullptr;
    std::shared_ptr<string> issuingAuthority_ = nullptr;
    std::shared_ptr<string> link_ = nullptr;
    std::shared_ptr<string> publicationDate_ = nullptr;
    std::shared_ptr<string> title_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
