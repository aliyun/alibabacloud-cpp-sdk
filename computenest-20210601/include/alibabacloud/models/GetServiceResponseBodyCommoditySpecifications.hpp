// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSERVICERESPONSEBODYCOMMODITYSPECIFICATIONS_HPP_
#define ALIBABACLOUD_MODELS_GETSERVICERESPONSEBODYCOMMODITYSPECIFICATIONS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNest20210601
{
namespace Models
{
  class GetServiceResponseBodyCommoditySpecifications : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetServiceResponseBodyCommoditySpecifications& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Times, times_);
    };
    friend void from_json(const Darabonba::Json& j, GetServiceResponseBodyCommoditySpecifications& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Times, times_);
    };
    GetServiceResponseBodyCommoditySpecifications() = default ;
    GetServiceResponseBodyCommoditySpecifications(const GetServiceResponseBodyCommoditySpecifications &) = default ;
    GetServiceResponseBodyCommoditySpecifications(GetServiceResponseBodyCommoditySpecifications &&) = default ;
    GetServiceResponseBodyCommoditySpecifications(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetServiceResponseBodyCommoditySpecifications() = default ;
    GetServiceResponseBodyCommoditySpecifications& operator=(const GetServiceResponseBodyCommoditySpecifications &) = default ;
    GetServiceResponseBodyCommoditySpecifications& operator=(GetServiceResponseBodyCommoditySpecifications &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->name_ != nullptr && this->times_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetServiceResponseBodyCommoditySpecifications& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetServiceResponseBodyCommoditySpecifications& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // times Field Functions 
    bool hasTimes() const { return this->times_ != nullptr;};
    void deleteTimes() { this->times_ = nullptr;};
    inline const vector<string> & times() const { DARABONBA_PTR_GET_CONST(times_, vector<string>) };
    inline vector<string> times() { DARABONBA_PTR_GET(times_, vector<string>) };
    inline GetServiceResponseBodyCommoditySpecifications& setTimes(const vector<string> & times) { DARABONBA_PTR_SET_VALUE(times_, times) };
    inline GetServiceResponseBodyCommoditySpecifications& setTimes(vector<string> && times) { DARABONBA_PTR_SET_RVALUE(times_, times) };


  protected:
    // The commodity code.
    std::shared_ptr<string> code_ = nullptr;
    // The specification name.
    std::shared_ptr<string> name_ = nullptr;
    // The subscription duration. Unit: week or year.
    std::shared_ptr<vector<string>> times_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNest20210601
#endif
