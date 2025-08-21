// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTALLNODEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTALLNODEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class ListAllNodeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAllNodeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(extended, extended_);
    };
    friend void from_json(const Darabonba::Json& j, ListAllNodeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(extended, extended_);
    };
    ListAllNodeRequest() = default ;
    ListAllNodeRequest(const ListAllNodeRequest &) = default ;
    ListAllNodeRequest(ListAllNodeRequest &&) = default ;
    ListAllNodeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAllNodeRequest() = default ;
    ListAllNodeRequest& operator=(const ListAllNodeRequest &) = default ;
    ListAllNodeRequest& operator=(ListAllNodeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->extended_ != nullptr; };
    // extended Field Functions 
    bool hasExtended() const { return this->extended_ != nullptr;};
    void deleteExtended() { this->extended_ = nullptr;};
    inline bool extended() const { DARABONBA_PTR_GET_DEFAULT(extended_, false) };
    inline ListAllNodeRequest& setExtended(bool extended) { DARABONBA_PTR_SET_VALUE(extended_, extended) };


  protected:
    // The Java Virtual Machine (JVM) heap memory usage of the node.
    std::shared_ptr<bool> extended_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
