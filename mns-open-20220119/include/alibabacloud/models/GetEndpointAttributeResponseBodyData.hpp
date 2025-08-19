// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETENDPOINTATTRIBUTERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETENDPOINTATTRIBUTERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetEndpointAttributeResponseBodyDataCidrList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MnsOpen20220119
{
namespace Models
{
  class GetEndpointAttributeResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetEndpointAttributeResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(CidrList, cidrList_);
      DARABONBA_PTR_TO_JSON(EndpointEnabled, endpointEnabled_);
    };
    friend void from_json(const Darabonba::Json& j, GetEndpointAttributeResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(CidrList, cidrList_);
      DARABONBA_PTR_FROM_JSON(EndpointEnabled, endpointEnabled_);
    };
    GetEndpointAttributeResponseBodyData() = default ;
    GetEndpointAttributeResponseBodyData(const GetEndpointAttributeResponseBodyData &) = default ;
    GetEndpointAttributeResponseBodyData(GetEndpointAttributeResponseBodyData &&) = default ;
    GetEndpointAttributeResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetEndpointAttributeResponseBodyData() = default ;
    GetEndpointAttributeResponseBodyData& operator=(const GetEndpointAttributeResponseBodyData &) = default ;
    GetEndpointAttributeResponseBodyData& operator=(GetEndpointAttributeResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cidrList_ != nullptr
        && this->endpointEnabled_ != nullptr; };
    // cidrList Field Functions 
    bool hasCidrList() const { return this->cidrList_ != nullptr;};
    void deleteCidrList() { this->cidrList_ = nullptr;};
    inline const vector<Models::GetEndpointAttributeResponseBodyDataCidrList> & cidrList() const { DARABONBA_PTR_GET_CONST(cidrList_, vector<Models::GetEndpointAttributeResponseBodyDataCidrList>) };
    inline vector<Models::GetEndpointAttributeResponseBodyDataCidrList> cidrList() { DARABONBA_PTR_GET(cidrList_, vector<Models::GetEndpointAttributeResponseBodyDataCidrList>) };
    inline GetEndpointAttributeResponseBodyData& setCidrList(const vector<Models::GetEndpointAttributeResponseBodyDataCidrList> & cidrList) { DARABONBA_PTR_SET_VALUE(cidrList_, cidrList) };
    inline GetEndpointAttributeResponseBodyData& setCidrList(vector<Models::GetEndpointAttributeResponseBodyDataCidrList> && cidrList) { DARABONBA_PTR_SET_RVALUE(cidrList_, cidrList) };


    // endpointEnabled Field Functions 
    bool hasEndpointEnabled() const { return this->endpointEnabled_ != nullptr;};
    void deleteEndpointEnabled() { this->endpointEnabled_ = nullptr;};
    inline bool endpointEnabled() const { DARABONBA_PTR_GET_DEFAULT(endpointEnabled_, false) };
    inline GetEndpointAttributeResponseBodyData& setEndpointEnabled(bool endpointEnabled) { DARABONBA_PTR_SET_VALUE(endpointEnabled_, endpointEnabled) };


  protected:
    // The list of CIDR block.
    std::shared_ptr<vector<Models::GetEndpointAttributeResponseBodyDataCidrList>> cidrList_ = nullptr;
    // Specifies whether the endpoint is enabled.
    std::shared_ptr<bool> endpointEnabled_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MnsOpen20220119
#endif
