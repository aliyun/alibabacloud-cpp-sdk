// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYEMBEDDEDSTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYEMBEDDEDSTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class QueryEmbeddedStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryEmbeddedStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(WorksId, worksId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryEmbeddedStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(WorksId, worksId_);
    };
    QueryEmbeddedStatusRequest() = default ;
    QueryEmbeddedStatusRequest(const QueryEmbeddedStatusRequest &) = default ;
    QueryEmbeddedStatusRequest(QueryEmbeddedStatusRequest &&) = default ;
    QueryEmbeddedStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryEmbeddedStatusRequest() = default ;
    QueryEmbeddedStatusRequest& operator=(const QueryEmbeddedStatusRequest &) = default ;
    QueryEmbeddedStatusRequest& operator=(QueryEmbeddedStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->worksId_ != nullptr; };
    // worksId Field Functions 
    bool hasWorksId() const { return this->worksId_ != nullptr;};
    void deleteWorksId() { this->worksId_ = nullptr;};
    inline string worksId() const { DARABONBA_PTR_GET_DEFAULT(worksId_, "") };
    inline QueryEmbeddedStatusRequest& setWorksId(string worksId) { DARABONBA_PTR_SET_VALUE(worksId_, worksId) };


  protected:
    // The work ID of the query.
    // 
    // This parameter is required.
    std::shared_ptr<string> worksId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
