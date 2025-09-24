// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCUSTOMERLISTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETCUSTOMERLISTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class GetCustomerListResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCustomerListResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(UidList, uidList_);
    };
    friend void from_json(const Darabonba::Json& j, GetCustomerListResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(UidList, uidList_);
    };
    GetCustomerListResponseBodyData() = default ;
    GetCustomerListResponseBodyData(const GetCustomerListResponseBodyData &) = default ;
    GetCustomerListResponseBodyData(GetCustomerListResponseBodyData &&) = default ;
    GetCustomerListResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCustomerListResponseBodyData() = default ;
    GetCustomerListResponseBodyData& operator=(const GetCustomerListResponseBodyData &) = default ;
    GetCustomerListResponseBodyData& operator=(GetCustomerListResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->uidList_ != nullptr; };
    // uidList Field Functions 
    bool hasUidList() const { return this->uidList_ != nullptr;};
    void deleteUidList() { this->uidList_ = nullptr;};
    inline const vector<string> & uidList() const { DARABONBA_PTR_GET_CONST(uidList_, vector<string>) };
    inline vector<string> uidList() { DARABONBA_PTR_GET(uidList_, vector<string>) };
    inline GetCustomerListResponseBodyData& setUidList(const vector<string> & uidList) { DARABONBA_PTR_SET_VALUE(uidList_, uidList) };
    inline GetCustomerListResponseBodyData& setUidList(vector<string> && uidList) { DARABONBA_PTR_SET_RVALUE(uidList_, uidList) };


  protected:
    // The list of customer IDs.
    std::shared_ptr<vector<string>> uidList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
