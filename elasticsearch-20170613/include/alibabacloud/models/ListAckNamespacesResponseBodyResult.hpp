// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTACKNAMESPACESRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_LISTACKNAMESPACESRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class ListAckNamespacesResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAckNamespacesResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(namespace, namespace_);
      DARABONBA_PTR_TO_JSON(status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListAckNamespacesResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(status, status_);
    };
    ListAckNamespacesResponseBodyResult() = default ;
    ListAckNamespacesResponseBodyResult(const ListAckNamespacesResponseBodyResult &) = default ;
    ListAckNamespacesResponseBodyResult(ListAckNamespacesResponseBodyResult &&) = default ;
    ListAckNamespacesResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAckNamespacesResponseBodyResult() = default ;
    ListAckNamespacesResponseBodyResult& operator=(const ListAckNamespacesResponseBodyResult &) = default ;
    ListAckNamespacesResponseBodyResult& operator=(ListAckNamespacesResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->namespace_ != nullptr
        && this->status_ != nullptr; };
    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline ListAckNamespacesResponseBodyResult& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListAckNamespacesResponseBodyResult& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The namespace of the cluster.
    std::shared_ptr<string> namespace_ = nullptr;
    // The status of the namespace.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
