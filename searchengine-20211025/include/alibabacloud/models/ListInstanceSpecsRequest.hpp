// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCESPECSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCESPECSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchengine20211025
{
namespace Models
{
  class ListInstanceSpecsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstanceSpecsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstanceSpecsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    ListInstanceSpecsRequest() = default ;
    ListInstanceSpecsRequest(const ListInstanceSpecsRequest &) = default ;
    ListInstanceSpecsRequest(ListInstanceSpecsRequest &&) = default ;
    ListInstanceSpecsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstanceSpecsRequest() = default ;
    ListInstanceSpecsRequest& operator=(const ListInstanceSpecsRequest &) = default ;
    ListInstanceSpecsRequest& operator=(ListInstanceSpecsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->type_ != nullptr; };
    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListInstanceSpecsRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The node type. Valid values:
    // 
    // *   qrs: Query Result Searcher (QRS) Worker
    // *   search: Searcher Worker
    // *   index: index node
    // *   cluster: cluster
    // 
    // This parameter is required.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchengine20211025
#endif
