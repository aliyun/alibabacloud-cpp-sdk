// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDOCKERHUBIMAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTDOCKERHUBIMAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListDockerhubImageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDockerhubImageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Query, query_);
    };
    friend void from_json(const Darabonba::Json& j, ListDockerhubImageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Query, query_);
    };
    ListDockerhubImageRequest() = default ;
    ListDockerhubImageRequest(const ListDockerhubImageRequest &) = default ;
    ListDockerhubImageRequest(ListDockerhubImageRequest &&) = default ;
    ListDockerhubImageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDockerhubImageRequest() = default ;
    ListDockerhubImageRequest& operator=(const ListDockerhubImageRequest &) = default ;
    ListDockerhubImageRequest& operator=(ListDockerhubImageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->query_ != nullptr; };
    // query Field Functions 
    bool hasQuery() const { return this->query_ != nullptr;};
    void deleteQuery() { this->query_ = nullptr;};
    inline string query() const { DARABONBA_PTR_GET_DEFAULT(query_, "") };
    inline ListDockerhubImageRequest& setQuery(string query) { DARABONBA_PTR_SET_VALUE(query_, query) };


  protected:
    // The query condition for images. You can query images in the `[namespace/]repoName[:version]` format. Conditions in `[]` are optional.
    // 
    // This parameter is required.
    std::shared_ptr<string> query_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
