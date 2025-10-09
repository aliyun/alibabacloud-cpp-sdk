// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNODESRESPONSEBODYPAGINGINFONODESOUTPUTSTABLES_HPP_
#define ALIBABACLOUD_MODELS_LISTNODESRESPONSEBODYPAGINGINFONODESOUTPUTSTABLES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListNodesResponseBodyPagingInfoNodesOutputsTables : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNodesResponseBodyPagingInfoNodesOutputsTables& obj) { 
      DARABONBA_PTR_TO_JSON(Guid, guid_);
    };
    friend void from_json(const Darabonba::Json& j, ListNodesResponseBodyPagingInfoNodesOutputsTables& obj) { 
      DARABONBA_PTR_FROM_JSON(Guid, guid_);
    };
    ListNodesResponseBodyPagingInfoNodesOutputsTables() = default ;
    ListNodesResponseBodyPagingInfoNodesOutputsTables(const ListNodesResponseBodyPagingInfoNodesOutputsTables &) = default ;
    ListNodesResponseBodyPagingInfoNodesOutputsTables(ListNodesResponseBodyPagingInfoNodesOutputsTables &&) = default ;
    ListNodesResponseBodyPagingInfoNodesOutputsTables(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNodesResponseBodyPagingInfoNodesOutputsTables() = default ;
    ListNodesResponseBodyPagingInfoNodesOutputsTables& operator=(const ListNodesResponseBodyPagingInfoNodesOutputsTables &) = default ;
    ListNodesResponseBodyPagingInfoNodesOutputsTables& operator=(ListNodesResponseBodyPagingInfoNodesOutputsTables &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->guid_ != nullptr; };
    // guid Field Functions 
    bool hasGuid() const { return this->guid_ != nullptr;};
    void deleteGuid() { this->guid_ = nullptr;};
    inline string guid() const { DARABONBA_PTR_GET_DEFAULT(guid_, "") };
    inline ListNodesResponseBodyPagingInfoNodesOutputsTables& setGuid(string guid) { DARABONBA_PTR_SET_VALUE(guid_, guid) };


  protected:
    // The table ID.
    std::shared_ptr<string> guid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
