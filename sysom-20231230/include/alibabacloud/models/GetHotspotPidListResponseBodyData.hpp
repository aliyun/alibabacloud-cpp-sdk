// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETHOTSPOTPIDLISTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETHOTSPOTPIDLISTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SysOM20231230
{
namespace Models
{
  class GetHotspotPidListResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetHotspotPidListResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(columns, columns_);
      DARABONBA_PTR_TO_JSON(values, values_);
    };
    friend void from_json(const Darabonba::Json& j, GetHotspotPidListResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(columns, columns_);
      DARABONBA_PTR_FROM_JSON(values, values_);
    };
    GetHotspotPidListResponseBodyData() = default ;
    GetHotspotPidListResponseBodyData(const GetHotspotPidListResponseBodyData &) = default ;
    GetHotspotPidListResponseBodyData(GetHotspotPidListResponseBodyData &&) = default ;
    GetHotspotPidListResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetHotspotPidListResponseBodyData() = default ;
    GetHotspotPidListResponseBodyData& operator=(const GetHotspotPidListResponseBodyData &) = default ;
    GetHotspotPidListResponseBodyData& operator=(GetHotspotPidListResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->columns_ != nullptr
        && this->values_ != nullptr; };
    // columns Field Functions 
    bool hasColumns() const { return this->columns_ != nullptr;};
    void deleteColumns() { this->columns_ = nullptr;};
    inline const vector<string> & columns() const { DARABONBA_PTR_GET_CONST(columns_, vector<string>) };
    inline vector<string> columns() { DARABONBA_PTR_GET(columns_, vector<string>) };
    inline GetHotspotPidListResponseBodyData& setColumns(const vector<string> & columns) { DARABONBA_PTR_SET_VALUE(columns_, columns) };
    inline GetHotspotPidListResponseBodyData& setColumns(vector<string> && columns) { DARABONBA_PTR_SET_RVALUE(columns_, columns) };


    // values Field Functions 
    bool hasValues() const { return this->values_ != nullptr;};
    void deleteValues() { this->values_ = nullptr;};
    inline const vector<vector<string>> & values() const { DARABONBA_PTR_GET_CONST(values_, vector<vector<string>>) };
    inline vector<vector<string>> values() { DARABONBA_PTR_GET(values_, vector<vector<string>>) };
    inline GetHotspotPidListResponseBodyData& setValues(const vector<vector<string>> & values) { DARABONBA_PTR_SET_VALUE(values_, values) };
    inline GetHotspotPidListResponseBodyData& setValues(vector<vector<string>> && values) { DARABONBA_PTR_SET_RVALUE(values_, values) };


  protected:
    std::shared_ptr<vector<string>> columns_ = nullptr;
    std::shared_ptr<vector<vector<string>>> values_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SysOM20231230
#endif
