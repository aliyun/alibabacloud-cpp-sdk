// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETENANTBINDNUMBERRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETENANTBINDNUMBERRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeTenantBindNumberResponseBodyDataList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class DescribeTenantBindNumberResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTenantBindNumberResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(List, list_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTenantBindNumberResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(List, list_);
    };
    DescribeTenantBindNumberResponseBodyData() = default ;
    DescribeTenantBindNumberResponseBodyData(const DescribeTenantBindNumberResponseBodyData &) = default ;
    DescribeTenantBindNumberResponseBodyData(DescribeTenantBindNumberResponseBodyData &&) = default ;
    DescribeTenantBindNumberResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTenantBindNumberResponseBodyData() = default ;
    DescribeTenantBindNumberResponseBodyData& operator=(const DescribeTenantBindNumberResponseBodyData &) = default ;
    DescribeTenantBindNumberResponseBodyData& operator=(DescribeTenantBindNumberResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->list_ == nullptr; };
    // list Field Functions 
    bool hasList() const { return this->list_ != nullptr;};
    void deleteList() { this->list_ = nullptr;};
    inline const vector<Models::DescribeTenantBindNumberResponseBodyDataList> & list() const { DARABONBA_PTR_GET_CONST(list_, vector<Models::DescribeTenantBindNumberResponseBodyDataList>) };
    inline vector<Models::DescribeTenantBindNumberResponseBodyDataList> list() { DARABONBA_PTR_GET(list_, vector<Models::DescribeTenantBindNumberResponseBodyDataList>) };
    inline DescribeTenantBindNumberResponseBodyData& setList(const vector<Models::DescribeTenantBindNumberResponseBodyDataList> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
    inline DescribeTenantBindNumberResponseBodyData& setList(vector<Models::DescribeTenantBindNumberResponseBodyDataList> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


  protected:
    std::shared_ptr<vector<Models::DescribeTenantBindNumberResponseBodyDataList>> list_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
