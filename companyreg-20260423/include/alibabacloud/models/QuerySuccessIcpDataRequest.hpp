// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSUCCESSICPDATAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYSUCCESSICPDATAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Companyreg20260423
{
namespace Models
{
  class QuerySuccessIcpDataRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuerySuccessIcpDataRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Caller, caller_);
    };
    friend void from_json(const Darabonba::Json& j, QuerySuccessIcpDataRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Caller, caller_);
    };
    QuerySuccessIcpDataRequest() = default ;
    QuerySuccessIcpDataRequest(const QuerySuccessIcpDataRequest &) = default ;
    QuerySuccessIcpDataRequest(QuerySuccessIcpDataRequest &&) = default ;
    QuerySuccessIcpDataRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuerySuccessIcpDataRequest() = default ;
    QuerySuccessIcpDataRequest& operator=(const QuerySuccessIcpDataRequest &) = default ;
    QuerySuccessIcpDataRequest& operator=(QuerySuccessIcpDataRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->caller_ == nullptr; };
    // caller Field Functions 
    bool hasCaller() const { return this->caller_ != nullptr;};
    void deleteCaller() { this->caller_ = nullptr;};
    inline string getCaller() const { DARABONBA_PTR_GET_DEFAULT(caller_, "") };
    inline QuerySuccessIcpDataRequest& setCaller(string caller) { DARABONBA_PTR_SET_VALUE(caller_, caller) };


  protected:
    shared_ptr<string> caller_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Companyreg20260423
#endif
