// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHDELETEMETAENTITIESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHDELETEMETAENTITIESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class BatchDeleteMetaEntitiesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchDeleteMetaEntitiesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Ids, ids_);
    };
    friend void from_json(const Darabonba::Json& j, BatchDeleteMetaEntitiesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Ids, ids_);
    };
    BatchDeleteMetaEntitiesRequest() = default ;
    BatchDeleteMetaEntitiesRequest(const BatchDeleteMetaEntitiesRequest &) = default ;
    BatchDeleteMetaEntitiesRequest(BatchDeleteMetaEntitiesRequest &&) = default ;
    BatchDeleteMetaEntitiesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchDeleteMetaEntitiesRequest() = default ;
    BatchDeleteMetaEntitiesRequest& operator=(const BatchDeleteMetaEntitiesRequest &) = default ;
    BatchDeleteMetaEntitiesRequest& operator=(BatchDeleteMetaEntitiesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ids_ == nullptr; };
    // ids Field Functions 
    bool hasIds() const { return this->ids_ != nullptr;};
    void deleteIds() { this->ids_ = nullptr;};
    inline const vector<string> & getIds() const { DARABONBA_PTR_GET_CONST(ids_, vector<string>) };
    inline vector<string> getIds() { DARABONBA_PTR_GET(ids_, vector<string>) };
    inline BatchDeleteMetaEntitiesRequest& setIds(const vector<string> & ids) { DARABONBA_PTR_SET_VALUE(ids_, ids) };
    inline BatchDeleteMetaEntitiesRequest& setIds(vector<string> && ids) { DARABONBA_PTR_SET_RVALUE(ids_, ids) };


  protected:
    // This parameter is required.
    shared_ptr<vector<string>> ids_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
