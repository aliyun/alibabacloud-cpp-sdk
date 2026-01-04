// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEVBRHARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEVBRHARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class CreateVbrHaResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateVbrHaResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(VbrHaId, vbrHaId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateVbrHaResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(VbrHaId, vbrHaId_);
    };
    CreateVbrHaResponseBody() = default ;
    CreateVbrHaResponseBody(const CreateVbrHaResponseBody &) = default ;
    CreateVbrHaResponseBody(CreateVbrHaResponseBody &&) = default ;
    CreateVbrHaResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateVbrHaResponseBody() = default ;
    CreateVbrHaResponseBody& operator=(const CreateVbrHaResponseBody &) = default ;
    CreateVbrHaResponseBody& operator=(CreateVbrHaResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->vbrHaId_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateVbrHaResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // vbrHaId Field Functions 
    bool hasVbrHaId() const { return this->vbrHaId_ != nullptr;};
    void deleteVbrHaId() { this->vbrHaId_ = nullptr;};
    inline string getVbrHaId() const { DARABONBA_PTR_GET_DEFAULT(vbrHaId_, "") };
    inline CreateVbrHaResponseBody& setVbrHaId(string vbrHaId) { DARABONBA_PTR_SET_VALUE(vbrHaId_, vbrHaId) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The ID of the VBR failover group.
    shared_ptr<string> vbrHaId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
