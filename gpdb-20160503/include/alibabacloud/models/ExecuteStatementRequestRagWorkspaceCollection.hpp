// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXECUTESTATEMENTREQUESTRAGWORKSPACECOLLECTION_HPP_
#define ALIBABACLOUD_MODELS_EXECUTESTATEMENTREQUESTRAGWORKSPACECOLLECTION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class ExecuteStatementRequestRagWorkspaceCollection : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExecuteStatementRequestRagWorkspaceCollection& obj) { 
      DARABONBA_PTR_TO_JSON(Collection, collection_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
    };
    friend void from_json(const Darabonba::Json& j, ExecuteStatementRequestRagWorkspaceCollection& obj) { 
      DARABONBA_PTR_FROM_JSON(Collection, collection_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
    };
    ExecuteStatementRequestRagWorkspaceCollection() = default ;
    ExecuteStatementRequestRagWorkspaceCollection(const ExecuteStatementRequestRagWorkspaceCollection &) = default ;
    ExecuteStatementRequestRagWorkspaceCollection(ExecuteStatementRequestRagWorkspaceCollection &&) = default ;
    ExecuteStatementRequestRagWorkspaceCollection(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExecuteStatementRequestRagWorkspaceCollection() = default ;
    ExecuteStatementRequestRagWorkspaceCollection& operator=(const ExecuteStatementRequestRagWorkspaceCollection &) = default ;
    ExecuteStatementRequestRagWorkspaceCollection& operator=(ExecuteStatementRequestRagWorkspaceCollection &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->collection_ != nullptr
        && this->namespace_ != nullptr; };
    // collection Field Functions 
    bool hasCollection() const { return this->collection_ != nullptr;};
    void deleteCollection() { this->collection_ = nullptr;};
    inline string collection() const { DARABONBA_PTR_GET_DEFAULT(collection_, "") };
    inline ExecuteStatementRequestRagWorkspaceCollection& setCollection(string collection) { DARABONBA_PTR_SET_VALUE(collection_, collection) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline ExecuteStatementRequestRagWorkspaceCollection& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


  protected:
    std::shared_ptr<string> collection_ = nullptr;
    std::shared_ptr<string> namespace_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
