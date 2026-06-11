// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETECONTEXTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETECONTEXTSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class DeleteContextsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteContextsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(contextIds, contextIds_);
      DARABONBA_PTR_TO_JSON(filter, filter_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteContextsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(contextIds, contextIds_);
      DARABONBA_PTR_FROM_JSON(filter, filter_);
    };
    DeleteContextsRequest() = default ;
    DeleteContextsRequest(const DeleteContextsRequest &) = default ;
    DeleteContextsRequest(DeleteContextsRequest &&) = default ;
    DeleteContextsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteContextsRequest() = default ;
    DeleteContextsRequest& operator=(const DeleteContextsRequest &) = default ;
    DeleteContextsRequest& operator=(DeleteContextsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->contextIds_ == nullptr
        && this->filter_ == nullptr; };
    // contextIds Field Functions 
    bool hasContextIds() const { return this->contextIds_ != nullptr;};
    void deleteContextIds() { this->contextIds_ = nullptr;};
    inline string getContextIds() const { DARABONBA_PTR_GET_DEFAULT(contextIds_, "") };
    inline DeleteContextsRequest& setContextIds(string contextIds) { DARABONBA_PTR_SET_VALUE(contextIds_, contextIds) };


    // filter Field Functions 
    bool hasFilter() const { return this->filter_ != nullptr;};
    void deleteFilter() { this->filter_ = nullptr;};
    inline string getFilter() const { DARABONBA_PTR_GET_DEFAULT(filter_, "") };
    inline DeleteContextsRequest& setFilter(string filter) { DARABONBA_PTR_SET_VALUE(filter_, filter) };


  protected:
    // A comma-separated list of context IDs.
    shared_ptr<string> contextIds_ {};
    // The filter condition, specified as a JSON string in the query. The syntax is the same as the `filter` parameter of the `SearchContext` operation.
    shared_ptr<string> filter_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
