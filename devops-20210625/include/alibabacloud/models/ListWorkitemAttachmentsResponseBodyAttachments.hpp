// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTWORKITEMATTACHMENTSRESPONSEBODYATTACHMENTS_HPP_
#define ALIBABACLOUD_MODELS_LISTWORKITEMATTACHMENTSRESPONSEBODYATTACHMENTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class ListWorkitemAttachmentsResponseBodyAttachments : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListWorkitemAttachmentsResponseBodyAttachments& obj) { 
      DARABONBA_PTR_TO_JSON(creator, creator_);
      DARABONBA_PTR_TO_JSON(fileIdentifier, fileIdentifier_);
      DARABONBA_PTR_TO_JSON(fileName, fileName_);
      DARABONBA_PTR_TO_JSON(fileSuffix, fileSuffix_);
      DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(size, size_);
      DARABONBA_PTR_TO_JSON(url, url_);
    };
    friend void from_json(const Darabonba::Json& j, ListWorkitemAttachmentsResponseBodyAttachments& obj) { 
      DARABONBA_PTR_FROM_JSON(creator, creator_);
      DARABONBA_PTR_FROM_JSON(fileIdentifier, fileIdentifier_);
      DARABONBA_PTR_FROM_JSON(fileName, fileName_);
      DARABONBA_PTR_FROM_JSON(fileSuffix, fileSuffix_);
      DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(size, size_);
      DARABONBA_PTR_FROM_JSON(url, url_);
    };
    ListWorkitemAttachmentsResponseBodyAttachments() = default ;
    ListWorkitemAttachmentsResponseBodyAttachments(const ListWorkitemAttachmentsResponseBodyAttachments &) = default ;
    ListWorkitemAttachmentsResponseBodyAttachments(ListWorkitemAttachmentsResponseBodyAttachments &&) = default ;
    ListWorkitemAttachmentsResponseBodyAttachments(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListWorkitemAttachmentsResponseBodyAttachments() = default ;
    ListWorkitemAttachmentsResponseBodyAttachments& operator=(const ListWorkitemAttachmentsResponseBodyAttachments &) = default ;
    ListWorkitemAttachmentsResponseBodyAttachments& operator=(ListWorkitemAttachmentsResponseBodyAttachments &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->creator_ == nullptr
        && return this->fileIdentifier_ == nullptr && return this->fileName_ == nullptr && return this->fileSuffix_ == nullptr && return this->gmtCreate_ == nullptr && return this->size_ == nullptr
        && return this->url_ == nullptr; };
    // creator Field Functions 
    bool hasCreator() const { return this->creator_ != nullptr;};
    void deleteCreator() { this->creator_ = nullptr;};
    inline string creator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
    inline ListWorkitemAttachmentsResponseBodyAttachments& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


    // fileIdentifier Field Functions 
    bool hasFileIdentifier() const { return this->fileIdentifier_ != nullptr;};
    void deleteFileIdentifier() { this->fileIdentifier_ = nullptr;};
    inline string fileIdentifier() const { DARABONBA_PTR_GET_DEFAULT(fileIdentifier_, "") };
    inline ListWorkitemAttachmentsResponseBodyAttachments& setFileIdentifier(string fileIdentifier) { DARABONBA_PTR_SET_VALUE(fileIdentifier_, fileIdentifier) };


    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string fileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline ListWorkitemAttachmentsResponseBodyAttachments& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // fileSuffix Field Functions 
    bool hasFileSuffix() const { return this->fileSuffix_ != nullptr;};
    void deleteFileSuffix() { this->fileSuffix_ = nullptr;};
    inline string fileSuffix() const { DARABONBA_PTR_GET_DEFAULT(fileSuffix_, "") };
    inline ListWorkitemAttachmentsResponseBodyAttachments& setFileSuffix(string fileSuffix) { DARABONBA_PTR_SET_VALUE(fileSuffix_, fileSuffix) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline int64_t gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
    inline ListWorkitemAttachmentsResponseBodyAttachments& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline string size() const { DARABONBA_PTR_GET_DEFAULT(size_, "") };
    inline ListWorkitemAttachmentsResponseBodyAttachments& setSize(string size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline ListWorkitemAttachmentsResponseBodyAttachments& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    std::shared_ptr<string> creator_ = nullptr;
    std::shared_ptr<string> fileIdentifier_ = nullptr;
    std::shared_ptr<string> fileName_ = nullptr;
    std::shared_ptr<string> fileSuffix_ = nullptr;
    std::shared_ptr<int64_t> gmtCreate_ = nullptr;
    std::shared_ptr<string> size_ = nullptr;
    std::shared_ptr<string> url_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
