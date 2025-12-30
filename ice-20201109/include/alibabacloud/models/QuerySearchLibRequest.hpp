// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSEARCHLIBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYSEARCHLIBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class QuerySearchLibRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuerySearchLibRequest& obj) { 
      DARABONBA_PTR_TO_JSON(SearchLibName, searchLibName_);
    };
    friend void from_json(const Darabonba::Json& j, QuerySearchLibRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(SearchLibName, searchLibName_);
    };
    QuerySearchLibRequest() = default ;
    QuerySearchLibRequest(const QuerySearchLibRequest &) = default ;
    QuerySearchLibRequest(QuerySearchLibRequest &&) = default ;
    QuerySearchLibRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuerySearchLibRequest() = default ;
    QuerySearchLibRequest& operator=(const QuerySearchLibRequest &) = default ;
    QuerySearchLibRequest& operator=(QuerySearchLibRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->searchLibName_ == nullptr; };
    // searchLibName Field Functions 
    bool hasSearchLibName() const { return this->searchLibName_ != nullptr;};
    void deleteSearchLibName() { this->searchLibName_ = nullptr;};
    inline string getSearchLibName() const { DARABONBA_PTR_GET_DEFAULT(searchLibName_, "") };
    inline QuerySearchLibRequest& setSearchLibName(string searchLibName) { DARABONBA_PTR_SET_VALUE(searchLibName_, searchLibName) };


  protected:
    // The name of the search library.
    // 
    // This parameter is required.
    shared_ptr<string> searchLibName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
