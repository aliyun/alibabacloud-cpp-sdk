// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPHYSICALCONNECTIONSRESPONSEBODYPHYSICALCONNECTIONSETPHYSICALCONNECTIONTYPETAGS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPHYSICALCONNECTIONSRESPONSEBODYPHYSICALCONNECTIONSETPHYSICALCONNECTIONTYPETAGS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribePhysicalConnectionsResponseBodyPhysicalConnectionSetPhysicalConnectionTypeTagsTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribePhysicalConnectionsResponseBodyPhysicalConnectionSetPhysicalConnectionTypeTags : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePhysicalConnectionsResponseBodyPhysicalConnectionSetPhysicalConnectionTypeTags& obj) { 
      DARABONBA_PTR_TO_JSON(tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePhysicalConnectionsResponseBodyPhysicalConnectionSetPhysicalConnectionTypeTags& obj) { 
      DARABONBA_PTR_FROM_JSON(tags, tags_);
    };
    DescribePhysicalConnectionsResponseBodyPhysicalConnectionSetPhysicalConnectionTypeTags() = default ;
    DescribePhysicalConnectionsResponseBodyPhysicalConnectionSetPhysicalConnectionTypeTags(const DescribePhysicalConnectionsResponseBodyPhysicalConnectionSetPhysicalConnectionTypeTags &) = default ;
    DescribePhysicalConnectionsResponseBodyPhysicalConnectionSetPhysicalConnectionTypeTags(DescribePhysicalConnectionsResponseBodyPhysicalConnectionSetPhysicalConnectionTypeTags &&) = default ;
    DescribePhysicalConnectionsResponseBodyPhysicalConnectionSetPhysicalConnectionTypeTags(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePhysicalConnectionsResponseBodyPhysicalConnectionSetPhysicalConnectionTypeTags() = default ;
    DescribePhysicalConnectionsResponseBodyPhysicalConnectionSetPhysicalConnectionTypeTags& operator=(const DescribePhysicalConnectionsResponseBodyPhysicalConnectionSetPhysicalConnectionTypeTags &) = default ;
    DescribePhysicalConnectionsResponseBodyPhysicalConnectionSetPhysicalConnectionTypeTags& operator=(DescribePhysicalConnectionsResponseBodyPhysicalConnectionSetPhysicalConnectionTypeTags &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->tags_ != nullptr; };
    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::DescribePhysicalConnectionsResponseBodyPhysicalConnectionSetPhysicalConnectionTypeTagsTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::DescribePhysicalConnectionsResponseBodyPhysicalConnectionSetPhysicalConnectionTypeTagsTags>) };
    inline vector<Models::DescribePhysicalConnectionsResponseBodyPhysicalConnectionSetPhysicalConnectionTypeTagsTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::DescribePhysicalConnectionsResponseBodyPhysicalConnectionSetPhysicalConnectionTypeTagsTags>) };
    inline DescribePhysicalConnectionsResponseBodyPhysicalConnectionSetPhysicalConnectionTypeTags& setTags(const vector<Models::DescribePhysicalConnectionsResponseBodyPhysicalConnectionSetPhysicalConnectionTypeTagsTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline DescribePhysicalConnectionsResponseBodyPhysicalConnectionSetPhysicalConnectionTypeTags& setTags(vector<Models::DescribePhysicalConnectionsResponseBodyPhysicalConnectionSetPhysicalConnectionTypeTagsTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    std::shared_ptr<vector<Models::DescribePhysicalConnectionsResponseBodyPhysicalConnectionSetPhysicalConnectionTypeTagsTags>> tags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
