// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYWORKSBLOODRELATIONSHIPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYWORKSBLOODRELATIONSHIPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class QueryWorksBloodRelationshipRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryWorksBloodRelationshipRequest& obj) { 
      DARABONBA_PTR_TO_JSON(WorksId, worksId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryWorksBloodRelationshipRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(WorksId, worksId_);
    };
    QueryWorksBloodRelationshipRequest() = default ;
    QueryWorksBloodRelationshipRequest(const QueryWorksBloodRelationshipRequest &) = default ;
    QueryWorksBloodRelationshipRequest(QueryWorksBloodRelationshipRequest &&) = default ;
    QueryWorksBloodRelationshipRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryWorksBloodRelationshipRequest() = default ;
    QueryWorksBloodRelationshipRequest& operator=(const QueryWorksBloodRelationshipRequest &) = default ;
    QueryWorksBloodRelationshipRequest& operator=(QueryWorksBloodRelationshipRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->worksId_ == nullptr; };
    // worksId Field Functions 
    bool hasWorksId() const { return this->worksId_ != nullptr;};
    void deleteWorksId() { this->worksId_ = nullptr;};
    inline string worksId() const { DARABONBA_PTR_GET_DEFAULT(worksId_, "") };
    inline QueryWorksBloodRelationshipRequest& setWorksId(string worksId) { DARABONBA_PTR_SET_VALUE(worksId_, worksId) };


  protected:
    // The ID of the data work.
    // 
    // This parameter is required.
    std::shared_ptr<string> worksId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
