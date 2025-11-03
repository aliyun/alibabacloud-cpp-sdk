// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETHOTSPOTUNIQLISTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETHOTSPOTUNIQLISTRESPONSEBODYDATA_HPP_
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
  class GetHotSpotUniqListResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetHotSpotUniqListResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(columns, columns_);
      DARABONBA_PTR_TO_JSON(values, values_);
    };
    friend void from_json(const Darabonba::Json& j, GetHotSpotUniqListResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(columns, columns_);
      DARABONBA_PTR_FROM_JSON(values, values_);
    };
    GetHotSpotUniqListResponseBodyData() = default ;
    GetHotSpotUniqListResponseBodyData(const GetHotSpotUniqListResponseBodyData &) = default ;
    GetHotSpotUniqListResponseBodyData(GetHotSpotUniqListResponseBodyData &&) = default ;
    GetHotSpotUniqListResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetHotSpotUniqListResponseBodyData() = default ;
    GetHotSpotUniqListResponseBodyData& operator=(const GetHotSpotUniqListResponseBodyData &) = default ;
    GetHotSpotUniqListResponseBodyData& operator=(GetHotSpotUniqListResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->columns_ == nullptr
        && return this->values_ == nullptr; };
    // columns Field Functions 
    bool hasColumns() const { return this->columns_ != nullptr;};
    void deleteColumns() { this->columns_ = nullptr;};
    inline const vector<string> & columns() const { DARABONBA_PTR_GET_CONST(columns_, vector<string>) };
    inline vector<string> columns() { DARABONBA_PTR_GET(columns_, vector<string>) };
    inline GetHotSpotUniqListResponseBodyData& setColumns(const vector<string> & columns) { DARABONBA_PTR_SET_VALUE(columns_, columns) };
    inline GetHotSpotUniqListResponseBodyData& setColumns(vector<string> && columns) { DARABONBA_PTR_SET_RVALUE(columns_, columns) };


    // values Field Functions 
    bool hasValues() const { return this->values_ != nullptr;};
    void deleteValues() { this->values_ = nullptr;};
    inline const vector<string> & values() const { DARABONBA_PTR_GET_CONST(values_, vector<string>) };
    inline vector<string> values() { DARABONBA_PTR_GET(values_, vector<string>) };
    inline GetHotSpotUniqListResponseBodyData& setValues(const vector<string> & values) { DARABONBA_PTR_SET_VALUE(values_, values) };
    inline GetHotSpotUniqListResponseBodyData& setValues(vector<string> && values) { DARABONBA_PTR_SET_RVALUE(values_, values) };


  protected:
    std::shared_ptr<vector<string>> columns_ = nullptr;
    std::shared_ptr<vector<string>> values_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SysOM20231230
#endif
