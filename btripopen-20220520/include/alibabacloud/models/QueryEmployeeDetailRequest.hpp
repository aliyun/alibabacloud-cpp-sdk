// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYEMPLOYEEDETAILREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYEMPLOYEEDETAILREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class QueryEmployeeDetailRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryEmployeeDetailRequest& obj) { 
      DARABONBA_PTR_TO_JSON(out_employee_id, outEmployeeId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryEmployeeDetailRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(out_employee_id, outEmployeeId_);
    };
    QueryEmployeeDetailRequest() = default ;
    QueryEmployeeDetailRequest(const QueryEmployeeDetailRequest &) = default ;
    QueryEmployeeDetailRequest(QueryEmployeeDetailRequest &&) = default ;
    QueryEmployeeDetailRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryEmployeeDetailRequest() = default ;
    QueryEmployeeDetailRequest& operator=(const QueryEmployeeDetailRequest &) = default ;
    QueryEmployeeDetailRequest& operator=(QueryEmployeeDetailRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->outEmployeeId_ != nullptr; };
    // outEmployeeId Field Functions 
    bool hasOutEmployeeId() const { return this->outEmployeeId_ != nullptr;};
    void deleteOutEmployeeId() { this->outEmployeeId_ = nullptr;};
    inline string outEmployeeId() const { DARABONBA_PTR_GET_DEFAULT(outEmployeeId_, "") };
    inline QueryEmployeeDetailRequest& setOutEmployeeId(string outEmployeeId) { DARABONBA_PTR_SET_VALUE(outEmployeeId_, outEmployeeId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> outEmployeeId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
