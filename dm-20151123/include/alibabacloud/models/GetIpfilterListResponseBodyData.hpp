// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETIPFILTERLISTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETIPFILTERLISTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetIpfilterListResponseBodyDataIpfilters.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dm20151123
{
namespace Models
{
  class GetIpfilterListResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetIpfilterListResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ipfilters, ipfilters_);
    };
    friend void from_json(const Darabonba::Json& j, GetIpfilterListResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ipfilters, ipfilters_);
    };
    GetIpfilterListResponseBodyData() = default ;
    GetIpfilterListResponseBodyData(const GetIpfilterListResponseBodyData &) = default ;
    GetIpfilterListResponseBodyData(GetIpfilterListResponseBodyData &&) = default ;
    GetIpfilterListResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetIpfilterListResponseBodyData() = default ;
    GetIpfilterListResponseBodyData& operator=(const GetIpfilterListResponseBodyData &) = default ;
    GetIpfilterListResponseBodyData& operator=(GetIpfilterListResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ipfilters_ == nullptr; };
    // ipfilters Field Functions 
    bool hasIpfilters() const { return this->ipfilters_ != nullptr;};
    void deleteIpfilters() { this->ipfilters_ = nullptr;};
    inline const vector<Models::GetIpfilterListResponseBodyDataIpfilters> & ipfilters() const { DARABONBA_PTR_GET_CONST(ipfilters_, vector<Models::GetIpfilterListResponseBodyDataIpfilters>) };
    inline vector<Models::GetIpfilterListResponseBodyDataIpfilters> ipfilters() { DARABONBA_PTR_GET(ipfilters_, vector<Models::GetIpfilterListResponseBodyDataIpfilters>) };
    inline GetIpfilterListResponseBodyData& setIpfilters(const vector<Models::GetIpfilterListResponseBodyDataIpfilters> & ipfilters) { DARABONBA_PTR_SET_VALUE(ipfilters_, ipfilters) };
    inline GetIpfilterListResponseBodyData& setIpfilters(vector<Models::GetIpfilterListResponseBodyDataIpfilters> && ipfilters) { DARABONBA_PTR_SET_RVALUE(ipfilters_, ipfilters) };


  protected:
    std::shared_ptr<vector<Models::GetIpfilterListResponseBodyDataIpfilters>> ipfilters_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dm20151123
#endif
