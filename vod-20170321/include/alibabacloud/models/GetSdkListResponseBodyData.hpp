// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSDKLISTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETSDKLISTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/Vod20170321.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetSdkListResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSdkListResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Businesses, businesses_);
    };
    friend void from_json(const Darabonba::Json& j, GetSdkListResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Businesses, businesses_);
    };
    GetSdkListResponseBodyData() = default ;
    GetSdkListResponseBodyData(const GetSdkListResponseBodyData &) = default ;
    GetSdkListResponseBodyData(GetSdkListResponseBodyData &&) = default ;
    GetSdkListResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSdkListResponseBodyData() = default ;
    GetSdkListResponseBodyData& operator=(const GetSdkListResponseBodyData &) = default ;
    GetSdkListResponseBodyData& operator=(GetSdkListResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->businesses_ != nullptr; };
    // businesses Field Functions 
    bool hasBusinesses() const { return this->businesses_ != nullptr;};
    void deleteBusinesses() { this->businesses_ = nullptr;};
    inline const map<string, vector<Models::DataBusinessesValue>> & businesses() const { DARABONBA_PTR_GET_CONST(businesses_, map<string, vector<Models::DataBusinessesValue>>) };
    inline map<string, vector<Models::DataBusinessesValue>> businesses() { DARABONBA_PTR_GET(businesses_, map<string, vector<Models::DataBusinessesValue>>) };
    inline GetSdkListResponseBodyData& setBusinesses(const map<string, vector<Models::DataBusinessesValue>> & businesses) { DARABONBA_PTR_SET_VALUE(businesses_, businesses) };
    inline GetSdkListResponseBodyData& setBusinesses(map<string, vector<Models::DataBusinessesValue>> && businesses) { DARABONBA_PTR_SET_RVALUE(businesses_, businesses) };


  protected:
    std::shared_ptr<map<string, vector<Models::DataBusinessesValue>>> businesses_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
