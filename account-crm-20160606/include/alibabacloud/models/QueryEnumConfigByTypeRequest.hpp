// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYENUMCONFIGBYTYPEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYENUMCONFIGBYTYPEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AccountCrm20160606
{
namespace Models
{
  class QueryEnumConfigByTypeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryEnumConfigByTypeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, QueryEnumConfigByTypeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    QueryEnumConfigByTypeRequest() = default ;
    QueryEnumConfigByTypeRequest(const QueryEnumConfigByTypeRequest &) = default ;
    QueryEnumConfigByTypeRequest(QueryEnumConfigByTypeRequest &&) = default ;
    QueryEnumConfigByTypeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryEnumConfigByTypeRequest() = default ;
    QueryEnumConfigByTypeRequest& operator=(const QueryEnumConfigByTypeRequest &) = default ;
    QueryEnumConfigByTypeRequest& operator=(QueryEnumConfigByTypeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->type_ == nullptr; };
    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline QueryEnumConfigByTypeRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // This parameter is required.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AccountCrm20160606
#endif
