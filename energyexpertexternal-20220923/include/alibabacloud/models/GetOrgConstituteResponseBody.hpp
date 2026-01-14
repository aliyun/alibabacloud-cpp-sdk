// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETORGCONSTITUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETORGCONSTITUTERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/OrgEmission.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EnergyExpertExternal20220923
{
namespace Models
{
  class GetOrgConstituteResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOrgConstituteResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetOrgConstituteResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetOrgConstituteResponseBody() = default ;
    GetOrgConstituteResponseBody(const GetOrgConstituteResponseBody &) = default ;
    GetOrgConstituteResponseBody(GetOrgConstituteResponseBody &&) = default ;
    GetOrgConstituteResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOrgConstituteResponseBody() = default ;
    GetOrgConstituteResponseBody& operator=(const GetOrgConstituteResponseBody &) = default ;
    GetOrgConstituteResponseBody& operator=(GetOrgConstituteResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const OrgEmission & getData() const { DARABONBA_PTR_GET_CONST(data_, OrgEmission) };
    inline OrgEmission getData() { DARABONBA_PTR_GET(data_, OrgEmission) };
    inline GetOrgConstituteResponseBody& setData(const OrgEmission & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetOrgConstituteResponseBody& setData(OrgEmission && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetOrgConstituteResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The data returned.
    shared_ptr<OrgEmission> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EnergyExpertExternal20220923
#endif
