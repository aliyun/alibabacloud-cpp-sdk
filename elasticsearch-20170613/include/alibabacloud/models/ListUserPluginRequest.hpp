// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERPLUGINREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERPLUGINREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class ListUserPluginRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUserPluginRequest& obj) { 
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(page, page_);
      DARABONBA_PTR_TO_JSON(size, size_);
    };
    friend void from_json(const Darabonba::Json& j, ListUserPluginRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(page, page_);
      DARABONBA_PTR_FROM_JSON(size, size_);
    };
    ListUserPluginRequest() = default ;
    ListUserPluginRequest(const ListUserPluginRequest &) = default ;
    ListUserPluginRequest(ListUserPluginRequest &&) = default ;
    ListUserPluginRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUserPluginRequest() = default ;
    ListUserPluginRequest& operator=(const ListUserPluginRequest &) = default ;
    ListUserPluginRequest& operator=(ListUserPluginRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr
        && this->page_ == nullptr && this->size_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListUserPluginRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline string getPage() const { DARABONBA_PTR_GET_DEFAULT(page_, "") };
    inline ListUserPluginRequest& setPage(string page) { DARABONBA_PTR_SET_VALUE(page_, page) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline string getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, "") };
    inline ListUserPluginRequest& setSize(string size) { DARABONBA_PTR_SET_VALUE(size_, size) };


  protected:
    shared_ptr<string> name_ {};
    shared_ptr<string> page_ {};
    shared_ptr<string> size_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
