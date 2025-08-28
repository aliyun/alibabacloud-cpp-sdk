// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEHIGHRELIABLEPHYSICALCONNECTIONRESPONSEBODYPHYSICALCONNECTIONLIST_HPP_
#define ALIBABACLOUD_MODELS_CREATEHIGHRELIABLEPHYSICALCONNECTIONRESPONSEBODYPHYSICALCONNECTIONLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateHighReliablePhysicalConnectionResponseBodyPhysicalConnectionListPhysicalConnectionList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class CreateHighReliablePhysicalConnectionResponseBodyPhysicalConnectionList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateHighReliablePhysicalConnectionResponseBodyPhysicalConnectionList& obj) { 
      DARABONBA_PTR_TO_JSON(physicalConnectionList, physicalConnectionList_);
    };
    friend void from_json(const Darabonba::Json& j, CreateHighReliablePhysicalConnectionResponseBodyPhysicalConnectionList& obj) { 
      DARABONBA_PTR_FROM_JSON(physicalConnectionList, physicalConnectionList_);
    };
    CreateHighReliablePhysicalConnectionResponseBodyPhysicalConnectionList() = default ;
    CreateHighReliablePhysicalConnectionResponseBodyPhysicalConnectionList(const CreateHighReliablePhysicalConnectionResponseBodyPhysicalConnectionList &) = default ;
    CreateHighReliablePhysicalConnectionResponseBodyPhysicalConnectionList(CreateHighReliablePhysicalConnectionResponseBodyPhysicalConnectionList &&) = default ;
    CreateHighReliablePhysicalConnectionResponseBodyPhysicalConnectionList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateHighReliablePhysicalConnectionResponseBodyPhysicalConnectionList() = default ;
    CreateHighReliablePhysicalConnectionResponseBodyPhysicalConnectionList& operator=(const CreateHighReliablePhysicalConnectionResponseBodyPhysicalConnectionList &) = default ;
    CreateHighReliablePhysicalConnectionResponseBodyPhysicalConnectionList& operator=(CreateHighReliablePhysicalConnectionResponseBodyPhysicalConnectionList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->physicalConnectionList_ != nullptr; };
    // physicalConnectionList Field Functions 
    bool hasPhysicalConnectionList() const { return this->physicalConnectionList_ != nullptr;};
    void deletePhysicalConnectionList() { this->physicalConnectionList_ = nullptr;};
    inline const vector<Models::CreateHighReliablePhysicalConnectionResponseBodyPhysicalConnectionListPhysicalConnectionList> & physicalConnectionList() const { DARABONBA_PTR_GET_CONST(physicalConnectionList_, vector<Models::CreateHighReliablePhysicalConnectionResponseBodyPhysicalConnectionListPhysicalConnectionList>) };
    inline vector<Models::CreateHighReliablePhysicalConnectionResponseBodyPhysicalConnectionListPhysicalConnectionList> physicalConnectionList() { DARABONBA_PTR_GET(physicalConnectionList_, vector<Models::CreateHighReliablePhysicalConnectionResponseBodyPhysicalConnectionListPhysicalConnectionList>) };
    inline CreateHighReliablePhysicalConnectionResponseBodyPhysicalConnectionList& setPhysicalConnectionList(const vector<Models::CreateHighReliablePhysicalConnectionResponseBodyPhysicalConnectionListPhysicalConnectionList> & physicalConnectionList) { DARABONBA_PTR_SET_VALUE(physicalConnectionList_, physicalConnectionList) };
    inline CreateHighReliablePhysicalConnectionResponseBodyPhysicalConnectionList& setPhysicalConnectionList(vector<Models::CreateHighReliablePhysicalConnectionResponseBodyPhysicalConnectionListPhysicalConnectionList> && physicalConnectionList) { DARABONBA_PTR_SET_RVALUE(physicalConnectionList_, physicalConnectionList) };


  protected:
    std::shared_ptr<vector<Models::CreateHighReliablePhysicalConnectionResponseBodyPhysicalConnectionListPhysicalConnectionList>> physicalConnectionList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
