// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYSERVICEMESHNAMERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYSERVICEMESHNAMERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class ModifyServiceMeshNameResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyServiceMeshNameResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyServiceMeshNameResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ModifyServiceMeshNameResponseBody() = default ;
    ModifyServiceMeshNameResponseBody(const ModifyServiceMeshNameResponseBody &) = default ;
    ModifyServiceMeshNameResponseBody(ModifyServiceMeshNameResponseBody &&) = default ;
    ModifyServiceMeshNameResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyServiceMeshNameResponseBody() = default ;
    ModifyServiceMeshNameResponseBody& operator=(const ModifyServiceMeshNameResponseBody &) = default ;
    ModifyServiceMeshNameResponseBody& operator=(ModifyServiceMeshNameResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ModifyServiceMeshNameResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
