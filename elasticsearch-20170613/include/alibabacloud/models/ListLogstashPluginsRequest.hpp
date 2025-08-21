// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLOGSTASHPLUGINSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTLOGSTASHPLUGINSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class ListLogstashPluginsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLogstashPluginsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(page, page_);
      DARABONBA_PTR_TO_JSON(size, size_);
      DARABONBA_PTR_TO_JSON(source, source_);
    };
    friend void from_json(const Darabonba::Json& j, ListLogstashPluginsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(page, page_);
      DARABONBA_PTR_FROM_JSON(size, size_);
      DARABONBA_PTR_FROM_JSON(source, source_);
    };
    ListLogstashPluginsRequest() = default ;
    ListLogstashPluginsRequest(const ListLogstashPluginsRequest &) = default ;
    ListLogstashPluginsRequest(ListLogstashPluginsRequest &&) = default ;
    ListLogstashPluginsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLogstashPluginsRequest() = default ;
    ListLogstashPluginsRequest& operator=(const ListLogstashPluginsRequest &) = default ;
    ListLogstashPluginsRequest& operator=(ListLogstashPluginsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->name_ != nullptr
        && this->page_ != nullptr && this->size_ != nullptr && this->source_ != nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListLogstashPluginsRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline int32_t page() const { DARABONBA_PTR_GET_DEFAULT(page_, 0) };
    inline ListLogstashPluginsRequest& setPage(int32_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int32_t size() const { DARABONBA_PTR_GET_DEFAULT(size_, 0) };
    inline ListLogstashPluginsRequest& setSize(int32_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline ListLogstashPluginsRequest& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


  protected:
    // USER
    std::shared_ptr<string> name_ = nullptr;
    // The ID of the request.
    std::shared_ptr<int32_t> page_ = nullptr;
    // The returned results.
    std::shared_ptr<int32_t> size_ = nullptr;
    // The description of the plug-in.
    std::shared_ptr<string> source_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
