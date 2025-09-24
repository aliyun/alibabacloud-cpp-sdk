// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYPERMISSIONLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYPERMISSIONLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class QueryPermissionListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryPermissionListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RelationId, relationId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryPermissionListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RelationId, relationId_);
    };
    QueryPermissionListRequest() = default ;
    QueryPermissionListRequest(const QueryPermissionListRequest &) = default ;
    QueryPermissionListRequest(QueryPermissionListRequest &&) = default ;
    QueryPermissionListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryPermissionListRequest() = default ;
    QueryPermissionListRequest& operator=(const QueryPermissionListRequest &) = default ;
    QueryPermissionListRequest& operator=(QueryPermissionListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->relationId_ != nullptr; };
    // relationId Field Functions 
    bool hasRelationId() const { return this->relationId_ != nullptr;};
    void deleteRelationId() { this->relationId_ = nullptr;};
    inline int64_t relationId() const { DARABONBA_PTR_GET_DEFAULT(relationId_, 0L) };
    inline QueryPermissionListRequest& setRelationId(int64_t relationId) { DARABONBA_PTR_SET_VALUE(relationId_, relationId) };


  protected:
    // The ID of the relationship. Set this parameter to the value of the RelationId response parameter returned by calling the QueryRelationList operation.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> relationId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
