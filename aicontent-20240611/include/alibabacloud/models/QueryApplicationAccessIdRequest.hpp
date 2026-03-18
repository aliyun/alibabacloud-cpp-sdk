// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYAPPLICATIONACCESSIDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYAPPLICATIONACCESSIDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiContent20240611
{
namespace Models
{
  class QueryApplicationAccessIdRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryApplicationAccessIdRequest& obj) { 
      DARABONBA_PTR_TO_JSON(applicationAccessId, applicationAccessId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryApplicationAccessIdRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(applicationAccessId, applicationAccessId_);
    };
    QueryApplicationAccessIdRequest() = default ;
    QueryApplicationAccessIdRequest(const QueryApplicationAccessIdRequest &) = default ;
    QueryApplicationAccessIdRequest(QueryApplicationAccessIdRequest &&) = default ;
    QueryApplicationAccessIdRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryApplicationAccessIdRequest() = default ;
    QueryApplicationAccessIdRequest& operator=(const QueryApplicationAccessIdRequest &) = default ;
    QueryApplicationAccessIdRequest& operator=(QueryApplicationAccessIdRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationAccessId_ == nullptr; };
    // applicationAccessId Field Functions 
    bool hasApplicationAccessId() const { return this->applicationAccessId_ != nullptr;};
    void deleteApplicationAccessId() { this->applicationAccessId_ = nullptr;};
    inline string getApplicationAccessId() const { DARABONBA_PTR_GET_DEFAULT(applicationAccessId_, "") };
    inline QueryApplicationAccessIdRequest& setApplicationAccessId(string applicationAccessId) { DARABONBA_PTR_SET_VALUE(applicationAccessId_, applicationAccessId) };


  protected:
    shared_ptr<string> applicationAccessId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiContent20240611
#endif
