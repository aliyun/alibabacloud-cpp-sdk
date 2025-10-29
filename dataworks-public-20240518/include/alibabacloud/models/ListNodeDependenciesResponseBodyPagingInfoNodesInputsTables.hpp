// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNODEDEPENDENCIESRESPONSEBODYPAGINGINFONODESINPUTSTABLES_HPP_
#define ALIBABACLOUD_MODELS_LISTNODEDEPENDENCIESRESPONSEBODYPAGINGINFONODESINPUTSTABLES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListNodeDependenciesResponseBodyPagingInfoNodesInputsTables : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNodeDependenciesResponseBodyPagingInfoNodesInputsTables& obj) { 
      DARABONBA_PTR_TO_JSON(Guid, guid_);
    };
    friend void from_json(const Darabonba::Json& j, ListNodeDependenciesResponseBodyPagingInfoNodesInputsTables& obj) { 
      DARABONBA_PTR_FROM_JSON(Guid, guid_);
    };
    ListNodeDependenciesResponseBodyPagingInfoNodesInputsTables() = default ;
    ListNodeDependenciesResponseBodyPagingInfoNodesInputsTables(const ListNodeDependenciesResponseBodyPagingInfoNodesInputsTables &) = default ;
    ListNodeDependenciesResponseBodyPagingInfoNodesInputsTables(ListNodeDependenciesResponseBodyPagingInfoNodesInputsTables &&) = default ;
    ListNodeDependenciesResponseBodyPagingInfoNodesInputsTables(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNodeDependenciesResponseBodyPagingInfoNodesInputsTables() = default ;
    ListNodeDependenciesResponseBodyPagingInfoNodesInputsTables& operator=(const ListNodeDependenciesResponseBodyPagingInfoNodesInputsTables &) = default ;
    ListNodeDependenciesResponseBodyPagingInfoNodesInputsTables& operator=(ListNodeDependenciesResponseBodyPagingInfoNodesInputsTables &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->guid_ == nullptr; };
    // guid Field Functions 
    bool hasGuid() const { return this->guid_ != nullptr;};
    void deleteGuid() { this->guid_ = nullptr;};
    inline string guid() const { DARABONBA_PTR_GET_DEFAULT(guid_, "") };
    inline ListNodeDependenciesResponseBodyPagingInfoNodesInputsTables& setGuid(string guid) { DARABONBA_PTR_SET_VALUE(guid_, guid) };


  protected:
    // The table ID.
    std::shared_ptr<string> guid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
