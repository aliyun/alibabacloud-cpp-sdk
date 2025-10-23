// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAREAELECCONSTITUTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETAREAELECCONSTITUTEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EnergyExpertExternal20220923
{
namespace Models
{
  class GetAreaElecConstituteRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAreaElecConstituteRequest& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(year, year_);
    };
    friend void from_json(const Darabonba::Json& j, GetAreaElecConstituteRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(year, year_);
    };
    GetAreaElecConstituteRequest() = default ;
    GetAreaElecConstituteRequest(const GetAreaElecConstituteRequest &) = default ;
    GetAreaElecConstituteRequest(GetAreaElecConstituteRequest &&) = default ;
    GetAreaElecConstituteRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAreaElecConstituteRequest() = default ;
    GetAreaElecConstituteRequest& operator=(const GetAreaElecConstituteRequest &) = default ;
    GetAreaElecConstituteRequest& operator=(GetAreaElecConstituteRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->year_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetAreaElecConstituteRequest& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // year Field Functions 
    bool hasYear() const { return this->year_ != nullptr;};
    void deleteYear() { this->year_ = nullptr;};
    inline int32_t year() const { DARABONBA_PTR_GET_DEFAULT(year_, 0) };
    inline GetAreaElecConstituteRequest& setYear(int32_t year) { DARABONBA_PTR_SET_VALUE(year_, year) };


  protected:
    // The enterprise code.
    // 
    // This parameter is required.
    std::shared_ptr<string> code_ = nullptr;
    // Year.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> year_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EnergyExpertExternal20220923
#endif
