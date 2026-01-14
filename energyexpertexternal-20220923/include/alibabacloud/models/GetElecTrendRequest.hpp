// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETELECTRENDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETELECTRENDREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EnergyExpertExternal20220923
{
namespace Models
{
  class GetElecTrendRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetElecTrendRequest& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(yearList, yearList_);
    };
    friend void from_json(const Darabonba::Json& j, GetElecTrendRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(yearList, yearList_);
    };
    GetElecTrendRequest() = default ;
    GetElecTrendRequest(const GetElecTrendRequest &) = default ;
    GetElecTrendRequest(GetElecTrendRequest &&) = default ;
    GetElecTrendRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetElecTrendRequest() = default ;
    GetElecTrendRequest& operator=(const GetElecTrendRequest &) = default ;
    GetElecTrendRequest& operator=(GetElecTrendRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && this->yearList_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetElecTrendRequest& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // yearList Field Functions 
    bool hasYearList() const { return this->yearList_ != nullptr;};
    void deleteYearList() { this->yearList_ = nullptr;};
    inline const vector<int32_t> & getYearList() const { DARABONBA_PTR_GET_CONST(yearList_, vector<int32_t>) };
    inline vector<int32_t> getYearList() { DARABONBA_PTR_GET(yearList_, vector<int32_t>) };
    inline GetElecTrendRequest& setYearList(const vector<int32_t> & yearList) { DARABONBA_PTR_SET_VALUE(yearList_, yearList) };
    inline GetElecTrendRequest& setYearList(vector<int32_t> && yearList) { DARABONBA_PTR_SET_RVALUE(yearList_, yearList) };


  protected:
    // The enterprise code.
    // 
    // This parameter is required.
    shared_ptr<string> code_ {};
    // List of years.
    // 
    // This parameter is required.
    shared_ptr<vector<int32_t>> yearList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EnergyExpertExternal20220923
#endif
