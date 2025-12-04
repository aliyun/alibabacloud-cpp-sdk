// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEADVANCEDQUERYHISTORYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEADVANCEDQUERYHISTORYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Actiontrail20200706
{
namespace Models
{
  class DeleteAdvancedQueryHistoryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteAdvancedQueryHistoryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(QueryId, queryId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteAdvancedQueryHistoryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(QueryId, queryId_);
    };
    DeleteAdvancedQueryHistoryRequest() = default ;
    DeleteAdvancedQueryHistoryRequest(const DeleteAdvancedQueryHistoryRequest &) = default ;
    DeleteAdvancedQueryHistoryRequest(DeleteAdvancedQueryHistoryRequest &&) = default ;
    DeleteAdvancedQueryHistoryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteAdvancedQueryHistoryRequest() = default ;
    DeleteAdvancedQueryHistoryRequest& operator=(const DeleteAdvancedQueryHistoryRequest &) = default ;
    DeleteAdvancedQueryHistoryRequest& operator=(DeleteAdvancedQueryHistoryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->queryId_ == nullptr; };
    // queryId Field Functions 
    bool hasQueryId() const { return this->queryId_ != nullptr;};
    void deleteQueryId() { this->queryId_ = nullptr;};
    inline string queryId() const { DARABONBA_PTR_GET_DEFAULT(queryId_, "") };
    inline DeleteAdvancedQueryHistoryRequest& setQueryId(string queryId) { DARABONBA_PTR_SET_VALUE(queryId_, queryId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> queryId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Actiontrail20200706
#endif
