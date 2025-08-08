// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYHOTLINEINQUEUEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYHOTLINEINQUEUEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class QueryHotlineInQueueRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryHotlineInQueueRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OuterGroupId, outerGroupId_);
      DARABONBA_PTR_TO_JSON(OuterGroupType, outerGroupType_);
    };
    friend void from_json(const Darabonba::Json& j, QueryHotlineInQueueRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OuterGroupId, outerGroupId_);
      DARABONBA_PTR_FROM_JSON(OuterGroupType, outerGroupType_);
    };
    QueryHotlineInQueueRequest() = default ;
    QueryHotlineInQueueRequest(const QueryHotlineInQueueRequest &) = default ;
    QueryHotlineInQueueRequest(QueryHotlineInQueueRequest &&) = default ;
    QueryHotlineInQueueRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryHotlineInQueueRequest() = default ;
    QueryHotlineInQueueRequest& operator=(const QueryHotlineInQueueRequest &) = default ;
    QueryHotlineInQueueRequest& operator=(QueryHotlineInQueueRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->outerGroupId_ != nullptr
        && this->outerGroupType_ != nullptr; };
    // outerGroupId Field Functions 
    bool hasOuterGroupId() const { return this->outerGroupId_ != nullptr;};
    void deleteOuterGroupId() { this->outerGroupId_ = nullptr;};
    inline string outerGroupId() const { DARABONBA_PTR_GET_DEFAULT(outerGroupId_, "") };
    inline QueryHotlineInQueueRequest& setOuterGroupId(string outerGroupId) { DARABONBA_PTR_SET_VALUE(outerGroupId_, outerGroupId) };


    // outerGroupType Field Functions 
    bool hasOuterGroupType() const { return this->outerGroupType_ != nullptr;};
    void deleteOuterGroupType() { this->outerGroupType_ = nullptr;};
    inline string outerGroupType() const { DARABONBA_PTR_GET_DEFAULT(outerGroupType_, "") };
    inline QueryHotlineInQueueRequest& setOuterGroupType(string outerGroupType) { DARABONBA_PTR_SET_VALUE(outerGroupType_, outerGroupType) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> outerGroupId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> outerGroupType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
