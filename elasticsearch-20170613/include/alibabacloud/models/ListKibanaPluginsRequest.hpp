// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTKIBANAPLUGINSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTKIBANAPLUGINSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class ListKibanaPluginsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListKibanaPluginsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(page, page_);
      DARABONBA_PTR_TO_JSON(size, size_);
    };
    friend void from_json(const Darabonba::Json& j, ListKibanaPluginsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(page, page_);
      DARABONBA_PTR_FROM_JSON(size, size_);
    };
    ListKibanaPluginsRequest() = default ;
    ListKibanaPluginsRequest(const ListKibanaPluginsRequest &) = default ;
    ListKibanaPluginsRequest(ListKibanaPluginsRequest &&) = default ;
    ListKibanaPluginsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListKibanaPluginsRequest() = default ;
    ListKibanaPluginsRequest& operator=(const ListKibanaPluginsRequest &) = default ;
    ListKibanaPluginsRequest& operator=(ListKibanaPluginsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->page_ != nullptr
        && this->size_ != nullptr; };
    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline string page() const { DARABONBA_PTR_GET_DEFAULT(page_, "") };
    inline ListKibanaPluginsRequest& setPage(string page) { DARABONBA_PTR_SET_VALUE(page_, page) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int32_t size() const { DARABONBA_PTR_GET_DEFAULT(size_, 0) };
    inline ListKibanaPluginsRequest& setSize(int32_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


  protected:
    // The number of the page to return. Default value: 1.
    std::shared_ptr<string> page_ = nullptr;
    // The number of entries to return on each page.
    std::shared_ptr<int32_t> size_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
