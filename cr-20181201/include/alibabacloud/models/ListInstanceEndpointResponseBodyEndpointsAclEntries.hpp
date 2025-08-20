// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCEENDPOINTRESPONSEBODYENDPOINTSACLENTRIES_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCEENDPOINTRESPONSEBODYENDPOINTSACLENTRIES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cr20181201
{
namespace Models
{
  class ListInstanceEndpointResponseBodyEndpointsAclEntries : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstanceEndpointResponseBodyEndpointsAclEntries& obj) { 
      DARABONBA_PTR_TO_JSON(Entry, entry_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstanceEndpointResponseBodyEndpointsAclEntries& obj) { 
      DARABONBA_PTR_FROM_JSON(Entry, entry_);
    };
    ListInstanceEndpointResponseBodyEndpointsAclEntries() = default ;
    ListInstanceEndpointResponseBodyEndpointsAclEntries(const ListInstanceEndpointResponseBodyEndpointsAclEntries &) = default ;
    ListInstanceEndpointResponseBodyEndpointsAclEntries(ListInstanceEndpointResponseBodyEndpointsAclEntries &&) = default ;
    ListInstanceEndpointResponseBodyEndpointsAclEntries(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstanceEndpointResponseBodyEndpointsAclEntries() = default ;
    ListInstanceEndpointResponseBodyEndpointsAclEntries& operator=(const ListInstanceEndpointResponseBodyEndpointsAclEntries &) = default ;
    ListInstanceEndpointResponseBodyEndpointsAclEntries& operator=(ListInstanceEndpointResponseBodyEndpointsAclEntries &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->entry_ != nullptr; };
    // entry Field Functions 
    bool hasEntry() const { return this->entry_ != nullptr;};
    void deleteEntry() { this->entry_ = nullptr;};
    inline string entry() const { DARABONBA_PTR_GET_DEFAULT(entry_, "") };
    inline ListInstanceEndpointResponseBodyEndpointsAclEntries& setEntry(string entry) { DARABONBA_PTR_SET_VALUE(entry_, entry) };


  protected:
    // The information about the ACL.
    std::shared_ptr<string> entry_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
