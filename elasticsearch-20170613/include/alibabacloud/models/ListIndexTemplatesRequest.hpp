// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINDEXTEMPLATESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTINDEXTEMPLATESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class ListIndexTemplatesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListIndexTemplatesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(indexTemplate, indexTemplate_);
      DARABONBA_PTR_TO_JSON(page, page_);
      DARABONBA_PTR_TO_JSON(size, size_);
    };
    friend void from_json(const Darabonba::Json& j, ListIndexTemplatesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(indexTemplate, indexTemplate_);
      DARABONBA_PTR_FROM_JSON(page, page_);
      DARABONBA_PTR_FROM_JSON(size, size_);
    };
    ListIndexTemplatesRequest() = default ;
    ListIndexTemplatesRequest(const ListIndexTemplatesRequest &) = default ;
    ListIndexTemplatesRequest(ListIndexTemplatesRequest &&) = default ;
    ListIndexTemplatesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListIndexTemplatesRequest() = default ;
    ListIndexTemplatesRequest& operator=(const ListIndexTemplatesRequest &) = default ;
    ListIndexTemplatesRequest& operator=(ListIndexTemplatesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->indexTemplate_ == nullptr
        && this->page_ == nullptr && this->size_ == nullptr; };
    // indexTemplate Field Functions 
    bool hasIndexTemplate() const { return this->indexTemplate_ != nullptr;};
    void deleteIndexTemplate() { this->indexTemplate_ = nullptr;};
    inline string getIndexTemplate() const { DARABONBA_PTR_GET_DEFAULT(indexTemplate_, "") };
    inline ListIndexTemplatesRequest& setIndexTemplate(string indexTemplate) { DARABONBA_PTR_SET_VALUE(indexTemplate_, indexTemplate) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline int32_t getPage() const { DARABONBA_PTR_GET_DEFAULT(page_, 0) };
    inline ListIndexTemplatesRequest& setPage(int32_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int32_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0) };
    inline ListIndexTemplatesRequest& setSize(int32_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


  protected:
    shared_ptr<string> indexTemplate_ {};
    shared_ptr<int32_t> page_ {};
    shared_ptr<int32_t> size_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
