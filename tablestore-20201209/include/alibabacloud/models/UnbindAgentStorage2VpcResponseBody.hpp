// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UNBINDAGENTSTORAGE2VPCRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UNBINDAGENTSTORAGE2VPCRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Tablestore20201209
{
namespace Models
{
  class UnbindAgentStorage2VpcResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UnbindAgentStorage2VpcResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, UnbindAgentStorage2VpcResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    UnbindAgentStorage2VpcResponseBody() = default ;
    UnbindAgentStorage2VpcResponseBody(const UnbindAgentStorage2VpcResponseBody &) = default ;
    UnbindAgentStorage2VpcResponseBody(UnbindAgentStorage2VpcResponseBody &&) = default ;
    UnbindAgentStorage2VpcResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UnbindAgentStorage2VpcResponseBody() = default ;
    UnbindAgentStorage2VpcResponseBody& operator=(const UnbindAgentStorage2VpcResponseBody &) = default ;
    UnbindAgentStorage2VpcResponseBody& operator=(UnbindAgentStorage2VpcResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UnbindAgentStorage2VpcResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The request ID, which can be used to troubleshoot and locate issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Tablestore20201209
#endif
