// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEJDBCDATASOURCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DELETEJDBCDATASOURCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class DeleteJDBCDataSourceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteJDBCDataSourceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteJDBCDataSourceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DeleteJDBCDataSourceResponseBody() = default ;
    DeleteJDBCDataSourceResponseBody(const DeleteJDBCDataSourceResponseBody &) = default ;
    DeleteJDBCDataSourceResponseBody(DeleteJDBCDataSourceResponseBody &&) = default ;
    DeleteJDBCDataSourceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteJDBCDataSourceResponseBody() = default ;
    DeleteJDBCDataSourceResponseBody& operator=(const DeleteJDBCDataSourceResponseBody &) = default ;
    DeleteJDBCDataSourceResponseBody& operator=(DeleteJDBCDataSourceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DeleteJDBCDataSourceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
