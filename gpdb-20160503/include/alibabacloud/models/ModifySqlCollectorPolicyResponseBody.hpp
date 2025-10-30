// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYSQLCOLLECTORPOLICYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYSQLCOLLECTORPOLICYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class ModifySQLCollectorPolicyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifySQLCollectorPolicyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifySQLCollectorPolicyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ModifySQLCollectorPolicyResponseBody() = default ;
    ModifySQLCollectorPolicyResponseBody(const ModifySQLCollectorPolicyResponseBody &) = default ;
    ModifySQLCollectorPolicyResponseBody(ModifySQLCollectorPolicyResponseBody &&) = default ;
    ModifySQLCollectorPolicyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifySQLCollectorPolicyResponseBody() = default ;
    ModifySQLCollectorPolicyResponseBody& operator=(const ModifySQLCollectorPolicyResponseBody &) = default ;
    ModifySQLCollectorPolicyResponseBody& operator=(ModifySQLCollectorPolicyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ModifySQLCollectorPolicyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
