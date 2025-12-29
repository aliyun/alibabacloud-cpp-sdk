// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTALLSWIMMINGLANEGROUPSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTALLSWIMMINGLANEGROUPSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class ListAllSwimmingLaneGroupsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAllSwimmingLaneGroupsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(NamespaceId, namespaceId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAllSwimmingLaneGroupsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(NamespaceId, namespaceId_);
    };
    ListAllSwimmingLaneGroupsRequest() = default ;
    ListAllSwimmingLaneGroupsRequest(const ListAllSwimmingLaneGroupsRequest &) = default ;
    ListAllSwimmingLaneGroupsRequest(ListAllSwimmingLaneGroupsRequest &&) = default ;
    ListAllSwimmingLaneGroupsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAllSwimmingLaneGroupsRequest() = default ;
    ListAllSwimmingLaneGroupsRequest& operator=(const ListAllSwimmingLaneGroupsRequest &) = default ;
    ListAllSwimmingLaneGroupsRequest& operator=(ListAllSwimmingLaneGroupsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->namespaceId_ == nullptr; };
    // namespaceId Field Functions 
    bool hasNamespaceId() const { return this->namespaceId_ != nullptr;};
    void deleteNamespaceId() { this->namespaceId_ = nullptr;};
    inline string getNamespaceId() const { DARABONBA_PTR_GET_DEFAULT(namespaceId_, "") };
    inline ListAllSwimmingLaneGroupsRequest& setNamespaceId(string namespaceId) { DARABONBA_PTR_SET_VALUE(namespaceId_, namespaceId) };


  protected:
    // The ID of a namespace.
    shared_ptr<string> namespaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
