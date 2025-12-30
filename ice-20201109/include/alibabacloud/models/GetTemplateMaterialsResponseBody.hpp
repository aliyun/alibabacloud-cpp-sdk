// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTEMPLATEMATERIALSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETTEMPLATEMATERIALSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetTemplateMaterialsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTemplateMaterialsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaterialUrls, materialUrls_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetTemplateMaterialsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaterialUrls, materialUrls_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetTemplateMaterialsResponseBody() = default ;
    GetTemplateMaterialsResponseBody(const GetTemplateMaterialsResponseBody &) = default ;
    GetTemplateMaterialsResponseBody(GetTemplateMaterialsResponseBody &&) = default ;
    GetTemplateMaterialsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTemplateMaterialsResponseBody() = default ;
    GetTemplateMaterialsResponseBody& operator=(const GetTemplateMaterialsResponseBody &) = default ;
    GetTemplateMaterialsResponseBody& operator=(GetTemplateMaterialsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->materialUrls_ == nullptr
        && this->requestId_ == nullptr; };
    // materialUrls Field Functions 
    bool hasMaterialUrls() const { return this->materialUrls_ != nullptr;};
    void deleteMaterialUrls() { this->materialUrls_ = nullptr;};
    inline string getMaterialUrls() const { DARABONBA_PTR_GET_DEFAULT(materialUrls_, "") };
    inline GetTemplateMaterialsResponseBody& setMaterialUrls(string materialUrls) { DARABONBA_PTR_SET_VALUE(materialUrls_, materialUrls) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetTemplateMaterialsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The URLs of the associated materials.
    shared_ptr<string> materialUrls_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
