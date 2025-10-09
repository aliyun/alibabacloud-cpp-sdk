// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNODESRESPONSEBODYPAGINGINFONODESINPUTSTABLES_HPP_
#define ALIBABACLOUD_MODELS_LISTNODESRESPONSEBODYPAGINGINFONODESINPUTSTABLES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListNodesResponseBodyPagingInfoNodesInputsTables : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNodesResponseBodyPagingInfoNodesInputsTables& obj) { 
      DARABONBA_PTR_TO_JSON(Guid, guid_);
    };
    friend void from_json(const Darabonba::Json& j, ListNodesResponseBodyPagingInfoNodesInputsTables& obj) { 
      DARABONBA_PTR_FROM_JSON(Guid, guid_);
    };
    ListNodesResponseBodyPagingInfoNodesInputsTables() = default ;
    ListNodesResponseBodyPagingInfoNodesInputsTables(const ListNodesResponseBodyPagingInfoNodesInputsTables &) = default ;
    ListNodesResponseBodyPagingInfoNodesInputsTables(ListNodesResponseBodyPagingInfoNodesInputsTables &&) = default ;
    ListNodesResponseBodyPagingInfoNodesInputsTables(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNodesResponseBodyPagingInfoNodesInputsTables() = default ;
    ListNodesResponseBodyPagingInfoNodesInputsTables& operator=(const ListNodesResponseBodyPagingInfoNodesInputsTables &) = default ;
    ListNodesResponseBodyPagingInfoNodesInputsTables& operator=(ListNodesResponseBodyPagingInfoNodesInputsTables &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->guid_ != nullptr; };
    // guid Field Functions 
    bool hasGuid() const { return this->guid_ != nullptr;};
    void deleteGuid() { this->guid_ = nullptr;};
    inline string guid() const { DARABONBA_PTR_GET_DEFAULT(guid_, "") };
    inline ListNodesResponseBodyPagingInfoNodesInputsTables& setGuid(string guid) { DARABONBA_PTR_SET_VALUE(guid_, guid) };


  protected:
    // The table ID.
    std::shared_ptr<string> guid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
