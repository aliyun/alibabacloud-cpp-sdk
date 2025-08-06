// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLICENSESRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETLICENSESRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetLicensesResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLicensesResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(List, list_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, GetLicensesResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(List, list_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    GetLicensesResponseBodyData() = default ;
    GetLicensesResponseBodyData(const GetLicensesResponseBodyData &) = default ;
    GetLicensesResponseBodyData(GetLicensesResponseBodyData &&) = default ;
    GetLicensesResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLicensesResponseBodyData() = default ;
    GetLicensesResponseBodyData& operator=(const GetLicensesResponseBodyData &) = default ;
    GetLicensesResponseBodyData& operator=(GetLicensesResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->list_ != nullptr
        && this->total_ != nullptr; };
    // list Field Functions 
    bool hasList() const { return this->list_ != nullptr;};
    void deleteList() { this->list_ = nullptr;};
    inline const vector<Darabonba::Json> & list() const { DARABONBA_PTR_GET_CONST(list_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> list() { DARABONBA_PTR_GET(list_, vector<Darabonba::Json>) };
    inline GetLicensesResponseBodyData& setList(const vector<Darabonba::Json> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
    inline GetLicensesResponseBodyData& setList(vector<Darabonba::Json> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline GetLicensesResponseBodyData& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    std::shared_ptr<vector<Darabonba::Json>> list_ = nullptr;
    std::shared_ptr<int64_t> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
