// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPHYSICALCONNECTIONSRESPONSEBODYPHYSICALCONNECTIONSET_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPHYSICALCONNECTIONSRESPONSEBODYPHYSICALCONNECTIONSET_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribePhysicalConnectionsResponseBodyPhysicalConnectionSetPhysicalConnectionType.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribePhysicalConnectionsResponseBodyPhysicalConnectionSet : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePhysicalConnectionsResponseBodyPhysicalConnectionSet& obj) { 
      DARABONBA_PTR_TO_JSON(PhysicalConnectionType, physicalConnectionType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePhysicalConnectionsResponseBodyPhysicalConnectionSet& obj) { 
      DARABONBA_PTR_FROM_JSON(PhysicalConnectionType, physicalConnectionType_);
    };
    DescribePhysicalConnectionsResponseBodyPhysicalConnectionSet() = default ;
    DescribePhysicalConnectionsResponseBodyPhysicalConnectionSet(const DescribePhysicalConnectionsResponseBodyPhysicalConnectionSet &) = default ;
    DescribePhysicalConnectionsResponseBodyPhysicalConnectionSet(DescribePhysicalConnectionsResponseBodyPhysicalConnectionSet &&) = default ;
    DescribePhysicalConnectionsResponseBodyPhysicalConnectionSet(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePhysicalConnectionsResponseBodyPhysicalConnectionSet() = default ;
    DescribePhysicalConnectionsResponseBodyPhysicalConnectionSet& operator=(const DescribePhysicalConnectionsResponseBodyPhysicalConnectionSet &) = default ;
    DescribePhysicalConnectionsResponseBodyPhysicalConnectionSet& operator=(DescribePhysicalConnectionsResponseBodyPhysicalConnectionSet &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->physicalConnectionType_ != nullptr; };
    // physicalConnectionType Field Functions 
    bool hasPhysicalConnectionType() const { return this->physicalConnectionType_ != nullptr;};
    void deletePhysicalConnectionType() { this->physicalConnectionType_ = nullptr;};
    inline const vector<Models::DescribePhysicalConnectionsResponseBodyPhysicalConnectionSetPhysicalConnectionType> & physicalConnectionType() const { DARABONBA_PTR_GET_CONST(physicalConnectionType_, vector<Models::DescribePhysicalConnectionsResponseBodyPhysicalConnectionSetPhysicalConnectionType>) };
    inline vector<Models::DescribePhysicalConnectionsResponseBodyPhysicalConnectionSetPhysicalConnectionType> physicalConnectionType() { DARABONBA_PTR_GET(physicalConnectionType_, vector<Models::DescribePhysicalConnectionsResponseBodyPhysicalConnectionSetPhysicalConnectionType>) };
    inline DescribePhysicalConnectionsResponseBodyPhysicalConnectionSet& setPhysicalConnectionType(const vector<Models::DescribePhysicalConnectionsResponseBodyPhysicalConnectionSetPhysicalConnectionType> & physicalConnectionType) { DARABONBA_PTR_SET_VALUE(physicalConnectionType_, physicalConnectionType) };
    inline DescribePhysicalConnectionsResponseBodyPhysicalConnectionSet& setPhysicalConnectionType(vector<Models::DescribePhysicalConnectionsResponseBodyPhysicalConnectionSetPhysicalConnectionType> && physicalConnectionType) { DARABONBA_PTR_SET_RVALUE(physicalConnectionType_, physicalConnectionType) };


  protected:
    std::shared_ptr<vector<Models::DescribePhysicalConnectionsResponseBodyPhysicalConnectionSetPhysicalConnectionType>> physicalConnectionType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
