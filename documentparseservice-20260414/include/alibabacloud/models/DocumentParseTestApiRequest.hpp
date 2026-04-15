// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DOCUMENTPARSETESTAPIREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DOCUMENTPARSETESTAPIREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DocumentParseService20260414
{
namespace Models
{
  class DocumentParseTestApiRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DocumentParseTestApiRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DocumentParseTestApiRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DocumentParseTestApiRequest() = default ;
    DocumentParseTestApiRequest(const DocumentParseTestApiRequest &) = default ;
    DocumentParseTestApiRequest(DocumentParseTestApiRequest &&) = default ;
    DocumentParseTestApiRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DocumentParseTestApiRequest() = default ;
    DocumentParseTestApiRequest& operator=(const DocumentParseTestApiRequest &) = default ;
    DocumentParseTestApiRequest& operator=(DocumentParseTestApiRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->imageUrl_ == nullptr
        && this->type_ == nullptr; };
    // imageUrl Field Functions 
    bool hasImageUrl() const { return this->imageUrl_ != nullptr;};
    void deleteImageUrl() { this->imageUrl_ = nullptr;};
    inline string getImageUrl() const { DARABONBA_PTR_GET_DEFAULT(imageUrl_, "") };
    inline DocumentParseTestApiRequest& setImageUrl(string imageUrl) { DARABONBA_PTR_SET_VALUE(imageUrl_, imageUrl) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline int64_t getType() const { DARABONBA_PTR_GET_DEFAULT(type_, 0L) };
    inline DocumentParseTestApiRequest& setType(int64_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    shared_ptr<string> imageUrl_ {};
    shared_ptr<int64_t> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DocumentParseService20260414
#endif
