// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDATABASESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDATABASESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDatabasesResponseBodyDatabases.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeDatabasesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDatabasesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Databases, databases_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDatabasesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Databases, databases_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDatabasesResponseBody() = default ;
    DescribeDatabasesResponseBody(const DescribeDatabasesResponseBody &) = default ;
    DescribeDatabasesResponseBody(DescribeDatabasesResponseBody &&) = default ;
    DescribeDatabasesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDatabasesResponseBody() = default ;
    DescribeDatabasesResponseBody& operator=(const DescribeDatabasesResponseBody &) = default ;
    DescribeDatabasesResponseBody& operator=(DescribeDatabasesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->databases_ == nullptr
        && return this->requestId_ == nullptr; };
    // databases Field Functions 
    bool hasDatabases() const { return this->databases_ != nullptr;};
    void deleteDatabases() { this->databases_ = nullptr;};
    inline const DescribeDatabasesResponseBodyDatabases & databases() const { DARABONBA_PTR_GET_CONST(databases_, DescribeDatabasesResponseBodyDatabases) };
    inline DescribeDatabasesResponseBodyDatabases databases() { DARABONBA_PTR_GET(databases_, DescribeDatabasesResponseBodyDatabases) };
    inline DescribeDatabasesResponseBody& setDatabases(const DescribeDatabasesResponseBodyDatabases & databases) { DARABONBA_PTR_SET_VALUE(databases_, databases) };
    inline DescribeDatabasesResponseBody& setDatabases(DescribeDatabasesResponseBodyDatabases && databases) { DARABONBA_PTR_SET_RVALUE(databases_, databases) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDatabasesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the databases.
    std::shared_ptr<DescribeDatabasesResponseBodyDatabases> databases_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
