// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETEPDINVENTORYCONSTITUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETEPDINVENTORYCONSTITUTERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/EpdInventoryConstituteItem.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EnergyExpertExternal20220923
{
namespace Models
{
  class GetEpdInventoryConstituteResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetEpdInventoryConstituteResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetEpdInventoryConstituteResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetEpdInventoryConstituteResponseBody() = default ;
    GetEpdInventoryConstituteResponseBody(const GetEpdInventoryConstituteResponseBody &) = default ;
    GetEpdInventoryConstituteResponseBody(GetEpdInventoryConstituteResponseBody &&) = default ;
    GetEpdInventoryConstituteResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetEpdInventoryConstituteResponseBody() = default ;
    GetEpdInventoryConstituteResponseBody& operator=(const GetEpdInventoryConstituteResponseBody &) = default ;
    GetEpdInventoryConstituteResponseBody& operator=(GetEpdInventoryConstituteResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && return this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<EpdInventoryConstituteItem> & data() const { DARABONBA_PTR_GET_CONST(data_, vector<EpdInventoryConstituteItem>) };
    inline vector<EpdInventoryConstituteItem> data() { DARABONBA_PTR_GET(data_, vector<EpdInventoryConstituteItem>) };
    inline GetEpdInventoryConstituteResponseBody& setData(const vector<EpdInventoryConstituteItem> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetEpdInventoryConstituteResponseBody& setData(vector<EpdInventoryConstituteItem> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetEpdInventoryConstituteResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // List of environmental impact results.
    std::shared_ptr<vector<EpdInventoryConstituteItem>> data_ = nullptr;
    // The ID of the request. The value is unique for each request. This facilitates subsequent troubleshooting.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EnergyExpertExternal20220923
#endif
