// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPLUGINSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTPLUGINSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class ListPluginsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPluginsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(page, page_);
      DARABONBA_PTR_TO_JSON(size, size_);
      DARABONBA_PTR_TO_JSON(source, source_);
    };
    friend void from_json(const Darabonba::Json& j, ListPluginsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(page, page_);
      DARABONBA_PTR_FROM_JSON(size, size_);
      DARABONBA_PTR_FROM_JSON(source, source_);
    };
    ListPluginsRequest() = default ;
    ListPluginsRequest(const ListPluginsRequest &) = default ;
    ListPluginsRequest(ListPluginsRequest &&) = default ;
    ListPluginsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPluginsRequest() = default ;
    ListPluginsRequest& operator=(const ListPluginsRequest &) = default ;
    ListPluginsRequest& operator=(ListPluginsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr
        && this->page_ == nullptr && this->size_ == nullptr && this->source_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListPluginsRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline string getPage() const { DARABONBA_PTR_GET_DEFAULT(page_, "") };
    inline ListPluginsRequest& setPage(string page) { DARABONBA_PTR_SET_VALUE(page_, page) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int32_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0) };
    inline ListPluginsRequest& setSize(int32_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline ListPluginsRequest& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


  protected:
    // SYSTEM
    shared_ptr<string> name_ {};
    // The ID of the request.
    shared_ptr<string> page_ {};
    // The header of the response.
    shared_ptr<int32_t> size_ {};
    // The total number of entries returned.
    shared_ptr<string> source_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
