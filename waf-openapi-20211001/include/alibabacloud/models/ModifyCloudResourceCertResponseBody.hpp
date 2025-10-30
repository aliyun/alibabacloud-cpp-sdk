// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYCLOUDRESOURCECERTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYCLOUDRESOURCECERTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class ModifyCloudResourceCertResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyCloudResourceCertResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyCloudResourceCertResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ModifyCloudResourceCertResponseBody() = default ;
    ModifyCloudResourceCertResponseBody(const ModifyCloudResourceCertResponseBody &) = default ;
    ModifyCloudResourceCertResponseBody(ModifyCloudResourceCertResponseBody &&) = default ;
    ModifyCloudResourceCertResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyCloudResourceCertResponseBody() = default ;
    ModifyCloudResourceCertResponseBody& operator=(const ModifyCloudResourceCertResponseBody &) = default ;
    ModifyCloudResourceCertResponseBody& operator=(ModifyCloudResourceCertResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ModifyCloudResourceCertResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
